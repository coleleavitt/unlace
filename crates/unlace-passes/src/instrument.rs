//! Pass instrumentation: per-pass timing, schedule audit, IR diffs, and
//! post-pass verification.
//!
//! [`run_instrumented`] wraps one [`Pass::run`]. What it records is decided by
//! [`PassOptions`] and the active `tracing` filter:
//!
//! * `unlace::timing=info` accumulates per-pass wall-clock samples that the
//!   CLI renders with [`dump_pass_timings`] when the command finishes.
//! * [`PassDiagnostics::timing_csv`](crate::PassDiagnostics::timing_csv)
//!   additionally keeps one sample per (function, pass, iteration) for
//!   [`dump_pass_timings_csv`].
//! * [`PassDiagnostics::schedule_audit`](crate::PassDiagnostics::schedule_audit)
//!   records every run/skip decision for [`dump_schedule_audit_csv`].
//! * `unlace::pass=debug` logs each pass start and end with IR shape counts.
//! * `unlace::pass::ir=trace` logs a line diff of the `{:#?}` IR snapshot
//!   before and after each pass. Every pass runs inside a `pass{name=...}`
//!   span (target `unlace::pass`), so `unlace::pass[pass{name=sccp}]=trace`
//!   narrows it to one pass.
//!
//! The wrapper only observes: pass semantics and the IR are never changed by it.

use std::collections::BTreeMap;
use std::sync::atomic::{AtomicUsize, Ordering};
use std::sync::{Mutex, OnceLock};
use std::time::Instant;

use linkscope::TraceField;
use tracing::Level;
use unlace_ir::ssa::SsaFunction;
use unlace_ir::verify_ssa_function_pipeline;

use crate::options::PassOptions;
use crate::pass::{Pass, PassError, PassPhase};

/// Per-pass accumulated wall-clock samples. Keyed by pass name so the
/// dump order is deterministic regardless of dispatch order.
#[derive(Clone, Debug, Default)]
struct TimingEntry {
    count: u64,
    total_ns: u128,
    max_ns: u64,
}

fn timings() -> &'static Mutex<BTreeMap<String, TimingEntry>> {
    static CELL: OnceLock<Mutex<BTreeMap<String, TimingEntry>>> = OnceLock::new();
    CELL.get_or_init(|| Mutex::new(BTreeMap::new()))
}

/// Per-(function, pass) accumulated wall-clock samples. The `Vec` is
/// indexed by iteration: `samples[i]` is the elapsed time (ns) of the
/// `i`-th invocation of that (function, pass) within the process.
///
/// `BTreeMap` is required (per the workspace convention) and gives us
/// deterministic iteration order for free, which is what
/// [`dump_pass_timings_csv`] relies on for stable CSV output.
fn func_timings() -> &'static Mutex<BTreeMap<(String, String), Vec<u64>>> {
    static CELL: OnceLock<Mutex<BTreeMap<(String, String), Vec<u64>>>> = OnceLock::new();
    CELL.get_or_init(|| Mutex::new(BTreeMap::new()))
}

/// Instrumented pass invocations so far in this process, for
/// [`PassOptions::bisect_limit`].
static BISECT_COUNTER: AtomicUsize = AtomicUsize::new(0);

fn linkscope_pass_name_span(name: &str) -> linkscope::Span {
    match name {
        "StackOffsetSnapshotPass" | "stack-offset-snapshot" => {
            linkscope::phase("pass.name.StackOffsetSnapshotPass")
        }
        "NoreturnDetectPass" => linkscope::phase("pass.name.NoreturnDetectPass"),
        "AliasCategorizePass" | "alias-categorize" => {
            linkscope::phase("pass.name.AliasCategorizePass")
        }
        "ConstantFoldPass" | "constant-fold" => linkscope::phase("pass.name.ConstantFoldPass"),
        "CopyPropagationPass" | "copy-propagation" => {
            linkscope::phase("pass.name.CopyPropagationPass")
        }
        "GlobalCopyPropPass" | "global-copy-propagation" => {
            linkscope::phase("pass.name.GlobalCopyPropPass")
        }
        "DeadCodeElimPass" | "dce" => linkscope::phase("pass.name.DeadCodeElimPass"),
        "SccpPass" | "sccp" => linkscope::phase("pass.name.SccpPass"),
        "CsePass" | "cse" => linkscope::phase("pass.name.CsePass"),
        "GvnPass" | "gvn" => linkscope::phase("pass.name.GvnPass"),
        "BmiIdiomPass" | "bmi-idioms" => linkscope::phase("pass.name.BmiIdiomPass"),
        "LicmPass" | "licm" => linkscope::phase("pass.name.LicmPass"),
        "IvElimPass" | "iv-elim" => linkscope::phase("pass.name.IvElimPass"),
        "StrengthReducePass" | "strength-reduce" => {
            linkscope::phase("pass.name.StrengthReducePass")
        }
        "IdiomRecognitionPass" | "idiom-recognition" => {
            linkscope::phase("pass.name.IdiomRecognitionPass")
        }
        "ConditionSimplifyPass" | "condition-simplify" => {
            linkscope::phase("pass.name.ConditionSimplifyPass")
        }
        "BoolSimplifyPass" | "bool-simplify" => linkscope::phase("pass.name.BoolSimplifyPass"),
        "KnownBitsSimplifyPass" | "known-bits-simplify" => {
            linkscope::phase("pass.name.KnownBitsSimplifyPass")
        }
        "CmovPreservePass" => linkscope::phase("pass.name.CmovPreservePass"),
        "CallBoundaryCopyPropPass" | "call-boundary-copyprop" => {
            linkscope::phase("pass.name.CallBoundaryCopyPropPass")
        }
        "RedundantFlagElimPass" | "redundant-flag-elim" => {
            linkscope::phase("pass.name.RedundantFlagElimPass")
        }
        "AlgebraicSimplifyPass" | "algebraic-simplify" => {
            linkscope::phase("pass.name.AlgebraicSimplifyPass")
        }
        "DeadStoreElimPass" | "dse" => linkscope::phase("pass.name.DeadStoreElimPass"),
        "DeadFlagElimPass" | "dead-flag-elim" => linkscope::phase("pass.name.DeadFlagElimPass"),
        "MemorySsaDsePass" | "memory-ssa-dse" => linkscope::phase("pass.name.MemorySsaDsePass"),
        "CfgRepairPass" | "cfg-repair" => linkscope::phase("pass.name.CfgRepairPass"),
        "DeadStoreElimGlobalPass" | "dse-global" => {
            linkscope::phase("pass.name.DeadStoreElimGlobalPass")
        }
        "DivisionIdiomPass" | "division-idiom" => linkscope::phase("pass.name.DivisionIdiomPass"),
        "ModuloIdiomPass" | "modulo-idiom" => linkscope::phase("pass.name.ModuloIdiomPass"),
        "SixtyFourBitDemotePass" => linkscope::phase("pass.name.SixtyFourBitDemotePass"),
        "PrologueElimPass" | "prologue-elim" => linkscope::phase("pass.name.PrologueElimPass"),
        "TailCallDetectPass" | "tail-call-detect" => {
            linkscope::phase("pass.name.TailCallDetectPass")
        }
        "StackPointerTrackingPass" | "stack-pointer-tracking" => {
            linkscope::phase("pass.name.StackPointerTrackingPass")
        }
        "StackVarRecoveryPass" | "stack-var-recovery" => {
            linkscope::phase("pass.name.StackVarRecoveryPass")
        }
        "IndirectCallResolvePass" | "indirect-call-resolve" => {
            linkscope::phase("pass.name.IndirectCallResolvePass")
        }
        "CppVtablePass" | "cpp-vtable" => linkscope::phase("pass.name.CppVtablePass"),
        "CppMethodPass" | "cpp-method" => linkscope::phase("pass.name.CppMethodPass"),
        "CallingConventionDetectPass" | "calling-convention-detect" => {
            linkscope::phase("pass.name.CallingConventionDetectPass")
        }
        "ParamInferPass" | "param-infer" => linkscope::phase("pass.name.ParamInferPass"),
        "ReturnTypeInferPass" | "return-type-infer" => {
            linkscope::phase("pass.name.ReturnTypeInferPass")
        }
        "StructFieldDetectPass" | "struct-field-detect" => {
            linkscope::phase("pass.name.StructFieldDetectPass")
        }
        "TypeInferPass" => linkscope::phase("pass.name.TypeInferPass"),
        "TypeInfer" => linkscope::phase("pass.name.TypeInferPass"),
        "TypeConstraintSolverPass" | "TypeConstraintSolver" => {
            linkscope::phase("pass.name.TypeConstraintSolverPass")
        }
        "ObjectWidenPass" | "object-widen" => linkscope::phase("pass.name.ObjectWidenPass"),
        "SizeofRecognitionPass" => linkscope::phase("pass.name.SizeofRecognitionPass"),
        "CppVariantPass" | "cpp-variant" => linkscope::phase("pass.name.CppVariantPass"),
        "CppLambdaCapturePass" | "cpp-lambda-captures" => {
            linkscope::phase("pass.name.CppLambdaCapturePass")
        }
        "CppCoroutinePass" | "cpp-coroutine" => linkscope::phase("pass.name.CppCoroutinePass"),
        "RustAsyncPass" | "rust-async" => linkscope::phase("pass.name.RustAsyncPass"),
        "RepStringIdiomPass" | "rep-string-idiom" => {
            linkscope::phase("pass.name.RepStringIdiomPass")
        }
        "BitfieldIdiomPass" | "bitfield-idioms" => linkscope::phase("pass.name.BitfieldIdiomPass"),
        "CryptoIdiomPass" | "crypto-idioms" => linkscope::phase("pass.name.CryptoIdiomPass"),
        "IndirectJumpResolvePass" | "indirect-jump-resolve" => {
            linkscope::phase("pass.name.IndirectJumpResolvePass")
        }
        "OpTypeBindingPass" | "op_type_binding" => linkscope::phase("pass.name.OpTypeBindingPass"),
        "DeadPhiElimPass" | "dead-phi-elim" => linkscope::phase("pass.name.DeadPhiElimPass"),
        "ExpressionTreePass" | "expression-tree" => {
            linkscope::phase("pass.name.ExpressionTreePass")
        }
        "VariableMergePass" | "variable-merge" => linkscope::phase("pass.name.VariableMergePass"),
        "LvarCollectPass" | "lvar-collect" => linkscope::phase("pass.name.LvarCollectPass"),
        "RegisterCoalescePass" | "register-coalesce" => {
            linkscope::phase("pass.name.RegisterCoalescePass")
        }
        "RustEnumPass" | "rust-enum" => linkscope::phase("pass.name.RustEnumPass"),
        "RustVtablePass" | "rust-vtable" => linkscope::phase("pass.name.RustVtablePass"),
        "RustPanicPass" => linkscope::phase("pass.name.RustPanicPass"),
        "VarNamingPass" => linkscope::phase("pass.name.VarNamingPass"),
        "CallingConvFinalizePass" => linkscope::phase("pass.name.CallingConvFinalizePass"),
        _ => linkscope::phase("pass.name.other"),
    }
}

// ---------------------------------------------------------------------------
// Batch 16: pass-schedule audit
// ---------------------------------------------------------------------------

/// One row of the pass-schedule audit log.
///
/// Captured for every [`run_instrumented`] invocation when
/// [`PassDiagnostics::schedule_audit`](crate::PassDiagnostics::schedule_audit)
/// is set. Holds the function name, pass name, declared phase, the
/// scheduler decision, optional skip reason, pass-reported `changed` flag,
/// and the per-(function, pass) iteration index so out-of-order invocations
/// and oscillations are visible after the fact.
#[derive(Clone, Debug)]
struct ScheduleRow {
    function: String,
    pass: String,
    phase: PassPhase,
    iteration: u32,
    decision: ScheduleDecision,
    changed: bool,
    reason: &'static str,
}

/// Scheduler decision represented in the audit log.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum ScheduleDecision {
    Run,
    Skipped,
}

impl ScheduleDecision {
    const fn as_str(self) -> &'static str {
        match self {
            Self::Run => "run",
            Self::Skipped => "skipped",
        }
    }
}

fn schedule_log() -> &'static Mutex<Vec<ScheduleRow>> {
    static CELL: OnceLock<Mutex<Vec<ScheduleRow>>> = OnceLock::new();
    CELL.get_or_init(|| Mutex::new(Vec::new()))
}

fn schedule_iteration_counts() -> &'static Mutex<BTreeMap<(String, String), u32>> {
    static CELL: OnceLock<Mutex<BTreeMap<(String, String), u32>>> = OnceLock::new();
    CELL.get_or_init(|| Mutex::new(BTreeMap::new()))
}

fn next_schedule_iteration(function: &str, pass: &str) -> u32 {
    let mut counts = schedule_iteration_counts()
        .lock()
        .unwrap_or_else(|p| p.into_inner());
    let key = (function.to_string(), pass.to_string());
    let entry = counts.entry(key).or_insert(0);
    let idx = *entry;
    *entry = entry.saturating_add(1);
    idx
}

fn push_schedule_row(
    function: &str,
    pass: &str,
    phase: PassPhase,
    decision: ScheduleDecision,
    changed: bool,
    reason: &'static str,
) {
    let iteration = next_schedule_iteration(function, pass);
    let mut log = schedule_log().lock().unwrap_or_else(|p| p.into_inner());
    log.push(ScheduleRow {
        function: function.to_string(),
        pass: pass.to_string(),
        phase,
        iteration,
        decision,
        changed,
        reason,
    });
}

/// Render the accumulated schedule audit as a CSV body, including the
/// header row. Stable order: insertion order, which is the same as
/// dispatch order. `unlace-cli` writes this to the configured
/// `passes.diagnostics.schedule_audit` path.
pub fn dump_schedule_audit_csv() -> String {
    let rows: Vec<ScheduleRow> = {
        let log = schedule_log().lock().unwrap_or_else(|p| p.into_inner());
        log.clone()
    };
    let mut out = String::from("function,pass,phase,iteration,decision,changed,reason\n");
    for r in &rows {
        out.push_str(&format!(
            "{},{},{:?},{},{},{},{}\n",
            r.function,
            r.pass,
            r.phase,
            r.iteration,
            r.decision.as_str(),
            if r.changed { 1 } else { 0 },
            r.reason,
        ));
    }
    out
}

/// Detect any pass invocation whose phase ordinal is strictly less than
/// the previous invocation's *and* whose pass name appears later in the
/// canonical schedule. The strict-less comparator means equal-phase
/// repeats (the inner fixed-point cluster) don't flag.
///
/// Returns one human-readable line per oscillation. Empty `Ok(())` when
/// the schedule is well-ordered. Used by the xtask audit subcommand.
pub fn schedule_audit_oscillations() -> Vec<String> {
    let rows: Vec<ScheduleRow> = {
        let log = schedule_log().lock().unwrap_or_else(|p| p.into_inner());
        log.clone()
    };
    let mut violations = Vec::new();
    let mut prev: Option<&ScheduleRow> = None;
    for row in &rows {
        if let Some(p) = prev
            && p.function == row.function
            && p.decision == ScheduleDecision::Run
            && row.decision == ScheduleDecision::Run
            && row.phase.ordinal() < p.phase.ordinal()
            && row.iteration > 0
        {
            violations.push(format!(
                    "oscillation in '{fn_n}': pass '{p}' [{pp:?}] re-ran at iter {ri} after later phase '{ln}' [{lp:?}]",
                    fn_n = row.function,
                    p = row.pass,
                    pp = row.phase,
                    ri = row.iteration,
                    ln = p.pass,
                    lp = p.phase,
                ));
        }
        prev = Some(row);
    }
    violations
}

/// `true` iff the `unlace::timing` target is enabled at `info`, which makes
/// [`run_instrumented`] accumulate the per-pass table.
#[inline]
pub fn pass_timing_enabled() -> bool {
    tracing::enabled!(target: "unlace::timing", Level::INFO)
}

/// Append one timing sample for the `(function, pass)` pair.
///
/// Always updates the per-pass aggregate rendered by [`dump_pass_timings`];
/// `per_function` also keeps the sample for [`dump_pass_timings_csv`].
pub fn record_pass_timing(
    function_name: &str,
    pass_name: &str,
    elapsed_ns: u64,
    per_function: bool,
) {
    {
        let mut map = match timings().lock() {
            Ok(g) => g,
            Err(poisoned) => poisoned.into_inner(),
        };
        let entry = map.entry(pass_name.to_string()).or_default();
        entry.count = entry.count.saturating_add(1);
        entry.total_ns = entry.total_ns.saturating_add(u128::from(elapsed_ns));
        if elapsed_ns > entry.max_ns {
            entry.max_ns = elapsed_ns;
        }
    }

    if per_function {
        let mut map = match func_timings().lock() {
            Ok(g) => g,
            Err(poisoned) => poisoned.into_inner(),
        };
        let key = (function_name.to_string(), pass_name.to_string());
        map.entry(key).or_default().push(elapsed_ns);
    }
}

fn pass_allowed_by_opt_bisect(limit: Option<usize>) -> bool {
    let Some(limit) = limit else {
        return true;
    };
    let ordinal = BISECT_COUNTER.fetch_add(1, Ordering::Relaxed) + 1;
    ordinal <= limit
}

fn ir_shape_fields(func: &SsaFunction) -> [TraceField; 3] {
    [
        TraceField::text("maturity", format!("{:?}", func.maturity)),
        TraceField::count("blocks", func.function.blocks.len() as u64),
        TraceField::count(
            "insns",
            func.function
                .blocks
                .values()
                .map(|b| b.insns.len() as u64)
                .sum(),
        ),
    ]
}

fn linkscope_pass_fields(pass: &dyn Pass, func: &SsaFunction) -> Vec<TraceField> {
    let mut fields = vec![
        TraceField::text("function", func.function.name.clone()),
        TraceField::text("pass", pass.name().to_string()),
        TraceField::text("phase", format!("{:?}", pass.phase())),
    ];
    fields.extend(ir_shape_fields(func));
    fields
}

fn trace_pass_start(pass: &dyn Pass, func: &SsaFunction) {
    let insns: usize = func.function.blocks.values().map(|b| b.insns.len()).sum();
    let phis: usize = func.phi_map.values().map(|phis| phis.len()).sum();
    tracing::debug!(
        target: "unlace::pass",
        "func={} pass={} phase={:?} start maturity={:?} blocks={} insns={} phis={} var_map={} merged_names={} foldable={} lvars={}",
        func.function.name,
        pass.name(),
        pass.phase(),
        func.maturity,
        func.function.blocks.len(),
        insns,
        phis,
        func.var_map.len(),
        func.merged_names.len(),
        func.foldable_exprs.len(),
        func.lvars.len(),
    );
}

fn trace_pass_done(
    pass: &dyn Pass,
    func_name: &str,
    func: &SsaFunction,
    res: &Result<bool, PassError>,
) {
    let blocks = func.function.blocks.len();
    let insns: usize = func.function.blocks.values().map(|b| b.insns.len()).sum();
    let phis: usize = func.phi_map.values().map(|phis| phis.len()).sum();
    match res {
        Ok(changed) => tracing::debug!(
            target: "unlace::pass",
            "func={func_name} pass={} done changed={} maturity={:?} blocks={} insns={} phis={} var_map={} merged_names={} foldable={} lvars={}",
            pass.name(),
            changed,
            func.maturity,
            blocks,
            insns,
            phis,
            func.var_map.len(),
            func.merged_names.len(),
            func.foldable_exprs.len(),
            func.lvars.len(),
        ),
        Err(err) => tracing::debug!(
            target: "unlace::pass",
            "func={func_name} pass={} error={err:?} maturity={:?} blocks={} insns={} phis={} var_map={} merged_names={}",
            pass.name(),
            func.maturity,
            blocks,
            insns,
            phis,
            func.var_map.len(),
            func.merged_names.len(),
        ),
    }
}

/// Run `pass` against `func`, instrumenting per `options` and the active
/// `tracing` filter.
///
/// With no diagnostics configured and tracing filtered out this is a few
/// relaxed atomic loads plus the underlying [`Pass::run`] call.
pub fn run_instrumented(
    pass: &dyn Pass,
    func: &mut SsaFunction,
    options: &PassOptions,
) -> Result<bool, PassError> {
    let audit = options.diagnostics.schedule_audit.is_some();
    if options.is_disabled(pass.name()) {
        if audit {
            push_schedule_row(
                &func.function.name,
                pass.name(),
                pass.phase(),
                ScheduleDecision::Skipped,
                false,
                "disabled by passes.disabled",
            );
        }
        return Ok(false);
    }
    if !pass_allowed_by_opt_bisect(options.bisect_limit) {
        if audit {
            push_schedule_row(
                &func.function.name,
                pass.name(),
                pass.phase(),
                ScheduleDecision::Skipped,
                false,
                "skipped by passes.bisect_limit",
            );
        }
        return Ok(false);
    }

    let _span = tracing::debug_span!(target: "unlace::pass", "pass", name = pass.name()).entered();
    // A per-pass linkscope span attributes wall-clock to the pass runner.
    let _linkscope_span = linkscope::phase("pass.run");
    let _linkscope_trace = linkscope::is_enabled().then(|| {
        linkscope::event_fields("pass.start", linkscope_pass_fields(pass, func));
        linkscope::trace_fields("pass.run", linkscope_pass_fields(pass, func))
    });
    linkscope::record_items("pass.run", 1);
    let name_span_enabled = options.diagnostics.linkscope_pass_names && linkscope::is_enabled();

    let ir_diff = tracing::enabled!(target: "unlace::pass::ir", Level::TRACE);
    let timing = pass_timing_enabled();
    let csv = options.diagnostics.timing_csv.is_some();
    let verify = options.verify_each;
    let pass_trace = tracing::enabled!(target: "unlace::pass", Level::DEBUG);

    if !ir_diff && !timing && !csv && !audit && !verify && !pass_trace {
        let _pass_name_span = name_span_enabled.then(|| linkscope_pass_name_span(pass.name()));
        return pass.run(func);
    }

    if pass_trace {
        trace_pass_start(pass, func);
    }

    let before = ir_diff.then(|| format!("{:#?}", func));

    let start = (timing || csv).then(Instant::now);
    // Snapshot the function name *before* `pass.run` mutates the IR. Most
    // passes don't rename functions, but a few (e.g. RustPanicPass) can
    // touch the name — record against the pre-pass identity so the CSV
    // groups behave like a stable key.
    let func_name = func.function.name.clone();
    let res = {
        let _pass_name_span = name_span_enabled.then(|| linkscope_pass_name_span(pass.name()));
        pass.run(func)
    };
    if audit {
        let changed = matches!(res, Ok(true));
        push_schedule_row(
            &func_name,
            pass.name(),
            pass.phase(),
            ScheduleDecision::Run,
            changed,
            "",
        );
    }
    if let Some(t0) = start {
        let ns = u64::try_from(t0.elapsed().as_nanos()).unwrap_or(u64::MAX);
        record_pass_timing(&func_name, pass.name(), ns, csv);
    }

    if pass_trace {
        trace_pass_done(pass, &func_name, func, &res);
    }

    if let Some(pre) = before {
        let post = format!("{:#?}", func);
        emit_trace_diff(pass.name(), &pre, &post);
    }

    match res {
        Ok(changed) => {
            if verify {
                verify_ssa_function_pipeline(func).map_err(|err| {
                    PassError::InvariantViolation {
                        message: format!(
                            "{} after {} failed IR verification: {err}",
                            func.function.name,
                            pass.name()
                        ),
                    }
                })?;
            }
            Ok(changed)
        }
        Err(err) => Err(err),
    }
}

/// Render the accumulated per-pass timings as a markdown table.
///
/// Rows are sorted by `total_ms` descending (then by pass name for ties
/// so the output is deterministic). Returns the empty string when no
/// samples have been recorded.
pub fn dump_pass_timings() -> String {
    let snapshot: Vec<(String, TimingEntry)> = {
        let map = match timings().lock() {
            Ok(g) => g,
            Err(poisoned) => poisoned.into_inner(),
        };
        map.iter().map(|(k, v)| (k.clone(), v.clone())).collect()
    };
    if snapshot.is_empty() {
        return String::new();
    }
    let mut rows = snapshot;
    rows.sort_by(|a, b| b.1.total_ns.cmp(&a.1.total_ns).then(a.0.cmp(&b.0)));

    let mut out = String::new();
    out.push_str("| pass | count | total_ms | avg_ms | max_ms |\n");
    out.push_str("|------|------:|---------:|-------:|-------:|\n");
    for (name, e) in &rows {
        let total_ms = (e.total_ns as f64) / 1_000_000.0;
        let avg_ms = if e.count > 0 {
            total_ms / (e.count as f64)
        } else {
            0.0
        };
        let max_ms = (e.max_ns as f64) / 1_000_000.0;
        out.push_str(&format!(
            "| {} | {} | {:.3} | {:.3} | {:.3} |\n",
            name, e.count, total_ms, avg_ms, max_ms
        ));
    }
    out
}

/// Render the accumulated per-(function, pass, iteration) timings as a
/// CSV body, including the leading header row.
///
/// Rows are sorted lexicographically by `(function, pass, iteration)` so
/// the output is fully deterministic across runs of the same input —
/// callers (e.g. `unlace-cli`) can diff CSV files between revisions
/// without spurious churn. Returns the header alone when no samples
/// have been recorded.
///
/// Each `iteration` is the zero-based call index for that
/// `(function, pass)` pair within the process: the first invocation is
/// `0`, the second `1`, etc. Matches the storage order in
/// [`record_pass_timing`]. `ms` is formatted to three decimals (same
/// precision as the aggregate table).
pub fn dump_pass_timings_csv() -> String {
    let snapshot: Vec<((String, String), Vec<u64>)> = {
        let map = match func_timings().lock() {
            Ok(g) => g,
            Err(poisoned) => poisoned.into_inner(),
        };
        map.iter().map(|(k, v)| (k.clone(), v.clone())).collect()
    };

    let mut out = String::new();
    out.push_str("function,pass,iteration,ms\n");
    // `func_timings` is a BTreeMap, so the snapshot is already sorted by
    // `(function, pass)`; per-key iteration is monotone by construction.
    for ((function, pass), samples) in &snapshot {
        for (iter, ns) in samples.iter().enumerate() {
            let ms = (*ns as f64) / 1_000_000.0;
            out.push_str(&format!("{function},{pass},{iter},{ms:.3}\n"));
        }
    }
    out
}

/// Emit a minimal pre/post IR diff as `unlace::pass::ir` trace events.
///
/// Not a full LCS diff (the cost would dwarf the pass for big IRs);
/// instead we line up the snapshots and emit only the lines that
/// differ, prefixed with `-` (before-only) and `+` (after-only). When
/// the snapshots are identical we emit a single `(no IR change)` line
/// so users know the pass ran but was a no-op.
fn emit_trace_diff(pass: &str, before: &str, after: &str) {
    if before == after {
        tracing::trace!(target: "unlace::pass::ir", "=== pass-trace {pass}: (no IR change) ===");
        return;
    }
    tracing::trace!(target: "unlace::pass::ir", "=== pass-trace {pass}: BEGIN ===");
    let before_lines: Vec<&str> = before.lines().collect();
    let after_lines: Vec<&str> = after.lines().collect();
    let max_len = before_lines.len().max(after_lines.len());
    for i in 0..max_len {
        let b = before_lines.get(i).copied();
        let a = after_lines.get(i).copied();
        match (b, a) {
            (Some(bl), Some(al)) if bl == al => {}
            (Some(bl), Some(al)) => {
                tracing::trace!(target: "unlace::pass::ir", "- {bl}");
                tracing::trace!(target: "unlace::pass::ir", "+ {al}");
            }
            (Some(bl), None) => tracing::trace!(target: "unlace::pass::ir", "- {bl}"),
            (None, Some(al)) => tracing::trace!(target: "unlace::pass::ir", "+ {al}"),
            (None, None) => {}
        }
    }
    tracing::trace!(target: "unlace::pass::ir", "=== pass-trace {pass}: END ===");
}

/// **Test-only** reset of *both* timing accumulators. Not exposed
/// outside `cfg(test)` — production code must treat the accumulators as
/// monotone for the life of the process.
#[cfg(test)]
fn reset_timings_for_test() {
    {
        let mut map = timings().lock().unwrap_or_else(|p| p.into_inner());
        map.clear();
    }
    {
        let mut map = func_timings().lock().unwrap_or_else(|p| p.into_inner());
        map.clear();
    }
    {
        let mut log = schedule_log().lock().unwrap_or_else(|p| p.into_inner());
        log.clear();
    }
    {
        let mut counts = schedule_iteration_counts()
            .lock()
            .unwrap_or_else(|p| p.into_inner());
        counts.clear();
    }
}

/// **Test-only** direct write into the per-function accumulator,
/// bypassing [`run_instrumented`] so tests can exercise the CSV formatter.
#[cfg(test)]
fn record_func_timing_for_test(function: &str, pass: &str, elapsed_ns: u64) {
    let mut map = func_timings().lock().unwrap_or_else(|p| p.into_inner());
    map.entry((function.to_string(), pass.to_string()))
        .or_default()
        .push(elapsed_ns);
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::sync::Mutex;

    // Tests touch process-global state (the timing and audit logs), so
    // they must run serially. A module-local Mutex enforces that without
    // an extra dev-dep.
    static TEST_LOCK: Mutex<()> = Mutex::new(());

    fn record_run_for_test(function: &str, pass: &str, phase: PassPhase, changed: bool) {
        push_schedule_row(function, pass, phase, ScheduleDecision::Run, changed, "");
    }

    fn record_skip_for_test(function: &str, pass: &str, phase: PassPhase, reason: &'static str) {
        push_schedule_row(
            function,
            pass,
            phase,
            ScheduleDecision::Skipped,
            false,
            reason,
        );
    }

    #[test]
    fn record_pass_timing_accumulates() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_pass_timing("test_fn", "alpha", 1_000_000, false); // 1 ms
        record_pass_timing("test_fn", "alpha", 3_000_000, false); // 3 ms
        record_pass_timing("test_fn", "beta", 2_000_000, false); // 2 ms

        let table = dump_pass_timings();
        // alpha: 2 samples, total 4ms, avg 2ms, max 3ms
        // beta:  1 sample,  total 2ms, avg 2ms, max 2ms
        assert!(
            table.contains("| alpha | 2 | 4.000 | 2.000 | 3.000 |"),
            "missing alpha row: {table}"
        );
        assert!(
            table.contains("| beta | 1 | 2.000 | 2.000 | 2.000 |"),
            "missing beta row: {table}"
        );
        // alpha must sort before beta (higher total_ns)
        let alpha_idx = table.find("| alpha ").expect("alpha row");
        let beta_idx = table.find("| beta ").expect("beta row");
        assert!(
            alpha_idx < beta_idx,
            "rows must be sorted by total_ms desc; got alpha@{alpha_idx} beta@{beta_idx}\n{table}"
        );
    }

    #[test]
    fn dump_pass_timings_format_is_stable() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_pass_timing("test_fn", "only", 5_500_000, false); // 5.5 ms

        let table = dump_pass_timings();
        let expected = "\
| pass | count | total_ms | avg_ms | max_ms |
|------|------:|---------:|-------:|-------:|
| only | 1 | 5.500 | 5.500 | 5.500 |
";
        assert_eq!(table, expected);
    }

    #[test]
    fn dump_pass_timings_empty_is_empty_string() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();
        assert_eq!(dump_pass_timings(), "");
    }

    #[test]
    fn disabled_passes_support_wildcard_and_exact_names() {
        let options = PassOptions {
            disabled: vec!["alpha".to_string(), "beta".to_string()],
            ..PassOptions::default()
        };
        assert!(options.is_disabled("alpha"));
        assert!(!options.is_disabled("gamma"));

        let wildcard = PassOptions {
            disabled: vec!["*".to_string()],
            ..PassOptions::default()
        };
        assert!(wildcard.is_disabled("anything"));
    }

    // ---- passes.diagnostics.timing_csv (Batch 17 slice 2) ----

    /// The per-function accumulator records `(function, pass)` tuples
    /// and orders successive samples for the same key by call index, so
    /// the rendered CSV pins iteration counters starting at 0 per key.
    #[test]
    fn dump_pass_timings_csv_records_function_pass_tuples() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        // Insert samples in *non-sorted* dispatch order to prove the
        // formatter performs the sort (BTreeMap insertion does the
        // grouping; iteration index reflects insertion order per key).
        record_func_timing_for_test("zeta", "fold", 4_000_000);
        record_func_timing_for_test("alpha", "fold", 1_000_000);
        record_func_timing_for_test("alpha", "fold", 2_000_000);
        record_func_timing_for_test("alpha", "dce", 500_000);

        let csv = dump_pass_timings_csv();
        let expected = "\
function,pass,iteration,ms
alpha,dce,0,0.500
alpha,fold,0,1.000
alpha,fold,1,2.000
zeta,fold,0,4.000
";
        assert_eq!(
            csv, expected,
            "CSV must be sorted by (function, pass, iteration) and contain header"
        );
    }

    /// Header-only output when no samples have been recorded. Keeps the
    /// CLI's "write the CSV even when nothing ran" path safe (the file
    /// still contains a valid header so downstream tooling doesn't trip).
    #[test]
    fn dump_pass_timings_csv_empty_has_header_only() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        assert_eq!(dump_pass_timings_csv(), "function,pass,iteration,ms\n");
    }

    /// Pin the exact CSV format. A drift here breaks any tool that
    /// consumes the output (jq, awk, pandas, …), so we treat the format
    /// as a public contract — bump the format only with an accompanying
    /// docs / changelog note.
    #[test]
    fn dump_pass_timings_csv_format_is_stable() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_func_timing_for_test("main", "cse", 12_345_678); // ~12.346 ms

        let csv = dump_pass_timings_csv();
        let expected = "\
function,pass,iteration,ms
main,cse,0,12.346
";
        assert_eq!(csv, expected);
    }

    // ---- passes.diagnostics.schedule_audit (Batch 16) ----

    #[test]
    fn schedule_audit_records_iterations_and_phases() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_run_for_test("f", "ConstantFoldPass", PassPhase::LocalOpt, true);
        record_run_for_test("f", "ConstantFoldPass", PassPhase::LocalOpt, false);
        record_run_for_test("f", "TypeInferPass", PassPhase::TypeRecovery, true);

        let csv = dump_schedule_audit_csv();
        let expected = "\
function,pass,phase,iteration,decision,changed,reason
f,ConstantFoldPass,LocalOpt,0,run,1,
f,ConstantFoldPass,LocalOpt,1,run,0,
f,TypeInferPass,TypeRecovery,0,run,1,
";
        assert_eq!(csv, expected);
    }

    #[test]
    fn schedule_audit_records_skip_decision_reason() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_run_for_test("f", "ConstantFoldPass", PassPhase::LocalOpt, true);
        record_skip_for_test(
            "f",
            "CopyPropagationPass",
            PassPhase::LocalOpt,
            "disabled by passes.disabled",
        );

        let csv = dump_schedule_audit_csv();
        let expected = "\
function,pass,phase,iteration,decision,changed,reason
f,ConstantFoldPass,LocalOpt,0,run,1,
f,CopyPropagationPass,LocalOpt,0,skipped,0,disabled by passes.disabled
";
        assert_eq!(csv, expected);
    }

    #[test]
    fn schedule_audit_ignores_skips_for_oscillation_detection() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_run_for_test("g", "TypeInferPass", PassPhase::TypeRecovery, true);
        record_skip_for_test(
            "g",
            "ConstantFoldPass",
            PassPhase::LocalOpt,
            "skipped by passes.bisect_limit",
        );

        assert!(
            schedule_audit_oscillations().is_empty(),
            "a skipped earlier-phase pass explains a missing run, not a runtime oscillation"
        );
    }

    #[test]
    fn schedule_audit_flags_phase_oscillation() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        // 1. ConstantFoldPass (iter 0, LocalOpt) — initial run.
        // 2. TypeInferPass (iter 0, TypeRecovery) — forward, fine.
        // 3. ConstantFoldPass (iter 1, LocalOpt) — backward AND iteration>0
        //    → oscillation, because the pass already ran once at the earlier
        //    phase and is now re-running after a later phase.
        record_run_for_test("g", "ConstantFoldPass", PassPhase::LocalOpt, true);
        record_run_for_test("g", "TypeInferPass", PassPhase::TypeRecovery, true);
        record_run_for_test("g", "ConstantFoldPass", PassPhase::LocalOpt, false);

        let osc = schedule_audit_oscillations();
        assert_eq!(
            osc.len(),
            1,
            "expected exactly one oscillation row, got {osc:?}"
        );
        assert!(
            osc[0].contains("ConstantFoldPass") && osc[0].contains("TypeInferPass"),
            "row should name both passes: {osc:?}"
        );
    }

    #[test]
    fn schedule_audit_quiet_when_disabled() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();
        // No recording at all: the dump must just be
        // the header so consumers can rely on a stable shape.
        assert_eq!(
            dump_schedule_audit_csv(),
            "function,pass,phase,iteration,decision,changed,reason\n"
        );
        assert!(schedule_audit_oscillations().is_empty());
    }
}
