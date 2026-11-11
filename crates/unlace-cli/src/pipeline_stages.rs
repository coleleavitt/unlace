//! pipeline: stages.

use super::*;

pub(super) fn known_struct_types(ssa: &SsaFunction) -> Vec<Type> {
    let mut structs: Vec<Type> = ssa.composite_var_types.values().cloned().collect();
    structs.extend(ssa.inferred_structs.values().cloned());
    structs
}

/// Stage 1 (M_GENERATED): IR-level fixed-point cluster.
/// Runs ConstFold, CopyProp, SCCP, CSE, GVN, LICM, IV-elim, idioms,
/// and condition simplification to convergence.
pub(super) fn pipeline_stage_ir_fixedpoint(
    ssa: &mut SsaFunction,
    opts: &PassOptions,
) -> Result<usize, unlace_passes::PassError> {
    let alias_pass = AliasCategorizePass::new();
    let fold_pass = ConstantFoldPass;
    let prop_pass = CopyPropagationPass;
    let gprop_pass = GlobalCopyPropPass;
    let dce_pass = DeadCodeElimPass;
    let sccp_pass = SccpPass { limits: opts.sccp };
    let branch_fold_pass = ConstBranchFoldPass;
    let cse_pass = CsePass;
    let gvn_pass = GvnPass;
    let licm_pass = LicmPass;
    let iv_elim_pass = IvElimPass {
        limits: opts.iv_opt,
    };
    let strength_reduce_pass = StrengthReducePass {
        limits: opts.iv_opt,
    };
    let idiom_pass = IdiomRecognitionPass;
    let bmi_pass = BmiIdiomPass;
    let cond_pass = ConditionSimplifyPass;
    let bool_pass = BoolSimplifyPass;
    let known_bits_pass = KnownBitsSimplifyPass;
    let cmov_pass = unlace_passes::CmovPreservePass;
    let call_bound_pass = CallBoundaryCopyPropPass;
    let red_flag_pass = RedundantFlagElimPass;
    let algebraic_pass = AlgebraicSimplifyPass;
    let alias = PassAdapter {
        inner: &alias_pass,
        options: opts,
    };
    let fold = PassAdapter {
        inner: &fold_pass,
        options: opts,
    };
    let prop = PassAdapter {
        inner: &prop_pass,
        options: opts,
    };
    let gprop = PassAdapter {
        inner: &gprop_pass,
        options: opts,
    };
    let dce = PassAdapter {
        inner: &dce_pass,
        options: opts,
    };
    let sccp = PassAdapter {
        inner: &sccp_pass,
        options: opts,
    };
    let branch_fold = PassAdapter {
        inner: &branch_fold_pass,
        options: opts,
    };
    let cse = PassAdapter {
        inner: &cse_pass,
        options: opts,
    };
    let gvn = PassAdapter {
        inner: &gvn_pass,
        options: opts,
    };
    let bmi = PassAdapter {
        inner: &bmi_pass,
        options: opts,
    };
    let licm = PassAdapter {
        inner: &licm_pass,
        options: opts,
    };
    let iv_elim = PassAdapter {
        inner: &iv_elim_pass,
        options: opts,
    };
    let strength_reduce = PassAdapter {
        inner: &strength_reduce_pass,
        options: opts,
    };
    let idiom = PassAdapter {
        inner: &idiom_pass,
        options: opts,
    };
    let cond = PassAdapter {
        inner: &cond_pass,
        options: opts,
    };
    let bool_simplify = PassAdapter {
        inner: &bool_pass,
        options: opts,
    };
    let known_bits = PassAdapter {
        inner: &known_bits_pass,
        options: opts,
    };
    let cmov = PassAdapter {
        inner: &cmov_pass,
        options: opts,
    };
    let call_bound = PassAdapter {
        inner: &call_bound_pass,
        options: opts,
    };
    let red_flag = PassAdapter {
        inner: &red_flag_pass,
        options: opts,
    };
    let algebraic = PassAdapter {
        inner: &algebraic_pass,
        options: opts,
    };
    let passes: &[&dyn PassWithContext] = &[
        &alias,
        &fold,
        &prop,
        &gprop,
        &dce,
        &sccp,
        &branch_fold,
        &cse,
        &gvn,
        &bmi,
        &licm,
        &iv_elim,
        &strength_reduce,
        &idiom,
        &cond,
        &bool_simplify,
        &known_bits,
        &cmov,
        &call_bound,
        &red_flag,
        &algebraic,
    ];
    let mut ctx = AnalysisContext::new();
    run_to_fixedpoint_with_context(passes, ssa, &mut ctx)
}

/// Stage 2 (M_PREOPTIMIZED): single-run cleanup passes.
/// DSE (intra + cross-block), dead flags, division/modulo idioms.
pub(super) fn pipeline_stage_cleanup(
    ssa: &mut SsaFunction,
    opts: &PassOptions,
) -> Result<(), unlace_passes::PassError> {
    run_instrumented(&DeadStoreElimPass, ssa, opts)?;
    run_instrumented(&DeadFlagElimPass, ssa, opts)?;
    run_instrumented(&MemorySsaDsePass, ssa, opts)?;
    run_instrumented(&CfgRepairPass, ssa, opts)?;
    run_instrumented(&DeadStoreElimGlobalPass, ssa, opts)?;
    run_instrumented(&DivisionIdiomPass, ssa, opts)?;
    run_instrumented(&ModuloIdiomPass, ssa, opts)?;
    run_instrumented(&unlace_passes::SixtyFourBitDemotePass, ssa, opts)?;
    Ok(())
}

/// Stage 3 (M_LOCOPT): structural detection + stack/frame recovery.
/// Prologue elim, tail-call, SP tracking, stack vars, frame layout.
pub(super) fn pipeline_stage_structural(
    ssa: &mut SsaFunction,
    opts: &PassOptions,
) -> Result<(), unlace_passes::PassError> {
    run_instrumented(&PrologueElimPass, ssa, opts)?;
    run_instrumented(&TailCallDetectPass, ssa, opts)?;
    run_instrumented(&StackPointerTrackingPass, ssa, opts)?;
    run_instrumented(&StackVarRecoveryPass, ssa, opts)?;
    // Calibrate the CFA-relative DWARF local/param offsets onto the real
    // resolved stack slots now that `stack_offset_hints` / `stack_vars`
    // expose the offsets the decompiler observes. This re-keys
    // `dwarf_local_names` and seeds `composite_var_types` together so name
    // and type land on the same slot (avoiding the historical desync).
    calibrate_dwarf_offsets(ssa);
    ssa.stack_frame = Some(recover_stack_frame(ssa));
    run_instrumented(&StackPointerTrackingPass, ssa, opts)?;
    Ok(())
}

/// Stage 4 (M_CALLS): indirect call resolution + vtable detection.
pub(super) fn pipeline_stage_call_resolution(
    ssa: &mut SsaFunction,
    opts: &PassOptions,
) -> Result<(), unlace_passes::PassError> {
    run_instrumented(&IndirectCallResolvePass, ssa, opts)?;
    run_instrumented(&CppVtablePass, ssa, opts)?;
    run_instrumented(&CppMethodPass, ssa, opts)?;
    Ok(())
}

/// Stage 5 (M_GLBOPT): type recovery, calling convention, struct/byref.
/// This is the stage whose output feeds the outer-fixedpoint convergence
/// check via `ssa_type_signature`.
pub(super) fn pipeline_stage_type_recovery(
    ssa: &mut SsaFunction,
    resolver: Option<&dyn Fn(u64) -> Option<&'static str>>,
    opts: &PassOptions,
) -> Result<(), unlace_passes::PassError> {
    run_instrumented(&CallingConventionDetectPass, ssa, opts)?;
    run_instrumented(&ParamInferPass, ssa, opts)?;
    run_instrumented(&ReturnTypeInferPass, ssa, opts)?;
    run_instrumented(&StructFieldDetectPass, ssa, opts)?;
    ssa.byref_info = Some(detect_byref(ssa));
    ssa.array_struct_layouts = recover_structs(ssa);
    run_instrumented(&unlace_passes::type_infer::TypeInferPass, ssa, opts)?;
    run_instrumented(
        &TypeConstraintSolverPass {
            limits: opts.type_constraint,
        },
        ssa,
        opts,
    )?;
    run_instrumented(&unlace_passes::type_vote::TypeVotePass, ssa, opts)?;
    run_instrumented(&unlace_passes::ObjectWidenPass, ssa, opts)?;
    if let Some(resolve) = resolver {
        let structs = known_struct_types(ssa);
        let _ = unlace_passes::recognize_with_resolver(ssa, resolve, &structs);
    } else {
        run_instrumented(&SizeofRecognitionPass::default(), ssa, opts)?;
    }
    run_instrumented(&CppVariantPass, ssa, opts)?;
    run_instrumented(&CppLambdaCapturePass, ssa, opts)?;
    run_instrumented(&CppCoroutinePass, ssa, opts)?;
    run_instrumented(&RustAsyncPass, ssa, opts)?;
    Ok(())
}

/// Stage 6a (M_LVARS): post-loop one-shot annotation passes.
/// Pattern-recognition that doesn't influence the outer fixedpoint.
pub(super) fn pipeline_stage_post_loop(
    ssa: &mut SsaFunction,
    opts: &PassOptions,
) -> Result<(), unlace_passes::PassError> {
    run_instrumented(&RepStringIdiomPass, ssa, opts)?;
    run_instrumented(&BitfieldIdiomPass, ssa, opts)?;
    run_instrumented(&CryptoIdiomPass, ssa, opts)?;
    run_instrumented(&IndirectCallResolvePass, ssa, opts)?;
    run_instrumented(&IndirectJumpResolvePass, ssa, opts)?;
    run_instrumented(&OpTypeBindingPass, ssa, opts)?;
    Ok(())
}

/// Stage 6b (M_LVARS): lvar allocation and variable merging.
pub(super) fn pipeline_stage_lvar(
    ssa: &mut SsaFunction,
    opts: &PassOptions,
) -> Result<(), unlace_passes::PassError> {
    let trace = tracing::enabled!(target: "unlace::interproc", tracing::Level::DEBUG);
    run_instrumented(&DeadPhiElimPass, ssa, opts)?;
    run_instrumented(&TempHomePass, ssa, opts)?;
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-start name={} pass=ExpressionTreePass",
            ssa.function.name
        );
    }
    run_instrumented(&ExpressionTreePass, ssa, opts)?;
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-done name={} pass=ExpressionTreePass",
            ssa.function.name
        );
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-start name={} pass=VariableMergePass",
            ssa.function.name
        );
    }
    run_instrumented(
        &VariableMergePass {
            limits: opts.variable_merge,
        },
        ssa,
        opts,
    )?;
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-done name={} pass=VariableMergePass",
            ssa.function.name
        );
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-start name={} pass=LvarCollectPass",
            ssa.function.name
        );
    }
    run_instrumented(&LvarCollectPass, ssa, opts)?;
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-done name={} pass=LvarCollectPass",
            ssa.function.name
        );
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-start name={} pass=RegisterCoalescePass",
            ssa.function.name
        );
    }
    run_instrumented(&RegisterCoalescePass, ssa, opts)?;
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "lvar-pass-done name={} pass=RegisterCoalescePass",
            ssa.function.name
        );
    }
    Ok(())
}

/// Stage 7 (M_FINAL): language-specific passes, naming, finalization.
pub(super) fn pipeline_stage_final(
    ssa: &mut SsaFunction,
    resolver: Option<&dyn Fn(u64) -> Option<&'static str>>,
    opts: &PassOptions,
) -> Result<(), unlace_passes::PassError> {
    run_instrumented(&RustEnumPass, ssa, opts)?;
    run_instrumented(&RustVtablePass, ssa, opts)?;
    if let Some(resolve) = resolver {
        RustPanicPass.run_with_resolver(ssa, resolve)?;
    }
    run_instrumented(
        &VarNamingPass {
            style: opts.var_naming,
        },
        ssa,
        opts,
    )?;
    run_instrumented(&CallingConvFinalizePass, ssa, opts)?;

    Ok(())
}
