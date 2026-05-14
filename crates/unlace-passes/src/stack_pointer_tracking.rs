//! Stack-pointer tracking & frame-hole detection.
//!
//! Mirrors IDA's `add_auto_stkpnt` / `func_has_stkframe_hole`. Walks the CFG
//! in dominator order maintaining the SP delta relative to function entry at
//! every instruction, then scans the recovered local frame for byte ranges
//! that no `stack_var` covers (struct-return holes, red-zone usage, alignment
//! padding past 8 B).
//!
//! Detected effects, all written into [`SsaFunction`]:
//!
//! * [`sp_delta_at`](unlace_ir::ssa::SsaFunction::sp_delta_at) — per-insn SP
//!   delta (negative = below entry RSP).
//! * [`stack_holes`](unlace_ir::ssa::SsaFunction::stack_holes) — uncovered
//!   byte ranges in `[min_sp_depth, 0)` keyed by RSP-relative start offset.
//! * [`dynamic_sp`](unlace_ir::ssa::SsaFunction::dynamic_sp) — true when
//!   `IntAdd(rsp, var)` / `IntSub(rsp, var)` is observed (alloca / VLA).

use std::collections::{BTreeMap, VecDeque};

use unlace_ir::ssa::PrimitiveType;
use unlace_ir::ssa::SsaFunction;
use unlace_ir::stack::StackSpec;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct StackPointerTrackingPass;

impl Pass for StackPointerTrackingPass {
    fn name(&self) -> &str {
        "stack-pointer-tracking"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // Batch 2: stack recovery is per-arch. When the spec is missing
        // (Unknown / unsupported arch) the pass is a no-op rather than
        // panicking on hard-coded x86 offsets — preserves the old behaviour
        // for arches that didn't have working stack recovery before.
        let Some(spec) = StackSpec::for_arch(func.arch) else {
            return Ok(false);
        };
        let (sp_delta_at, dynamic_sp, min_depth) = walk_sp_deltas(func, &spec);
        let stack_holes = compute_stack_holes(func, min_depth);

        let changed = sp_delta_at != func.sp_delta_at
            || stack_holes != func.stack_holes
            || dynamic_sp != func.dynamic_sp;

        func.sp_delta_at = sp_delta_at;
        func.stack_holes = stack_holes;
        func.dynamic_sp = dynamic_sp;

        Ok(changed)
    }
}

/// Dominator-order traversal of all blocks reachable from the dom-tree
/// root, with unreachable blocks appended deterministically.
fn dom_order(func: &SsaFunction) -> Vec<BlockId> {
    let mut out = Vec::new();
    let mut q = VecDeque::new();
    q.push_back(func.dom_tree.root());
    while let Some(b) = q.pop_front() {
        if !func.function.blocks.contains_key(&b) {
            continue;
        }
        out.push(b);
        for child in func.dom_tree.children(b) {
            q.push_back(*child);
        }
    }
    for &bid in func.function.blocks.keys() {
        if !out.contains(&bid) {
            out.push(bid);
        }
    }
    out
}

/// Walk every block in dom-order, threading the SP delta through every
/// instruction. Returns `(sp_delta_at, dynamic_sp, min_depth_seen)`.
fn walk_sp_deltas(
    func: &SsaFunction,
    spec: &StackSpec,
) -> (BTreeMap<(BlockId, usize), i64>, bool, i64) {
    let mut entry_delta: BTreeMap<BlockId, i64> = BTreeMap::new();
    entry_delta.insert(func.dom_tree.root(), 0);

    let mut sp_delta_at: BTreeMap<(BlockId, usize), i64> = BTreeMap::new();
    let mut dynamic_sp = false;
    let mut min_depth: i64 = 0;

    for bid in dom_order(func) {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => continue,
        };
        let mut delta = entry_delta.get(&bid).copied().unwrap_or(0);

        for (idx, insn) in block.insns.iter().enumerate() {
            sp_delta_at.insert((bid, idx), delta);

            // RSP only changes when an instruction whose *output* is RSP
            // executes. Two shapes occur in lifted x86:
            //
            //   1. Direct: `IntAdd/IntSub` whose output is RSP (rare).
            //   2. Indirect: `Copy(rsp <- u)` where `u` was just produced
            //      by `IntAdd/IntSub(rsp, K)` in this block.
            let writes_rsp = insn.output.as_ref().is_some_and(|v| spec.is_sp(v));

            match insn.op {
                IrOp::IntSub if writes_rsp => {
                    if let Some((_, k, is_dynamic)) = match_sp_arith(insn, spec) {
                        if is_dynamic {
                            dynamic_sp = true;
                        } else {
                            delta -= k;
                        }
                    }
                }
                IrOp::IntAdd if writes_rsp => {
                    if let Some((_, k, is_dynamic)) = match_sp_arith(insn, spec) {
                        if is_dynamic {
                            dynamic_sp = true;
                        } else {
                            delta += k;
                        }
                    }
                }
                IrOp::Copy if writes_rsp => {
                    if let Some(src) = insn.inputs.first() {
                        if let Some((sign, k, is_dynamic)) =
                            trace_copy_source(func, bid, idx, src, spec)
                        {
                            if is_dynamic {
                                dynamic_sp = true;
                            } else {
                                delta += sign * k;
                            }
                        }
                    }
                }
                _ => {}
            }

            min_depth = min_depth.min(delta);
        }

        if let Some(node) = func.cfg.node_index(bid) {
            for succ_ni in func
                .cfg
                .inner()
                .neighbors_directed(node, petgraph::Direction::Outgoing)
            {
                let succ = func.cfg.inner()[succ_ni];
                entry_delta.entry(succ).or_insert(delta);
            }
        }
    }

    (sp_delta_at, dynamic_sp, min_depth)
}

/// If `insn` is `IntAdd/IntSub(sp, X)`, return `(sp_input_pos, |X|, is_dynamic)`.
fn match_sp_arith(insn: &unlace_ir::IrInsn, spec: &StackSpec) -> Option<(usize, i64, bool)> {
    if insn.inputs.len() < 2 {
        return None;
    }
    let (sp_pos, other) = if spec.is_sp(&insn.inputs[0]) {
        (0usize, &insn.inputs[1])
    } else if spec.is_sp(&insn.inputs[1]) {
        (1usize, &insn.inputs[0])
    } else {
        return None;
    };
    if other.space == SpaceId::Const {
        Some((sp_pos, other.offset as i64, false))
    } else {
        Some((sp_pos, 0, true))
    }
}

/// Trace a `Copy(sp <- src)` back to its defining instruction within the
/// same block. Returns `(sign, magnitude, is_dynamic)`.
fn trace_copy_source(
    func: &SsaFunction,
    bid: BlockId,
    copy_idx: usize,
    src: &Varnode,
    spec: &StackSpec,
) -> Option<(i64, i64, bool)> {
    if src.space != SpaceId::Unique {
        return None;
    }
    let block = func.function.blocks.get(&bid)?;
    for prev_idx in (0..copy_idx).rev() {
        let prev = &block.insns[prev_idx];
        let Some(out) = prev.output.as_ref() else {
            continue;
        };
        if out.space != SpaceId::Unique || out.offset != src.offset {
            continue;
        }
        match prev.op {
            IrOp::IntAdd | IrOp::IntSub => {
                let (_, mag, dynamic) = match_sp_arith(prev, spec)?;
                let sign = if prev.op == IrOp::IntAdd { 1 } else { -1 };
                return Some((sign, mag, dynamic));
            }
            _ => return None,
        }
    }
    None
}

/// Compute byte-range holes in `[min_depth, 0)` not covered by any
/// recovered `stack_var`. Mirrors IDA's `func_has_stkframe_hole`.
fn compute_stack_holes(func: &SsaFunction, min_depth: i64) -> BTreeMap<i64, u32> {
    let mut holes = BTreeMap::new();
    if min_depth >= 0 {
        return holes;
    }

    let mut covered: Vec<(i64, i64)> = func
        .stack_vars
        .values()
        .map(|sv| {
            let size = primitive_size(sv.ty);
            (sv.offset, sv.offset + size as i64)
        })
        .collect();
    covered.sort();

    let mut cursor = min_depth;
    for (lo, hi) in covered {
        if lo > cursor {
            let len = (lo - cursor) as u32;
            if len > 0 {
                holes.insert(cursor, len);
            }
        }
        cursor = cursor.max(hi);
        if cursor >= 0 {
            break;
        }
    }
    if cursor < 0 {
        let len = -cursor as u32;
        if len > 0 {
            holes.insert(cursor, len);
        }
    }

    holes
}

fn primitive_size(ty: PrimitiveType) -> u32 {
    match ty {
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => w as u32,
        PrimitiveType::Bool => 1,
        PrimitiveType::Float => 4,
        PrimitiveType::Double => 8,
        PrimitiveType::Ptr => 8,
        PrimitiveType::Unknown => 8,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{StackVar, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// x86-64 RSP varnode — tests synthesise functions tagged as x86_64 so
    /// the `StackSpec` lookup resolves to the legacy offset.
    fn rsp() -> Varnode {
        Varnode::reg(32, 8)
    }

    fn build(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = unlace_ir::ArchId::X86_64;
        ssa
    }

    #[test]
    fn test_static_sp_delta_tracking() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                u1,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1008,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u1], 0x100C),
        ]);

        assert!(StackPointerTrackingPass.run(&mut ssa).unwrap());

        let bid = BlockId(0);
        assert_eq!(ssa.sp_delta_at.get(&(bid, 0)), Some(&0));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 1)), Some(&0));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 2)), Some(&-32));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 3)), Some(&-32));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 4)), Some(&0));
        assert!(!ssa.dynamic_sp);
    }

    #[test]
    fn test_alloca_detection() {
        let u0 = Varnode::unique(0, 8);
        let dyn_size = Varnode::reg(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), dyn_size], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        assert!(StackPointerTrackingPass.run(&mut ssa).unwrap());
        assert!(ssa.dynamic_sp, "alloca-shaped IR should set dynamic_sp");
    }

    #[test]
    fn test_hole_detection() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        ssa.stack_vars.insert(
            -32,
            StackVar {
                offset: -32,
                name: "v1".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v2".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.stack_holes.get(&-24), Some(&8));
        assert_eq!(ssa.stack_holes.get(&-8), Some(&8));
        assert_eq!(ssa.stack_holes.len(), 2);
    }

    #[test]
    fn test_no_hole_frame() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(16, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v1".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "v2".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.stack_holes.is_empty(),
            "fully-covered frame must produce no holes, got {:?}",
            ssa.stack_holes
        );
    }
}
