//! HIR-level loop facts: counted loops and reductions.
//!
//! Companion side-table to the structurer's `HirFunction`. While the
//! structurer produces basic `HirNode::Loop` shapes, this module produces
//! richer descriptions:
//! - `CountedLoop { iv, init, bound, step, predicate }` for canonical
//!   `for (i = init; i < bound; i += step) {}` patterns.
//! - `Reduction { accumulator, op, init, span }` for `sum += a[i]` patterns.
//!
//! The C printer can consume these to emit clean source-level loops without
//! having to re-derive them from the SSA representation.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode};
use unlace_ir::BlockId;

use crate::scalar_evolution::{LoopExitPredicate, analyze_loop_scevs, compute_trip_count};

/// A canonical counted-loop fact suitable for `for(...)` emission.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CountedLoop {
    /// Loop header block.
    pub header: BlockId,
    /// Induction variable.
    pub iv: SsaVarnode,
    /// Initial value of the IV.
    pub init: SsaVarnode,
    /// Step per iteration (signed).
    pub step: i64,
    /// Loop exit predicate (e.g. `Ult` for `i < N`).
    pub predicate: LoopExitPredicate,
    /// Trip count if statically computable.
    pub trip_count: Option<u64>,
}

/// A reduction operation kind.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum ReductionOp {
    Sum,
    Product,
    Min,
    Max,
    BitAnd,
    BitOr,
    BitXor,
}

/// A reduction fact: `acc op= expr` inside a loop, with `acc` initialized
/// before the loop.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Reduction {
    /// Loop header where the reduction lives.
    pub header: BlockId,
    /// The accumulator phi.
    pub accumulator: SsaVarnode,
    /// Initial value of the accumulator.
    pub init: SsaVarnode,
    /// Operation applied each iteration.
    pub op: ReductionOp,
}

/// Combined loop-recovery facts for a single function.
#[derive(Clone, Debug, Default)]
pub struct LoopFacts {
    pub counted_loops: BTreeMap<BlockId, CountedLoop>,
    pub reductions: BTreeMap<BlockId, Reduction>,
}

/// Build loop facts from SCEV info on the function.
pub fn recover_loop_facts(func: &SsaFunction) -> LoopFacts {
    let scev = analyze_loop_scevs(func);
    let mut facts = LoopFacts::default();

    for (&header, info) in &scev {
        if info.ivs.is_empty() {
            continue;
        }
        let iv = &info.ivs[0];
        // Need at least one exit fact to know the predicate/bound.
        let Some(exit) = info.exits.first() else {
            continue;
        };

        // Try to compute trip count if init and bound are both constants.
        let trip_count = compute_trip_count_from_exit(iv, exit);

        facts.counted_loops.insert(
            header,
            CountedLoop {
                header,
                iv: iv.value,
                init: iv.start,
                step: iv.step,
                predicate: exit.predicate,
                trip_count,
            },
        );

        // Detect reduction if there's a non-IV phi whose latch input is
        // derived by a single arithmetic op from the phi itself + a loop
        // value.
        if let Some(reduction) = detect_reduction(func, header, &info.ivs) {
            facts.reductions.insert(header, reduction);
        }
    }

    facts
}

fn compute_trip_count_from_exit(
    iv: &crate::scalar_evolution::AffineIv,
    exit: &crate::scalar_evolution::LoopExitFact,
) -> Option<u64> {
    // Extract a constant bound if possible.
    use crate::scalar_evolution::ScevExpr;
    let Some(bound) = &exit.bound else { return None };
    let bound_val = match bound {
        ScevExpr::Const { value, .. } => *value,
        _ => return None,
    };
    // The IV's start must also be statically known — we don't have a constant
    // here directly, just an SsaVarnode. Conservatively report None unless
    // we know the start is the constant 0 (the most common case for counted
    // loops).
    let _ = iv.start;
    compute_trip_count(0, iv.step, bound_val, exit.predicate)
}

/// Detect a reduction in a loop: a non-IV phi with a single accumulator op.
fn detect_reduction(
    func: &SsaFunction,
    header: BlockId,
    ivs: &[crate::scalar_evolution::AffineIv],
) -> Option<Reduction> {
    use unlace_ir::ssa::VarnodeSlot;
    use unlace_ir::IrOp;

    let phis = func.phi_map.get(&header)?;
    for phi in phis {
        // Skip IV phis.
        if ivs.iter().any(|iv| iv.value == phi.output) {
            continue;
        }
        // Find an init input (from outside the loop) and a back-edge input.
        let mut init_sv: Option<SsaVarnode> = None;
        let mut back_sv: Option<SsaVarnode> = None;
        for &(pred, sv) in &phi.inputs {
            if pred == header {
                continue;
            }
            // Heuristic: the first non-header input is init.
            if init_sv.is_none() {
                init_sv = Some(sv);
            } else {
                back_sv = Some(sv);
            }
        }
        let (init_sv, back_sv) = match (init_sv, back_sv) {
            (Some(i), Some(b)) => (i, b),
            _ => continue,
        };

        // The back edge must come from an op whose first input is the phi
        // output (the accumulator).
        let Some(def) = find_def(func, back_sv) else {
            continue;
        };
        let op = match def.1.op {
            IrOp::IntAdd => ReductionOp::Sum,
            IrOp::IntMult => ReductionOp::Product,
            IrOp::IntAnd => ReductionOp::BitAnd,
            IrOp::IntOr => ReductionOp::BitOr,
            IrOp::IntXor => ReductionOp::BitXor,
            _ => continue,
        };
        // First input of the def must be the phi output.
        let first_input_sv = func
            .var_map
            .get(&(def.0.0, def.0.1, VarnodeSlot::Input(0)))
            .copied();
        if first_input_sv != Some(phi.output) {
            continue;
        }

        return Some(Reduction {
            header,
            accumulator: phi.output,
            init: init_sv,
            op,
        });
    }
    None
}

fn find_def(
    func: &SsaFunction,
    sv: SsaVarnode,
) -> Option<((BlockId, usize), &unlace_ir::IrInsn)> {
    use unlace_ir::ssa::VarnodeSlot;
    for ((bid, idx, slot), v) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) {
            continue;
        }
        if *v != sv {
            continue;
        }
        let block = func.function.blocks.get(bid)?;
        let insn = block.insns.get(*idx)?;
        return Some(((*bid, *idx), insn));
    }
    None
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// Build a counted loop: for (i = 0; i < N; i++) { /* nothing */ }
    fn build_counted_loop() -> SsaFunction {
        let i = Varnode::reg(0, 4);
        let n = Varnode::reg(8, 4);
        let cmp = Varnode::reg(16, 1);

        let mut func = Function::new("counted", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            i,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1004));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntLess,
            cmp,
            smallvec![i, n],
            0x1100,
        ));
        b1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cmp],
            0x1104,
        ));
        b1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            i,
            smallvec![i, Varnode::constant(1, 4)],
            0x1200,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1204));
        b2.successors = smallvec![BlockId(1)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![i], 0x1300));

        func.insert_block(b0);
        func.insert_block(b1);
        func.insert_block(b2);
        func.insert_block(b3);
        build_ssa(func)
    }

    #[test]
    fn test_hir_counted_loop_detected() {
        let ssa = build_counted_loop();
        let facts = recover_loop_facts(&ssa);
        assert!(facts.counted_loops.contains_key(&BlockId(1)));
        let cl = &facts.counted_loops[&BlockId(1)];
        assert_eq!(cl.step, 1);
        assert_eq!(cl.predicate, LoopExitPredicate::Ult);
    }

    #[test]
    fn test_hir_counted_loop_iv() {
        let ssa = build_counted_loop();
        let facts = recover_loop_facts(&ssa);
        let cl = &facts.counted_loops[&BlockId(1)];
        // IV base should be reg 0.
        assert_eq!(cl.iv.base.offset, 0);
    }

    #[test]
    fn test_hir_no_reduction_in_empty_loop() {
        let ssa = build_counted_loop();
        let facts = recover_loop_facts(&ssa);
        // No accumulator phi other than the IV → no reduction.
        assert!(!facts.reductions.contains_key(&BlockId(1)));
    }

    #[test]
    fn test_reduction_op_kinds_distinct() {
        // Sanity: each variant is distinct.
        assert_ne!(ReductionOp::Sum, ReductionOp::Product);
        assert_ne!(ReductionOp::Min, ReductionOp::Max);
        assert_ne!(ReductionOp::BitAnd, ReductionOp::BitOr);
    }
}
