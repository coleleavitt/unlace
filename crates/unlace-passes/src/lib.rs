//! Analysis and optimization passes over the IR (CFG, SSA, propagation, etc.).

pub mod auth_call_resolve;
pub mod bmi_idioms;
pub mod byref_detect;
pub mod call_boundary_copyprop;
pub mod caller_param_propagate;
pub mod calling_convention;
pub mod calling_conv_finalize;
pub mod indirect_call_resolve;
pub mod interproc_fixpoint;
pub mod vararg_detect;
pub mod condition_simplify;
pub mod const_fold;
pub mod copy_prop;
pub mod cpp_stl;
pub mod cpp_vtable;
pub mod cse;
pub mod dce;
pub mod dead_flag_elim;
pub mod dead_store_elim;
pub mod dse_global;
pub mod division_idiom;
pub mod expression_tree;
pub mod global_copy_prop;
pub mod go_closure;
pub mod go_select;
pub mod gvn;
pub mod idiom_recognition;
pub mod libc_signatures;
pub mod libc_idioms;
pub mod iv_elim;
pub mod licm;
pub mod strength_reduce;
pub mod modulo_idiom;
pub mod noreturn;
pub mod noreturn_propagation;
pub mod objc_blocks;
pub mod objc_byref;
pub mod objc_dispatch;
pub mod op_type_binding;
pub mod pass;
pub mod prologue_elim;
pub mod reanalysis;
pub mod redundant_flag_elim;
pub mod register_coalesce;
pub mod rust_enum;
pub mod rust_panic;
pub mod rust_vtable;
pub mod sccp;
pub mod printf_type_infer;
pub mod rep_string_idiom;
pub mod sizeof_recognition;
pub mod stack_frame_recovery;
pub mod stack_pointer_tracking;
pub mod stack_vars;
pub mod string_hash_switch;
pub mod struct_field_detect;
pub mod struct_field_recovery;
pub mod var_naming;
pub mod tail_call;
pub mod tail_duplication;
pub mod type_constraint_solver;
pub mod type_infer;
pub mod variable_merge;

pub use auth_call_resolve::{AuthCallAnnotation, resolve_auth_calls};
pub use bmi_idioms::BmiIdiomPass;
pub use byref_detect::detect_byref;
pub use call_boundary_copyprop::CallBoundaryCopyPropPass;
pub use caller_param_propagate::{
    apply_registry_to_callees, propagate_caller_params, seed_registry_from_funcs,
};
pub use indirect_call_resolve::IndirectCallResolvePass;
pub use op_type_binding::{OpTypeBindingPass, render_enum_const, render_field_access};
pub use interproc_fixpoint::{
    DEFAULT_INTERPROC_CAP, InterprocReport, run_interproc_fixpoint,
};
pub use vararg_detect::{
    detect_variadic_callees, parse_format_string, parse_printf_format_strings,
};
pub use calling_convention::{CallingConventionDetectPass, ParamInferPass, ReturnTypeInferPass};
pub use calling_conv_finalize::{
    CallingConvFinalizePass, FinalizedSignature, finalize_signature,
};
pub use condition_simplify::ConditionSimplifyPass;
pub use const_fold::ConstantFoldPass;
pub use copy_prop::CopyPropagationPass;
pub use cpp_stl::recognize_stl_type;
pub use cpp_vtable::CppVtablePass;
pub use cse::CsePass;
pub use dce::DeadCodeElimPass;
pub use dead_flag_elim::DeadFlagElimPass;
pub use dead_store_elim::DeadStoreElimPass;
pub use dse_global::DeadStoreElimGlobalPass;
pub use division_idiom::DivisionIdiomPass;
pub use expression_tree::ExpressionTreePass;
pub use global_copy_prop::GlobalCopyPropPass;
pub use go_closure::{ClosureAllocation, ClosureCall, detect_go_closures};
pub use go_select::{GoChannelOp, GoChannelOpKind, detect_go_channel_ops};
pub use gvn::GvnPass;
pub use idiom_recognition::IdiomRecognitionPass;
pub use iv_elim::IvElimPass;
pub use libc_idioms::{LibcKind, annotate_libc_calls, recognize_libc};
pub use licm::{LicmPass, NaturalLoop, find_natural_loops};
pub use strength_reduce::StrengthReducePass;
pub use modulo_idiom::ModuloIdiomPass;
pub use noreturn::NoreturnDetectPass;
pub use noreturn_propagation::{DEFAULT_PROPAGATE_CAP, propagate_noreturn};
pub use objc_blocks::{BLOCK_ISA_SYMBOLS, BlockLiteral, detect_objc_blocks};
pub use objc_byref::{ByrefBox, apply_objc_byref, detect_objc_byref_boxes};
pub use objc_dispatch::ObjcDispatchPass;
pub use pass::{
    DEFAULT_OUTER_FIXEDPOINT_CAP, OuterFixedpointReport, Pass, PassError, run_outer_fixedpoint,
    run_to_fixedpoint, ssa_type_signature,
};
pub use prologue_elim::PrologueElimPass;
pub use reanalysis::{
    DEFAULT_REANALYSIS_CAP, ReanalysisReport, SignatureSnapshot, bump_if_signature_changed,
    reanalysis_fixpoint,
};
pub use redundant_flag_elim::RedundantFlagElimPass;
pub use register_coalesce::RegisterCoalescePass;
pub use rust_enum::RustEnumPass;
pub use rust_panic::RustPanicPass;
pub use rust_vtable::RustVtablePass;
pub use sccp::SccpPass;
pub use sizeof_recognition::{SizeofRecognitionPass, recognize_with_resolver};
pub use stack_frame_recovery::recover_stack_frame;
pub use stack_pointer_tracking::StackPointerTrackingPass;
pub use stack_vars::{StackOffsetSnapshotPass, StackVarRecoveryPass};
pub use string_hash_switch::{
    StringHashSwitchPass, crc32 as string_hash_crc32, djb2 as string_hash_djb2,
    fnv1a as string_hash_fnv1a,
};
pub use struct_field_detect::StructFieldDetectPass;
pub use struct_field_recovery::recover_structs;
pub use var_naming::{VarClassification, VarNamingPass, VarRole, classify_variables, suggest_name};
pub use tail_call::TailCallDetectPass;
pub use tail_duplication::TailDuplicationPass;
pub use type_constraint_solver::{
    Constraint, TypeConstraintSolverPass, collect_and_apply as solve_type_constraints,
    collect_constraints, solve_constraints,
};
pub use variable_merge::VariableMergePass;

/// Names of the passes scheduled in the default per-function pipeline's
/// inner fixed-point cluster, in execution order. Mirrors the schedule
/// assembled in `unlace_cli::pipeline::run_passes_with_report`; tests
/// assert membership here so the schedule can be inspected without
/// spinning up a binary image. Keep in sync with the CLI orchestrator.
pub fn default_pass_names() -> Vec<&'static str> {
    vec![
        "constant-fold",
        "copy-propagation",
        "global-copy-propagation",
        "dce",
        "sccp",
        "cse",
        "gvn",
        "bmi-idioms",
        "licm",
        "iv-elim",
        "strength-reduce",
        "idiom-recognition",
        "condition-simplify",
    ]
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use crate::{
        ConstantFoldPass, CopyPropagationPass, run_outer_fixedpoint, run_to_fixedpoint,
        ssa_type_signature,
    };

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> unlace_ir::ssa::SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn test_fixedpoint_iteration() {
        // INT_ADD c3, c5 => v2 (will fold to COPY c8)
        // COPY v2 => v3 (copy prop will replace v3 uses with c8 after fold)
        // INT_ADD v3, c2 => v4 (after prop: INT_ADD c8, c2 => will fold to COPY c10)
        let v2 = Varnode::unique(0, 4);
        let v3 = Varnode::unique(4, 4);
        let v4 = Varnode::unique(8, 4);
        let c3 = Varnode::constant(3, 4);
        let c5 = Varnode::constant(5, 4);
        let c2 = Varnode::constant(2, 4);

        let insn1 = IrInsn::with_output(IrOp::IntAdd, v2, smallvec![c3, c5], 0x1000);
        let insn2 = IrInsn::with_output(IrOp::Copy, v3, smallvec![v2], 0x1004);
        let insn3 = IrInsn::with_output(IrOp::IntAdd, v4, smallvec![v3, c2], 0x1008);

        let mut ssa = make_single_block_ssa(vec![insn1, insn2, insn3]);

        let fold = ConstantFoldPass;
        let prop = CopyPropagationPass;
        let passes: &[&dyn crate::Pass] = &[&fold, &prop];

        let total = run_to_fixedpoint(passes, &mut ssa).expect("fixedpoint should succeed");
        assert!(total >= 2, "expected at least 2 change-rounds, got {total}");

        let block = ssa.function.blocks.values().next().expect("has block");

        // insn1 should be folded: COPY c8
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 8);

        // insn3 should be folded: COPY c10
        assert_eq!(block.insns[2].op, IrOp::Copy);
        assert_eq!(block.insns[2].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[2].inputs[0].offset, 10);
    }

    #[test]
    fn test_fixedpoint_terminates_with_no_change() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);

        let fold = ConstantFoldPass;
        let prop = CopyPropagationPass;
        let passes: &[&dyn crate::Pass] = &[&fold, &prop];

        let total = run_to_fixedpoint(passes, &mut ssa).expect("fixedpoint should succeed");
        assert_eq!(total, 0);
    }

    /// The outer fixed-point loop must converge in a single iteration when
    /// nothing changes — the IR has no structural simplifications and no
    /// type-state to recover.
    #[test]
    fn test_outer_fixedpoint_converges_immediately_when_idempotent() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        let report = run_outer_fixedpoint(&mut ssa, 5, |_ssa, _iter| Ok(())).expect("ok");

        // No-op cycle: ran once, signature unchanged, didn't hit the cap.
        assert_eq!(report.iterations, 1);
        assert!(!report.hit_cap);
        assert_eq!(report.changed_per_iteration, vec![false]);
    }

    /// Synthesised cascade: the cycle is "discover one new type fact per
    /// iteration". This forces re-runs because the type-signature keeps
    /// shifting, mirroring the real-world cascade where IR simplification
    /// reveals new types and new types unlock more simplification. The
    /// outer loop must observe the change after each iteration and only
    /// stop once the closure stops mutating type state.
    #[test]
    fn test_outer_fixedpoint_re_runs_on_type_changes() {
        use unlace_ir::ssa::{PrimitiveType, SsaVarnode, VarnodeSlot};

        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        // Collect SSA varnodes (excluding the trailing Return's constant input)
        // so the cycle has fresh keys to add types for on each round.
        let mut keys: Vec<SsaVarnode> = ssa
            .var_map
            .iter()
            .filter_map(|((_, _, slot), sv)| match slot {
                VarnodeSlot::Output | VarnodeSlot::Input(_) => Some(*sv),
            })
            .collect();
        keys.sort();
        keys.dedup();
        assert!(
            keys.len() >= 3,
            "need at least 3 SSA varnodes to drive 3 cycles, got {}",
            keys.len()
        );

        // Pre-clear so we definitely add new entries.
        ssa.var_types.clear();

        let report = run_outer_fixedpoint(&mut ssa, 5, |func, iter| {
            // Add one new type fact per round, drawn from `keys`. After
            // round N=keys.len() the cycle is a no-op and the loop must
            // converge.
            if let Some(sv) = keys.get(iter) {
                func.var_types.entry(*sv).or_insert(PrimitiveType::Int(4));
            }
            Ok(())
        })
        .expect("ok");

        // Cycles 0..keys.len() each added a new type ⇒ signature changed.
        // Cycle keys.len() added nothing new ⇒ signature stable, loop exits.
        let expected_iters = (keys.len() + 1).min(5);
        assert_eq!(
            report.iterations, expected_iters,
            "expected {expected_iters} outer iterations, got {}",
            report.iterations
        );
        assert!(
            !report.hit_cap,
            "loop should have converged before hitting the cap, but hit_cap=true"
        );
        // The final iteration must report `changed=false` (that's why we exited).
        assert_eq!(report.changed_per_iteration.last(), Some(&false));
        // Everything before the last iteration *did* change.
        for (i, changed) in report
            .changed_per_iteration
            .iter()
            .take(report.iterations - 1)
            .enumerate()
        {
            assert!(*changed, "iteration {i} should have reported a change");
        }
    }

    /// Iteration cap must trip when the cycle never converges. We simulate
    /// a runaway by perturbing a different `var_types` entry every round.
    #[test]
    fn test_outer_fixedpoint_iteration_cap_prevents_runaway() {
        use unlace_ir::ssa::{PrimitiveType, SsaVarnode, VarnodeSlot};

        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        // Pick any SSA varnode we can keep flipping the type of.
        let any_sv: SsaVarnode = ssa
            .var_map
            .iter()
            .find_map(|((_, _, slot), sv)| match slot {
                VarnodeSlot::Output | VarnodeSlot::Input(_) => Some(*sv),
            })
            .expect("at least one SSA varnode");

        let cap = 3;
        let report = run_outer_fixedpoint(&mut ssa, cap, |func, iter| {
            // Toggle the type every iteration so the signature never stabilises.
            let ty = if iter % 2 == 0 {
                PrimitiveType::Int(4)
            } else {
                PrimitiveType::UnsignedInt(4)
            };
            func.var_types.insert(any_sv, ty);
            Ok(())
        })
        .expect("outer-fp must not error on cap");

        assert_eq!(report.iterations, cap, "loop must run exactly `cap` times");
        assert!(
            report.hit_cap,
            "non-converging cycle must mark hit_cap=true"
        );
        assert_eq!(report.changed_per_iteration.len(), cap);
        // Every iteration changed (by construction).
        assert!(report.changed_per_iteration.iter().all(|c| *c));
    }

    /// `max_iters = 0` is treated as 1 — we always do at least one cycle so
    /// callers can't accidentally skip the pipeline.
    #[test]
    fn test_outer_fixedpoint_zero_max_iters_runs_at_least_once() {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::Copy, out, smallvec![r0], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        let mut runs = 0usize;
        let report = run_outer_fixedpoint(&mut ssa, 0, |_func, _iter| {
            runs += 1;
            Ok(())
        })
        .expect("ok");

        assert_eq!(runs, 1);
        assert_eq!(report.iterations, 1);
    }

    /// `ssa_type_signature` must be stable across re-computation on
    /// unchanged state — otherwise the outer loop would falsely loop forever.
    #[test]
    fn test_ssa_type_signature_is_deterministic() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let ssa = make_single_block_ssa(vec![insn]);

        let s1 = ssa_type_signature(&ssa);
        let s2 = ssa_type_signature(&ssa);
        assert_eq!(s1, s2);
    }

    /// Mutating `var_types` (the primitive type lattice) must change the signature,
    /// so the outer loop sees type-recovery progress as a "re-run me" signal.
    #[test]
    fn test_ssa_type_signature_reflects_var_types_changes() {
        use unlace_ir::ssa::{PrimitiveType, SsaVarnode, VarnodeSlot};

        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        let before = ssa_type_signature(&ssa);

        let any_sv: SsaVarnode = ssa
            .var_map
            .iter()
            .find_map(|((_, _, slot), sv)| match slot {
                VarnodeSlot::Output | VarnodeSlot::Input(_) => Some(*sv),
            })
            .expect("at least one SSA varnode");
        ssa.var_types.insert(any_sv, PrimitiveType::Int(4));

        let after = ssa_type_signature(&ssa);
        assert_ne!(
            before, after,
            "adding a primitive type fact must change the signature"
        );
    }
}
