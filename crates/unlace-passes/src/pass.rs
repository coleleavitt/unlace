//! The [`Pass`] trait and fixed-point runner.

use std::collections::BTreeMap;
use std::hash::{Hash, Hasher};

use linkscope::TraceField;
use unlace_ir::BlockId;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarMap, VarnodeSlot};

use crate::analysis_context::PreservedAnalyses;
use crate::options::PassOptions;

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

    /// Minimum pipeline maturity required for this pass to run.
    ///
    /// The pipeline driver skips passes whose `min_maturity()` exceeds
    /// the current `SsaFunction::maturity`. Default: derived from
    /// [`phase()`](Self::phase) for backward compatibility so existing
    /// passes get a correct default without per-file changes.
    fn min_maturity(&self) -> unlace_ir::Maturity {
        use unlace_ir::Maturity;
        match self.phase() {
            PassPhase::PreOpt => Maturity::Zero,
            PassPhase::LocalOpt => Maturity::Generated,
            PassPhase::GlobalOpt => Maturity::PreOptimized,
            PassPhase::TypeRecovery => Maturity::LocalOpt,
            PassPhase::StackRecovery => Maturity::Generated,
            PassPhase::LVarAlloc => Maturity::GlobalOpt,
            PassPhase::FinalCleanup => Maturity::Lvars,
        }
    }

    /// Maximum maturity at which this pass produces useful work.
    ///
    /// Above this level, the pass is skipped. Default: [`Maturity::Final`]
    /// (always runs when `min_maturity` is satisfied).
    fn max_maturity(&self) -> unlace_ir::Maturity {
        unlace_ir::Maturity::Final
    }

    /// Analyses preserved when this pass reports `Ok(true)`.
    ///
    /// The default is conservative. Passes that only touch presentation
    /// metadata, categories, names, or type annotations can preserve CFG/SSA
    /// analyses so context-aware runners avoid needless recomputation.
    fn preserved_analyses(&self) -> PreservedAnalyses {
        PreservedAnalyses::none()
    }

    /// Run one iteration of the pass.
    ///
    /// Returns `Ok(true)` if the function was modified, `Ok(false)` if
    /// no changes were made. The caller is responsible for iterating
    /// until all passes return `Ok(false)`.
    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError>;
}

/// Move SSA var-map entries when a block compaction moves an instruction.
///
/// Several passes remove instructions and compact `block.insns` in place.
/// If the destination index used to belong to a removed instruction, it may
/// still have old output/input slots in `var_map`. Clear those destination
/// slots before moving the source instruction's slots so stale metadata cannot
/// make an output-less instruction look like it defines a variable.
pub(crate) fn compact_var_map_for_moved_insn(
    var_map: &mut VarMap,
    bid: BlockId,
    old_idx: usize,
    new_idx: usize,
    input_count: usize,
) {
    if new_idx == old_idx {
        return;
    }

    clear_var_map_entries_at(var_map, bid, new_idx);

    if let Some(sv) = var_map.remove(&(bid, old_idx, VarnodeSlot::Output)) {
        var_map.insert((bid, new_idx, VarnodeSlot::Output), sv);
    }

    for input_idx in 0..input_count {
        if let Some(sv) = var_map.remove(&(bid, old_idx, VarnodeSlot::Input(input_idx))) {
            var_map.insert((bid, new_idx, VarnodeSlot::Input(input_idx)), sv);
        }
    }
}

/// Remove every `(bid, idx, *)` entry from `var_map`.
///
/// The keys are `(BlockId, usize, VarnodeSlot)` ordered lexicographically,
/// so all slots at `(bid, idx)` form a *contiguous range*. Use
/// `BTreeMap::extract_if` (stable since 1.91) with a bounded range to do
/// one O(log n) descent and drain in place, avoiding the `Vec` and the
/// second remove-pass the previous implementation used.
///
/// (Measured impact on `/usr/bin/wc`: under the noise floor. The
/// `Iter::next` cycles a perf flamegraph attributes to this map come
/// almost entirely from reverse lookups in indirect_jump_resolve,
/// indirect_call_resolve, auth_call_resolve, and go_iface_devirt —
/// each of which scans `var_map.iter()` to find an SsaVarnode by
/// value. Those are fixed by building a per-pass [`DefIndex`] once at
/// pass entry — see below.)
fn clear_var_map_entries_at(var_map: &mut VarMap, bid: BlockId, idx: usize) {
    var_map.remove_site(bid, idx);
}

/// Per-pass reverse index from a defined SSA varnode to its
/// `(BlockId, instruction_index)` Output slot.
///
/// Built once at pass entry by [`DefIndex::build`], then consulted via
/// [`DefIndex::lookup`] for O(log n) reverse lookups, replacing the
/// O(|var_map|) `var_map.iter().find_map(...)` pattern in
/// `indirect_jump_resolve`, `indirect_call_resolve`, `auth_call_resolve`,
/// and `go_iface_devirt`.
///
/// **Lifecycle**: the index is owned by the caller and only consulted
/// during read-only analysis within a single pass invocation. None of
/// the four passes using it mutate `var_map` between construction and
/// last lookup, so staleness is impossible by construction. If a future
/// caller needs to interleave mutations with lookups, rebuild the
/// index after each mutation batch.
///
/// **Why a newtype, not a bare BTreeMap**: keeps `DefIndex::lookup`'s
/// signature stable as a documented API, and prevents accidental
/// inversion (storing `(bid, idx) -> SsaVarnode`, which would just
/// duplicate `var_map`).
///
/// **Profile context**: a `perf record` of `unlace decompile
/// /usr/bin/wc --function sub_3b30` showed ~42 % of total wall-clock
/// in `BTreeMap::Iter::next` + `Vec::from_iter` over `var_map` from
/// these four passes. Approach D from the
/// `docs/perf/var-map-reverse-index-approach.md` decision matrix:
/// per-pass-local index, zero changes to `SsaFunction`, zero risk of
/// stale cross-pass index.
pub struct DefIndex {
    by_value: BTreeMap<SsaVarnode, (BlockId, usize)>,
}

impl DefIndex {
    /// Walk `func.var_map` once, collecting every Output-slot entry
    /// keyed by its defining `SsaVarnode`. O(|var_map|) one-time cost,
    /// then O(log n) per lookup.
    ///
    /// Input slots are intentionally skipped: every existing
    /// `find_def` helper this index replaces filtered on
    /// `slot == VarnodeSlot::Output`. Including Inputs would make the
    /// map non-functional (one SSA value can be the Input slot of
    /// many instructions) and would silently regress the calls that
    /// rely on the Output-only contract.
    pub fn build(func: &SsaFunction) -> Self {
        let mut by_value = BTreeMap::new();
        for ((bid, idx, slot), sv) in &func.var_map {
            if matches!(slot, VarnodeSlot::Output) {
                by_value.insert(*sv, (*bid, *idx));
            }
        }
        Self { by_value }
    }

    /// O(log n) reverse lookup: returns the `(BlockId, instruction_index)`
    /// whose Output slot is `sv`, or `None` if `sv` is not defined by a
    /// concrete instruction (e.g. it's a function parameter or a phi
    /// output — phis aren't carried in `var_map`).
    pub fn lookup(&self, sv: SsaVarnode) -> Option<(BlockId, usize)> {
        self.by_value.get(&sv).copied()
    }

    /// Number of indexed Output definitions. Useful in tests.
    pub fn len(&self) -> usize {
        self.by_value.len()
    }

    pub fn is_empty(&self) -> bool {
        self.by_value.is_empty()
    }
}

/// Run a sequence of passes to a fixed point, returning the total number
/// of individual pass invocations that reported a change.
///
/// Each iteration runs every pass in order. If *any* pass reports a
/// change the whole sequence is re-run. The loop terminates when a full
/// sweep produces no changes.
pub fn run_to_fixedpoint(
    passes: &[&dyn Pass],
    func: &mut SsaFunction,
    options: &PassOptions,
) -> Result<usize, PassError> {
    let _linkscope_span = linkscope::phase("pass.fixedpoint");
    let _linkscope_trace = if linkscope::is_enabled() {
        Some(linkscope::trace_fields(
            "pass.fixedpoint",
            [
                TraceField::text("function", func.function.name.clone()),
                TraceField::count("passes", passes.len() as u64),
            ],
        ))
    } else {
        None
    };
    const MAX_ROUNDS: usize = 200;
    let mut total_changes = 0usize;
    let func_name = func.function.name.clone();
    let mut round = 0usize;
    loop {
        round += 1;
        let _round_span = linkscope::phase("pass.fixedpoint.round");
        let _round_trace = if linkscope::is_enabled() {
            linkscope::event_fields(
                "pass.fixedpoint.round.start",
                [
                    TraceField::text("function", func_name.clone()),
                    TraceField::count("round", round as u64),
                    TraceField::count("passes", passes.len() as u64),
                ],
            );
            Some(linkscope::trace_fields(
                "pass.fixedpoint.round",
                [
                    TraceField::text("function", func_name.clone()),
                    TraceField::count("round", round as u64),
                    TraceField::count("passes", passes.len() as u64),
                ],
            ))
        } else {
            None
        };
        if round > MAX_ROUNDS {
            linkscope::event_fields(
                "pass.fixedpoint.error",
                [
                    TraceField::text("function", func_name.clone()),
                    TraceField::count("rounds", MAX_ROUNDS as u64),
                    TraceField::text(
                        "message",
                        "run_to_fixedpoint did not converge - passes are oscillating",
                    ),
                ],
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
            tracing::debug!(
                target: "unlace::pass",
                "func={func_name} round={round} pass={} start",
                pass.name()
            );
            let changed = crate::instrument::run_instrumented(*pass, func, options)?;
            let elapsed = pass_start.elapsed();
            tracing::debug!(
                target: "unlace::pass",
                "func={func_name} round={round} pass={} done changed={} elapsed_ms={}",
                pass.name(),
                changed,
                elapsed.as_millis(),
            );
            if elapsed >= std::time::Duration::from_millis(500) {
                linkscope::event_fields(
                    "pass.slow",
                    [
                        TraceField::text("function", func_name.clone()),
                        TraceField::text("pass", pass.name().to_string()),
                        TraceField::count("round", round as u64),
                        TraceField::count("elapsed_ms", elapsed.as_millis() as u64),
                    ],
                );
            }
            if changed {
                changed_this_round = true;
                total_changes += 1;
                changed_passes.push(pass.name());
            }
        }
        if changed_this_round {
            linkscope::event_fields(
                "pass.fixedpoint.round.changed",
                [
                    TraceField::text("function", func_name.clone()),
                    TraceField::count("round", round as u64),
                    TraceField::text("changed_passes", changed_passes.join(",")),
                ],
            );
        }
        if !changed_this_round {
            break;
        }
    }
    linkscope::event_fields(
        "pass.fixedpoint.converged",
        [
            TraceField::text("function", func_name),
            TraceField::count("rounds", round as u64),
            TraceField::count("total_changes", total_changes as u64),
        ],
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
    let _linkscope_span = linkscope::phase("pass.outer-fixedpoint");
    let _linkscope_trace = if linkscope::is_enabled() {
        Some(linkscope::trace_fields(
            "pass.outer-fixedpoint",
            [
                TraceField::text("function", func.function.name.clone()),
                TraceField::count("max_iters", max_iters as u64),
            ],
        ))
    } else {
        None
    };
    let max_iters = max_iters.max(1);
    let func_name = func.function.name.clone();
    let mut report = OuterFixedpointReport::default();
    let mut prev_sig = ssa_type_signature(func);

    for iter in 0..max_iters {
        let _iter_span = linkscope::phase("pass.outer-fixedpoint.iter");
        let _iter_trace = if linkscope::is_enabled() {
            linkscope::event_fields(
                "pass.outer-fixedpoint.iter.start",
                [
                    TraceField::text("function", func_name.clone()),
                    TraceField::count("iter", (iter + 1) as u64),
                    TraceField::count("max_iters", max_iters as u64),
                ],
            );
            Some(linkscope::trace_fields(
                "pass.outer-fixedpoint.iter",
                [
                    TraceField::text("function", func_name.clone()),
                    TraceField::count("iter", (iter + 1) as u64),
                    TraceField::count("max_iters", max_iters as u64),
                ],
            ))
        } else {
            None
        };
        cycle(func, iter)?;
        report.iterations = iter + 1;
        let new_sig = ssa_type_signature(func);
        let changed = new_sig != prev_sig;
        report.changed_per_iteration.push(changed);
        linkscope::event_fields(
            "pass.outer-fixedpoint.iter.done",
            [
                TraceField::text("function", func_name.clone()),
                TraceField::count("iter", (iter + 1) as u64),
                TraceField::text("changed", changed.to_string()),
            ],
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
        linkscope::event_fields(
            "pass.outer-fixedpoint.hit-cap",
            [
                TraceField::text("function", func_name),
                TraceField::count("cap", max_iters as u64),
            ],
        );
    }
    Ok(report)
}

/// Validate that a slice of passes is phase-monotonic — i.e. every pair
/// of adjacent passes satisfies `prev.phase() <= next.phase()`.
///
/// Returns `Ok(())` when the slice is monotonic. Otherwise returns
/// `Err(Vec<String>)` with one human-readable line per out-of-order
/// transition, in the form:
///
/// ```text
/// "at index 7: pass 'CallBoundaryCopyPropPass' [PreOpt] follows 'IvElimPass' [LocalOpt]"
/// ```
///
/// The current canonical pipeline is *intentionally not* strictly
/// monotonic (see the comment on [`PassPhase`] and the unit test
/// `canonical_pipeline_is_documented` for the pinned transgression
/// count). This function is the runtime equivalent of that test — it
/// exists so the pipeline driver, an xtask, or a future scheduler can
/// surface phase-order regressions on the live `passes` slice instead
/// of relying on a hand-maintained mirror.
///
/// The function is name-agnostic: it pulls `pass.name()` and
/// `pass.phase()` through the [`Pass`] trait, so any sequence (the
/// inner fixedpoint cluster, a one-shot vector, or the full canonical
/// pipeline) can be checked.
pub fn validate_phase_monotonicity(passes: &[&dyn Pass]) -> Result<(), Vec<String>> {
    let mut violations: Vec<String> = Vec::new();
    for (i, pair) in passes.windows(2).enumerate() {
        let prev = pair[0];
        let next = pair[1];
        if next.phase().ordinal() < prev.phase().ordinal() {
            violations.push(format!(
                "at index {next_i}: pass '{next_name}' [{next_phase:?}] follows '{prev_name}' [{prev_phase:?}]",
                next_i = i + 1,
                next_name = next.name(),
                next_phase = next.phase(),
                prev_name = prev.name(),
                prev_phase = prev.phase(),
            ));
        }
    }
    if violations.is_empty() {
        Ok(())
    } else {
        Err(violations)
    }
}

/// Name + phase pair used by [`canonical_pipeline_descriptor`] and
/// [`validate_named_phase_monotonicity`]. Lightweight (no `dyn Pass`)
/// so xtask binaries and CLI startup checks can use it without
/// constructing every pass instance.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PassDescriptor {
    /// Display name, matching `Pass::name()` for the underlying pass.
    pub name: &'static str,
    /// Phase tag, matching `Pass::phase()` for the underlying pass.
    pub phase: PassPhase,
}

impl PassDescriptor {
    /// Construct a descriptor from a literal name + phase.
    pub const fn new(name: &'static str, phase: PassPhase) -> Self {
        Self { name, phase }
    }
}

/// Explicitly-allowed backward phase transition in the canonical
/// pipeline, with a human-readable reason. Replaces the prior
/// "intentional in current pipeline" generic blurb so a representative
/// decompile run can explain *why* each apparent phase regression is
/// not a bug.
///
/// Matched by `(prev_name, next_name)`; the names must equal the
/// adjacent passes' `PassDescriptor::name` in the canonical schedule.
/// Adding a brand-new backward transition without a matching entry
/// here makes [`validate_named_phase_monotonicity_with_exceptions`]
/// (and therefore the `every_canonical_backedge_has_a_registered_exception`
/// test) fail.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AllowedBackedge {
    /// `PassDescriptor::name` of the earlier (higher-phase) pass.
    pub prev_name: &'static str,
    /// `PassDescriptor::name` of the later (lower-phase) pass.
    pub next_name: &'static str,
    /// Why this backward transition is intentional. One short sentence;
    /// surfaced verbatim by `cargo xtask dump-pipeline` and by the
    /// `unlace::schedule=info` CLI startup hook.
    pub reason: &'static str,
}

impl AllowedBackedge {
    /// Construct a backedge entry from string literals.
    pub const fn new(
        prev_name: &'static str,
        next_name: &'static str,
        reason: &'static str,
    ) -> Self {
        Self {
            prev_name,
            next_name,
            reason,
        }
    }
}

/// The list of *intentional* backward phase transitions in
/// [`canonical_pipeline_descriptor`], each tagged with a reason.
///
/// Every entry corresponds to one of the 11 pinned out-of-order
/// transitions in the current schedule. They cluster into four
/// well-understood patterns:
///
/// 1. **One-time pre-pass cluster** — `StackOffsetSnapshotPass` runs
///    *before* phase-zero `NoreturnDetectPass` because it has to snapshot
///    pre-optimization RSP/RBP offsets before any rewrite touches them.
/// 2. **Inner outer-fixedpoint cluster** — IDA's GLBOPT loops co-iterate
///    PreOpt cleanups, LocalOpt simplifiers and GlobalOpt analyses
///    inside one `run_to_fixedpoint`. We mirror that, so a few
///    `LocalOpt` passes appear after `GlobalOpt` passes inside the
///    cluster.
/// 3. **Post-fixedpoint cleanup + structural detection re-entry** —
///    After the IR-level fixedpoint converges we run targeted passes
///    (Prologue elim, indirect-call resolve) that legitimately sit at
///    earlier phases.
/// 4. **Presentation post-passes** — `VariableMergePass` (LVarAlloc)
///    and `RustEnumPass` (TypeRecovery) intentionally run *after*
///    presentation-layer cleanups because their inputs are the
///    presentation-cleaned IR.
pub fn canonical_pipeline_backedge_exceptions() -> &'static [AllowedBackedge] {
    // The order of this slice matches the canonical schedule, but the
    // matcher is name-keyed, so reordering is harmless.
    const ENTRIES: &[AllowedBackedge] = &[
        AllowedBackedge::new(
            "StackOffsetSnapshotPass",
            "NoreturnDetectPass",
            "one-time pre-pass: snapshot RSP/RBP offsets before any IR rewrite",
        ),
        AllowedBackedge::new(
            "GlobalCopyPropPass",
            "DeadCodeElimPass",
            "inner fixedpoint cluster: DCE follows global copy-prop to clean up dead defs",
        ),
        AllowedBackedge::new(
            "GvnPass",
            "BmiIdiomPass",
            "inner fixedpoint cluster: BMI idiom recognition needs GVN-canonical inputs",
        ),
        AllowedBackedge::new(
            "LicmPass",
            "IvElimPass",
            "inner fixedpoint cluster: IV elim consumes LICM-hoisted loop invariants",
        ),
        AllowedBackedge::new(
            "KnownBitsSimplifyPass",
            "CmovPreservePass",
            "inner fixedpoint cluster: re-run PreOpt cleanups after condition simplify exposes new copies",
        ),
        AllowedBackedge::new(
            "DeadStoreElimGlobalPass",
            "DivisionIdiomPass",
            "post-fixedpoint cleanup: idiom recognition after global DSE removes redundant stores",
        ),
        AllowedBackedge::new(
            "SixtyFourBitDemotePass",
            "PrologueElimPass",
            "structural detection re-entry: prologue elim after 64-bit demote may expose new prologue patterns",
        ),
        AllowedBackedge::new(
            "StackVarRecoveryPass",
            "IndirectCallResolvePass",
            "structural detection re-entry: indirect-call resolve after stack vars exposes pointer args",
        ),
        AllowedBackedge::new(
            "RustAsyncPass",
            "RepStringIdiomPass",
            "post-loop single shot: low-level idiom recognition uses solved language/type facts",
        ),
        AllowedBackedge::new(
            "ExpressionTreePass",
            "VariableMergePass",
            "presentation post-pass: variable merge runs on expression-tree-cleaned IR",
        ),
        AllowedBackedge::new(
            "RegisterCoalescePass",
            "RustEnumPass",
            "presentation post-pass: Rust-runtime detection consumes coalesced registers",
        ),
    ];
    ENTRIES
}

/// One violation row returned by
/// [`validate_named_phase_monotonicity_with_exceptions`].
///
/// Distinct from the human-readable strings of
/// [`validate_named_phase_monotonicity`] because callers (xtask, CLI,
/// tests) want structured access to the offending pair to decide
/// whether to print, exit non-zero, or assert in tests.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PhaseViolation {
    /// Index of `next` in the schedule (i.e. `i + 1`).
    pub index: usize,
    /// Name of the earlier (higher-phase) pass.
    pub prev_name: String,
    /// Phase of the earlier pass.
    pub prev_phase: PassPhase,
    /// Name of the later (lower-phase) pass.
    pub next_name: String,
    /// Phase of the later pass.
    pub next_phase: PassPhase,
}

impl PhaseViolation {
    /// Render the violation as a one-line diagnostic, suitable for CLI
    /// warnings or test failure messages.
    pub fn to_message(&self) -> String {
        format!(
            "at index {}: pass '{}' [{:?}] follows '{}' [{:?}]",
            self.index, self.next_name, self.next_phase, self.prev_name, self.prev_phase,
        )
    }
}

/// Like [`validate_named_phase_monotonicity`], but subtracts the
/// explicitly-allowed backedges in
/// [`canonical_pipeline_backedge_exceptions`].
///
/// Returns `Ok(())` when every backward transition in `passes` is
/// covered by a registered exception. Otherwise returns the offending
/// transitions as structured [`PhaseViolation`] rows. Use this from
/// CLI startup checks, xtask, and tests that need to fail loudly on
/// *new* (un-explained) phase regressions.
pub fn validate_named_phase_monotonicity_with_exceptions(
    passes: &[PassDescriptor],
) -> Result<(), Vec<PhaseViolation>> {
    let allowed = canonical_pipeline_backedge_exceptions();
    let mut violations: Vec<PhaseViolation> = Vec::new();
    for (i, pair) in passes.windows(2).enumerate() {
        let prev = pair[0];
        let next = pair[1];
        if next.phase.ordinal() < prev.phase.ordinal() {
            let allowed_hit = allowed
                .iter()
                .any(|e| e.prev_name == prev.name && e.next_name == next.name);
            if !allowed_hit {
                violations.push(PhaseViolation {
                    index: i + 1,
                    prev_name: prev.name.to_string(),
                    prev_phase: prev.phase,
                    next_name: next.name.to_string(),
                    next_phase: next.phase,
                });
            }
        }
    }
    if violations.is_empty() {
        Ok(())
    } else {
        Err(violations)
    }
}

/// `&[PassDescriptor]` equivalent of [`validate_phase_monotonicity`].
///
/// Useful when the caller wants to validate a *schedule* described as
/// name/phase pairs (e.g. the canonical CLI pipeline, an xtask dump,
/// or a future config-driven scheduler) without constructing the full
/// `dyn Pass` graph.
pub fn validate_named_phase_monotonicity(passes: &[PassDescriptor]) -> Result<(), Vec<String>> {
    let mut violations: Vec<String> = Vec::new();
    for (i, pair) in passes.windows(2).enumerate() {
        let prev = pair[0];
        let next = pair[1];
        if next.phase.ordinal() < prev.phase.ordinal() {
            violations.push(format!(
                "at index {next_i}: pass '{next_name}' [{next_phase:?}] follows '{prev_name}' [{prev_phase:?}]",
                next_i = i + 1,
                next_name = next.name,
                next_phase = next.phase,
                prev_name = prev.name,
                prev_phase = prev.phase,
            ));
        }
    }
    if violations.is_empty() {
        Ok(())
    } else {
        Err(violations)
    }
}

/// The canonical per-function pipeline schedule, in the *exact* order
/// `unlace_cli::pipeline::run_passes_with_report_inner` runs them.
///
/// This is the runtime mirror of the (test-only)
/// `canonical_pipeline_phases` table in this file: it must be kept in
/// sync with the literal calls in `pipeline.rs`. The two are
/// cross-checked by the `canonical_descriptor_matches_test_phases`
/// unit test below.
///
/// Consumers:
///   * `unlace-cli` startup-time validation when `unlace::schedule=info`
///     (or `cfg!(debug_assertions)`).
///   * `cargo xtask dump-pipeline`.
pub fn canonical_pipeline_descriptor() -> Vec<PassDescriptor> {
    use PassPhase::*;
    vec![
        // (1) one-time pre-pass
        PassDescriptor::new("StackOffsetSnapshotPass", StackRecovery),
        PassDescriptor::new("NoreturnDetectPass", PreOpt),
        // (2) outer fixed-point body — IR-level cluster
        PassDescriptor::new("AliasCategorizePass", PreOpt),
        PassDescriptor::new("ConstantFoldPass", LocalOpt),
        PassDescriptor::new("CopyPropagationPass", LocalOpt),
        PassDescriptor::new("GlobalCopyPropPass", GlobalOpt),
        PassDescriptor::new("DeadCodeElimPass", LocalOpt),
        PassDescriptor::new("SccpPass", LocalOpt),
        PassDescriptor::new("CsePass", GlobalOpt),
        PassDescriptor::new("GvnPass", GlobalOpt),
        PassDescriptor::new("BmiIdiomPass", LocalOpt),
        PassDescriptor::new("LicmPass", GlobalOpt),
        PassDescriptor::new("IvElimPass", LocalOpt),
        PassDescriptor::new("StrengthReducePass", LocalOpt),
        PassDescriptor::new("IdiomRecognitionPass", LocalOpt),
        PassDescriptor::new("ConditionSimplifyPass", LocalOpt),
        PassDescriptor::new("BoolSimplifyPass", LocalOpt),
        PassDescriptor::new("KnownBitsSimplifyPass", LocalOpt),
        PassDescriptor::new("CmovPreservePass", PreOpt),
        PassDescriptor::new("CallBoundaryCopyPropPass", PreOpt),
        PassDescriptor::new("RedundantFlagElimPass", PreOpt),
        PassDescriptor::new("AlgebraicSimplifyPass", PreOpt),
        // ---- cleanup ----
        PassDescriptor::new("DeadStoreElimPass", LocalOpt),
        PassDescriptor::new("DeadFlagElimPass", LocalOpt),
        PassDescriptor::new("MemorySsaDsePass", LocalOpt),
        PassDescriptor::new("CfgRepairPass", GlobalOpt),
        PassDescriptor::new("DeadStoreElimGlobalPass", GlobalOpt),
        PassDescriptor::new("DivisionIdiomPass", LocalOpt),
        PassDescriptor::new("ModuloIdiomPass", LocalOpt),
        PassDescriptor::new("SixtyFourBitDemotePass", GlobalOpt),
        // ---- structural detection ----
        PassDescriptor::new("PrologueElimPass", PreOpt),
        PassDescriptor::new("TailCallDetectPass", GlobalOpt),
        PassDescriptor::new("StackPointerTrackingPass", StackRecovery),
        PassDescriptor::new("StackVarRecoveryPass", StackRecovery),
        PassDescriptor::new("IndirectCallResolvePass", GlobalOpt),
        PassDescriptor::new("CppVtablePass", TypeRecovery),
        PassDescriptor::new("CppMethodPass", TypeRecovery),
        // ---- type recovery ----
        PassDescriptor::new("CallingConventionDetectPass", TypeRecovery),
        PassDescriptor::new("ParamInferPass", TypeRecovery),
        PassDescriptor::new("ReturnTypeInferPass", TypeRecovery),
        PassDescriptor::new("StructFieldDetectPass", TypeRecovery),
        PassDescriptor::new("TypeInferPass", TypeRecovery),
        PassDescriptor::new("TypeConstraintSolverPass", TypeRecovery),
        PassDescriptor::new("TypeVotePass", TypeRecovery),
        PassDescriptor::new("ObjectWidenPass", TypeRecovery),
        PassDescriptor::new("SizeofRecognitionPass", TypeRecovery),
        PassDescriptor::new("CppVariantPass", TypeRecovery),
        PassDescriptor::new("CppLambdaCapturePass", TypeRecovery),
        PassDescriptor::new("CppCoroutinePass", TypeRecovery),
        PassDescriptor::new("RustAsyncPass", TypeRecovery),
        // (post-loop, single shot)
        PassDescriptor::new("RepStringIdiomPass", LocalOpt),
        PassDescriptor::new("BitfieldIdiomPass", LocalOpt),
        PassDescriptor::new("CryptoIdiomPass", LocalOpt),
        PassDescriptor::new("IndirectCallResolvePass", GlobalOpt),
        PassDescriptor::new("IndirectJumpResolvePass", GlobalOpt),
        PassDescriptor::new("OpTypeBindingPass", TypeRecovery),
        // (3) presentation post-passes
        PassDescriptor::new("DeadPhiElimPass", FinalCleanup),
        PassDescriptor::new("TempHomePass", FinalCleanup),
        PassDescriptor::new("ExpressionTreePass", FinalCleanup),
        PassDescriptor::new("VariableMergePass", LVarAlloc),
        PassDescriptor::new("LvarCollectPass", FinalCleanup),
        PassDescriptor::new("RegisterCoalescePass", FinalCleanup),
        PassDescriptor::new("RustEnumPass", TypeRecovery),
        PassDescriptor::new("RustVtablePass", TypeRecovery),
        PassDescriptor::new("RustPanicPass", TypeRecovery),
        PassDescriptor::new("VarNamingPass", FinalCleanup),
        PassDescriptor::new("CallingConvFinalizePass", FinalCleanup),
    ]
}

#[cfg(test)]
mod def_index_tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, IrOp, Varnode};

    /// `u0 = COPY const; u1 = COPY u0; RETURN u1` — the index must map
    /// each Output varnode back to its defining instruction index, and
    /// return None for a value that no instruction defines.
    #[test]
    fn def_index_maps_outputs_and_misses_undefined() {
        let mut func = Function::new("f", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            u0,
            smallvec![Varnode::constant(0xCAFE, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::with_output(IrOp::Copy, u1, smallvec![u0], 0x1004));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![u1], 0x1008));
        func.insert_block(bb);
        let ssa = build_ssa(func);

        let defs = DefIndex::build(&ssa);
        // Every Output slot in var_map must resolve through the index to
        // the same (bid, idx) the forward map records.
        for ((bid, idx, slot), sv) in &ssa.var_map {
            if matches!(slot, VarnodeSlot::Output) {
                assert_eq!(
                    defs.lookup(*sv),
                    Some((*bid, *idx)),
                    "Output {sv:?} must map back to ({bid:?}, {idx})"
                );
            }
        }
        // A varnode that is never an Output (a fresh unique) misses.
        let absent = SsaVarnode {
            base: Varnode::unique(99, 8),
            version: 0,
        };
        assert_eq!(defs.lookup(absent), None);
        assert!(!defs.is_empty());
    }

    /// An empty function yields an empty index.
    #[test]
    fn def_index_empty_function() {
        let func = Function::new("empty", BlockId(0), 0x2000);
        let ssa = build_ssa(func);
        let defs = DefIndex::build(&ssa);
        assert!(defs.is_empty());
        assert_eq!(defs.len(), 0);
    }
}

#[cfg(test)]
mod validate_tests {
    use super::*;

    /// Minimal `Pass` impl whose only purpose is to carry a phase tag
    /// for the monotonicity tests; `run` panics so a misuse can't
    /// silently no-op.
    struct StubPass {
        name: &'static str,
        phase: PassPhase,
    }
    impl Pass for StubPass {
        fn name(&self) -> &str {
            self.name
        }
        fn phase(&self) -> PassPhase {
            self.phase
        }
        fn run(&self, _func: &mut unlace_ir::ssa::SsaFunction) -> Result<bool, PassError> {
            unreachable!("validate_tests StubPass should never be executed")
        }
    }

    #[test]
    fn validate_accepts_monotonic_sequence() {
        let a = StubPass {
            name: "a",
            phase: PassPhase::PreOpt,
        };
        let b = StubPass {
            name: "b",
            phase: PassPhase::LocalOpt,
        };
        let c = StubPass {
            name: "c",
            phase: PassPhase::TypeRecovery,
        };
        let d = StubPass {
            name: "d",
            phase: PassPhase::FinalCleanup,
        };
        let passes: &[&dyn Pass] = &[&a, &b, &c, &d];
        assert!(validate_phase_monotonicity(passes).is_ok());
    }

    #[test]
    fn validate_accepts_equal_phase_runs() {
        // Same phase repeated should be considered monotone (`<=`).
        let p1 = StubPass {
            name: "x",
            phase: PassPhase::LocalOpt,
        };
        let p2 = StubPass {
            name: "y",
            phase: PassPhase::LocalOpt,
        };
        let p3 = StubPass {
            name: "z",
            phase: PassPhase::LocalOpt,
        };
        let passes: &[&dyn Pass] = &[&p1, &p2, &p3];
        assert!(validate_phase_monotonicity(passes).is_ok());
    }

    #[test]
    fn validate_accepts_empty_and_single() {
        assert!(validate_phase_monotonicity(&[]).is_ok());
        let only = StubPass {
            name: "only",
            phase: PassPhase::GlobalOpt,
        };
        let passes: &[&dyn Pass] = &[&only];
        assert!(validate_phase_monotonicity(passes).is_ok());
    }

    #[test]
    fn validate_reports_single_violation() {
        // GlobalOpt → LocalOpt is a backward jump.
        let a = StubPass {
            name: "gvn",
            phase: PassPhase::GlobalOpt,
        };
        let b = StubPass {
            name: "sccp",
            phase: PassPhase::LocalOpt,
        };
        let passes: &[&dyn Pass] = &[&a, &b];
        let err = validate_phase_monotonicity(passes).unwrap_err();
        assert_eq!(err.len(), 1);
        let msg = &err[0];
        assert!(msg.contains("sccp"), "msg = {msg}");
        assert!(msg.contains("gvn"), "msg = {msg}");
        assert!(msg.contains("LocalOpt"), "msg = {msg}");
        assert!(msg.contains("GlobalOpt"), "msg = {msg}");
        assert!(msg.contains("index 1"), "msg = {msg}");
    }

    #[test]
    fn validate_reports_multiple_violations_in_order() {
        // FinalCleanup → PreOpt → LocalOpt → PreOpt yields two violations.
        let a = StubPass {
            name: "p_final",
            phase: PassPhase::FinalCleanup,
        };
        let b = StubPass {
            name: "p_pre",
            phase: PassPhase::PreOpt,
        };
        let c = StubPass {
            name: "p_local",
            phase: PassPhase::LocalOpt,
        };
        let d = StubPass {
            name: "p_pre2",
            phase: PassPhase::PreOpt,
        };
        let passes: &[&dyn Pass] = &[&a, &b, &c, &d];
        let err = validate_phase_monotonicity(passes).unwrap_err();
        assert_eq!(err.len(), 2);
        // First violation: index 1 (b follows a, FinalCleanup → PreOpt).
        assert!(err[0].contains("index 1"), "{:?}", err[0]);
        assert!(err[0].contains("p_pre"), "{:?}", err[0]);
        // Second violation: index 3 (d follows c, LocalOpt → PreOpt).
        assert!(err[1].contains("index 3"), "{:?}", err[1]);
        assert!(err[1].contains("p_pre2"), "{:?}", err[1]);
    }

    #[test]
    fn validate_named_matches_dyn_pass_variant_on_canonical() {
        // The canonical descriptor is the runtime mirror of the
        // (test-only) `canonical_pipeline_phases` table. Both should
        // produce the same transgression count when fed through their
        // respective validators. We exercise the named variant here;
        // the dyn-Pass variant is exercised on synthetic stubs above
        // because constructing every real pass is heavy.
        let desc = canonical_pipeline_descriptor();
        let err = validate_named_phase_monotonicity(&desc)
            .expect_err("canonical pipeline is intentionally not monotone (Batch 10 slice 1)");
        // Must match the count pinned by the existing
        // `canonical_pipeline_is_documented` test.
        assert_eq!(
            err.len(),
            super::phase_tests::canonical_pipeline_transgression_count(),
            "descriptor transgression count drifted from phase_tests pin: {err:#?}"
        );
    }

    #[test]
    fn canonical_descriptor_matches_test_phases() {
        // The phase sequence emitted by `canonical_pipeline_descriptor`
        // must align with the (test-only) `canonical_pipeline_phases`
        // table to prove the two mirrors of the CLI schedule agree.
        let desc = canonical_pipeline_descriptor();
        let phases: Vec<PassPhase> = desc.iter().map(|d| d.phase).collect();
        let expected = super::phase_tests::canonical_pipeline_phases();
        assert_eq!(
            phases, expected,
            "canonical_pipeline_descriptor diverged from canonical_pipeline_phases"
        );
    }
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
        // Includes all pass modules declared in `lib.rs` that can be
        // constructed without borrowing an external analysis/resolver.
        vec![
            // ---- PreOpt ----
            Box::new(crate::alias_categorize::AliasCategorizePass::new()),
            Box::new(crate::algebraic_simplify::AlgebraicSimplifyPass),
            Box::new(crate::call_boundary_copyprop::CallBoundaryCopyPropPass),
            Box::new(crate::redundant_flag_elim::RedundantFlagElimPass),
            Box::new(crate::prologue_elim::PrologueElimPass),
            Box::new(crate::noreturn::NoreturnDetectPass::new()),
            Box::new(crate::cmov_preserve::CmovPreservePass),
            // ---- LocalOpt ----
            Box::new(crate::sccp::SccpPass::default()),
            Box::new(crate::copy_prop::CopyPropagationPass),
            Box::new(crate::const_fold::ConstantFoldPass),
            Box::new(crate::dce::DeadCodeElimPass),
            Box::new(crate::dead_store_elim::DeadStoreElimPass),
            Box::new(crate::dead_flag_elim::DeadFlagElimPass),
            Box::new(crate::condition_simplify::ConditionSimplifyPass),
            Box::new(crate::bool_simplify::BoolSimplifyPass),
            Box::new(crate::known_bits_simplify::KnownBitsSimplifyPass),
            Box::new(crate::strength_reduce::StrengthReducePass::default()),
            Box::new(crate::iv_elim::IvElimPass::default()),
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
            Box::new(crate::cfg_repair::CfgRepairPass),
            Box::new(crate::tail_call::TailCallDetectPass),
            Box::new(crate::indirect_call_resolve::IndirectCallResolvePass),
            Box::new(crate::indirect_jump_resolve::IndirectJumpResolvePass),
            Box::new(crate::sixty_four_bit_demote::SixtyFourBitDemotePass),
            // ---- TypeRecovery ----
            Box::new(crate::type_infer::TypeInferPass),
            Box::new(crate::type_constraint_solver::TypeConstraintSolverPass::default()),
            Box::new(crate::type_vote::TypeVotePass),
            Box::new(crate::op_type_binding::OpTypeBindingPass),
            Box::new(crate::calling_convention::CallingConventionDetectPass),
            Box::new(crate::calling_convention::ParamInferPass),
            Box::new(crate::calling_convention::ReturnTypeInferPass),
            Box::new(crate::struct_field_detect::StructFieldDetectPass),
            Box::new(crate::object_widen::ObjectWidenPass),
            Box::new(crate::sizeof_recognition::SizeofRecognitionPass::default()),
            Box::new(crate::cpp_vtable::CppVtablePass),
            Box::new(crate::cpp_method::CppMethodPass),
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
            Box::new(crate::variable_merge::VariableMergePass::default()),
            Box::new(crate::lvar_collect::LvarCollectPass),
            // ---- FinalCleanup ----
            Box::new(crate::dce::DeadPhiElimPass),
            Box::new(crate::temp_home::TempHomePass),
            Box::new(crate::register_coalesce::RegisterCoalescePass),
            Box::new(crate::var_naming::VarNamingPass::default()),
            Box::new(crate::expression_tree::ExpressionTreePass),
            Box::new(crate::calling_conv_finalize::CallingConvFinalizePass),
        ]
    }

    /// Pass implementations that no pipeline schedules; compiled only with
    /// the `unwired` feature.
    #[cfg(feature = "unwired")]
    fn unwired_passes() -> Vec<Box<dyn Pass>> {
        vec![
            Box::new(crate::gcc_cleanup::GccCleanupPass {
                cleanup_symbols: std::collections::BTreeMap::new(),
            }),
            Box::new(crate::junk_code_removal::JunkCodeRemovalPass),
            Box::new(crate::tail_duplication::TailDuplicationPass),
            Box::new(crate::bool_coverage::BoolCoveragePass),
            Box::new(crate::func_ptr_table::FuncPtrTablePass),
            Box::new(crate::msvc_seh::MsvcSehPass {
                scope_tables: std::collections::BTreeMap::new(),
            }),
            Box::new(crate::counterexample_refine::CounterexampleRefinePass),
            Box::new(crate::calling_conv_whole_prog::WholeProgCallingConvPass {
                registry: unlace_ir::signature::FunctionSignatureRegistry::new(),
            }),
            Box::new(crate::bitfield_recovery::BitfieldRecoveryPass),
            Box::new(crate::daikon_invariants::DaikonInvariantPass),
            Box::new(crate::ipa_slice::IpaSlicePass),
            Box::new(crate::path_sensitive::PathSensitivePass),
            Box::new(crate::pgo_outlining::PgoOutliningPass),
            Box::new(crate::symbolic_heap::SymbolicHeapPass),
            Box::new(crate::taint_engine::TaintEnginePass {
                symbols: std::collections::BTreeMap::new(),
            }),
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
            (PassPhase::PreOpt.ordinal(), 7),
            (PassPhase::LocalOpt.ordinal(), 18),
            (PassPhase::GlobalOpt.ordinal(), 10),
            (PassPhase::TypeRecovery.ordinal(), 20),
            (PassPhase::StackRecovery.ordinal(), 3),
            (PassPhase::LVarAlloc.ordinal(), 1),
            (PassPhase::FinalCleanup.ordinal(), 7),
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

    #[cfg(feature = "unwired")]
    #[test]
    fn every_unwired_pass_has_explicit_phase() {
        use std::collections::BTreeMap;

        let mut counts: BTreeMap<u8, usize> = BTreeMap::new();
        for p in &unwired_passes() {
            *counts
                .entry(<dyn Pass as Pass>::phase(p.as_ref()).ordinal())
                .or_insert(0) += 1;
        }
        let expected: BTreeMap<u8, usize> = [
            (PassPhase::PreOpt.ordinal(), 2),
            (PassPhase::GlobalOpt.ordinal(), 4),
            (PassPhase::TypeRecovery.ordinal(), 9),
        ]
        .into_iter()
        .collect();
        assert_eq!(counts, expected, "per-phase unwired pass count drifted");
    }

    /// The canonical per-function pipeline order, as a list of phases
    /// in the same sequence that
    /// `unlace_cli::pipeline::run_passes_with_report` schedules them.
    /// Kept here (not in unlace-cli) so this crate's test suite alone
    /// can detect monotonicity regressions. Changes to either side
    /// must update the other.
    pub(super) fn canonical_pipeline_phases() -> Vec<PassPhase> {
        use PassPhase::*;
        // Order mirrors the literal calls in `run_passes_with_report_inner`.
        // See the matching comment in unlace-cli/src/pipeline.rs.
        vec![
            // (1) one-time pre-pass
            StackRecovery, // StackOffsetSnapshotPass
            PreOpt,        // NoreturnDetectPass (resolver-gated, once)
            // (2) outer fixed-point body — IR-level cluster
            PreOpt,    // AliasCategorizePass
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
            LocalOpt,  // BoolSimplifyPass
            LocalOpt,  // KnownBitsSimplifyPass
            PreOpt,    // CmovPreservePass
            PreOpt,    // CallBoundaryCopyPropPass
            PreOpt,    // RedundantFlagElimPass
            PreOpt,    // AlgebraicSimplifyPass
            // ---- cleanup ----
            LocalOpt,  // DeadStoreElimPass
            LocalOpt,  // DeadFlagElimPass
            LocalOpt,  // MemorySsaDsePass
            GlobalOpt, // CfgRepairPass
            GlobalOpt, // DeadStoreElimGlobalPass
            LocalOpt,  // DivisionIdiomPass
            LocalOpt,  // ModuloIdiomPass
            GlobalOpt, // SixtyFourBitDemotePass
            // ---- structural detection ----
            PreOpt,        // PrologueElimPass
            GlobalOpt,     // TailCallDetectPass
            StackRecovery, // StackPointerTrackingPass
            StackRecovery, // StackVarRecoveryPass
            GlobalOpt,     // IndirectCallResolvePass
            TypeRecovery,  // CppVtablePass
            TypeRecovery,  // CppMethodPass
            // ---- type recovery ----
            TypeRecovery, // CallingConventionDetectPass
            TypeRecovery, // ParamInferPass
            TypeRecovery, // ReturnTypeInferPass
            TypeRecovery, // StructFieldDetectPass
            TypeRecovery, // TypeInferPass
            TypeRecovery, // TypeConstraintSolverPass
            TypeRecovery, // TypeVotePass
            TypeRecovery, // ObjectWidenPass
            TypeRecovery, // SizeofRecognitionPass
            TypeRecovery, // CppVariantPass
            TypeRecovery, // CppLambdaCapturePass
            TypeRecovery, // CppCoroutinePass
            TypeRecovery, // RustAsyncPass
            // (post-loop, single shot)
            LocalOpt,     // RepStringIdiomPass
            LocalOpt,     // BitfieldIdiomPass
            LocalOpt,     // CryptoIdiomPass
            GlobalOpt,    // IndirectCallResolvePass (2nd)
            GlobalOpt,    // IndirectJumpResolvePass
            TypeRecovery, // OpTypeBindingPass
            // (3) presentation post-passes
            FinalCleanup, // DeadPhiElimPass
            FinalCleanup, // TempHomePass
            FinalCleanup, // ExpressionTreePass
            LVarAlloc,    // VariableMergePass
            FinalCleanup, // LvarCollectPass
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
    /// it changes. Counted from `canonical_pipeline_phases()` above:
    /// 11 backward transitions across 60 windows, 61 scheduled passes total.
    pub(super) const fn canonical_pipeline_transgression_count() -> usize {
        11
    }

    /// Batch 16: the canonical pipeline's backward transitions must all
    /// be covered by `canonical_pipeline_backedge_exceptions`. Adding a
    /// new backward transition without registering an exception (or
    /// inserting a pass into the wrong phase) fails this test.
    ///
    /// This is the DoD test for Batch 16: "inserting a pass into the
    /// wrong phase fails a test."
    #[test]
    fn every_canonical_backedge_has_a_registered_exception() {
        let desc = super::canonical_pipeline_descriptor();
        match super::validate_named_phase_monotonicity_with_exceptions(&desc) {
            Ok(()) => {}
            Err(violations) => {
                let lines: Vec<String> = violations.iter().map(|v| v.to_message()).collect();
                panic!(
                    "canonical pipeline has unexplained backward phase transition(s):\n  {}\n\
                     If this is intentional, register a matching \
                     `AllowedBackedge` in \
                     `canonical_pipeline_backedge_exceptions()`. \
                     Otherwise move the offending pass into a correct \
                     phase.",
                    lines.join("\n  ")
                );
            }
        }
    }

    /// Inserting a pass into the wrong phase (here: a `LocalOpt` pass
    /// shoved in *after* the `FinalCleanup` block, with no registered
    /// backedge exception) must fail the exception-aware validator.
    /// This proves Batch 16's enforcement is wired and not silently
    /// permissive — if someone moves `CallingConvFinalizePass`
    /// (FinalCleanup) before a fresh `LocalOpt` pass without
    /// registering the new backward jump, CI breaks.
    #[test]
    fn inserting_local_opt_after_final_cleanup_is_rejected() {
        use super::{PassDescriptor, PassPhase};

        let mut desc = super::canonical_pipeline_descriptor();
        // Splice a brand-new LocalOpt pass *after* the final-cleanup
        // pass. Its name is unique so no allowed-backedge entry can
        // possibly cover it.
        desc.push(PassDescriptor::new(
            "BogusLocalOptAfterFinalCleanup",
            PassPhase::LocalOpt,
        ));
        let err = super::validate_named_phase_monotonicity_with_exceptions(&desc)
            .expect_err("inserting a LocalOpt pass after FinalCleanup must be a violation");
        assert!(
            err.iter()
                .any(|v| v.next_name == "BogusLocalOptAfterFinalCleanup"),
            "violation list must name the inserted pass: {err:#?}"
        );
    }

    /// Inserting a `PreOpt` pass *after* a `TypeRecovery` pass, where
    /// no exception covers it, must be rejected.
    #[test]
    fn inserting_pre_opt_after_type_recovery_is_rejected() {
        use super::{PassDescriptor, PassPhase};

        let mut desc = super::canonical_pipeline_descriptor();
        // Find a TypeRecovery pass and inject a PreOpt pass right
        // after it. We pick `OpTypeBindingPass` because it sits late
        // in the schedule and is unambiguously TypeRecovery.
        let pos = desc
            .iter()
            .position(|d| d.name == "OpTypeBindingPass")
            .expect("OpTypeBindingPass must exist in the canonical pipeline");
        desc.insert(
            pos + 1,
            PassDescriptor::new("BogusPreOptAfterTypeRecovery", PassPhase::PreOpt),
        );
        let err = super::validate_named_phase_monotonicity_with_exceptions(&desc)
            .expect_err("PreOpt pass following TypeRecovery must be a violation");
        assert!(
            err.iter()
                .any(|v| v.next_name == "BogusPreOptAfterTypeRecovery"),
            "violation list must name the inserted pass: {err:#?}"
        );
    }

    /// A descriptor that already has every backward transition covered
    /// by an exception must pass cleanly. This is the positive twin of
    /// the "wrong phase fails" test: it shows the validator isn't a
    /// false-positive generator.
    #[test]
    fn canonical_pipeline_passes_exception_aware_validator() {
        let desc = super::canonical_pipeline_descriptor();
        super::validate_named_phase_monotonicity_with_exceptions(&desc)
            .expect("canonical pipeline must be exception-clean");
    }

    /// The exception list count must match the raw-transgression count.
    /// If they diverge, either an unused entry crept in or someone
    /// added a transgression without registering a reason.
    #[test]
    fn allowed_backedges_cover_every_transgression() {
        let desc = super::canonical_pipeline_descriptor();
        let raw =
            super::validate_named_phase_monotonicity(&desc).expect_err("schedule is not monotone");
        let allowed = super::canonical_pipeline_backedge_exceptions();
        assert_eq!(
            raw.len(),
            allowed.len(),
            "allowed-backedge count drifted from raw transgression count: \
             {} raw vs {} allowed",
            raw.len(),
            allowed.len()
        );
    }
}
