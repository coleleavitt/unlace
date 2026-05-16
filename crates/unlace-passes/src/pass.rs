//! The [`Pass`] trait and fixed-point runner.

use std::hash::{Hash, Hasher};

use unlace_ir::ssa::SsaFunction;

/// Error type for optimization passes.
#[derive(Debug, thiserror::Error)]
pub enum PassError {
    /// An instruction referenced a block that does not exist.
    #[error("block {block} not found in function")]
    MissingBlock { block: String },

    /// An instruction had an unexpected number of inputs for its opcode.
    #[error("opcode {opcode} expected {expected} inputs, found {found}")]
    ArityMismatch {
        opcode: &'static str,
        expected: usize,
        found: usize,
    },

    /// An invariant required by the pass was violated.
    #[error("pass invariant violated: {message}")]
    InvariantViolation { message: String },
}

/// Logical bucket a [`Pass`] belongs to.
///
/// Phases are declared in **canonical execution order**: a well-formed
/// pipeline runs passes whose `phase()` is non-decreasing. Cross-phase
/// dependencies (e.g. type recovery feeding back into local optimization)
/// are handled by the outer fixed-point loop, not by re-ordering.
///
/// Batch 10 slice 1 introduces this enum for organizational purposes
/// only — the runtime pass order is not changed by adding phase tags.
/// A unit test in this file pins the current pipeline as phase-monotonic
/// (modulo documented deviations) so future reorderings stay honest.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum PassPhase {
    /// Lifter-level cleanup that runs *before* canonical optimization
    /// (call-boundary copy-prop, redundant flag elim, algebraic simplify,
    /// prologue/junk-code stripping, noreturn detection).
    PreOpt,
    /// Intra-block / single-pass simplification: SCCP, copy-prop, DCE,
    /// constant-fold, dead-store/flag elim, condition/bool simplify,
    /// strength-reduce, IV-elim, idiom recognition.
    LocalOpt,
    /// Cross-block / whole-CFG analysis: GVN, CSE, LICM, global copy-prop,
    /// cross-block DSE, tail-call detection, indirect call/jump resolution.
    GlobalOpt,
    /// Type inference, constraint solving, struct/field detection,
    /// language-specific recovery (C++ vtables, Rust enums, Go ifaces,
    /// ObjC dispatch), calling-convention detection.
    TypeRecovery,
    /// Stack-frame and stack-pointer recovery passes.
    StackRecovery,
    /// Local-variable allocation / SSA→C variable mapping
    /// (variable-merge coalescer).
    LVarAlloc,
    /// Final presentation-layer cleanup: register coalescing, expression
    /// tree folding, var naming, calling-convention finalization.
    FinalCleanup,
}

impl PassPhase {
    /// Stable 0-based ordinal — useful for monotonicity checks and for
    /// surfacing phase ordering in diagnostics. Matches enum declaration
    /// order; do not renumber without auditing the pipeline tests.
    pub const fn ordinal(self) -> u8 {
        match self {
            PassPhase::PreOpt => 0,
            PassPhase::LocalOpt => 1,
            PassPhase::GlobalOpt => 2,
            PassPhase::TypeRecovery => 3,
            PassPhase::StackRecovery => 4,
            PassPhase::LVarAlloc => 5,
            PassPhase::FinalCleanup => 6,
        }
    }
}

/// An optimization or analysis pass over SSA-form IR.
///
/// Passes are stateless: all mutable state lives in the [`SsaFunction`].
/// A pass returns `Ok(true)` when it changed the function and `Ok(false)`
/// when nothing was modified. The caller iterates to a fixed point.
pub trait Pass: Send + Sync {
    /// Human-readable name for diagnostics and tracing.
    fn name(&self) -> &str;

    /// Which canonical pipeline phase this pass belongs to.
    ///
    /// Default is [`PassPhase::LocalOpt`] so the trait stays
    /// backward-compatible — every concrete pass in the workspace
    /// overrides this with its real phase (enforced by the
    /// `every_pass_has_explicit_phase` unit test below).
    fn phase(&self) -> PassPhase {
        PassPhase::LocalOpt
    }

    /// Names of passes this one expects to have observed first. The
    /// pipeline driver does not currently enforce this; it exists as
    /// machine-readable documentation that the test suite can pin and
    /// future drivers can consume.
    fn depends_on(&self) -> &[&'static str] {
        &[]
    }

    /// Run one iteration of the pass.
    ///
    /// Returns `Ok(true)` if the function was modified, `Ok(false)` if
    /// no changes were made. The caller is responsible for iterating
    /// until all passes return `Ok(false)`.
    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError>;
}

/// Run a sequence of passes to a fixed point, returning the total number
/// of individual pass invocations that reported a change.
///
/// Each iteration runs every pass in order. If *any* pass reports a
/// change the whole sequence is re-run. The loop terminates when a full
/// sweep produces no changes.
pub fn run_to_fixedpoint(passes: &[&dyn Pass], func: &mut SsaFunction) -> Result<usize, PassError> {
    const MAX_ROUNDS: usize = 200;
    let mut total_changes = 0usize;
    let func_name = func.function.name.clone();
    let mut round = 0usize;
    loop {
        round += 1;
        if round > MAX_ROUNDS {
            tracing::error!(
                func = %func_name,
                rounds = MAX_ROUNDS,
                "run_to_fixedpoint did not converge — passes are oscillating"
            );
            return Err(PassError::InvariantViolation {
                message: format!(
                    "run_to_fixedpoint exceeded {MAX_ROUNDS} rounds on '{func_name}' — passes oscillating",
                ),
            });
        }
        let mut changed_this_round = false;
        let mut changed_passes: Vec<&str> = Vec::new();
        for pass in passes {
            let pass_start = std::time::Instant::now();
            // `run_instrumented` is a single-atomic-load no-op when
            // neither `UNLACE_TIMING` nor `UNLACE_TRACE_PASSES` is set,
            // so this preserves the prior hot-path cost.
            let changed = crate::instrument::run_instrumented(*pass, func)?;
            let elapsed = pass_start.elapsed();
            if elapsed >= std::time::Duration::from_millis(500) {
                tracing::warn!(
                    func = %func_name,
                    pass = pass.name(),
                    round,
                    elapsed_ms = elapsed.as_millis(),
                    "slow pass"
                );
            }
            if changed {
                changed_this_round = true;
                total_changes += 1;
                changed_passes.push(pass.name());
            }
        }
        if changed_this_round {
            tracing::trace!(
                func = %func_name,
                round,
                ?changed_passes,
                "fixedpoint round"
            );
        }
        if !changed_this_round {
            break;
        }
    }
    tracing::debug!(
        func = %func_name,
        rounds = round,
        total_changes,
        "run_to_fixedpoint converged"
    );
    Ok(total_changes)
}

/// Default cap on outer pipeline iterations. Most cascades converge in
/// 1–2 outer rounds; we cap at 5 as a safeguard against runaway cycles.
pub const DEFAULT_OUTER_FIXEDPOINT_CAP: usize = 5;

/// Summary of one outer-fixed-point cycle.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct OuterFixedpointReport {
    /// Number of outer iterations performed (always at least 1).
    pub iterations: usize,
    /// Whether the loop bailed out at the iteration cap without converging.
    pub hit_cap: bool,
    /// Per-iteration: did the type/structural signature change after this iteration?
    pub changed_per_iteration: Vec<bool>,
}

/// Compute a stable signature of *type-recovery state* on an [`SsaFunction`].
///
/// Used by [`run_outer_fixedpoint`] to detect whether a re-run is warranted.
/// The signature folds together fields that downstream IR-level passes care
/// about: `var_types`, `composite_var_types`, `inferred_params`,
/// `inferred_return_type`, `inferred_structs`, plus a coarse structural
/// fingerprint (block ids and per-block instruction count + opcodes) so that
/// pure IR rewrites (CSE/GVN/constant-fold) which don't move types still
/// register as "something changed, worth another type-recovery round".
pub fn ssa_type_signature(func: &SsaFunction) -> u64 {
    let mut hasher = std::collections::hash_map::DefaultHasher::new();

    // Type-recovery state.
    func.var_types.len().hash(&mut hasher);
    for (sv, ty) in &func.var_types {
        sv.hash(&mut hasher);
        ty.hash(&mut hasher);
    }
    func.composite_var_types.len().hash(&mut hasher);
    for (sv, ty) in &func.composite_var_types {
        sv.hash(&mut hasher);
        ty.hash(&mut hasher);
    }
    func.inferred_params.len().hash(&mut hasher);
    for (name, ty) in &func.inferred_params {
        name.hash(&mut hasher);
        ty.hash(&mut hasher);
    }
    func.inferred_return_type.hash(&mut hasher);
    func.inferred_structs.len().hash(&mut hasher);
    for (offset, ty) in &func.inferred_structs {
        offset.hash(&mut hasher);
        ty.hash(&mut hasher);
    }

    // Stack-var recovery (name + ty + offset, but not the access list which
    // can shuffle without semantic change).
    func.stack_vars.len().hash(&mut hasher);
    for (offset, sv) in &func.stack_vars {
        offset.hash(&mut hasher);
        sv.offset.hash(&mut hasher);
        sv.name.hash(&mut hasher);
        sv.ty.hash(&mut hasher);
    }

    // Coarse IR fingerprint — counts + opcodes so pure rewrites are visible.
    func.function.blocks.len().hash(&mut hasher);
    for (bid, block) in &func.function.blocks {
        bid.hash(&mut hasher);
        block.insns.len().hash(&mut hasher);
        for insn in &block.insns {
            insn.op.hash(&mut hasher);
            insn.inputs.len().hash(&mut hasher);
        }
    }

    hasher.finish()
}

/// Run an outer pipeline cycle to a fixed point.
///
/// `cycle` is invoked repeatedly. After each invocation we recompute
/// [`ssa_type_signature`]; if it changed we run again, capped at `max_iters`.
/// This mirrors IDA's outer driver loop (sub_14B8B0 / sub_F9180): IR
/// simplification feeds type recovery, which feeds back into IR
/// simplification. Cascading across the cycle is what makes both halves
/// fully exploit each other's progress.
///
/// `cycle` receives the iteration index (0-based) so it can vary behavior
/// per pass — e.g. emit verbose tracing only on the first pass.
///
/// Returns an [`OuterFixedpointReport`] describing what happened.
pub fn run_outer_fixedpoint<F>(
    func: &mut SsaFunction,
    max_iters: usize,
    mut cycle: F,
) -> Result<OuterFixedpointReport, PassError>
where
    F: FnMut(&mut SsaFunction, usize) -> Result<(), PassError>,
{
    let max_iters = max_iters.max(1);
    let func_name = func.function.name.clone();
    let mut report = OuterFixedpointReport::default();
    let mut prev_sig = ssa_type_signature(func);

    for iter in 0..max_iters {
        cycle(func, iter)?;
        report.iterations = iter + 1;
        let new_sig = ssa_type_signature(func);
        let changed = new_sig != prev_sig;
        report.changed_per_iteration.push(changed);
        tracing::trace!(
            func = %func_name,
            iter = iter + 1,
            changed,
            "outer fixedpoint cycle"
        );
        if !changed {
            return Ok(report);
        }
        prev_sig = new_sig;
    }

    // We hit the cap. Run one final cycle to check whether the *next* pass
    // would have changed anything; if it would, mark `hit_cap`.
    let last_changed = report
        .changed_per_iteration
        .last()
        .copied()
        .unwrap_or(false);
    if last_changed {
        report.hit_cap = true;
        tracing::debug!(
            func = %func_name,
            cap = max_iters,
            "outer fixedpoint reached iteration cap without converging"
        );
    }
    Ok(report)
}

#[cfg(test)]
mod phase_tests {
    //! Tests pinning the [`PassPhase`] assignment of every concrete pass
    //! and documenting the canonical pipeline ordering used by
    //! `unlace-cli`'s pipeline driver.
    //!
    //! These tests are pure organizational invariants — they don't
    //! exercise runtime behaviour. Their job is to fail loudly if:
    //!
    //!  * a new pass is added without declaring a phase (the default
    //!    [`PassPhase::LocalOpt`] will likely place it in the wrong
    //!    bucket and the per-phase count below will drift),
    //!  * the canonical pipeline ordering accidentally regresses.
    //!
    //! Both invariants are *documentation*: the runtime currently does
    //! not consult `phase()` to schedule passes. That's a follow-up
    //! task in Batch 10.

    use super::PassPhase;
    use crate::Pass;

    /// Hand-rolled type-erased reference to every concrete [`Pass`]
    /// implementer in the workspace. Sorted by phase, then by file.
    /// When you add a new pass, *append it here* — the
    /// `every_pass_has_explicit_phase` test will tell you about it.
    fn all_passes() -> Vec<Box<dyn Pass>> {
        // Includes only passes whose modules are declared in `lib.rs`.
        // Several pass source files exist in the tree but are not
        // currently wired into the workspace
        // (`bitfield_recovery`, `bool_coverage`,
        // `calling_conv_whole_prog`, `daikon_invariants`,
        // `func_ptr_table`, `gcc_cleanup`, `ipa_slice`,
        // `junk_code_removal`, `path_sensitive`, `pgo_outlining`,
        // `symbolic_heap`, `taint_engine`). They are still tagged with
        // a phase so that wiring them in later is mechanical, but they
        // can't appear here without first declaring `pub mod …;`.
        vec![
            // ---- PreOpt ----
            Box::new(crate::alias_categorize::AliasCategorizePass::new()),
            Box::new(crate::algebraic_simplify::AlgebraicSimplifyPass),
            Box::new(crate::call_boundary_copyprop::CallBoundaryCopyPropPass),
            Box::new(crate::redundant_flag_elim::RedundantFlagElimPass),
            Box::new(crate::prologue_elim::PrologueElimPass),
            Box::new(crate::noreturn::NoreturnDetectPass::new()),
            // ---- LocalOpt ----
            Box::new(crate::sccp::SccpPass),
            Box::new(crate::copy_prop::CopyPropagationPass),
            Box::new(crate::const_fold::ConstantFoldPass),
            Box::new(crate::dce::DeadCodeElimPass),
            Box::new(crate::dead_store_elim::DeadStoreElimPass),
            Box::new(crate::dead_flag_elim::DeadFlagElimPass),
            Box::new(crate::condition_simplify::ConditionSimplifyPass),
            Box::new(crate::bool_simplify::BoolSimplifyPass),
            Box::new(crate::strength_reduce::StrengthReducePass),
            Box::new(crate::iv_elim::IvElimPass),
            Box::new(crate::idiom_recognition::IdiomRecognitionPass),
            Box::new(crate::bmi_idioms::BmiIdiomPass),
            Box::new(crate::division_idiom::DivisionIdiomPass),
            Box::new(crate::modulo_idiom::ModuloIdiomPass),
            Box::new(crate::bitfield_idioms::BitfieldIdiomPass),
            Box::new(crate::crypto_idioms::CryptoIdiomPass),
            Box::new(crate::rep_string_idiom::RepStringIdiomPass),
            // ---- GlobalOpt ----
            Box::new(crate::gvn::GvnPass),
            Box::new(crate::cse::CsePass),
            Box::new(crate::licm::LicmPass),
            Box::new(crate::global_copy_prop::GlobalCopyPropPass),
            Box::new(crate::dse_global::DeadStoreElimGlobalPass),
            Box::new(crate::tail_call::TailCallDetectPass),
            Box::new(crate::tail_duplication::TailDuplicationPass),
            Box::new(crate::indirect_call_resolve::IndirectCallResolvePass),
            Box::new(crate::indirect_jump_resolve::IndirectJumpResolvePass),
            Box::new(crate::msvc_seh::MsvcSehPass {
                scope_tables: std::collections::BTreeMap::new(),
            }),
            // ---- TypeRecovery ----
            Box::new(crate::type_infer::TypeInferPass),
            Box::new(crate::type_constraint_solver::TypeConstraintSolverPass),
            Box::new(crate::op_type_binding::OpTypeBindingPass),
            Box::new(crate::counterexample_refine::CounterexampleRefinePass),
            Box::new(crate::calling_convention::CallingConventionDetectPass),
            Box::new(crate::calling_convention::ParamInferPass),
            Box::new(crate::calling_convention::ReturnTypeInferPass),
            Box::new(crate::struct_field_detect::StructFieldDetectPass),
            Box::new(crate::sizeof_recognition::SizeofRecognitionPass::default()),
            Box::new(crate::cpp_vtable::CppVtablePass),
            Box::new(crate::cpp_lambda::CppLambdaCapturePass),
            Box::new(crate::cpp_coroutine::CppCoroutinePass),
            Box::new(crate::cpp_variant::CppVariantPass),
            Box::new(crate::rust_enum::RustEnumPass),
            Box::new(crate::rust_vtable::RustVtablePass),
            Box::new(crate::rust_panic::RustPanicPass),
            Box::new(crate::rust_async::RustAsyncPass),
            Box::new(crate::objc_dispatch::ObjcDispatchPass::new()),
            // GoIfaceDevirtPass has a lifetime parameter; skipped here.
            // ---- StackRecovery ----
            Box::new(crate::stack_pointer_tracking::StackPointerTrackingPass),
            Box::new(crate::stack_vars::StackOffsetSnapshotPass),
            Box::new(crate::stack_vars::StackVarRecoveryPass),
            // ---- LVarAlloc ----
            Box::new(crate::variable_merge::VariableMergePass),
            // ---- FinalCleanup ----
            Box::new(crate::register_coalesce::RegisterCoalescePass),
            Box::new(crate::var_naming::VarNamingPass),
            Box::new(crate::expression_tree::ExpressionTreePass),
            Box::new(crate::calling_conv_finalize::CallingConvFinalizePass),
        ]
    }

    /// Every pass returns a [`PassPhase`] (trivially via the type
    /// system) and the workspace-wide count per phase matches the
    /// expected distribution. If a new pass is added without
    /// explicitly tagging it, this count will drift and the test will
    /// fail loudly, prompting the author to pick a real phase rather
    /// than letting the trait default ([`PassPhase::LocalOpt`])
    /// silently misclassify the pass.
    #[test]
    fn every_pass_has_explicit_phase() {
        use std::collections::BTreeMap;

        let passes = all_passes();
        let mut counts: BTreeMap<u8, usize> = BTreeMap::new();
        let mut names_per_phase: BTreeMap<u8, Vec<String>> = BTreeMap::new();
        for p in &passes {
            // Disambiguate the `phase()` method against any future
            // inherent method by routing through the trait.
            let phase = <dyn Pass as Pass>::phase(p.as_ref());
            let ord = phase.ordinal();
            *counts.entry(ord).or_insert(0) += 1;
            names_per_phase
                .entry(ord)
                .or_default()
                .push(<dyn Pass as Pass>::name(p.as_ref()).to_string());
        }

        // Expected distribution. Update *intentionally* when a new pass
        // is added, never just to silence a red test.
        // GoIfaceDevirtPass (TypeRecovery) is omitted from `all_passes`
        // because it borrows a `&dyn` resolver.
        let expected: BTreeMap<u8, usize> = [
            (PassPhase::PreOpt.ordinal(), 6),
            (PassPhase::LocalOpt.ordinal(), 17),
            (PassPhase::GlobalOpt.ordinal(), 10),
            (PassPhase::TypeRecovery.ordinal(), 18),
            (PassPhase::StackRecovery.ordinal(), 3),
            (PassPhase::LVarAlloc.ordinal(), 1),
            (PassPhase::FinalCleanup.ordinal(), 4),
        ]
        .into_iter()
        .collect();

        assert_eq!(
            counts, expected,
            "per-phase pass count drifted. Got {counts:?}\n\
             Per-phase names: {names_per_phase:?}\n\
             Adjust the expected map *and* the canonical pipeline order \
             documented in unlace-cli/src/pipeline.rs."
        );
    }

    /// The canonical per-function pipeline order, as a list of phases
    /// in the same sequence that
    /// `unlace_cli::pipeline::run_passes_with_report` schedules them.
    /// Kept here (not in unlace-cli) so this crate's test suite alone
    /// can detect monotonicity regressions. Changes to either side
    /// must update the other.
    fn canonical_pipeline_phases() -> Vec<PassPhase> {
        use PassPhase::*;
        // Order mirrors the literal calls in `run_passes_with_report_inner`.
        // See the matching comment in unlace-cli/src/pipeline.rs.
        vec![
            // (1) one-time pre-pass
            StackRecovery, // StackOffsetSnapshotPass
            PreOpt,        // NoreturnDetectPass (resolver-gated, once)
            // (2) outer fixed-point body — IR-level cluster
            LocalOpt,  // ConstantFoldPass
            LocalOpt,  // CopyPropagationPass
            GlobalOpt, // GlobalCopyPropPass
            LocalOpt,  // DeadCodeElimPass
            LocalOpt,  // SccpPass
            GlobalOpt, // CsePass
            GlobalOpt, // GvnPass
            LocalOpt,  // BmiIdiomPass
            GlobalOpt, // LicmPass
            LocalOpt,  // IvElimPass
            LocalOpt,  // StrengthReducePass
            LocalOpt,  // IdiomRecognitionPass
            LocalOpt,  // ConditionSimplifyPass
            PreOpt,    // CallBoundaryCopyPropPass
            PreOpt,    // RedundantFlagElimPass
            PreOpt,    // AlgebraicSimplifyPass
            // ---- cleanup ----
            LocalOpt,  // DeadStoreElimPass
            LocalOpt,  // DeadFlagElimPass
            GlobalOpt, // DeadStoreElimGlobalPass
            LocalOpt,  // DivisionIdiomPass
            LocalOpt,  // ModuloIdiomPass
            // ---- structural detection ----
            PreOpt,        // PrologueElimPass
            GlobalOpt,     // TailCallDetectPass
            StackRecovery, // StackPointerTrackingPass
            StackRecovery, // StackVarRecoveryPass
            GlobalOpt,     // IndirectCallResolvePass
            TypeRecovery,  // CppVtablePass
            // ---- type recovery ----
            TypeRecovery, // CallingConventionDetectPass
            TypeRecovery, // ParamInferPass
            TypeRecovery, // ReturnTypeInferPass
            TypeRecovery, // StructFieldDetectPass
            TypeRecovery, // TypeInferPass
            TypeRecovery, // TypeConstraintSolverPass
            // (post-loop, single shot)
            LocalOpt,     // BitfieldIdiomPass
            LocalOpt,     // CryptoIdiomPass
            GlobalOpt,    // IndirectCallResolvePass (2nd)
            GlobalOpt,    // IndirectJumpResolvePass
            TypeRecovery, // OpTypeBindingPass
            // (3) presentation post-passes
            FinalCleanup, // ExpressionTreePass
            LVarAlloc,    // VariableMergePass
            FinalCleanup, // RegisterCoalescePass
            TypeRecovery, // RustEnumPass
            TypeRecovery, // RustVtablePass
            TypeRecovery, // RustPanicPass (resolver-gated)
            FinalCleanup, // VarNamingPass
            FinalCleanup, // CallingConvFinalizePass
        ]
    }

    /// The *current* canonical pipeline is **not** strictly
    /// phase-monotonic — it interleaves PreOpt / LocalOpt / GlobalOpt
    /// inside the outer fixed-point cluster (intentionally: these
    /// passes cooperate inside one `run_to_fixedpoint`), and re-runs
    /// some phases after the inner cluster (e.g. PrologueElim,
    /// IndirectCallResolve).
    ///
    /// This test pins the current count of "backward" transitions so a
    /// future "make the pipeline truly phase-monotonic" refactor
    /// (Batch 10 slice 2+) registers as a strict win: when the
    /// transgression count decreases, update the literal and ratchet
    /// the bound down. When the canonical schedule eventually becomes
    /// monotone, flip the assertion to require zero transgressions.
    #[test]
    fn canonical_pipeline_is_documented() {
        let phases = canonical_pipeline_phases();
        assert!(
            !phases.is_empty(),
            "canonical pipeline must list at least one pass"
        );

        let mut transgressions: Vec<(usize, PassPhase, PassPhase)> = Vec::new();
        for (i, pair) in phases.windows(2).enumerate() {
            let prev = pair[0];
            let next = pair[1];
            if next.ordinal() < prev.ordinal() {
                transgressions.push((i, prev, next));
            }
        }

        // Pinned snapshot of out-of-order transitions in the
        // *current* pipeline. Decreasing this number is always a win;
        // an increase means someone added a new backward jump and must
        // justify it.
        let pinned = canonical_pipeline_transgression_count();
        assert_eq!(
            transgressions.len(),
            pinned,
            "canonical pipeline has {} phase out-of-order transitions \
             (pinned to {}): {:?}\n\
             If you intentionally reordered passes, update \
             `canonical_pipeline_transgression_count` and the \
             matching comment in unlace-cli/src/pipeline.rs.",
            transgressions.len(),
            pinned,
            transgressions
        );
    }

    /// Pinned count, kept as a separate fn so the diff is obvious when
    /// it changes. Counted from `canonical_pipeline_phases()` above as
    /// of Batch 10 slice 1 (11 backward transitions across 47 windows,
    /// 48 scheduled passes total).
    const fn canonical_pipeline_transgression_count() -> usize {
        11
    }
}
