//! Phase D.1 — pointer-arithmetic struct-field layout inference (analysis half).
//!
//! Recognizes the classic `*(T*)(base + constant_offset)` access pattern across
//! an [`SsaFunction`] and groups the distinct offsets observed off the *same
//! base pointer* into a candidate struct layout (offset -> access size).
//!
//! This is the **analysis** half of struct recovery: it produces a candidate
//! layout *report* and performs no type application. (Type application lives in
//! [`crate::struct_field_detect`], which mutates `composite_var_types`; the
//! loop/array-of-structs, stride-keyed variant lives in
//! [`crate::struct_field_recovery`].)
//!
//! Algorithm:
//!  1. Walk every `Load` / `Store` instruction. The address operand is
//!     `input(1)` (Load: `Load(space, addr) -> out`; Store: `Store(space,
//!     addr, val)`), mirroring [`crate::struct_field_detect`].
//!  2. Decompose the address into `(base_sv, offset)`:
//!       - if the address is defined by `IntAdd(base, const)` (in either
//!         operand order), the field offset is that constant; or
//!       - otherwise the address itself is the base, at offset `0`.
//!  3. Group `(offset, access_size)` records by the base SSA varnode.
//!  4. Conservatively keep only bases observed at **>= 2 distinct offsets**
//!     (a single access is not enough evidence for a struct).
//!
//! Determinism: all grouping uses `BTreeMap` keyed by the `Ord` `SsaVarnode`,
//! so both the candidate order and the per-candidate field order are stable.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

/// One recovered field of a candidate struct layout.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub struct StructFieldCandidate {
    /// Byte offset of the field from the base pointer.
    pub offset: u64,
    /// Width in bytes of the access observed at this offset (max if several).
    pub access_size: u8,
}

/// A candidate struct layout: a base pointer accessed at multiple offsets.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StructLayoutCandidate {
    /// The base pointer SSA varnode the fields are accessed relative to.
    pub base: SsaVarnode,
    /// Fields sorted by offset and deduplicated (one entry per distinct offset).
    pub fields: Vec<StructFieldCandidate>,
}

/// Minimum number of distinct offsets a base must be accessed at before it is
/// reported as a struct candidate. A single access is not a struct.
const MIN_DISTINCT_OFFSETS: usize = 2;

/// Infer candidate struct layouts from pointer-arithmetic memory accesses.
///
/// Returns one [`StructLayoutCandidate`] per base pointer that is accessed at
/// at least [`MIN_DISTINCT_OFFSETS`] distinct constant offsets. The result is
/// deterministically ordered by base varnode, and each candidate's `fields`
/// are sorted by offset.
pub fn infer_struct_layouts(func: &SsaFunction) -> Vec<StructLayoutCandidate> {
    let def_map = build_def_map(func);

    // base -> (offset -> max access size)
    let mut groups: BTreeMap<SsaVarnode, BTreeMap<u64, u8>> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            let Some(access_size) = access_size(insn) else {
                continue;
            };
            if access_size == 0 {
                continue;
            }
            let Some((base, offset)) = decompose_address(func, &def_map, bid, insn_idx, insn)
            else {
                continue;
            };

            let by_offset = groups.entry(base).or_default();
            let slot = by_offset.entry(offset).or_insert(access_size);
            // Keep the widest access seen at this offset.
            if access_size > *slot {
                *slot = access_size;
            }
        }
    }

    groups
        .into_iter()
        .filter(|(_, by_offset)| by_offset.len() >= MIN_DISTINCT_OFFSETS)
        .map(|(base, by_offset)| {
            let fields = by_offset
                .into_iter()
                .map(|(offset, access_size)| StructFieldCandidate {
                    offset,
                    access_size,
                })
                .collect();
            StructLayoutCandidate { base, fields }
        })
        .collect()
}

/// Map every defined varnode to the `(block, insn)` that defines it.
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

/// Access width in bytes for a memory instruction, or `None` if not a
/// `Load`/`Store` with an address operand.
fn access_size(insn: &IrInsn) -> Option<u8> {
    match insn.op {
        IrOp::Load if insn.inputs.len() >= 2 => Some(insn.output?.size),
        IrOp::Store if insn.inputs.len() >= 3 => Some(insn.inputs[2].size),
        _ => None,
    }
}

/// Decompose a memory access into `(base_sv, offset)`.
///
/// If the address operand is defined by `IntAdd(base, const)` (in either
/// operand order), returns the base SSA varnode and the constant offset.
/// Otherwise the address itself is treated as the base at offset `0`.
fn decompose_address(
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
        if def_insn.op == IrOp::IntAdd
            && def_insn.inputs.len() >= 2
            && let Some((base_idx, offset)) = base_plus_const(def_insn)
        {
            let base = func
                .var_map
                .get(&(def_bid, def_idx, VarnodeSlot::Input(base_idx)))
                .copied()?;
            return Some((base, offset));
        }
    }

    // No `IntAdd` def: the address is the base, accessed at offset 0.
    let base = func
        .var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(1)))
        .copied()?;
    Some((base, 0))
}

/// For an `IntAdd` instruction with exactly one constant operand, return
/// `(base_input_index, constant_offset)`. `None` if both or neither operand
/// is constant.
fn base_plus_const(insn: &IrInsn) -> Option<(usize, u64)> {
    let lhs = insn.inputs[0];
    let rhs = insn.inputs[1];

    match (lhs.space == SpaceId::Const, rhs.space == SpaceId::Const) {
        (true, false) => Some((1, lhs.offset)),
        (false, true) => Some((0, rhs.offset)),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{VarnodeSlot, build_ssa};
    use unlace_ir::{BasicBlock, Function, Varnode};

    use super::*;

    #[test]
    fn two_loads_off_same_base_form_one_candidate() {
        // *(base + 0) and *(base + 8), both 8-byte loads.
        let base = Varnode::reg(0, 8);
        let addr0 = base;
        let addr8 = Varnode::unique(0, 8);
        let out0 = Varnode::unique(16, 8);
        let out8 = Varnode::unique(24, 8);
        let ram = Varnode::constant(1, 8);

        let mut func = Function::new("two_fields", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        // offset 0: direct base address.
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, addr0],
            0x1000,
        ));
        // offset 8: addr8 = base + 8; load from addr8.
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr8,
            smallvec![base, Varnode::constant(8, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out8,
            smallvec![ram, addr8],
            0x1008,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let candidates = infer_struct_layouts(&ssa);

        assert_eq!(candidates.len(), 1, "expected exactly one struct candidate");

        let base_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Input(1)))
            .expect("base input slot");
        assert_eq!(candidates[0].base, base_sv);

        assert_eq!(
            candidates[0].fields,
            vec![
                StructFieldCandidate {
                    offset: 0,
                    access_size: 8,
                },
                StructFieldCandidate {
                    offset: 8,
                    access_size: 8,
                },
            ]
        );
    }

    #[test]
    fn single_access_is_below_threshold() {
        // A lone load off a base is not enough evidence for a struct.
        let base = Varnode::reg(0, 8);
        let out0 = Varnode::unique(16, 8);
        let ram = Varnode::constant(1, 8);

        let mut func = Function::new("one_field", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            out0,
            smallvec![ram, base],
            0x2000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2004));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let candidates = infer_struct_layouts(&ssa);
        assert!(
            candidates.is_empty(),
            "single access must not yield a candidate, got {candidates:?}"
        );
    }
}
