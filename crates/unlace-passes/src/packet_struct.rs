//! Network packet structure recovery.
//!
//! Detects the canonical "parse a wire-format packet header" idiom:
//!
//! ```c
//! struct ip_hdr *h = (struct ip_hdr *)buf;
//! u8  version  = h->ver;                 // load buf+0
//! u16 totallen = ntohs(h->totallen);     // load buf+2, byte-swap
//! u16 id       = ntohs(h->id);           // load buf+4, byte-swap
//! u32 saddr    = ntohl(h->saddr);        // load buf+12, byte-swap
//! ```
//!
//! After lifting and the bit-field idiom pass have run, this collapses to a
//! sequence of `Load(space, base + k_i)` instructions sharing the same SSA
//! base varnode, where some of the load outputs are immediately consumed by
//! a `Callother(__byte_swap16 | __bswap32, x)` intrinsic — the tell-tale
//! signature of `htons`/`ntohs`/`htonl`/`ntohl`. Detection requires the same
//! base to be referenced at **three or more distinct sequential offsets**
//! (sorted, strictly increasing, contiguous — i.e. each subsequent field
//! starts exactly where the previous one ended), which is the canonical
//! shape of a packed wire-format header and is rare enough in arbitrary
//! pointer arithmetic to keep the false-positive rate low.
//!
//! The pass is purely analytical — it returns a `Vec<PacketStruct>` rather
//! than mutating the IR. Downstream passes (struct recovery, var-naming)
//! consume the result to retype the base pointer and label the fields.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::bitfield_idioms::{CALLOTHER_BSWAP16, CALLOTHER_BSWAP32};

/// A recovered packed network-header structure rooted at `base`.
///
/// Each entry in `fields` is `(byte offset from base, field size in bytes,
/// big-endian byte-swap observed)`. Fields are returned sorted by offset.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct PacketStruct {
    pub base: SsaVarnode,
    pub fields: Vec<(u64, u8, bool)>,
}

/// Minimum number of distinct sequential offsets a base must accumulate
/// before we report a packet struct. Three is enough to disambiguate from
/// incidental "load a struct field" patterns that `struct-field-detect`
/// already covers and to filter out two-field aggregates that aren't really
/// wire-format headers.
const MIN_PACKET_FIELDS: usize = 3;

/// Detect packet-parse patterns in `func`.
///
/// Returns one `PacketStruct` per base SSA varnode that is loaded from at
/// three or more sequential offsets. The pass is non-destructive.
pub fn detect_packet_struct(func: &SsaFunction) -> Vec<PacketStruct> {
    let def_map = build_def_map(func);

    // base -> offset -> (size, be_byte_swap)
    //
    // We dedup by offset: if two loads target the same field we keep the
    // first observation's size and OR the byte-swap flag (any swapped load
    // is enough to flag the field as big-endian).
    let mut accesses: BTreeMap<SsaVarnode, BTreeMap<u64, (u8, bool)>> = BTreeMap::new();

    let users = build_user_map(func);

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load || insn.inputs.len() < 2 {
                continue;
            }
            let Some(out) = insn.output else { continue };
            let Some((base, offset)) = load_base_and_offset(func, &def_map, bid, insn_idx, insn)
            else {
                continue;
            };

            let be = output_is_byte_swapped(out, &users, &func.function.blocks);

            let entry = accesses
                .entry(base)
                .or_default()
                .entry(offset)
                .or_insert((out.size, false));
            entry.1 |= be;
        }
    }

    let mut out = Vec::new();
    for (base, fields_by_offset) in accesses {
        if fields_by_offset.len() < MIN_PACKET_FIELDS {
            continue;
        }
        // Require strictly-sequential layout: each subsequent field starts
        // exactly where the previous one ended (offset_i == offset_{i-1} +
        // size_{i-1}). This is the defining shape of a packed wire header.
        let mut sorted: Vec<(u64, u8, bool)> = fields_by_offset
            .into_iter()
            .map(|(off, (sz, be))| (off, sz, be))
            .collect();
        sorted.sort_by_key(|(off, _, _)| *off);

        if !is_sequential(&sorted) {
            continue;
        }

        out.push(PacketStruct {
            base,
            fields: sorted,
        });
    }
    out
}

/// `true` when the sorted field list is contiguous — each subsequent field
/// starts exactly where the previous one ended.
fn is_sequential(fields: &[(u64, u8, bool)]) -> bool {
    fields
        .windows(2)
        .all(|w| w[0].0 + u64::from(w[0].1) == w[1].0)
}

/// Index every concrete (non-constant) varnode definition by location.
fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, (BlockId, usize)> {
    let mut map = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if let Some(output) = insn.output {
                if output.space != SpaceId::Const {
                    map.insert(output, (bid, insn_idx));
                }
            }
        }
    }
    map
}

/// Index every (varnode used as input) -> list of using instructions, so
/// we can ask "what consumes this load's result?" in O(1).
fn build_user_map(func: &SsaFunction) -> BTreeMap<Varnode, Vec<(BlockId, usize)>> {
    let mut map: BTreeMap<Varnode, Vec<(BlockId, usize)>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            for input in &insn.inputs {
                if input.space != SpaceId::Const {
                    map.entry(*input).or_default().push((bid, insn_idx));
                }
            }
        }
    }
    map
}

/// Resolve the address operand of a `Load` to `(base, offset)` where `base`
/// is the SSA varnode of the underlying pointer and `offset` is the
/// constant displacement. Returns `None` when the address isn't a
/// `base + const` expression.
fn load_base_and_offset(
    func: &SsaFunction,
    def_map: &BTreeMap<Varnode, (BlockId, usize)>,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<(SsaVarnode, u64)> {
    let addr = *insn.inputs.get(1)?;
    if addr.space == SpaceId::Const {
        return None;
    }

    // Case 1: addr = IntAdd(base, const_offset).
    if let Some(&(def_bid, def_idx)) = def_map.get(&addr) {
        let def_insn = func.function.blocks.get(&def_bid)?.insns.get(def_idx)?;
        if def_insn.op == IrOp::IntAdd && def_insn.inputs.len() >= 2 {
            if let Some((base_slot, offset)) = base_plus_const(def_insn) {
                let base = func
                    .var_map
                    .get(&(def_bid, def_idx, VarnodeSlot::Input(base_slot)))
                    .copied()?;
                return Some((base, offset));
            }
        }
    }

    // Case 2: addr is a bare base pointer — treat as offset 0.
    let base = func
        .var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(1)))
        .copied()?;
    Some((base, 0))
}

/// For an `IntAdd` with one constant operand, return
/// `(slot index of the non-constant operand, constant value)`.
fn base_plus_const(insn: &IrInsn) -> Option<(usize, u64)> {
    let lhs = insn.inputs[0];
    let rhs = insn.inputs[1];
    match (lhs.space == SpaceId::Const, rhs.space == SpaceId::Const) {
        (true, false) => Some((1, lhs.offset)),
        (false, true) => Some((0, rhs.offset)),
        _ => None,
    }
}

/// Walk forward one step: is `out` consumed by a `Callother(__byte_swap16
/// | __bswap32, ...)` intrinsic? Those tags are emitted by the bit-field
/// idiom pass for the canonical `htons`/`htonl` rotation sequences and are
/// the strongest local signal that the load was reading a big-endian wire
/// value.
fn output_is_byte_swapped(
    out: Varnode,
    users: &BTreeMap<Varnode, Vec<(BlockId, usize)>>,
    blocks: &BTreeMap<BlockId, unlace_ir::BasicBlock>,
) -> bool {
    let Some(use_sites) = users.get(&out) else {
        return false;
    };
    for (bid, idx) in use_sites {
        let Some(block) = blocks.get(bid) else {
            continue;
        };
        let Some(insn) = block.insns.get(*idx) else {
            continue;
        };
        if insn.op == IrOp::Callother && is_bswap_tag(&insn.inputs) {
            return true;
        }
    }
    false
}

fn is_bswap_tag(inputs: &[Varnode]) -> bool {
    let Some(tag) = inputs.first() else {
        return false;
    };
    tag.space == SpaceId::Const
        && (tag.offset == CALLOTHER_BSWAP16 || tag.offset == CALLOTHER_BSWAP32)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, Varnode};

    use super::*;

    /// Helper: ip-header style — load buf+0 (1B), buf+1 (1B), buf+2 (2B,
    /// byte-swapped via __byte_swap16). Three contiguous fields, one
    /// big-endian — the canonical TCP/IP shape.
    fn build_packet_func() -> SsaFunction {
        let base = Varnode::reg(0, 8);
        let ram = Varnode::constant(1, 8);

        // Output of load buf+0: 1 byte.
        let out0 = Varnode::unique(0, 1);
        // Output of load buf+1: 1 byte.
        let out1 = Varnode::unique(8, 1);
        // Address & output for buf+2 (16-bit big-endian).
        let addr2 = Varnode::unique(16, 8);
        let out2 = Varnode::unique(24, 2);
        let swapped2 = Varnode::unique(32, 2);
        let addr1 = Varnode::unique(40, 8);

        let mut func = Function::new("packet", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));

        // load ram, base    -> out0 (size 1)
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x1000,
        ));
        // addr1 = base + 1
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1,
            smallvec![base, Varnode::constant(1, 8)],
            0x1004,
        ));
        // load ram, addr1   -> out1 (size 1)
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out1,
            smallvec![ram, addr1],
            0x1008,
        ));
        // addr2 = base + 2
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr2,
            smallvec![base, Varnode::constant(2, 8)],
            0x100c,
        ));
        // load ram, addr2   -> out2 (size 2)
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out2,
            smallvec![ram, addr2],
            0x1010,
        ));
        // CALLOTHER(__byte_swap16, out2) -> swapped2 — emulates ntohs.
        bb.insns.push(IrInsn::with_output(
            IrOp::Callother,
            swapped2,
            smallvec![Varnode::constant(CALLOTHER_BSWAP16, 8), out2],
            0x1014,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1018));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn detects_three_contiguous_loads_as_packet_struct() {
        let ssa = build_packet_func();
        let packets = detect_packet_struct(&ssa);

        assert_eq!(packets.len(), 1, "expected exactly one packet struct");
        let p = &packets[0];
        assert_eq!(p.fields.len(), 3);
        assert_eq!(p.fields[0], (0, 1, false));
        assert_eq!(p.fields[1], (1, 1, false));
        // Third field passed through __byte_swap16 — flagged big-endian.
        assert_eq!(p.fields[2], (2, 2, true));
    }

    /// Only two distinct offsets — below the `MIN_PACKET_FIELDS` floor, so
    /// nothing should be reported. Keeps the detector from firing on
    /// generic two-field structs.
    #[test]
    fn ignores_fewer_than_three_offsets() {
        let base = Varnode::reg(0, 8);
        let ram = Varnode::constant(1, 8);
        let out0 = Varnode::unique(0, 4);
        let out4 = Varnode::unique(8, 4);
        let addr4 = Varnode::unique(16, 8);

        let mut func = Function::new("two_fields", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr4,
            smallvec![base, Varnode::constant(4, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out4,
            smallvec![ram, addr4],
            0x1008,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));
        func.insert_block(bb);
        let ssa = build_ssa(func);

        let packets = detect_packet_struct(&ssa);
        assert!(packets.is_empty(), "two-field aggregate must be ignored");
    }

    /// Three loads, but offsets 0, 4, 16 — not contiguous (gap between 8
    /// and 16). Should be rejected because the layout isn't a packed
    /// network header.
    #[test]
    fn rejects_non_contiguous_offsets() {
        let base = Varnode::reg(0, 8);
        let ram = Varnode::constant(1, 8);
        let out0 = Varnode::unique(0, 4);
        let out4 = Varnode::unique(8, 4);
        let out16 = Varnode::unique(16, 4);
        let addr4 = Varnode::unique(24, 8);
        let addr16 = Varnode::unique(32, 8);

        let mut func = Function::new("gappy", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr4,
            smallvec![base, Varnode::constant(4, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out4,
            smallvec![ram, addr4],
            0x1008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr16,
            smallvec![base, Varnode::constant(16, 8)],
            0x100c,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out16,
            smallvec![ram, addr16],
            0x1010,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1014));
        func.insert_block(bb);
        let ssa = build_ssa(func);

        let packets = detect_packet_struct(&ssa);
        assert!(
            packets.is_empty(),
            "non-contiguous offsets must not be reported as a packet struct"
        );
    }

    /// Three 32-bit loads at 0, 4, 8 — all consumed by `__bswap32`
    /// intrinsics (the htonl/ntohl signature). Every field must be flagged
    /// big-endian.
    #[test]
    fn flags_all_fields_big_endian_when_each_is_bswap32() {
        let base = Varnode::reg(0, 8);
        let ram = Varnode::constant(1, 8);

        let out0 = Varnode::unique(0, 4);
        let sw0 = Varnode::unique(8, 4);
        let addr4 = Varnode::unique(16, 8);
        let out4 = Varnode::unique(24, 4);
        let sw4 = Varnode::unique(32, 4);
        let addr8 = Varnode::unique(40, 8);
        let out8 = Varnode::unique(48, 4);
        let sw8 = Varnode::unique(56, 4);

        let mut func = Function::new("all_be", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));

        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Callother,
            sw0,
            smallvec![Varnode::constant(CALLOTHER_BSWAP32, 8), out0],
            0x1004,
        ));

        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr4,
            smallvec![base, Varnode::constant(4, 8)],
            0x1008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out4,
            smallvec![ram, addr4],
            0x100c,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Callother,
            sw4,
            smallvec![Varnode::constant(CALLOTHER_BSWAP32, 8), out4],
            0x1010,
        ));

        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr8,
            smallvec![base, Varnode::constant(8, 8)],
            0x1014,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out8,
            smallvec![ram, addr8],
            0x1018,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Callother,
            sw8,
            smallvec![Varnode::constant(CALLOTHER_BSWAP32, 8), out8],
            0x101c,
        ));

        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1020));
        func.insert_block(bb);
        let ssa = build_ssa(func);

        let packets = detect_packet_struct(&ssa);
        assert_eq!(packets.len(), 1);
        let p = &packets[0];
        assert_eq!(p.fields.len(), 3);
        assert_eq!(p.fields[0], (0, 4, true));
        assert_eq!(p.fields[1], (4, 4, true));
        assert_eq!(p.fields[2], (8, 4, true));
    }
}
