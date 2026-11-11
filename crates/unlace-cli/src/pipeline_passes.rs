//! pipeline: passes.

use super::*;

/// Once-per-process pipeline phase-monotonicity check.
///
/// With `unlace::schedule=info` enabled, the first call to
/// `run_passes_with_report_inner` runs
/// [`validate_named_phase_monotonicity_with_exceptions`] against
/// [`canonical_pipeline_descriptor`] and logs the outcome plus one line per
/// unexplained out-of-order transition. The check runs at most once per
/// process.
///
/// The schedule is *intentionally* not monotone (Batch 10 slice 1 pins
/// 11 backward transitions inside the inner fixed-point cluster); the
/// purpose of this hook is purely to flag accidental further drift,
/// not to enforce strict monotonicity at runtime.
pub(super) fn maybe_validate_pipeline_once() {
    use std::sync::OnceLock;
    static DONE: OnceLock<()> = OnceLock::new();
    DONE.get_or_init(|| {
        if !tracing::enabled!(target: "unlace::schedule", tracing::Level::INFO) {
            return;
        }
        let desc = canonical_pipeline_descriptor();
        match validate_named_phase_monotonicity_with_exceptions(&desc) {
            Ok(()) => {
                let allowed = canonical_pipeline_backedge_exceptions();
                tracing::info!(
                    target: "unlace::schedule",
                    "pipeline phase-monotonicity check passed \
                     ({} passes, {} explicitly-allowed backedges)",
                    desc.len(),
                    allowed.len()
                );
            }
            Err(violations) => {
                tracing::info!(
                    target: "unlace::schedule",
                    "pipeline phase-monotonicity check: \
                     {} unexplained out-of-order transition(s)",
                    violations.len()
                );
                for v in &violations {
                    tracing::info!(target: "unlace::schedule", "  {}", v.to_message());
                }
                tracing::info!(
                    target: "unlace::schedule",
                    "  register an `AllowedBackedge` in \
                     unlace_passes::canonical_pipeline_backedge_exceptions \
                     or fix the schedule"
                );
            }
        }
    });
}

pub fn run_passes(ssa: &mut SsaFunction, opts: &PassOptions) -> Result<usize> {
    let report = run_passes_with_report_inner(ssa, None, None, opts)?;
    Ok(report.ir_changes)
}

/// Variant of [`run_passes`] that accepts a `call-target VA → name` resolver.
///
/// Wired into [`decompile_function_with_symbols`] so the noreturn detector
/// and Rust panic annotator (Batch 1) can match against PLT/import names
/// without needing the symbol table baked into the pass module.
pub fn run_passes_with_resolver(
    ssa: &mut SsaFunction,
    resolver: &dyn Fn(u64) -> Option<&'static str>,
    opts: &PassOptions,
) -> Result<usize> {
    let report = run_passes_with_report_inner(ssa, Some(resolver), None, opts)?;
    Ok(report.ir_changes)
}

#[derive(Clone, Debug)]
pub(super) struct PassDeadline {
    pub(super) deadline: Instant,
    pub(super) func_name: String,
}

pub(super) fn check_pass_deadline(
    deadline: Option<&PassDeadline>,
) -> Result<(), unlace_passes::PassError> {
    if let Some(deadline) = deadline
        && Instant::now() > deadline.deadline
    {
        return Err(unlace_passes::PassError::InvariantViolation {
            message: format!("timeout exceeded for function '{}'", deadline.func_name),
        });
    }
    Ok(())
}

pub(super) fn run_passes_with_resolver_until(
    ssa: &mut SsaFunction,
    resolver: &dyn Fn(u64) -> Option<&'static str>,
    deadline: Instant,
    opts: &PassOptions,
) -> Result<usize> {
    let deadline = PassDeadline {
        deadline,
        func_name: ssa.function.name.clone(),
    };
    let report = run_passes_with_report_inner(ssa, Some(resolver), Some(deadline), opts)?;
    Ok(report.ir_changes)
}

/// Drive the whole-program interprocedural fixed-point loop over a map of
/// already-built (lifted + SSA-constructed) functions.
///
/// This is plan.md Batch 5: refines per-function signatures using caller
/// context until quiescence (or `cap` iterations).
///
/// `cap` of `0` selects [`DEFAULT_INTERPROC_CAP`]. The per-function work
/// inside the loop intentionally stops before lvar/final presentation stages:
/// repeated expression-tree / variable-naming passes are not valid inputs to
/// the low-level IR fixed-point cluster. Callers that emit C should refresh
/// lvars/final signatures after this helper has converged.
///
/// This helper is intentionally separate from the per-function CLI path:
/// the existing `decompile_function_with_symbols` keeps emitting output
/// immediately after one pass run, so wiring this in by default would
/// require splitting the per-function pipeline into "lift+passes" and
/// "structure+emit" phases — a bigger refactor than this Batch 5 slice
/// targets. Callers who want whole-program propagation can build their own
/// SSA map and call this helper before emit.
pub fn run_whole_program_interproc(
    funcs: &mut std::collections::BTreeMap<u64, SsaFunction>,
    cap: usize,
    opts: &PassOptions,
) -> Result<unlace_passes::InterprocReport> {
    let cap = if cap == 0 {
        unlace_passes::DEFAULT_INTERPROC_CAP
    } else {
        cap
    };
    unlace_passes::run_interproc_fixpoint(funcs, cap, |ssa| {
        run_interproc_analysis_passes(ssa, opts)
            .map(|_| ())
            .map_err(|e| unlace_passes::PassError::InvariantViolation {
                message: format!("per-function analysis failed: {e:#}"),
            })
    })
    .context("interprocedural fixed-point loop failed")
}

pub(super) fn run_interproc_analysis_passes(
    ssa: &mut SsaFunction,
    opts: &PassOptions,
) -> Result<PassesReport> {
    maybe_validate_pipeline_once();
    let pre_pipeline_sig = SignatureSnapshot::of(ssa);
    let mut changed = false;
    let trace = tracing::enabled!(target: "unlace::interproc", tracing::Level::DEBUG);

    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "analysis-start name={} maturity={:?} sig_rev={}",
            ssa.function.name, ssa.maturity, ssa.signature_revision
        );
    }

    if ssa.maturity < Maturity::GlobalOpt {
        ssa.maturity = Maturity::GlobalOpt;
        if trace {
            tracing::debug!(
                target: "unlace::interproc",
                "type-refresh-start name={} maturity={:?}",
                ssa.function.name, ssa.maturity
            );
        }
        pipeline_stage_type_recovery(ssa, None, opts).context("interproc type refresh failed")?;
        changed = bump_if_signature_changed(ssa, &pre_pipeline_sig);
        if trace {
            tracing::debug!(
                target: "unlace::interproc",
                "type-refresh-done name={} changed={} sig_rev={}",
                ssa.function.name, changed, ssa.signature_revision
            );
        }
    }

    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "analysis-done name={} maturity={:?} changed={}",
            ssa.function.name, ssa.maturity, changed
        );
    }

    Ok(PassesReport {
        ir_changes: 0,
        outer: OuterFixedpointReport {
            iterations: 1,
            hit_cap: false,
            changed_per_iteration: vec![changed],
        },
    })
}

/// Whole-program driver for printf-style format-string parsing.
///
/// Walks every `(addr, SsaFunction)` in `funcs` and merges newly
/// recovered variadic-call-site type lists into
/// [`SsaFunction::variadic_call_types`]. Each per-function invocation is
/// additive — the additive contract is documented on
/// [`parse_printf_format_strings`] — so calling this driver after the
/// per-function pre-pass that already runs inside
/// [`decompile_function_with_symbols`] only ever *adds* entries, never
/// drops them.
///
/// The symbol table is built once (function entries + import/PLT
/// thunks) and the resulting `&'static str` references are leaked so a
/// single resolver closure can be shared across all functions without
/// per-call allocation.
///
/// Returns the total count of `(BlockId, insn_idx)` entries populated
/// across the whole-program SSA map after the merge.
pub fn run_whole_program_printf_parse(
    funcs: &mut std::collections::BTreeMap<u64, SsaFunction>,
    image: &BinaryImage,
    discovered: &[FunctionEntry],
) -> usize {
    let symbols = build_symbol_table_with_functions(image, discovered);
    let mut stable_symbol_names: BTreeMap<u64, &'static str> = BTreeMap::new();
    for (&addr, name) in &symbols {
        stable_symbol_names.insert(addr, Box::leak(name.clone().into_boxed_str()));
    }
    let resolver = |addr: u64| -> Option<&'static str> { stable_symbol_names.get(&addr).copied() };

    for ssa in funcs.values_mut() {
        let _changed = parse_printf_format_strings(ssa, &resolver, &image.string_table);
    }

    funcs.values().map(|f| f.variadic_call_types.len()).sum()
}

/// Detailed report from one [`run_passes`] invocation.
///
/// Captures the outer-fixed-point behaviour: how many outer iterations ran,
/// whether the iteration cap was hit (suggesting a non-converging cascade),
/// and the cumulative count of inner-fixedpoint changes across all
/// IR-level rounds.
#[derive(Clone, Debug, Default)]
pub struct PassesReport {
    /// Total number of inner IR-level fixedpoint changes across all outer iters.
    pub ir_changes: usize,
    /// Outer-loop convergence info.
    #[allow(dead_code)] // exposed for callers/tests; CLI code path only reads `ir_changes`.
    pub outer: OuterFixedpointReport,
}

/// Whole-program quality refinements run after per-function analysis and the
/// interprocedural fixed-point loop, but before final emit.
#[derive(Clone, Debug, Default)]
pub struct WholeProgramQualityReport {
    /// Caller-side argument facts changed at least one callee signature entry.
    pub caller_param_changed: bool,
    /// Applying the global signature registry changed at least one function.
    pub registry_applied: bool,
    /// Whole-program calling-convention / dead-param / return-use report.
    pub calling_conv: unlace_passes::WholeProgramCcReport,
    /// Number of distinct struct layouts canonicalised across the program.
    pub canonical_struct_layouts: usize,
    /// Number of functions whose struct names changed after canonicalisation.
    pub struct_name_rewrite_functions: usize,
    /// Number of functions whose lvar/final signature metadata changed when
    /// refreshed after the whole-program updates.
    pub final_refresh_changes: usize,
}

/// Run the active whole-program quality tier over already-analysed functions.
///
/// This is intentionally separate from the per-function pipeline: it needs the
/// full function map to propagate caller argument types, drop dead parameters,
/// unify calling conventions, and collapse identical recovered struct layouts
/// to one canonical type name before final emission.
pub fn run_whole_program_quality_refinement(
    funcs: &mut std::collections::BTreeMap<u64, SsaFunction>,
    cap: usize,
    opts: &PassOptions,
) -> Result<WholeProgramQualityReport> {
    let trace = tracing::enabled!(target: "unlace::interproc", tracing::Level::DEBUG);
    let mut report = WholeProgramQualityReport::default();

    let mut registry = unlace_ir::signature::FunctionSignatureRegistry::new();
    unlace_passes::seed_registry_from_funcs(funcs, &mut registry);
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "quality-start funcs={} registry={}",
            funcs.len(),
            registry.len()
        );
    }

    report.caller_param_changed = unlace_passes::propagate_caller_params(funcs, &mut registry);
    report.registry_applied = unlace_passes::apply_registry_to_callees(funcs, &registry);
    report.registry_applied |= unlace_passes::apply_registry_to_callers(funcs, &registry);

    let cc_cap = if cap == 0 {
        unlace_passes::DEFAULT_WHOLE_PROG_CC_CAP
    } else {
        cap
    };
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "quality-cc-start cap={} caller_param_changed={} registry_applied={}",
            cc_cap, report.caller_param_changed, report.registry_applied
        );
    }
    report.calling_conv = unlace_passes::run_whole_prog_cc(funcs, cc_cap);
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "quality-cc-done iters={} hit_cap={}",
            report.calling_conv.iterations, report.calling_conv.hit_cap
        );
    }

    let refs: Vec<&SsaFunction> = funcs.values().collect();
    let unifier = unlace_passes::unify_structs_across_program(&refs);
    report.canonical_struct_layouts = unifier.distinct_layouts();
    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "quality-structs distinct_layouts={}",
            report.canonical_struct_layouts
        );
    }

    for ssa in funcs.values_mut() {
        if trace {
            tracing::debug!(
                target: "unlace::interproc",
                "quality-refresh-start name={} maturity={:?}",
                ssa.function.name, ssa.maturity
            );
        }
        let before_inferred = ssa.inferred_structs.clone();
        let before_composite = ssa.composite_var_types.clone();
        unifier.rename_to_canonical(ssa);
        if ssa.inferred_structs != before_inferred || ssa.composite_var_types != before_composite {
            report.struct_name_rewrite_functions += 1;
        }

        let before_lvars = ssa.lvars.clone();
        let before_names = ssa.merged_names.clone();
        let before_roles = ssa.var_role_names.clone();
        let before_signature = ssa.finalized_signature.clone();

        ssa.maturity = Maturity::Lvars;
        if trace {
            tracing::debug!(
                target: "unlace::interproc",
                "quality-lvar-start name={} maturity={:?}",
                ssa.function.name, ssa.maturity
            );
        }
        pipeline_stage_lvar(ssa, opts).context("whole-program lvar refresh failed")?;
        ssa.maturity = Maturity::Final;
        if trace {
            tracing::debug!(
                target: "unlace::interproc",
                "quality-final-start name={} maturity={:?}",
                ssa.function.name, ssa.maturity
            );
        }
        pipeline_stage_final(ssa, None, opts).context("whole-program final refresh failed")?;

        if ssa.lvars != before_lvars
            || ssa.merged_names != before_names
            || ssa.var_role_names != before_roles
            || ssa.finalized_signature != before_signature
        {
            report.final_refresh_changes += 1;
        }
        if trace {
            tracing::debug!(
                target: "unlace::interproc",
                "quality-refresh-done name={} final_changed={}",
                ssa.function.name, report.final_refresh_changes
            );
        }
    }

    if trace {
        tracing::debug!(
            target: "unlace::interproc",
            "quality-done struct_rewrites={} final_refresh_changes={}",
            report.struct_name_rewrite_functions, report.final_refresh_changes
        );
    }
    Ok(report)
}

/// Run the pass pipeline and return a structured report.
///
/// The pipeline mirrors IDA's two-tier driver (sub_14B8B0 / sub_F9180).
///
/// # Canonical PassPhase order (Batch 10 slice 1)
///
/// Each pass below carries a `phase()` tag — see
/// [`unlace_passes::PassPhase`] for the seven canonical buckets:
///
/// | Phase         | Examples                                              |
/// |---------------|-------------------------------------------------------|
/// | `PreOpt`      | CallBoundaryCopyProp, RedundantFlagElim, AlgSimp,     |
/// |               | PrologueElim, NoreturnDetect                          |
/// | `LocalOpt`    | SCCP, CopyProp, ConstFold, DCE, DSE, DFE,             |
/// |               | StrengthReduce, IvElim, IdiomRec, BMI, Cond/Bool      |
/// | `GlobalOpt`   | GVN, CSE, LICM, GlobalCopyProp, DseGlobal,            |
/// |               | TailCall, TailDup, IndirectCall/JumpResolve,          |
/// |               | MsvcSEH, ConstBranchFold                              |
/// | `TypeRecovery`| TypeInfer, TypeConstraintSolver, TypeVote,            |
/// |               | OpTypeBinding,                                        |
/// |               | CC detect/param/return, Struct/Sizeof, Cpp/Rust/Objc, |
/// |               | RustAsync                                             |
/// | `StackRecovery`| StackOffsetSnapshot, StackPointerTracking,           |
/// |               | StackVarRecovery                                      |
/// | `LVarAlloc`   | VariableMerge                                         |
/// | `FinalCleanup`| RegisterCoalesce, ExpressionTree, VarNaming,          |
/// |               | CallingConvFinalize                                   |
///
/// The schedule below interleaves phases **intentionally** — for
/// example, `CallBoundaryCopyPropPass` (PreOpt) is wired into the inner
/// fixed-point cluster alongside LocalOpt/GlobalOpt passes because the
/// three only converge when run together. As of Batch 10 slice 1 the
/// canonical schedule has 11 "backward" phase transitions across 47
/// adjacent pairs; the count is pinned by the
/// `canonical_pipeline_is_documented` test in
/// `unlace_passes::pass::phase_tests`. Reducing the count is a strict
/// win and is the goal of a follow-up Batch 10 slice.
///
/// # Schedule
///
/// 1. **One-time pre-pass.** [`StackPointerTrackingPass`] (StackRecovery)
///    records the stack-pointer deltas that define the frame coordinates,
///    then [`StackOffsetSnapshotPass`] (StackRecovery) captures the
///    pre-optimization stack-offset map in them, used later by stack var
///    recovery. Followed by [`NoreturnDetectPass`] (PreOpt) when a
///    resolver is supplied.
/// 2. **Outer fixed-point loop** (capped at [`DEFAULT_OUTER_FIXEDPOINT_CAP`]).
///    Each outer iteration runs:
///      - the inner IR-level fixed-point cluster — mostly LocalOpt /
///        GlobalOpt with three PreOpt cleanups (call-boundary, redundant
///        flag, algebraic simplify), converging via [`run_to_fixedpoint_with_context`];
///      - LocalOpt/GlobalOpt cleanup (dead store, dead flag, cross-block
///        DSE, division/modulo idioms);
///      - PreOpt + StackRecovery + GlobalOpt + TypeRecovery structural
///        detection (prologue elim, tail-call detect, stack-pointer
///        tracking, stack-var recovery, indirect-call resolve, C++
///        vtable);
///      - TypeRecovery proper (calling-convention detect/param/return,
///        struct-field, primitive type infer, constraint solver).
///
///    After each iteration we hash the type-recovery state via
///    [`unlace_passes::ssa_type_signature`]; if it changed we run again.
///    This is the key cascade: better types ⇒ better simplification ⇒
///    better pattern matching ⇒ better types.
/// 3. **One-time post-pass.** [`ExpressionTreePass`] (folds inline
///    sub-expressions for printing) and [`VariableMergePass`] (assigns
///    final canonical names) run exactly once after convergence. They are
///    presentation-layer concerns and re-running them inside the loop
///    would either be redundant or risk oscillation.
pub fn run_passes_with_report(ssa: &mut SsaFunction) -> Result<PassesReport> {
    run_passes_with_report_inner(ssa, None, None, &PassOptions::default())
}

/// Inner driver shared by [`run_passes_with_report`] (no resolver) and
/// [`run_passes_with_resolver`] (PLT/import-name aware).
///
/// The resolver, when present, is consumed by symbol-pattern-gated passes
/// (Batch 1): [`NoreturnDetectPass::run_with_resolver`] and
/// [`RustPanicPass::run_with_resolver`]. Without a resolver these passes
/// are skipped — they would otherwise no-op via the trait's default `run()`.
pub(super) fn run_passes_with_report_inner(
    ssa: &mut SsaFunction,
    resolver: Option<&dyn Fn(u64) -> Option<&'static str>>,
    deadline: Option<PassDeadline>,
    opts: &PassOptions,
) -> Result<PassesReport> {
    let _profile_pass_pipeline = profile_ssa_stage("pipeline.passes", ssa, 0);
    maybe_validate_pipeline_once();
    check_pass_deadline(deadline.as_ref())?;

    // (1) One-time pre-pass: snapshot pre-optimization stack offsets. The
    // snapshot is keyed in frame coordinates, which need the stack-pointer
    // deltas first.
    {
        let _profile_stage = profile_ssa_stage("pipeline.pre-stack-snapshot", ssa, 0);
        run_instrumented(&StackPointerTrackingPass, ssa, opts)
            .context("stack pointer tracking failed")?;
        run_instrumented(&StackOffsetSnapshotPass, ssa, opts)
            .context("stack offset snapshot failed")?;
    }
    check_pass_deadline(deadline.as_ref())?;

    let pre_pipeline_sig = SignatureSnapshot::of(ssa);

    // Noreturn detection runs once before the maturity loop.
    if let Some(resolve) = resolver {
        let _profile_stage = profile_ssa_stage("pipeline.noreturn-detect", ssa, 0);
        NoreturnDetectPass::new()
            .run_with_resolver(ssa, resolve)
            .context("noreturn detect pass failed")?;
    }
    check_pass_deadline(deadline.as_ref())?;

    // === MATURITY PIPELINE (models sub_14B8B0's while-loop) ===
    ssa.maturity = Maturity::Zero;
    let mut total_ir_changes: usize = 0;

    // Batch 16: opt-in per-maturity IR snapshots. Set
    // `passes.diagnostics.maturity_dump = "<dir>"` and one file per
    // (function, maturity-stage, outer-iter) is written into that directory
    // as a text dump of [`unlace_output::dump_ir`].
    maturity_snapshot(ssa, "M_ZERO", 0, opts);

    // (2) Outer fixed-point loop. Each iteration runs the staged pipeline;
    // the outer loop re-runs when type recovery discovers new facts.
    let outer_report = run_outer_fixedpoint(
        ssa,
        DEFAULT_OUTER_FIXEDPOINT_CAP,
        |ssa, _iter| -> Result<(), unlace_passes::PassError> {
            check_pass_deadline(deadline.as_ref())?;
            // Stage 1: M_GENERATED — IR-level fixed-point cluster
            // Note: re-entry from outer loop constitutes a maturity
            // downgrade (sub_F9180 equivalent) — types changed, so we
            // re-run from Generated to let IR passes exploit new facts.
            if _iter > 0 {
                profiling::diagnostic(
                    "debug",
                    "maturity downgrade: types changed, re-running from M_GENERATED",
                    [
                        TraceField::text("function", ssa.function.name.clone()),
                        TraceField::count("iter", _iter as u64),
                    ],
                );
            }
            ssa.maturity = Maturity::Generated;
            let stage_start = Instant::now();
            let ir_changes = {
                let _profile_stage = profile_ssa_stage("pipeline.maturity.generated", ssa, _iter);
                pipeline_stage_ir_fixedpoint(ssa, opts)?
            };
            total_ir_changes = total_ir_changes.saturating_add(ir_changes);
            maturity_snapshot(ssa, "M_GENERATED", _iter, opts);
            pipeline_trace_maturity_stage(
                ssa,
                "M_GENERATED",
                _iter,
                stage_start,
                &format!(" ir_changes={ir_changes}"),
            );
            check_pass_deadline(deadline.as_ref())?;

            // Stage 2: M_PREOPTIMIZED — cleanup passes
            ssa.maturity = Maturity::PreOptimized;
            let stage_start = Instant::now();
            {
                let _profile_stage =
                    profile_ssa_stage("pipeline.maturity.preoptimized", ssa, _iter);
                pipeline_stage_cleanup(ssa, opts)?;
            }
            maturity_snapshot(ssa, "M_PREOPTIMIZED", _iter, opts);
            pipeline_trace_maturity_stage(ssa, "M_PREOPTIMIZED", _iter, stage_start, "");
            check_pass_deadline(deadline.as_ref())?;

            // Stage 3: M_LOCOPT — structural detection + stack recovery
            ssa.maturity = Maturity::LocalOpt;
            let stage_start = Instant::now();
            {
                let _profile_stage = profile_ssa_stage("pipeline.maturity.localopt", ssa, _iter);
                pipeline_stage_structural(ssa, opts)?;
            }
            maturity_snapshot(ssa, "M_LOCOPT", _iter, opts);
            pipeline_trace_maturity_stage(ssa, "M_LOCOPT", _iter, stage_start, "");
            check_pass_deadline(deadline.as_ref())?;

            // Stage 4: M_CALLS — call resolution + vtables
            ssa.maturity = Maturity::Calls;
            let stage_start = Instant::now();
            {
                let _profile_stage = profile_ssa_stage("pipeline.maturity.calls", ssa, _iter);
                pipeline_stage_call_resolution(ssa, opts)?;
            }
            maturity_snapshot(ssa, "M_CALLS", _iter, opts);
            pipeline_trace_maturity_stage(ssa, "M_CALLS", _iter, stage_start, "");
            check_pass_deadline(deadline.as_ref())?;

            // Stage 5: M_GLBOPT — type recovery
            ssa.maturity = Maturity::GlobalOpt;
            let stage_start = Instant::now();
            {
                let _profile_stage = profile_ssa_stage("pipeline.maturity.globalopt", ssa, _iter);
                pipeline_stage_type_recovery(ssa, resolver, opts)?;
            }
            maturity_snapshot(ssa, "M_GLBOPT", _iter, opts);
            pipeline_trace_maturity_stage(ssa, "M_GLBOPT", _iter, stage_start, "");
            check_pass_deadline(deadline.as_ref())?;

            Ok(())
        },
    )
    .context("outer fixed-point pipeline failed")?;
    check_pass_deadline(deadline.as_ref())?;

    if outer_report.hit_cap {
        profiling::diagnostic(
            "warn",
            "pass pipeline outer loop hit iteration cap without converging",
            [
                TraceField::text("function", ssa.function.name.clone()),
                TraceField::count("cap", DEFAULT_OUTER_FIXEDPOINT_CAP as u64),
            ],
        );
    }

    // Stage 6: M_LVARS — post-loop one-shots + lvar allocation
    ssa.maturity = Maturity::Lvars;
    let stage_start = Instant::now();
    {
        let _profile_stage = profile_ssa_stage("pipeline.maturity.lvars-post-loop", ssa, 0);
        pipeline_stage_post_loop(ssa, opts)?;
    }
    pipeline_trace_maturity_stage(ssa, "M_LVARS_POST_LOOP", 0, stage_start, "");
    check_pass_deadline(deadline.as_ref())?;
    let stage_start = Instant::now();
    {
        let _profile_stage = profile_ssa_stage("pipeline.maturity.lvars", ssa, 0);
        pipeline_stage_lvar(ssa, opts)?;
    }
    maturity_snapshot(ssa, "M_LVARS", 0, opts);
    pipeline_trace_maturity_stage(ssa, "M_LVARS", 0, stage_start, "");
    check_pass_deadline(deadline.as_ref())?;

    // Stage 7: M_FINAL — language-specific + naming + finalization
    ssa.maturity = Maturity::Final;
    let stage_start = Instant::now();
    {
        let _profile_stage = profile_ssa_stage("pipeline.maturity.final", ssa, 0);
        pipeline_stage_final(ssa, resolver, opts)?;
    }
    maturity_snapshot(ssa, "M_FINAL", 0, opts);
    pipeline_trace_maturity_stage(ssa, "M_FINAL", 0, stage_start, "");
    check_pass_deadline(deadline.as_ref())?;

    let _ = bump_if_signature_changed(ssa, &pre_pipeline_sig);

    profiling::diagnostic(
        "debug",
        "pass pipeline complete",
        [
            TraceField::text("function", ssa.function.name.clone()),
            TraceField::count("ir_changes", total_ir_changes as u64),
            TraceField::count("outer_iters", outer_report.iterations as u64),
            TraceField::text("outer_hit_cap", outer_report.hit_cap.to_string()),
            TraceField::count("signature_revision", ssa.signature_revision),
            TraceField::text("maturity", format!("{:?}", ssa.maturity)),
        ],
    );

    Ok(PassesReport {
        ir_changes: total_ir_changes,
        outer: outer_report,
    })
}

/// Write an IR snapshot for `ssa` to `<maturity_dump>/<func>-<stage>-<iter>.txt`.
///
/// Noop unless `passes.diagnostics.maturity_dump` is configured. On write error we log a tracing
/// warning but do not propagate — snapshots are observability, not
/// correctness. `iter` is the outer-fixedpoint iteration this stage ran
/// in; for stages that live outside the outer loop pass `0`.
pub(super) fn maturity_snapshot(ssa: &SsaFunction, stage: &str, iter: usize, opts: &PassOptions) {
    let Some(dir) = opts.diagnostics.maturity_dump.as_deref() else {
        return;
    };
    if let Err(e) = std::fs::create_dir_all(dir) {
        profiling::diagnostic(
            "warn",
            "maturity-dump: mkdir failed",
            [
                TraceField::text("dir", dir.display().to_string()),
                TraceField::text("err", e.to_string()),
            ],
        );
        return;
    }
    let safe_func: String = ssa
        .function
        .name
        .chars()
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '_' {
                c
            } else {
                '_'
            }
        })
        .collect();
    let file_name = format!("{safe_func}-{stage}-iter{iter}.txt");
    let path = dir.join(file_name);
    let body = unlace_output::dump_ir(ssa);
    if let Err(e) = std::fs::write(&path, body) {
        profiling::diagnostic(
            "warn",
            "maturity-dump: write failed",
            [
                TraceField::text("path", path.display().to_string()),
                TraceField::text("err", e.to_string()),
            ],
        );
    }
}

pub fn ir_node_count(ssa: &SsaFunction) -> usize {
    ssa.function.blocks.values().map(|b| b.insns.len()).sum()
}

pub fn warn_if_large_ir(func_name: &str, ssa: &SsaFunction) {
    let count = ir_node_count(ssa);
    if count > IR_NODE_WARN_THRESHOLD {
        profiling::diagnostic(
            "warn",
            "function exceeds IR node threshold",
            [
                TraceField::text("function", func_name.to_string()),
                TraceField::count("ir_nodes", count as u64),
                TraceField::count("threshold", IR_NODE_WARN_THRESHOLD as u64),
            ],
        );
    }
}
