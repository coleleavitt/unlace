//! Analysis and optimization passes over the IR (CFG, SSA, propagation, etc.).

pub mod aarch64_pac_bti;
pub mod abi_clobber;
pub mod abi_layout;
pub mod algebraic_simplify;
pub mod alias_analysis;
pub mod alias_categorize;
pub mod analysis_context;
pub mod anti_debug_detect;
pub mod arm_it_block;
pub mod assumption_cache;
pub mod attributor;
pub mod auth_call_resolve;
pub mod bb_align;
pub mod bitfield_idioms;
pub mod bitfield_recovery;
pub mod bmi_idioms;
pub mod bool_coverage;
pub mod bool_simplify;
pub mod boost_recognize;
pub mod bsim_db;
pub mod builtin_recognize;
pub mod byref_detect;
pub mod call_args;
pub mod call_boundary_copyprop;
pub mod call_snapshot;
pub mod caller_param_propagate;
pub mod calling_conv_coverage;
pub mod calling_conv_finalize;
pub mod calling_conv_whole_prog;
pub mod calling_convention;
pub mod cfg_repair;
pub mod cmov_preserve;
pub mod combine_worklist;
pub mod condition_simplify;
pub mod const_fold;
pub mod copy_prop;
pub mod counterexample_refine;
pub mod coverage_ingest;
pub mod cpp_coroutine;
pub mod cpp_lambda;
pub mod cpp_method;
pub mod cpp_stl;
pub mod cpp_variant;
pub mod cpp_vtable;
pub mod crypto_idioms;
pub mod crypto_lib_recognize;
pub mod cse;
pub mod ct_violation;
pub mod cve_classify;
pub mod cwe_detect;
pub mod cxx_eh;
pub mod cxx_vtable_recognize;
pub mod daikon_invariants;
pub mod db_recognize;
pub mod dce;
pub mod dead_flag_elim;
pub mod dead_param_elim;
pub mod dead_store_elim;
pub mod deflat;
pub mod diff_coverage;
pub mod division_idiom;
pub mod dom_update;
pub mod dse_global;
pub mod embed_interp_recognize;
pub mod expression_tree;
pub mod format_magic;
pub mod func_fingerprint;
pub mod func_ptr_table;
pub mod function_analysis_manager;
pub mod function_attrs;
pub mod gcc_cleanup;
pub mod generated_code;
pub mod generated_code_filter;
pub mod global_copy_prop;
pub mod go_closure;
pub mod go_defer;
pub mod go_iface_devirt;
pub mod go_select;
pub mod gui_lib_recognize;
pub mod gvn;
pub mod hir_loop_recovery;
pub mod idiom_recognition;
pub mod indirect_call_resolve;
pub mod indirect_jump_resolve;
pub mod inline_foldback;
pub mod instrument;
pub mod interproc_fixpoint;
pub mod ipa_slice;
pub mod ipa_summary;
pub mod itanium_demangle;
pub mod iv_elim;
pub mod jump_threading;
pub mod junk_code_removal;
pub mod known_bits_analysis;
pub mod known_bits_simplify;
pub mod lazy_lift;
pub mod lazy_value_info;
pub mod lcssa;
pub mod libc_idioms;
pub mod libc_signatures;
pub mod licm;
pub mod live_concrete;
#[cfg(test)]
mod llvm_fixture_tests;
pub mod loop_canonical;
pub mod lvar_collect;
pub mod lvar_lanes;
pub mod memory_ssa_builder;
pub mod memory_ssa_dse;
pub mod memory_ssa_updater;
pub mod mips_delay_slot;
pub mod modulo_idiom;
pub mod msvc_seh;
pub mod nday_correlate;
pub mod noreturn;
pub mod noreturn_propagation;
pub mod nullability;
pub mod nullability_taint;
pub mod objc_blocks;
pub mod objc_byref;
pub mod objc_dispatch;
pub mod op_type_binding;
pub mod opaque_pred;
pub mod opt_remarks;
pub mod packet_struct;
pub mod pass;
pub mod pass_adaptors;
pub mod pass_with_context;
pub mod path_sensitive;
pub mod pgo_outlining;
pub mod pipeline_parser;
pub mod printf_type_infer;
pub mod prologue_elim;
pub mod protobuf_recognize;
pub mod qemu_tcg;
pub mod qt_recognize;
pub mod reanalysis;
pub mod redundant_flag_elim;
pub mod register_coalesce;
pub mod rep_string_idiom;
pub mod rust_async;
pub mod rust_enum;
pub mod rust_panic;
pub mod rust_result;
pub mod rust_vtable;
pub mod scalar_evolution;
pub mod sccp;
pub mod scev_nested;
pub mod serial_recognize;
pub mod simplify_cfg;
pub mod sixty_four_bit_demote;
pub mod sizeof_recognition;
pub mod smc_unwrap;
pub mod source_sink;
pub mod sroa;
pub mod sroa_plan;
pub mod ssa_cache;
pub mod stack_context;
pub mod stack_frame_recovery;
pub mod stack_pointer_tracking;
pub mod stack_vars;
pub mod strength_reduce;
pub mod string_decode_recognize;
pub mod string_hash_switch;
pub mod struct_boundary;
pub mod struct_field_detect;
pub mod struct_field_recovery;
pub mod switch_table_recovery;
pub mod symbolic_heap;
pub mod symex_coverage;
pub mod sysv_eightbyte;
pub mod tail_call;
pub mod tail_duplication;
pub mod taint_engine;
pub mod target_transform;
pub mod type_constraint_solver;
pub mod type_infer;
pub mod union_recovery;
pub mod var_naming;
pub mod vararg_detect;
pub mod variable_merge;
pub mod vm_dispatch_recognize;
pub mod whole_prog_cc;
pub mod whole_prog_type_unify;
pub mod x87_top;

pub use abi_clobber::{
    CallClobber, CallClobberModel, UpperLaneEffect, argument_registers, classify_call_clobber,
};
pub use algebraic_simplify::AlgebraicSimplifyPass;
pub use alias_analysis::{AliasAnalysis, AliasRelation, ModRef};
pub use alias_categorize::AliasCategorizePass;
pub use analysis_context::{AnalysisContext, AnalysisKind, PreservedAnalyses};
pub use assumption_cache::{Assumption, AssumptionCache};
pub use attributor::{merge_summary, propagate_readonly_once};
pub use auth_call_resolve::{AuthCallAnnotation, resolve_auth_calls};
pub use bitfield_idioms::BitfieldIdiomPass;
pub use bitfield_recovery::{BitfieldRecoveryPass, BitfieldSite};
pub use bmi_idioms::BmiIdiomPass;
pub use bool_coverage::BoolCoveragePass;
pub use bool_simplify::BoolSimplifyPass;
pub use builtin_recognize::{
    BuiltinAnnotation, recognize_builtins, recognize_builtins_with_resolver,
};
pub use byref_detect::detect_byref;
pub use call_args::{recover_direct_call_args, recover_direct_call_args_with_param_counts};
pub use call_boundary_copyprop::CallBoundaryCopyPropPass;
pub use call_snapshot::{CallRegisterSnapshot, CallSnapshot, UseSite, collect_call_snapshots};
pub use caller_param_propagate::{
    apply_registry_to_callees, propagate_caller_params, seed_registry_from_funcs,
};
pub use calling_conv_finalize::{CallingConvFinalizePass, FinalizedSignature, finalize_signature};
pub use calling_conv_whole_prog::WholeProgCallingConvPass;
pub use calling_convention::{CallingConventionDetectPass, ParamInferPass, ReturnTypeInferPass};
pub use cfg_repair::CfgRepairPass;
pub use cmov_preserve::CmovPreservePass;
pub use combine_worklist::{CombineWorklist, WorkItem};
pub use condition_simplify::ConditionSimplifyPass;
pub use const_fold::ConstantFoldPass;
pub use copy_prop::CopyPropagationPass;
pub use coverage_ingest::{
    AFL_MAP_SIZE, CoverageError, CoverageMap, LLVM_PROFRAW_MAGIC_BE, LLVM_PROFRAW_MAGIC_LE,
    ProfRaw, parse_afl_coverage, parse_profraw,
};
pub use cpp_coroutine::{CppCoroutinePass, detect_coroutine_sites};
pub use cpp_lambda::{CppLambdaCapturePass, recover_lambda_captures};
pub use cpp_method::{CppMethodPass, ParsedMethod, parse_mangled_method};
pub use cpp_stl::recognize_stl_type;
pub use cpp_variant::CppVariantPass;
pub use cpp_vtable::CppVtablePass;
pub use crypto_idioms::CryptoIdiomPass;
pub use cse::CsePass;
pub use cxx_vtable_recognize::{VtableInfo, recognize_vtables};
pub use daikon_invariants::DaikonInvariantPass;
pub use dce::DeadCodeElimPass;
pub use dead_flag_elim::DeadFlagElimPass;
pub use dead_param_elim::{DeadParamReport, analyze_dead_params};
pub use dead_store_elim::DeadStoreElimPass;
pub use deflat::{CaseSuccessors, FlattenedCfg, detect_flattened_dispatch, recover_original_cfg};
pub use division_idiom::DivisionIdiomPass;
pub use dom_update::DominatorUpdater;
pub use dse_global::DeadStoreElimGlobalPass;
pub use expression_tree::ExpressionTreePass;
pub use format_magic::{MagicCheck, detect_magic_check};
pub use func_fingerprint::{build_feature_vector, fingerprint_function, similarity};
pub use func_ptr_table::{FuncPtrEntry, FuncPtrTable, FuncPtrTablePass, detect_table_loads};
pub use function_analysis_manager::FunctionAnalysisManager;
pub use function_attrs::{
    AttrMap, FunctionAttrs, infer_attrs_batch, infer_attrs_for_function,
    propagate_noreturn as propagate_attrs_noreturn,
};
pub use gcc_cleanup::{CleanupHandler, GccCleanupPass, detect_cleanup_calls};
pub use generated_code::{
    FunctionTag, classify_by_name, classify_functions, classify_plt_stub, classify_wrapper_thunk,
    count_hidden_shown,
};
pub use generated_code_filter::{
    FunctionVisibility, annotation_for_function, classify_pipeline, should_hide_function,
};
pub use global_copy_prop::GlobalCopyPropPass;
pub use go_closure::{ClosureAllocation, ClosureCall, detect_go_closures};
pub use go_defer::{GoDeferSite, detect_go_defer};
pub use go_select::{GoChannelOp, GoChannelOpKind, detect_go_channel_ops};
pub use gvn::GvnPass;
pub use hir_loop_recovery::{CountedLoop, LoopFacts, Reduction, ReductionOp, recover_loop_facts};
pub use idiom_recognition::IdiomRecognitionPass;
pub use indirect_call_resolve::IndirectCallResolvePass;
pub use indirect_jump_resolve::{IndirectJumpResolvePass, collect_jump_table_candidates};
pub use inline_foldback::{InlineFoldback, detect_inlined_calls};
pub use instrument::{
    dump_pass_timings, dump_pass_timings_csv, dump_schedule_audit_csv, pass_should_trace,
    pass_timing_csv_path, pass_timing_enabled, record_pass_timing, run_instrumented,
    schedule_audit_oscillations, schedule_audit_path,
};
pub use interproc_fixpoint::{DEFAULT_INTERPROC_CAP, InterprocReport, run_interproc_fixpoint};
pub use ipa_slice::{IpaSlicePass, ProgramSlice, SliceCriterion};
pub use ipa_summary::{
    FunctionSummary, FunctionSummaryRegistry, build_summary_registry, summarize_function,
};
pub use itanium_demangle::{VtableHeader, demangle_itanium, read_vtable_header};
pub use iv_elim::IvElimPass;
pub use jump_threading::{JumpThreadCandidate, collect_jump_thread_candidates};
pub use junk_code_removal::JunkCodeRemovalPass;
pub use known_bits_analysis::{KnownBitsMap, compute_known_bits};
pub use known_bits_simplify::KnownBitsSimplifyPass;
pub use lazy_value_info::{FactSite, LazyValueInfo};
pub use lcssa::{LcssaDiagnostic, diagnose_lcssa};
pub use libc_idioms::{LibcKind, annotate_libc_calls, recognize_libc};
pub use licm::{LicmPass, NaturalLoop, find_natural_loops};
pub use loop_canonical::{LoopCanonicalDiagnostic, diagnose_loop_canonical_form};
pub use lvar_collect::LvarCollectPass;
pub use lvar_lanes::{
    LaneDecision, LaneSite, RegisterLane, RegisterLaneGroup, analyze_register_lanes,
};
pub use memory_ssa_builder::{AccessSite, MemorySsaMap, build_memory_ssa, clobber_for_load};
pub use memory_ssa_dse::MemorySsaDsePass;
pub use memory_ssa_updater::MemorySsaUpdater;
pub use modulo_idiom::ModuloIdiomPass;
pub use nday_correlate::{NdayHit, NdayPattern, match_against_binary as match_nday_patterns};
pub use noreturn::NoreturnDetectPass;
pub use noreturn_propagation::{DEFAULT_PROPAGATE_CAP, propagate_noreturn};
pub use nullability::{Nullability, infer_param_nullability};
pub use nullability_taint::{
    TaintWarning, analyze_taint, infer_nullability, is_taint_sink, is_taint_source,
};
pub use objc_blocks::{BLOCK_ISA_SYMBOLS, BlockLiteral, detect_objc_blocks};
pub use objc_byref::{ByrefBox, apply_objc_byref, detect_objc_byref_boxes};
pub use objc_dispatch::ObjcDispatchPass;
pub use op_type_binding::{OpTypeBindingPass, render_enum_const, render_field_access};
pub use opaque_pred::opaque_predicate_detect;
pub use opt_remarks::{OptimizationRemark, RemarkKind, RemarkSink};
pub use packet_struct::{PacketStruct, detect_packet_struct};
pub use pass::{
    AllowedBackedge, DEFAULT_OUTER_FIXEDPOINT_CAP, DefIndex, OuterFixedpointReport, Pass,
    PassDescriptor, PassError, PassPhase, PhaseViolation, canonical_pipeline_backedge_exceptions,
    canonical_pipeline_descriptor, run_outer_fixedpoint, run_to_fixedpoint, ssa_type_signature,
    validate_named_phase_monotonicity, validate_named_phase_monotonicity_with_exceptions,
    validate_phase_monotonicity,
};
pub use pass_adaptors::{AdaptedPass, PassScope};
pub use pass_with_context::{PassAdapter, PassWithContext, run_to_fixedpoint_with_context};
pub use path_sensitive::PathSensitivePass;
pub use pgo_outlining::{OutlinedFragment, PgoOutliningPass};
pub use pipeline_parser::{ParsedPipeline, parse_pipeline};
pub use prologue_elim::PrologueElimPass;
pub use reanalysis::{
    DEFAULT_REANALYSIS_CAP, ReanalysisReport, SignatureSnapshot, bump_if_signature_changed,
    reanalysis_fixpoint,
};
pub use redundant_flag_elim::RedundantFlagElimPass;
pub use register_coalesce::RegisterCoalescePass;
pub use rep_string_idiom::{
    RepStringIdiomPass, RepStringKind, RepStringLoop, detect_rep_string_loops,
};
pub use rust_async::{AsyncStateMachine, RustAsyncPass, detect_async_state_machines};
pub use rust_enum::RustEnumPass;
pub use rust_panic::RustPanicPass;
pub use rust_result::{RustTaggedUnion, detect_rust_tagged_unions};
pub use rust_vtable::RustVtablePass;
pub use scalar_evolution::{
    AffineIv, LoopExitFact, LoopExitPredicate, LoopScevInfo, ScevExpr, TriangularSumReduction,
    analyze_loop_scevs, compute_trip_count, derive_scev_expr, detect_triangular_sum_reduction,
};
pub use sccp::SccpPass;
pub use scev_nested::{
    NoWrapFlags, contains_addrec, loop_nest_depth, nested_add_rec, scev_add, scev_mul_const,
};
pub use serial_recognize::{SerialKind, recognize_serial_api};
pub use simplify_cfg::{CfgSimplifyAction, collect_simplify_cfg_actions};
pub use sixty_four_bit_demote::SixtyFourBitDemotePass;
pub use sizeof_recognition::{SizeofRecognitionPass, recognize_with_resolver};
pub use sroa::{StackSlotFragment, StackSlotPartition, collect_stack_slot_partitions};
pub use sroa_plan::{SroaRewriteAction, plan_sroa_rewrites};
pub use stack_frame_recovery::recover_stack_frame;
pub use stack_pointer_tracking::StackPointerTrackingPass;
pub use stack_vars::{StackOffsetSnapshotPass, StackVarRecoveryPass};
pub use strength_reduce::StrengthReducePass;
pub use string_hash_switch::{
    HashFamily, StringHashSwitchPass, crc32 as string_hash_crc32, crc32c as string_hash_crc32c,
    djb2 as string_hash_djb2, djb2a as string_hash_djb2a, fnv1 as string_hash_fnv1,
    fnv1a as string_hash_fnv1a, fnv1a32 as string_hash_fnv1a32, identify_hash_pattern,
    is_crc32_pattern, is_crc32c_pattern, is_djb2_pattern, is_fnv1_pattern, is_fnv1a_pattern,
    is_java_string_pattern, is_jenkins_oaat_pattern, is_murmur3_pattern, is_sdbm_pattern,
    java_string_hash as string_hash_java_string, jenkins_oaat as string_hash_jenkins_oaat,
    murmur3 as string_hash_murmur3, sdbm as string_hash_sdbm,
};
pub use struct_field_detect::StructFieldDetectPass;
pub use struct_field_recovery::recover_structs;
pub use symbolic_heap::{HeapRegion, MemAccess, SymbolicHeapPass};
pub use sysv_eightbyte::{EightbyteClass, FieldKind as SysvFieldKind, classify_aggregate};
pub use tail_call::TailCallDetectPass;
pub use tail_duplication::TailDuplicationPass;
pub use taint_engine::{TaintEnginePass, TaintFinding, TaintSink, TaintSource, propagate_taint};
pub use target_transform::{TargetTransformInfo, TransformBenefit};
pub use type_constraint_solver::{
    Constraint, PolyTypeBounds, PolyTypeSolution, TypeCapability, TypeConstraintSolverPass,
    collect_and_apply as solve_type_constraints, collect_constraints, solve_constraints,
    solve_polymorphic_constraints,
};
pub use var_naming::{VarClassification, VarNamingPass, VarRole, classify_variables, suggest_name};
pub use vararg_detect::{
    detect_variadic_callees, parse_format_string, parse_printf_format_strings,
};
pub use variable_merge::VariableMergePass;
pub use whole_prog_cc::{DEFAULT_WHOLE_PROG_CC_CAP, WholeProgramCcReport, run_whole_prog_cc};
pub use whole_prog_type_unify::{ProgramTypeUnifier, unify_structs_across_program};
pub use x87_top::rewrite_x87_top;

/// Names of the passes scheduled in the default per-function pipeline's
/// inner fixed-point cluster, in execution order. Mirrors the schedule
/// assembled in `unlace_cli::pipeline::run_passes_with_report`; tests
/// assert membership here so the schedule can be inspected without
/// spinning up a binary image. Keep in sync with the CLI orchestrator.
pub fn default_pass_names() -> Vec<&'static str> {
    vec![
        "alias-categorize",
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
        "bool-simplify",
        "known-bits-simplify",
        "CmovPreservePass",
        "call-boundary-copyprop",
        "redundant-flag-elim",
        "algebraic-simplify",
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
        use unlace_ir::ssa::{PrimitiveType, SsaVarnode};

        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        // Collect SSA varnodes (excluding the trailing Return's constant input)
        // so the cycle has fresh keys to add types for on each round.
        let mut keys: Vec<SsaVarnode> = ssa.var_map.values().copied().collect();
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
        use unlace_ir::ssa::{PrimitiveType, SsaVarnode};

        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        // Pick any SSA varnode we can keep flipping the type of.
        let any_sv: SsaVarnode = ssa
            .var_map
            .values()
            .copied()
            .next()
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
        use unlace_ir::ssa::{PrimitiveType, SsaVarnode};

        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);
        let mut ssa = make_single_block_ssa(vec![insn]);

        let before = ssa_type_signature(&ssa);

        let any_sv: SsaVarnode = ssa
            .var_map
            .values()
            .copied()
            .next()
            .expect("at least one SSA varnode");
        ssa.var_types.insert(any_sv, PrimitiveType::Int(4));

        let after = ssa_type_signature(&ssa);
        assert_ne!(
            before, after,
            "adding a primitive type fact must change the signature"
        );
    }
}
