//! t213 — Struct field recovery from array-of-structs loop access patterns.
//!
//! Detects loops of the shape
//! ```text
//! for i in 0..n {
//!     base = arr_ptr + STRIDE * i
//!     *(base + offset_a) = ...
//!     *(base + offset_b) = ...
//! }
//! ```
//! and reconstructs `InferredStruct { size: STRIDE, fields: [(offset, width), …] }`
//! keyed by the *base pointer* SSA varnode (`arr_ptr` here).
//!
//! Algorithm:
//!  1. For every natural loop, identify the basic induction variables
//!     (reuses [`crate::iv_elim::detect_basic_ivs`] via the `pub(crate)`
//!     re-export below).
//!  2. Inside each loop body, walk every `Load` / `Store` instruction.
//!  3. Decompose its address SSA varnode into `(base_sv, stride, iv_sv,
//!     offset)` by recursively splitting `IntAdd` / `IntMult` chains.
//!  4. Group accesses by `(base_sv, stride)`. Each group becomes one
//!     [`InferredStruct`]; each unique `offset` becomes one [`StructField`]
//!     with `size = max access width observed at that offset`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::types::{InferredStruct, StructField};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::iv_elim::detect_basic_ivs;
use crate::licm::find_natural_loops;

/// Public entrypoint. Returns one [`InferredStruct`] per `(base_sv, stride)`
/// group of array-of-struct accesses found in any loop.
pub fn recover_structs(func: &SsaFunction) -> BTreeMap<SsaVarnode, InferredStruct> {
    let mut out: BTreeMap<SsaVarnode, BTreeMap<u64, u8>> = BTreeMap::new();
    let mut strides: BTreeMap<SsaVarnode, u64> = BTreeMap::new();

    for natural_loop in find_natural_loops(func) {
        let header = natural_loop.header;
        let body_set = natural_loop.body;
        let body: Vec<BlockId> = body_set.iter().copied().collect();
        let basic_ivs = detect_basic_ivs(func, header, &body);
        if basic_ivs.is_empty() {
            continue;
        }
        let iv_set: std::collections::BTreeSet<SsaVarnode> =
            basic_ivs.iter().map(|iv| iv.phi_output).collect();

        for &bid in &body {
            let block = match func.function.blocks.get(&bid) {
                Some(b) => b,
                None => continue,
            };
            for (idx, insn) in block.insns.iter().enumerate() {
                let (addr_slot_idx, access_size) = match insn.op {
                    // Load(space, addr) -> out, addr is input(1); width from output.size
                    IrOp::Load => {
                        let sz = insn.output.as_ref().map(|v| v.size).unwrap_or(0);
                        (1usize, sz)
                    }
                    // Store(space, addr, val), addr is input(1); width from val (input(2))
                    IrOp::Store => {
                        let sz = insn.inputs.get(2).map(|v| v.size).unwrap_or(0);
                        (1usize, sz)
                    }
                    _ => continue,
                };
                if access_size == 0 {
                    continue;
                }
                let addr_sv = match func
                    .var_map
                    .get(&(bid, idx, VarnodeSlot::Input(addr_slot_idx)))
                {
                    Some(sv) => *sv,
                    None => continue,
                };
                if let Some(decomp) = decompose_address(func, addr_sv, &iv_set) {
                    if decomp.stride == 0 {
                        continue;
                    }
                    strides.insert(decomp.base_sv, decomp.stride);
                    let entry = out.entry(decomp.base_sv).or_default();
                    let cur = entry.entry(decomp.offset).or_insert(0);
                    if access_size > *cur {
                        *cur = access_size;
                    }
                }
            }
        }
    }

    out.into_iter()
        .map(|(base, fields)| {
            let mut field_vec: Vec<StructField> = fields
                .into_iter()
                .map(|(offset, size)| StructField { offset, size })
                .collect();
            field_vec.sort_by_key(|f| f.offset);
            (
                base,
                InferredStruct {
                    size: *strides.get(&base).unwrap_or(&0),
                    fields: field_vec,
                },
            )
        })
        .collect()
}

/// Decomposed address expression: `addr = base_sv + stride * iv + offset`.
///
/// Returned by [`decompose_address`] when the access matches the
/// array-of-struct shape inside a natural loop. Consumed both by this pass
/// (to build `InferredStruct` layouts) and by the C printer (t231) to
/// render the matching `*(p + 16*i + 8)` chains as `arr<N>[i].field_8`.
#[derive(Debug, Clone)]
pub struct AddrDecomp {
    /// The surviving base pointer after stripping out `stride * iv` and any
    /// constant offsets. Keyed in `SsaFunction::array_struct_layouts`.
    pub base_sv: SsaVarnode,
    /// The constant multiplier on the induction variable; equals the struct
    /// stride (i.e. `sizeof(T)` of the per-element record).
    pub stride: u64,
    /// The within-element byte offset of this access; matches the
    /// `StructField::offset` of the recovered layout.
    pub offset: u64,
    /// The induction variable that supplied the `stride * iv` term, so the
    /// printer can render `arr<N>[<iv_name>]` using `iv_sv`'s existing
    /// printer name.
    pub iv_sv: SsaVarnode,
}

/// Recursively decompose an address SSA varnode into
/// `(base_sv, stride, iv_sv, offset)` where the address is
/// `base_sv + stride * iv_sv + offset` for some `iv` in `iv_set`. Returns
/// `None` if no `iv * stride` term is present (i.e. the address isn't a
/// per-iteration array element).
///
/// `pub` so the c_printer (t231) can re-use the same shape detector when
/// rendering Load/Store sites — keeping the decomposition logic in one
/// place avoids the printer drifting out of sync with the pass that
/// populates `SsaFunction::array_struct_layouts`.
pub fn decompose_address(
    func: &SsaFunction,
    sv: SsaVarnode,
    iv_set: &std::collections::BTreeSet<SsaVarnode>,
) -> Option<AddrDecomp> {
    let (base_sv, stride, iv_sv, offset) = walk_addr(func, sv, iv_set, 0, 0)?;
    if stride == 0 {
        return None;
    }
    Some(AddrDecomp {
        base_sv,
        stride,
        offset,
        iv_sv,
    })
}

/// Returns `(remaining_base_sv, accumulated_stride, iv_sv, accumulated_offset)`
/// or `None` if the chain references no IV. `iv_sv` is the SSA varnode of
/// the induction variable that supplied the `stride * iv` term.
fn walk_addr(
    func: &SsaFunction,
    sv: SsaVarnode,
    iv_set: &std::collections::BTreeSet<SsaVarnode>,
    acc_stride: u64,
    acc_offset: u64,
) -> Option<(SsaVarnode, u64, SsaVarnode, u64)> {
    let def = lookup_def(func, sv)?;
    match def.op {
        IrOp::IntAdd => {
            let lhs_in = def.insn.inputs.first()?;
            let rhs_in = def.insn.inputs.get(1)?;
            let lhs_const = (lhs_in.space == SpaceId::Const).then_some(lhs_in.offset);
            let rhs_const = (rhs_in.space == SpaceId::Const).then_some(rhs_in.offset);

            let lhs_sv = func.var_map.get(&(def.bid, def.idx, VarnodeSlot::Input(0)));
            let rhs_sv = func.var_map.get(&(def.bid, def.idx, VarnodeSlot::Input(1)));

            // Const + SSA pattern → fold const into offset, recurse on SSA.
            if let (Some(c), Some(other)) = (lhs_const, rhs_sv) {
                return walk_addr(func, *other, iv_set, acc_stride, acc_offset.wrapping_add(c));
            }
            if let (Some(c), Some(other)) = (rhs_const, lhs_sv) {
                return walk_addr(func, *other, iv_set, acc_stride, acc_offset.wrapping_add(c));
            }
            // SSA + SSA: try both sides as the IV-bearing branch.
            if let (Some(a), Some(b)) = (lhs_sv, rhs_sv) {
                if let Some(left) = walk_addr(func, *a, iv_set, acc_stride, acc_offset) {
                    // The other side is the surviving base.
                    if left.1 != 0 {
                        // left already supplied a stride; the residual base is whatever it returned.
                        return Some((*b, left.1, left.2, left.3));
                    }
                }
                if let Some(right) = walk_addr(func, *b, iv_set, acc_stride, acc_offset)
                    && right.1 != 0
                {
                    return Some((*a, right.1, right.2, right.3));
                }
            }
            None
        }
        IrOp::IntMult => {
            let lhs_in = def.insn.inputs.first()?;
            let rhs_in = def.insn.inputs.get(1)?;
            let lhs_sv = func.var_map.get(&(def.bid, def.idx, VarnodeSlot::Input(0)));
            let rhs_sv = func.var_map.get(&(def.bid, def.idx, VarnodeSlot::Input(1)));
            // iv * const  or  const * iv
            let (iv_candidate, k) = if let (Some(svi), Some(c)) = (
                lhs_sv,
                (rhs_in.space == SpaceId::Const).then_some(rhs_in.offset),
            ) {
                (*svi, c)
            } else if let (Some(svi), Some(c)) = (
                rhs_sv,
                (lhs_in.space == SpaceId::Const).then_some(lhs_in.offset),
            ) {
                (*svi, c)
            } else {
                return None;
            };
            if iv_set.contains(&iv_candidate) {
                Some((
                    iv_candidate,
                    acc_stride.wrapping_add(k),
                    iv_candidate,
                    acc_offset,
                ))
            } else {
                None
            }
        }
        IrOp::Copy => {
            // Pass through copy.
            let in_sv = func
                .var_map
                .get(&(def.bid, def.idx, VarnodeSlot::Input(0)))?;
            walk_addr(func, *in_sv, iv_set, acc_stride, acc_offset)
        }
        _ => {
            // Atom: not an IV-bearing expression; surface as the base. No
            // IV was found on this branch — return `sv` as the iv-placeholder
            // (caller checks `stride == 0` first, so this value is only
            // surfaced when a sibling branch supplied the IV).
            Some((sv, acc_stride, sv, acc_offset))
        }
    }
}

struct DefSite<'a> {
    bid: BlockId,
    idx: usize,
    op: IrOp,
    insn: &'a unlace_ir::IrInsn,
}

fn lookup_def<'a>(func: &'a SsaFunction, sv: SsaVarnode) -> Option<DefSite<'a>> {
    for ((bid, idx, slot), v) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) {
            continue;
        }
        if *v != sv {
            continue;
        }
        let block = func.function.blocks.get(bid)?;
        let insn = block.insns.get(*idx)?;
        return Some(DefSite {
            bid: *bid,
            idx: *idx,
            op: insn.op,
            insn,
        });
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function};
    use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

    fn reg(off: u64, size: u8) -> Varnode {
        Varnode {
            space: SpaceId::Register,
            offset: off,
            size,
        }
    }
    fn con(v: u64, size: u8) -> Varnode {
        Varnode {
            space: SpaceId::Const,
            offset: v,
            size,
        }
    }
    fn uniq(off: u64, size: u8) -> Varnode {
        Varnode {
            space: SpaceId::Unique,
            offset: off,
            size,
        }
    }

    fn func_with_blocks(blocks: Vec<BasicBlock>) -> SsaFunction {
        let entry = blocks[0].id;
        let mut function = Function::new("f", entry, 0x1000);
        for b in blocks {
            function.insert_block(b);
        }
        build_ssa(function)
    }

    /// Loop computing `*(base + 16*i + 0) = 1` and `*(base + 16*i + 8) = 2`
    /// — should recover a 16-byte struct with two 4-byte fields at 0 and 8.
    #[test]
    fn t213_two_field_struct_recovered() {
        // r0 = base ptr (parameter-like), r1 = i (induction var)
        // Block 0 (entry): r1 = 0; goto bb1
        // Block 1 (header): phi r1; t = r0 + r1*16; *(t+0) = 1; *(t+8) = 2; r1 = r1+1;
        //                   if r1 < 4 goto bb1 else goto bb2
        // Block 2 (exit): return
        let r_base = reg(0x00, 8);
        let r_i = reg(0x08, 8);
        let t1 = uniq(0x00, 8); // r1 * 16
        let t2 = uniq(0x10, 8); // base + r1*16
        let t3 = uniq(0x20, 8); // (base + r1*16) + 8
        let r_i_inc = reg(0x08, 8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        // r1 = 0
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r_i,
            smallvec![con(0, 8)],
            0x1000,
        ));
        bb0.successors.push(BlockId(1));

        let mut bb1 = BasicBlock::new(BlockId(1));
        // t1 = r1 * 16
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            t1,
            smallvec![r_i, con(16, 8)],
            0x1010,
        ));
        // t2 = base + t1
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            t2,
            smallvec![r_base, t1],
            0x1014,
        ));
        // store(ram, t2, 1) - 4-byte store
        bb1.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![con(SpaceId::Ram as u64, 8), t2, con(1, 4)],
            0x1018,
        ));
        // t3 = t2 + 8
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            t3,
            smallvec![t2, con(8, 8)],
            0x101C,
        ));
        // store(ram, t3, 2) - 4-byte store
        bb1.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![con(SpaceId::Ram as u64, 8), t3, con(2, 4)],
            0x1020,
        ));
        // r1 = r1 + 1
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r_i_inc,
            smallvec![r_i, con(1, 8)],
            0x1024,
        ));
        // cbranch r1<4 -> bb1
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![con(0x1010, 8), r_i_inc],
            0x1028,
        ));
        bb1.successors.push(BlockId(1));
        bb1.successors.push(BlockId(2));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1030));

        let func = func_with_blocks(vec![bb0, bb1, bb2]);
        let recovered = recover_structs(&func);
        assert!(
            !recovered.is_empty(),
            "expected one recovered struct, got none"
        );
        let (_, s) = recovered.iter().next().unwrap();
        assert_eq!(s.size, 16, "stride/size should be 16, got {s:?}");
        assert_eq!(s.fields.len(), 2, "expected 2 fields, got {s:?}");
        assert_eq!(s.fields[0].offset, 0);
        assert_eq!(s.fields[1].offset, 8);
    }

    /// No loop → no struct.
    #[test]
    fn t213_non_loop_access_yields_nothing() {
        let r_base = reg(0x00, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![con(SpaceId::Ram as u64, 8), r_base, con(1, 4)],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        let func = func_with_blocks(vec![bb0]);
        let recovered = recover_structs(&func);
        assert!(
            recovered.is_empty(),
            "non-loop access must not invent a struct: {recovered:?}"
        );
    }

    /// Loop with stride 8, fields at offset 0 (1-byte), 2 (2-byte), 4 (4-byte).
    #[test]
    fn t213_three_field_mixed_widths_recovered() {
        let r_base = reg(0x00, 8);
        let r_i = reg(0x08, 8);
        let t1 = uniq(0x00, 8);
        let t2 = uniq(0x10, 8);
        let t3 = uniq(0x20, 8);
        let t4 = uniq(0x30, 8);
        let r_i_inc = reg(0x08, 8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r_i,
            smallvec![con(0, 8)],
            0x1000,
        ));
        bb0.successors.push(BlockId(1));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            t1,
            smallvec![r_i, con(8, 8)],
            0x1010,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            t2,
            smallvec![r_base, t1],
            0x1014,
        ));
        // store 1-byte at offset 0
        bb1.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![con(SpaceId::Ram as u64, 8), t2, con(1, 1)],
            0x1018,
        ));
        // t3 = t2 + 2; 2-byte store
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            t3,
            smallvec![t2, con(2, 8)],
            0x101C,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![con(SpaceId::Ram as u64, 8), t3, con(2, 2)],
            0x1020,
        ));
        // t4 = t2 + 4; 4-byte store
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            t4,
            smallvec![t2, con(4, 8)],
            0x1024,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![con(SpaceId::Ram as u64, 8), t4, con(3, 4)],
            0x1028,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r_i_inc,
            smallvec![r_i, con(1, 8)],
            0x102C,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![con(0x1010, 8), r_i_inc],
            0x1030,
        ));
        bb1.successors.push(BlockId(1));
        bb1.successors.push(BlockId(2));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1040));

        let func = func_with_blocks(vec![bb0, bb1, bb2]);
        let recovered = recover_structs(&func);
        assert!(!recovered.is_empty());
        let (_, s) = recovered.iter().next().unwrap();
        assert_eq!(s.size, 8);
        assert_eq!(s.fields.len(), 3);
        assert_eq!(s.fields[0], StructField { offset: 0, size: 1 });
        assert_eq!(s.fields[1], StructField { offset: 2, size: 2 });
        assert_eq!(s.fields[2], StructField { offset: 4, size: 4 });
    }
}
