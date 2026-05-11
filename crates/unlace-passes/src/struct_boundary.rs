//! Cross-function pointer-arithmetic struct boundary inference.
//!
//! Looks at every `Load`/`Store` in an [`SsaFunction`], walks back to the
//! `base + const` definition of its address operand, and groups accesses by
//! the SSA base varnode. When a single base is used with at least three
//! distinct constant offsets we infer that it points at a struct, sort the
//! offsets, and require that successive accesses respect natural pointer
//! alignment (8 bytes on a 64-bit target). The result is a [`StructBoundary`]
//! per inferred composite, suitable for downstream type-binding passes.
//!
//! This complements [`crate::struct_field_detect`]: that pass writes a
//! [`unlace_ir::types::Type::Struct`] onto `composite_var_types` for the SSA
//! base. This pass emits a lighter-weight, side-table representation that
//! preserves the *raw* offset/width tuples so later passes (e.g. cross-TU
//! struct unification) can reason about layout without re-deriving it.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

/// Default pointer alignment used when inferring struct boundaries.
///
/// Unlace targets 64-bit pointers in the common case; if/when 32-bit support
/// matters we can plumb this through `SsaFunction` metadata.
pub const PTR_ALIGNMENT: u64 = 8;

/// Minimum number of distinct constant offsets observed against a single base
/// before we are willing to call it a struct.
pub const MIN_DISTINCT_OFFSETS: usize = 3;

/// One inferred struct.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct StructBoundary {
    /// SSA varnode used as the base pointer.
    pub base: SsaVarnode,
    /// `(offset, access_width)` pairs, sorted ascending by offset.
    pub fields: Vec<(u64, u8)>,
    /// Smallest size that contains every observed access, rounded up to
    /// [`PTR_ALIGNMENT`].
    pub total_size: u64,
}

/// Run the boundary inference over `func` and return one entry per inferred
/// struct base. Bases with fewer than [`MIN_DISTINCT_OFFSETS`] distinct
/// constant offsets are dropped. Field offsets that violate natural
/// alignment for their access width are also dropped (the surviving fields
/// must themselves still satisfy the minimum-count rule).
pub fn infer_struct_boundaries(func: &SsaFunction) -> Vec<StructBoundary> {
    let def_map = build_def_map(func);
    let mut accesses: BTreeMap<SsaVarnode, BTreeMap<u64, u8>> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            let Some(width) = access_size(insn) else {
                continue;
            };
            let Some((base, offset)) = access_base(func, &def_map, bid, insn_idx, insn) else {
                continue;
            };

            // Keep the widest access we've seen at this offset; that matches
            // how compilers usually emit overlapping byte/word loads.
            accesses
                .entry(base)
                .or_default()
                .entry(offset)
                .and_modify(|w| {
                    if width > *w {
                        *w = width;
                    }
                })
                .or_insert(width);
        }
    }

    let mut out = Vec::new();
    for (base, offsets) in accesses {
        let mut fields: Vec<(u64, u8)> = offsets
            .into_iter()
            .filter(|&(off, w)| respects_alignment(off, w))
            .collect();
        fields.sort_by_key(|&(off, _)| off);

        if fields.len() < MIN_DISTINCT_OFFSETS {
            continue;
        }

        if !gaps_respect_alignment(&fields) {
            continue;
        }

        let total_size = total_size(&fields);
        out.push(StructBoundary {
            base,
            fields,
            total_size,
        });
    }
    out
}

/// Indexes every SSA-defined varnode to its `(block, insn_idx)`.
fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, (BlockId, usize)> {
    let mut def_map = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if let Some(output) = insn.output {
                def_map.insert(output, (bid, insn_idx));
            }
        }
    }
    def_map
}

/// Access width in bytes for a `Load` (output size) or `Store` (value size).
fn access_size(insn: &IrInsn) -> Option<u8> {
    match insn.op {
        IrOp::Load if insn.inputs.len() >= 2 => Some(insn.output?.size),
        IrOp::Store if insn.inputs.len() >= 3 => Some(insn.inputs[2].size),
        _ => None,
    }
}

/// Resolve the SSA base + constant offset of a memory access. Falls back to
/// `(addr_ssa, 0)` when the address operand is itself a base register.
fn access_base(
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

    let base = func
        .var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(1)))
        .copied()?;
    Some((base, 0))
}

/// If exactly one operand of an `IntAdd` is a constant, return the
/// non-constant slot index and the constant value.
fn base_plus_const(insn: &IrInsn) -> Option<(usize, u64)> {
    let lhs = insn.inputs[0];
    let rhs = insn.inputs[1];
    match (lhs.space == SpaceId::Const, rhs.space == SpaceId::Const) {
        (true, false) => Some((1, lhs.offset)),
        (false, true) => Some((0, rhs.offset)),
        _ => None,
    }
}

/// `offset` is naturally aligned for an access of `width` bytes. We allow
/// non-power-of-two widths (e.g. 3-byte loads from misaligned codecs) by
/// only requiring alignment when the width is a power of two.
fn respects_alignment(offset: u64, width: u8) -> bool {
    let w = width as u64;
    if w == 0 {
        return false;
    }
    if w.is_power_of_two() {
        offset % w == 0
    } else {
        true
    }
}

/// Successive field starts must differ by at least the previous field's
/// width and the gap itself must respect [`PTR_ALIGNMENT`] (so we don't
/// merge overlapping reinterpretations into a single struct).
fn gaps_respect_alignment(fields: &[(u64, u8)]) -> bool {
    for win in fields.windows(2) {
        let (prev_off, prev_w) = win[0];
        let (next_off, _) = win[1];
        if next_off < prev_off + prev_w as u64 {
            return false;
        }
        let gap = next_off - prev_off;
        if gap % gcd(prev_w as u64, PTR_ALIGNMENT) != 0 {
            return false;
        }
    }
    true
}

fn gcd(mut a: u64, mut b: u64) -> u64 {
    while b != 0 {
        let t = b;
        b = a % b;
        a = t;
    }
    a.max(1)
}

/// Smallest size that contains every observed access, rounded up to
/// [`PTR_ALIGNMENT`].
fn total_size(fields: &[(u64, u8)]) -> u64 {
    let raw = fields
        .iter()
        .map(|&(off, w)| off + w as u64)
        .max()
        .unwrap_or(0);
    raw.div_ceil(PTR_ALIGNMENT) * PTR_ALIGNMENT
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, Varnode};

    use super::*;

    /// Build `out = LOAD(ram, base + offset)` (or a STORE if `store_val` is `Some`).
    fn push_access(
        bb: &mut BasicBlock,
        base: Varnode,
        offset: u64,
        out_size: u8,
        addr_unique_off: u64,
        addr_at: u64,
        load_at: u64,
        store_val: Option<Varnode>,
    ) {
        let ram = Varnode::constant(1, 8);
        let addr = Varnode::unique(addr_unique_off, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![base, Varnode::constant(offset, 8)],
            addr_at,
        ));
        match store_val {
            None => {
                let out = Varnode::unique(addr_unique_off + 0x1000, out_size);
                bb.insns.push(IrInsn::with_output(
                    IrOp::Load,
                    out,
                    smallvec![ram, addr],
                    load_at,
                ));
            }
            Some(val) => {
                bb.insns.push(IrInsn::without_output(
                    IrOp::Store,
                    smallvec![ram, addr, val],
                    load_at,
                ));
            }
        }
    }

    fn finish(func: Function) -> SsaFunction {
        build_ssa(func)
    }

    #[test]
    fn three_distinct_offsets_yield_struct() {
        let base = Varnode::reg(0, 8);
        let mut func = Function::new("three", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));

        // Direct load at offset 0.
        let ram = Varnode::constant(1, 8);
        let out0 = Varnode::unique(0x100, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x1000,
        ));

        push_access(&mut bb, base, 8, 8, 0x10, 0x1004, 0x1008, None);
        push_access(&mut bb, base, 16, 4, 0x20, 0x100c, 0x1010, None);

        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1018));
        func.insert_block(bb);

        let ssa = finish(func);
        let boundaries = infer_struct_boundaries(&ssa);

        assert_eq!(
            boundaries.len(),
            1,
            "expected one struct, got {boundaries:?}"
        );
        let b = &boundaries[0];
        assert_eq!(b.fields, vec![(0, 8), (8, 8), (16, 4)]);
        // max access ends at 20, rounds up to 24.
        assert_eq!(b.total_size, 24);
    }

    #[test]
    fn under_three_offsets_is_rejected() {
        let base = Varnode::reg(0, 8);
        let mut func = Function::new("two", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));

        let ram = Varnode::constant(1, 8);
        let out0 = Varnode::unique(0x100, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x2000,
        ));
        push_access(&mut bb, base, 8, 8, 0x10, 0x2004, 0x2008, None);

        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2010));
        func.insert_block(bb);

        let ssa = finish(func);
        assert!(infer_struct_boundaries(&ssa).is_empty());
    }

    #[test]
    fn store_accesses_count_toward_inference() {
        let base = Varnode::reg(0, 8);
        let val = Varnode::reg(8, 8);
        let mut func = Function::new("stores", BlockId(0), 0x3000);
        let mut bb = BasicBlock::new(BlockId(0));

        // STORE at offset 0 directly through base.
        let ram = Varnode::constant(1, 8);
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, base, val],
            0x3000,
        ));
        push_access(&mut bb, base, 8, 8, 0x10, 0x3004, 0x3008, Some(val));
        push_access(&mut bb, base, 16, 8, 0x20, 0x300c, 0x3010, Some(val));
        push_access(&mut bb, base, 24, 8, 0x30, 0x3014, 0x3018, Some(val));

        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3020));
        func.insert_block(bb);

        let ssa = finish(func);
        let boundaries = infer_struct_boundaries(&ssa);

        assert_eq!(boundaries.len(), 1);
        let b = &boundaries[0];
        assert_eq!(b.fields, vec![(0, 8), (8, 8), (16, 8), (24, 8)]);
        assert_eq!(b.total_size, 32);
    }

    #[test]
    fn misaligned_offsets_are_rejected_or_filtered() {
        // base + 0 (8B), base + 3 (4B – misaligned), base + 8 (8B), base + 16 (8B).
        // The misaligned 4-byte field at +3 must be dropped; the remaining
        // three aligned fields still satisfy the threshold and the gap
        // 8 → 16 → ... respects 8-byte alignment.
        let base = Varnode::reg(0, 8);
        let mut func = Function::new("misalign", BlockId(0), 0x4000);
        let mut bb = BasicBlock::new(BlockId(0));

        let ram = Varnode::constant(1, 8);
        let out0 = Varnode::unique(0x100, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x4000,
        ));
        push_access(&mut bb, base, 3, 4, 0x10, 0x4004, 0x4008, None);
        push_access(&mut bb, base, 8, 8, 0x20, 0x400c, 0x4010, None);
        push_access(&mut bb, base, 16, 8, 0x30, 0x4014, 0x4018, None);

        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x4020));
        func.insert_block(bb);

        let ssa = finish(func);
        let boundaries = infer_struct_boundaries(&ssa);

        assert_eq!(boundaries.len(), 1, "got {boundaries:?}");
        let b = &boundaries[0];
        // Offset 3 was filtered as misaligned.
        assert!(
            !b.fields.iter().any(|&(off, _)| off == 3),
            "misaligned field leaked through: {:?}",
            b.fields
        );
        assert_eq!(b.fields, vec![(0, 8), (8, 8), (16, 8)]);
        assert_eq!(b.total_size, 24);
    }
}
