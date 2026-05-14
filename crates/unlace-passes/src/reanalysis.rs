//! Function-reanalysis fixpoint.
//!
//! When function B's signature is refined — its inferred parameter types
//! change, its return type is discovered, or it is determined to be
//! `noreturn` — every caller of B becomes stale: their call-site argument
//! types and post-call live ranges were computed against the *old* B.
//!
//! This module drives a worklist that iterates per-function refinement
//! passes (caller-param-propagate / param-infer / return-type-infer /
//! noreturn-detect — supplied as a closure so the cycle stays decoupled
//! from concrete pass identity) until no signature changes remain or a
//! cap is hit.
//!
//! The revision counter (`SsaFunction::signature_revision`) is bumped
//! exactly when one of the three observable signature components changes;
//! callers of a function whose revision bumped are re-enqueued.
//!
//! Mirrors IDA's `auto_apply_type` cascade in spirit (every signature flip
//! triggers caller re-analysis) but uses a per-function revision counter
//! instead of a separate dirty-flag side-table.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::ssa::{PrimitiveType, SsaFunction};
use unlace_ir::xref::CallGraph;

use crate::pass::PassError;

/// Default upper bound on outer-iteration count. The cycle is monotone in
/// principle (types refine, never widen) so 10 is generous; the cap exists
/// only to catch bugs in pass implementations that mutate state non-
/// monotonically.
pub const DEFAULT_REANALYSIS_CAP: usize = 10;

/// Snapshot returned by [`reanalysis_fixpoint`].
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct ReanalysisReport {
    /// Number of worklist pops performed.
    pub iterations: usize,
    /// True iff the iteration cap was hit before the worklist drained.
    pub hit_cap: bool,
    /// Total number of `signature_revision` bumps observed across all
    /// functions during the run.
    pub total_revisions: u64,
}

/// The three observable components of an [`SsaFunction`]'s signature whose
/// change qualifies as a "signature change" for reanalysis purposes.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SignatureSnapshot {
    pub inferred_params: Vec<(String, PrimitiveType)>,
    pub inferred_return_type: PrimitiveType,
    pub noreturn: bool,
}

impl SignatureSnapshot {
    pub fn of(ssa: &SsaFunction) -> Self {
        Self {
            inferred_params: ssa.inferred_params.clone(),
            inferred_return_type: ssa.inferred_return_type,
            noreturn: ssa.noreturn,
        }
    }
}

/// If `ssa`'s signature differs from `before`, bump its
/// [`SsaFunction::signature_revision`] and return `true`. Idempotent on
/// no-op cycles.
pub fn bump_if_signature_changed(ssa: &mut SsaFunction, before: &SignatureSnapshot) -> bool {
    let after = SignatureSnapshot::of(ssa);
    if &after != before {
        ssa.signature_revision = ssa.signature_revision.saturating_add(1);
        true
    } else {
        false
    }
}

/// Drive the reanalysis worklist over `funcs`.
///
/// `refine` is invoked once per popped function; it should run whatever
/// per-function passes recompute the signature triple (typically
/// `propagate_caller_params` + `ParamInferPass` + `ReturnTypeInferPass` +
/// `NoreturnDetectPass`). The driver handles snapshotting, revision
/// bumping, and caller-enqueue.
///
/// `max_iters == 0` is treated as [`DEFAULT_REANALYSIS_CAP`].
pub fn reanalysis_fixpoint<F>(
    funcs: &mut BTreeMap<u64, SsaFunction>,
    call_graph: &CallGraph,
    max_iters: usize,
    mut refine: F,
) -> Result<ReanalysisReport, PassError>
where
    F: FnMut(&mut SsaFunction) -> Result<(), PassError>,
{
    let cap = if max_iters == 0 {
        DEFAULT_REANALYSIS_CAP
    } else {
        max_iters
    };
    let mut report = ReanalysisReport::default();

    let mut worklist: VecDeque<u64> = funcs.keys().copied().collect();
    let mut enqueued: BTreeSet<u64> = worklist.iter().copied().collect();

    while let Some(addr) = worklist.pop_front() {
        enqueued.remove(&addr);
        if report.iterations >= cap {
            report.hit_cap = true;
            break;
        }
        report.iterations += 1;

        let before = match funcs.get(&addr) {
            Some(ssa) => SignatureSnapshot::of(ssa),
            None => continue,
        };

        if let Some(ssa) = funcs.get_mut(&addr) {
            refine(ssa)?;
        }

        let bumped = match funcs.get_mut(&addr) {
            Some(ssa) => bump_if_signature_changed(ssa, &before),
            None => false,
        };

        if bumped {
            report.total_revisions = report.total_revisions.saturating_add(1);
            for &caller in call_graph.callers_of(addr) {
                if funcs.contains_key(&caller) && enqueued.insert(caller) {
                    worklist.push_back(caller);
                }
            }
        }
    }

    Ok(report)
}

#[cfg(test)]
mod tests {
    use super::*;

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, build_ssa};
    use unlace_ir::xref::build_call_graph;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    fn make_chain(addrs: &[u64]) -> BTreeMap<u64, SsaFunction> {
        // addrs[0] calls addrs[1] calls addrs[2] ...; last is a leaf.
        let mut funcs = BTreeMap::new();
        for (i, &addr) in addrs.iter().enumerate() {
            let mut func = Function::new(format!("f{i}"), BlockId(0), addr);
            let mut bb = BasicBlock::new(BlockId(0));
            if let Some(&next) = addrs.get(i + 1) {
                bb.insns.push(IrInsn::without_output(
                    IrOp::Call,
                    smallvec![Varnode::constant(next, 8)],
                    addr,
                ));
            }
            bb.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                addr + 8,
            ));
            func.insert_block(bb);
            funcs.insert(addr, build_ssa(func));
        }
        funcs
    }

    #[test]
    fn propagation_through_three_function_chain() {
        // A → B → C: when C's return type flips, B (caller of C) must be
        // re-enqueued; when B's flips, A must be re-enqueued.
        let addrs = [0x1000_u64, 0x2000, 0x3000];
        let mut funcs = make_chain(&addrs);
        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = build_call_graph(&ir_funcs);

        let mut visit_order: Vec<u64> = Vec::new();
        let mut visits_for_b = 0;
        let mut visits_for_c = 0;
        let report = reanalysis_fixpoint(&mut funcs, &cg, 20, |ssa| {
            visit_order.push(ssa.function.addr);
            match ssa.function.addr {
                0x3000 => {
                    visits_for_c += 1;
                    if visits_for_c == 1 {
                        ssa.inferred_return_type = PrimitiveType::Int(4);
                    }
                }
                0x2000 => {
                    visits_for_b += 1;
                    if visits_for_b == 2 {
                        ssa.inferred_return_type = PrimitiveType::Int(4);
                    }
                }
                _ => {}
            }
            Ok(())
        })
        .expect("ok");

        assert!(!report.hit_cap, "loop should converge: {report:?}");
        assert_eq!(report.total_revisions, 2);
        let a_visits = visit_order.iter().filter(|&&a| a == 0x1000).count();
        assert!(
            a_visits >= 2,
            "A must be re-visited; visits={visit_order:?}"
        );
        let c_visits = visit_order.iter().filter(|&&a| a == 0x3000).count();
        assert_eq!(c_visits, 1, "C visited only once; got {visit_order:?}");
        assert_eq!(funcs[&0x3000].signature_revision, 1);
        assert_eq!(funcs[&0x2000].signature_revision, 1);
    }

    #[test]
    fn fixpoint_iteration_cap() {
        // Build a chain A → B → C with one extra back-edge: C also calls
        // A. The graph then has a true cycle, so toggling each function's
        // signature on every visit keeps re-enqueuing peers indefinitely
        // and the iteration cap must trip.
        let addrs = [0x1000_u64, 0x2000, 0x3000];
        let mut funcs = make_chain(&addrs);
        // Inject a back-edge: append a Call(A) to C's block.
        {
            let c = funcs.get_mut(&0x3000).expect("c");
            let block = c.function.blocks.values_mut().next().expect("block");
            // Insert before the trailing Return so the CFG stays valid.
            let idx = block.insns.len() - 1;
            block.insns.insert(
                idx,
                IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(0x1000, 8)], 0x3004),
            );
        }
        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = build_call_graph(&ir_funcs);

        // Per-function toggle so each pop of *that function* alternates
        // its signature, guaranteeing a bump on every visit.
        let mut toggles: BTreeMap<u64, bool> = BTreeMap::new();
        let cap = 4;
        let report = reanalysis_fixpoint(&mut funcs, &cg, cap, |ssa| {
            let entry = toggles.entry(ssa.function.addr).or_insert(false);
            *entry = !*entry;
            ssa.inferred_return_type = if *entry {
                PrimitiveType::Int(4)
            } else {
                PrimitiveType::UnsignedInt(4)
            };
            Ok(())
        })
        .expect("ok");

        assert!(
            report.hit_cap,
            "non-converging cycle must hit cap: {report:?}"
        );
        assert_eq!(report.iterations, cap);
        assert!(report.total_revisions >= cap as u64);
    }

    #[test]
    fn no_op_convergence() {
        // Refine closure does nothing → revisions stay at zero, worklist
        // drains in exactly N steps where N = #functions.
        let addrs = [0x1000_u64, 0x2000, 0x3000];
        let mut funcs = make_chain(&addrs);
        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = build_call_graph(&ir_funcs);

        let report = reanalysis_fixpoint(&mut funcs, &cg, 10, |_ssa| Ok(())).expect("ok");

        assert!(!report.hit_cap);
        assert_eq!(report.iterations, addrs.len());
        assert_eq!(report.total_revisions, 0);
        for ssa in funcs.values() {
            assert_eq!(ssa.signature_revision, 0);
        }
    }
}
