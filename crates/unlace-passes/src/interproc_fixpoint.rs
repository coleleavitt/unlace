//! Cross-function (whole-program) fixed-point loop.
//!
//! The per-function pipeline already converges within itself. This module
//! adds the *outer outer* loop that re-runs the per-function pipeline once
//! a peer function's signature has changed — typically after
//! [`propagate_caller_params`](crate::caller_param_propagate::propagate_caller_params)
//! has refined a callee's parameter types from caller context.
//!
//! The loop terminates when neither (a) any function's signature changed
//! nor (b) any per-function `external_signatures` map differs from the
//! global registry. A hard iteration cap (default
//! [`DEFAULT_INTERPROC_CAP`]) prevents pathological oscillation.
//!
//! Mirrors IDA's `auto_apply_type` driver
//! (`references/ida/idalib/all/auto_apply_type.c`), which iterates
//! `apply_callee_tinfo` plus the per-function analyzer until quiescence.

use std::collections::BTreeMap;

use unlace_ir::ssa::{FunctionSignature, FunctionSignatureRegistry, PrimitiveType, SsaFunction};
use unlace_ir::xref::{CallGraph, build_call_graph};

use crate::caller_param_propagate::{
    apply_registry_to_callees, propagate_caller_params, seed_registry_from_funcs,
};
use crate::pass::PassError;

pub const DEFAULT_INTERPROC_CAP: usize = 5;

/// Snapshot of the cross-function loop's progress.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct InterprocReport {
    /// Number of outer iterations actually performed.
    pub iterations: usize,
    /// True iff the iteration cap was hit before convergence.
    pub hit_cap: bool,
    /// Number of distinct callee signatures that mutated across the run.
    pub signature_changes: usize,
}

/// Build a per-function signature snapshot keyed by entry address.
fn snapshot_signatures(funcs: &BTreeMap<u64, SsaFunction>) -> FunctionSignatureRegistry {
    let mut out = BTreeMap::new();
    for (&addr, ssa) in funcs {
        let sig = FunctionSignature {
            calling_convention: ssa.calling_convention,
            return_type: ssa.inferred_return_type,
            param_types: ssa.inferred_params.iter().map(|(_, ty)| *ty).collect(),
        };
        out.insert(addr, sig);
    }
    out
}

/// Drive the cross-function fixed-point loop.
///
/// `per_function` runs the existing single-function analysis pipeline
/// (everything from calling-convention detect through type-infer). It is
/// invoked once per function per outer iteration.
///
/// Returns when either (a) one full sweep yields no signature change *and*
/// no further registry deltas, or (b) `cap` iterations have been performed.
pub fn run_interproc_fixpoint<F>(
    funcs: &mut BTreeMap<u64, SsaFunction>,
    cap: usize,
    mut per_function: F,
) -> Result<InterprocReport, PassError>
where
    F: FnMut(&mut SsaFunction) -> Result<(), PassError>,
{
    use unlace_ir::xref::compute_sccs;

    let mut report = InterprocReport::default();
    let mut registry: FunctionSignatureRegistry = FunctionSignatureRegistry::new();

    // Build the call graph and compute SCCs for bottom-up traversal.
    // SCCs are recomputed each round in case the call graph mutates
    // (e.g. indirect calls resolved to direct ones).
    for iter in 0..cap.max(1) {
        report.iterations = iter + 1;

        let prev_sigs = snapshot_signatures(funcs);

        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg: CallGraph = build_call_graph(&ir_funcs);
        let all_addrs: Vec<u64> = funcs.keys().copied().collect();
        let sccs = compute_sccs(&cg, &all_addrs);

        // Process functions in SCC reverse-topological order (leaves first).
        // For each SCC, run every function in the component so that mutually-
        // recursive groups see each other's latest signatures within the same
        // outer round.
        for scc in &sccs {
            for &addr in scc {
                if let Some(ssa) = funcs.get_mut(&addr) {
                    ssa.external_signatures = registry.clone();
                    per_function(ssa)?;
                }
            }
        }

        let new_sigs = snapshot_signatures(funcs);

        seed_registry_from_funcs(funcs, &mut registry);
        let registry_changed = propagate_caller_params(funcs, &cg, &mut registry);
        let applied = apply_registry_to_callees(funcs, &registry);

        let sig_delta = signatures_diff_count(&prev_sigs, &new_sigs);
        report.signature_changes = report.signature_changes.saturating_add(sig_delta);

        if sig_delta == 0 && !registry_changed && !applied {
            return Ok(report);
        }
    }

    report.hit_cap = true;
    Ok(report)
}

fn signatures_diff_count(a: &FunctionSignatureRegistry, b: &FunctionSignatureRegistry) -> usize {
    let mut count = 0usize;
    for (addr, sig) in b {
        match a.get(addr) {
            Some(prev) if prev == sig => {}
            _ => count += 1,
        }
    }
    count
}

/// Convenience: extract the inferred return type for a single function
/// (used by tests).
#[allow(dead_code)]
pub fn return_type_of(funcs: &BTreeMap<u64, SsaFunction>, addr: u64) -> PrimitiveType {
    funcs
        .get(&addr)
        .map(|f| f.inferred_return_type)
        .unwrap_or(PrimitiveType::Unknown)
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::{CallingConvention, PrimitiveType, VarnodeSlot, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    const RDI: u64 = 56;

    /// Build a chain `A → B → C` of three System V functions where:
    ///   * C: leaf, sets RAX = const(0xdeadbeef pointer).
    ///   * B: calls C, returns whatever it received in RDI.
    ///   * A: calls B with RDI = const(99).
    fn make_chain() -> BTreeMap<u64, SsaFunction> {
        let a_addr = 0x1000;
        let b_addr = 0x2000;
        let c_addr = 0x3000;

        let mut funcs = BTreeMap::new();

        // ----- function A (caller of B) -----
        {
            let mut func = Function::new("a", BlockId(0), a_addr);
            let mut bb = BasicBlock::new(BlockId(0));
            let rdi = Varnode::reg(RDI, 8);
            bb.insns.push(IrInsn::with_output(
                IrOp::Copy,
                rdi,
                smallvec![Varnode::constant(99, 4)],
                a_addr,
            ));
            bb.insns.push(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(b_addr, 8)],
                a_addr + 4,
            ));
            bb.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                a_addr + 8,
            ));
            func.insert_block(bb);
            let mut ssa = build_ssa(func);
            ssa.calling_convention = CallingConvention::SystemV;
            if let Some(&sv) = ssa.var_map.get(&(BlockId(0), 0, VarnodeSlot::Output)) {
                ssa.var_types.insert(sv, PrimitiveType::Int(4));
            }
            funcs.insert(a_addr, ssa);
        }

        // ----- function B (calls C) -----
        {
            let mut func = Function::new("b", BlockId(0), b_addr);
            let mut bb = BasicBlock::new(BlockId(0));
            // B's body just calls C and returns. Empty for type-flow purposes.
            bb.insns.push(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(c_addr, 8)],
                b_addr,
            ));
            bb.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                b_addr + 8,
            ));
            func.insert_block(bb);
            let mut ssa = build_ssa(func);
            ssa.calling_convention = CallingConvention::SystemV;
            funcs.insert(b_addr, ssa);
        }

        // ----- function C (leaf) -----
        {
            let mut func = Function::new("c", BlockId(0), c_addr);
            let mut bb = BasicBlock::new(BlockId(0));
            bb.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                c_addr,
            ));
            func.insert_block(bb);
            let mut ssa = build_ssa(func);
            ssa.calling_convention = CallingConvention::SystemV;
            // Pretend C's return type was inferred as Ptr from its body.
            ssa.inferred_return_type = PrimitiveType::Ptr;
            funcs.insert(c_addr, ssa);
        }

        funcs
    }

    /// A trivial per-function pass that does nothing — used to verify the
    /// outer loop behaviour in isolation.
    fn no_op_pass(_ssa: &mut SsaFunction) -> Result<(), PassError> {
        Ok(())
    }

    #[test]
    fn fixpoint_propagates_param_through_chain() {
        let mut funcs = make_chain();
        let report = run_interproc_fixpoint(&mut funcs, 5, no_op_pass).unwrap();
        assert!(report.iterations >= 1);
        assert!(!report.hit_cap, "must converge well under 5 iterations");

        // After the loop, B should know its first parameter is Int(4) (from
        // A's call site), even though B's body has no read of RDI.
        let b = &funcs[&0x2000];
        let b_sig = b
            .external_signatures
            .get(&0x2000)
            .expect("B's own signature should be registered");
        assert!(!b_sig.param_types.is_empty(), "B must have param 0");
        assert_eq!(b_sig.param_types[0], PrimitiveType::Int(4));

        // C's body said it returns a Ptr; that should remain visible in the
        // registry that flows to B.
        let c_sig = b
            .external_signatures
            .get(&0x3000)
            .expect("C's signature should be visible to B");
        assert_eq!(c_sig.return_type, PrimitiveType::Ptr);
    }

    #[test]
    fn fixpoint_caps_at_max_iterations() {
        let mut funcs = make_chain();

        // A pass that *forces* a difference every iteration would never
        // converge — verify the cap stops it.
        let mut counter = 0u64;
        let report = run_interproc_fixpoint(&mut funcs, 3, |ssa| {
            counter += 1;
            // Mutate something each call to keep the snapshot diff non-zero.
            ssa.inferred_return_type = if counter % 2 == 0 {
                PrimitiveType::Int(4)
            } else {
                PrimitiveType::Ptr
            };
            Ok(())
        })
        .unwrap();

        assert_eq!(report.iterations, 3);
        assert!(report.hit_cap);
    }

    #[test]
    fn fixpoint_converges_immediately_on_no_op() {
        // No call sites + no-op pass ⇒ converges in a single sweep.
        let mut funcs = BTreeMap::new();
        let mut func = Function::new("solo", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1000,
        ));
        func.insert_block(bb);
        funcs.insert(0x1000, build_ssa(func));

        let report = run_interproc_fixpoint(&mut funcs, 5, no_op_pass).unwrap();
        assert!(report.iterations <= 2);
        assert!(!report.hit_cap);
    }
}
