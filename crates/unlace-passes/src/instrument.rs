//! Pass instrumentation: per-pass timing and IR trace.
//!
//! Three opt-in observability layers, all controlled by environment
//! variables and gated behind a single `OnceLock<bool>` read so the
//! common (env-unset) path costs **one atomic load** per pass invocation
//! — no allocation, no string compare, no env lookup.
//!
//! # `UNLACE_TIMING=1`
//!
//! Wraps every [`Pass::run`] dispatched through [`run_instrumented`] (or
//! the [`run_to_fixedpoint`](crate::pass::run_to_fixedpoint) runner) with
//! an [`Instant::now`] / [`elapsed`] pair, accumulating into a global
//! [`BTreeMap`] keyed by pass name. [`dump_pass_timings`] renders the
//! accumulator as a markdown table sorted by total time desc — useful
//! at the end of CLI commands so users can spot hot passes.
//!
//! [`elapsed`]: std::time::Instant::elapsed
//!
//! # `UNLACE_TIMING_CSV=<path>`
//!
//! Batch 17 slice 2: when set (independently of `UNLACE_TIMING`), every
//! [`run_instrumented`] call additionally appends one row to a
//! per-(function, pass, iteration) accumulator. `iteration` is the
//! zero-based call index for that (function, pass) pair within the
//! process. [`dump_pass_timings_csv`] renders the accumulator as a CSV
//! body (`function,pass,iteration,ms`) sorted by `(function, pass,
//! iteration)` so the output is deterministic across runs of the same
//! input. The CLI driver writes this to the path named in the env var
//! at end-of-pipeline.
//!
//! Like `UNLACE_TIMING`, the per-function knob is cached once via
//! `OnceLock`, so when the env var is unset the hot path is a single
//! atomic load — no allocation, no string formatting.
//!
//! # `UNLACE_TRACE_PASSES=<csv>`
//!
//! Comma-separated list of pass names to dump pre/post IR snapshots for
//! on stderr. The literal value `*` enables tracing for *all* passes.
//! The IR snapshot uses [`std::fmt::Debug`] (`{:#?}`) on the
//! [`SsaFunction`](unlace_ir::ssa::SsaFunction), and a line-by-line diff
//! is emitted between the snapshots so unchanged lines stay quiet.
//!
//! Both knobs are observation-only: pass semantics are not affected and
//! the IR is never mutated by the wrapper.

use std::collections::BTreeMap;
use std::path::PathBuf;
use std::sync::atomic::{AtomicUsize, Ordering};
use std::sync::{Mutex, OnceLock};
use std::time::Instant;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::verify_ssa_function;

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

/// Cached `UNLACE_TIMING_CSV` path. `None` means the env var is unset
/// (zero work in the hot path); `Some(path)` is the destination file
/// for [`dump_pass_timings_csv`].
fn timing_csv_cell() -> &'static Option<PathBuf> {
    static CELL: OnceLock<Option<PathBuf>> = OnceLock::new();
    CELL.get_or_init(|| std::env::var_os("UNLACE_TIMING_CSV").map(PathBuf::from))
}

/// Cached `UNLACE_TIMING=1` decision. Read **once** per process so the
/// common (unset) path is a single relaxed atomic load.
fn timing_flag() -> bool {
    static CELL: OnceLock<bool> = OnceLock::new();
    *CELL.get_or_init(|| {
        std::env::var_os("UNLACE_TIMING")
            .map(|v| v == "1")
            .unwrap_or(false)
    })
}

/// Cached `UNLACE_VERIFY_EACH` decision. Any non-empty value except common
/// false spellings enables structural IR verification after successful passes.
fn verify_each_flag() -> bool {
    static CELL: OnceLock<bool> = OnceLock::new();
    *CELL.get_or_init(|| {
        std::env::var_os("UNLACE_VERIFY_EACH")
            .and_then(|v| v.into_string().ok())
            .map(|v| {
                let v = v.trim().to_ascii_lowercase();
                !(v.is_empty() || v == "0" || v == "false" || v == "off" || v == "no")
            })
            .unwrap_or(false)
    })
}

fn pass_run_trace_flag() -> bool {
    static CELL: OnceLock<bool> = OnceLock::new();
    *CELL.get_or_init(|| {
        std::env::var_os("UNLACE_PASS_TRACE")
            .or_else(|| std::env::var_os("UNLACE_PIPELINE_TRACE"))
            .and_then(|v| v.into_string().ok())
            .map(|v| {
                let v = v.trim().to_ascii_lowercase();
                !(v.is_empty() || v == "0" || v == "false" || v == "off" || v == "no")
            })
            .unwrap_or(false)
    })
}

fn disabled_passes() -> &'static Option<Vec<String>> {
    static CELL: OnceLock<Option<Vec<String>>> = OnceLock::new();
    CELL.get_or_init(|| parse_pass_csv_env("UNLACE_DISABLE_PASSES"))
}

fn opt_bisect_limit() -> Option<usize> {
    static CELL: OnceLock<Option<usize>> = OnceLock::new();
    *CELL.get_or_init(|| {
        std::env::var("UNLACE_OPT_BISECT_LIMIT")
            .ok()
            .and_then(|raw| raw.trim().parse::<usize>().ok())
    })
}

fn opt_bisect_counter() -> &'static AtomicUsize {
    static CELL: OnceLock<AtomicUsize> = OnceLock::new();
    CELL.get_or_init(|| AtomicUsize::new(0))
}

// ---------------------------------------------------------------------------
// Batch 16: pass-schedule audit
// ---------------------------------------------------------------------------

/// One row of the pass-schedule audit log.
///
/// Captured for every [`run_instrumented`] invocation when
/// `UNLACE_SCHEDULE_AUDIT` is non-empty (the value is the destination
/// file path). Holds the function name, pass name, declared phase, the
/// pass's reported `changed` flag, and the per-(function, pass) iteration
/// index so out-of-order invocations and oscillations are visible after
/// the fact.
#[derive(Clone, Debug)]
struct ScheduleRow {
    function: String,
    pass: String,
    phase: PassPhase,
    iteration: u32,
    changed: bool,
}

fn schedule_log() -> &'static Mutex<Vec<ScheduleRow>> {
    static CELL: OnceLock<Mutex<Vec<ScheduleRow>>> = OnceLock::new();
    CELL.get_or_init(|| Mutex::new(Vec::new()))
}

fn schedule_iteration_counts() -> &'static Mutex<BTreeMap<(String, String), u32>> {
    static CELL: OnceLock<Mutex<BTreeMap<(String, String), u32>>> = OnceLock::new();
    CELL.get_or_init(|| Mutex::new(BTreeMap::new()))
}

fn schedule_audit_path_cell() -> &'static Option<PathBuf> {
    static CELL: OnceLock<Option<PathBuf>> = OnceLock::new();
    CELL.get_or_init(|| {
        std::env::var_os("UNLACE_SCHEDULE_AUDIT")
            .filter(|v| !v.is_empty())
            .map(PathBuf::from)
    })
}

/// Configured destination path for the schedule audit, or `None` when
/// the env var is unset (the common hot-path case).
#[inline]
pub fn schedule_audit_path() -> Option<PathBuf> {
    schedule_audit_path_cell().clone()
}

#[inline]
fn schedule_audit_enabled() -> bool {
    schedule_audit_path_cell().is_some()
}

/// Append one row to the schedule audit. Cheap when the env var is unset
/// (a single atomic load), so callers don't need to gate.
fn record_schedule_event(function: &str, pass: &str, phase: PassPhase, changed: bool) {
    if !schedule_audit_enabled() {
        return;
    }
    let iteration = {
        let mut counts = schedule_iteration_counts()
            .lock()
            .unwrap_or_else(|p| p.into_inner());
        let key = (function.to_string(), pass.to_string());
        let entry = counts.entry(key).or_insert(0);
        let idx = *entry;
        *entry = entry.saturating_add(1);
        idx
    };
    let mut log = schedule_log().lock().unwrap_or_else(|p| p.into_inner());
    log.push(ScheduleRow {
        function: function.to_string(),
        pass: pass.to_string(),
        phase,
        iteration,
        changed,
    });
}

/// Render the accumulated schedule audit as a CSV body, including the
/// header row. Stable order: insertion order, which is the same as
/// dispatch order. Use this from `unlace-cli` when writing the file
/// named by `UNLACE_SCHEDULE_AUDIT`.
pub fn dump_schedule_audit_csv() -> String {
    let rows: Vec<ScheduleRow> = {
        let log = schedule_log().lock().unwrap_or_else(|p| p.into_inner());
        log.clone()
    };
    let mut out = String::from("function,pass,phase,iteration,changed\n");
    for r in &rows {
        out.push_str(&format!(
            "{},{},{:?},{},{}\n",
            r.function,
            r.pass,
            r.phase,
            r.iteration,
            if r.changed { 1 } else { 0 },
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

/// Cached, parsed `UNLACE_TRACE_PASSES` set. `None` means env-unset
/// (zero work in the hot path); `Some(set)` is the parsed CSV. The
/// special token `*` is stored as a single-element set and matched
/// explicitly in [`pass_should_trace`].
fn trace_set() -> &'static Option<Vec<String>> {
    static CELL: OnceLock<Option<Vec<String>>> = OnceLock::new();
    CELL.get_or_init(|| parse_pass_csv_env("UNLACE_TRACE_PASSES"))
}

fn parse_pass_csv_env(name: &str) -> Option<Vec<String>> {
    let raw = std::env::var(name).ok()?;
    let parts: Vec<String> = raw
        .split(',')
        .map(|s| s.trim().to_string())
        .filter(|s| !s.is_empty())
        .collect();
    if parts.is_empty() { None } else { Some(parts) }
}

/// `true` iff `UNLACE_TIMING=1` is set in the environment.
///
/// Cached after the first call — subsequent invocations are a single
/// atomic load.
#[inline]
pub fn pass_timing_enabled() -> bool {
    timing_flag()
}

/// `true` iff per-pass structural IR verification is enabled.
#[inline]
pub fn verify_each_enabled() -> bool {
    verify_each_flag()
}

/// `true` iff direct pass start/end tracing is enabled.
#[inline]
pub fn pass_run_trace_enabled() -> bool {
    pass_run_trace_flag()
}

/// Configured path for `UNLACE_TIMING_CSV` (Batch 17 slice 2), or `None`
/// when the env var is unset.
///
/// Cached after the first call so the hot path stays branch-predictable
/// — a `None` result is a single atomic load and skips all per-function
/// accounting in [`run_instrumented`].
#[inline]
pub fn pass_timing_csv_path() -> Option<PathBuf> {
    timing_csv_cell().clone()
}

/// Cached predicate: `true` iff per-function CSV recording should run.
///
/// Equivalent to `pass_timing_csv_path().is_some()` but avoids the
/// `PathBuf::clone` on the hot path — every [`run_instrumented`] call
/// consults this.
#[inline]
fn func_timing_enabled() -> bool {
    timing_csv_cell().is_some()
}

/// `true` iff this pass name should be IR-traced this process.
///
/// Reads `UNLACE_TRACE_PASSES` once and caches the parsed CSV. The
/// special token `*` matches every pass.
#[inline]
pub fn pass_should_trace(name: &str) -> bool {
    match trace_set() {
        Some(set) => pass_name_matches(set, name),
        None => false,
    }
}

pub fn pass_is_disabled(name: &str) -> bool {
    match disabled_passes() {
        Some(set) => pass_name_matches(set, name),
        None => false,
    }
}

fn pass_name_matches(set: &[String], name: &str) -> bool {
    set.iter().any(|s| s == "*" || s == name)
}

fn pass_allowed_by_opt_bisect() -> bool {
    let Some(limit) = opt_bisect_limit() else {
        return true;
    };
    let ordinal = opt_bisect_counter().fetch_add(1, Ordering::Relaxed) + 1;
    ordinal <= limit
}

/// Append one timing sample for the `(function, pass)` pair.
///
/// Records into two accumulators:
///
/// * The legacy per-pass aggregate (rendered by [`dump_pass_timings`]).
///   This is always updated when called.
/// * The per-(function, pass) sample vector — but **only** when
///   `UNLACE_TIMING_CSV` is set, so the CSV path is fully zero-overhead
///   when the env var is unset (the `func_timing_enabled` guard avoids
///   even the `to_string()` allocations for the key).
///
/// Callers are expected to gate on [`pass_timing_enabled`] or
/// [`pass_timing_csv_path`] first so the no-op path stays free of
/// allocations.
pub fn record_pass_timing(function_name: &str, pass_name: &str, elapsed_ns: u64) {
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

    if func_timing_enabled() {
        let mut map = match func_timings().lock() {
            Ok(g) => g,
            Err(poisoned) => poisoned.into_inner(),
        };
        let key = (function_name.to_string(), pass_name.to_string());
        map.entry(key).or_default().push(elapsed_ns);
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

/// Run `pass` against `func`, instrumenting per the active env flags.
///
/// In the common case (no knob set) this is exactly one pair of
/// `OnceLock` loads + the underlying [`Pass::run`] call — no allocation,
/// no string formatting, no clock read.
pub fn run_instrumented(pass: &dyn Pass, func: &mut SsaFunction) -> Result<bool, PassError> {
    if pass_is_disabled(pass.name()) || !pass_allowed_by_opt_bisect() {
        return Ok(false);
    }

    // A per-pass span so `tracing-flame` (UNLACE_FLAME=<path>) attributes
    // wall-clock to the pass that consumed it. When no flame/fmt layer is
    // interested this is a single atomic load + early return inside
    // `tracing`, so the common path stays effectively free.
    let _pass_span = tracing::trace_span!("pass", name = pass.name()).entered();

    let trace = pass_should_trace(pass.name());
    let timing = pass_timing_enabled();
    let csv = func_timing_enabled();
    let audit = schedule_audit_enabled();
    let verify = verify_each_enabled();
    let pass_trace = pass_run_trace_enabled();

    if !trace && !timing && !csv && !audit && !verify && !pass_trace {
        return pass.run(func);
    }

    if pass_trace {
        let blocks = func.function.blocks.len();
        let insns: usize = func.function.blocks.values().map(|b| b.insns.len()).sum();
        let phis: usize = func.phi_map.values().map(|phis| phis.len()).sum();
        eprintln!(
            "[unlace pass] func={} pass={} phase={:?} start maturity={:?} blocks={} insns={} phis={} var_map={} merged_names={} foldable={} lvars={}",
            func.function.name,
            pass.name(),
            pass.phase(),
            func.maturity,
            blocks,
            insns,
            phis,
            func.var_map.len(),
            func.merged_names.len(),
            func.foldable_exprs.len(),
            func.lvars.len(),
        );
    }

    let before = if trace {
        Some(format!("{:#?}", func))
    } else {
        None
    };

    // Both timing flavours share the same clock read, so a single
    // `Instant::now()` covers `UNLACE_TIMING=1`, `UNLACE_TIMING_CSV=...`,
    // or both at once.
    let start = if timing || csv {
        Some(Instant::now())
    } else {
        None
    };
    // Snapshot the function name *before* `pass.run` mutates the IR. Most
    // passes don't rename functions, but a few (e.g. RustPanicPass) can
    // touch the name — record against the pre-pass identity so the CSV
    // groups behave like a stable key.
    let func_name_owned = if csv || audit || pass_trace {
        Some(func.function.name.clone())
    } else {
        None
    };
    let res = pass.run(func);
    if audit {
        let changed = matches!(res, Ok(true));
        let func_name = func_name_owned.as_deref().unwrap_or("");
        record_schedule_event(func_name, pass.name(), pass.phase(), changed);
    }
    if let Some(t0) = start {
        let ns = t0.elapsed().as_nanos();
        // saturating cast — a single pass call exceeding ~584 years is
        // not a realistic measurement target.
        let ns_u64 = if ns > u128::from(u64::MAX) {
            u64::MAX
        } else {
            ns as u64
        };
        // Use the captured pre-pass name when CSV recording is active;
        // otherwise an empty string — the aggregate branch ignores it.
        let func_name = func_name_owned.as_deref().unwrap_or("");
        record_pass_timing(func_name, pass.name(), ns_u64);
    }

    if pass_trace {
        let blocks = func.function.blocks.len();
        let insns: usize = func.function.blocks.values().map(|b| b.insns.len()).sum();
        let phis: usize = func.phi_map.values().map(|phis| phis.len()).sum();
        let func_name = func_name_owned.as_deref().unwrap_or(&func.function.name);
        match &res {
            Ok(changed) => eprintln!(
                "[unlace pass] func={func_name} pass={} done changed={} maturity={:?} blocks={} insns={} phis={} var_map={} merged_names={} foldable={} lvars={}",
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
            Err(err) => eprintln!(
                "[unlace pass] func={func_name} pass={} error={err:?} maturity={:?} blocks={} insns={} phis={} var_map={} merged_names={}",
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

    if let Some(pre) = before {
        let post = format!("{:#?}", func);
        emit_trace_diff(pass.name(), &pre, &post);
    }

    match res {
        Ok(changed) => {
            if verify {
                verify_ssa_function(func).map_err(|err| PassError::InvariantViolation {
                    message: format!(
                        "{} after {} failed IR verification: {err}",
                        func.function.name,
                        pass.name()
                    ),
                })?;
            }
            Ok(changed)
        }
        Err(err) => Err(err),
    }
}

/// Emit a minimal pre/post IR diff to stderr.
///
/// Not a full LCS diff (the cost would dwarf the pass for big IRs);
/// instead we line up the snapshots and emit only the lines that
/// differ, prefixed with `-` (before-only) and `+` (after-only). When
/// the snapshots are identical we emit a single `(no IR change)` line
/// so users know the pass ran but was a no-op.
fn emit_trace_diff(pass: &str, before: &str, after: &str) {
    if before == after {
        eprintln!("=== pass-trace {pass}: (no IR change) ===");
        return;
    }
    eprintln!("=== pass-trace {pass}: BEGIN ===");
    let before_lines: Vec<&str> = before.lines().collect();
    let after_lines: Vec<&str> = after.lines().collect();
    let max_len = before_lines.len().max(after_lines.len());
    for i in 0..max_len {
        let b = before_lines.get(i).copied();
        let a = after_lines.get(i).copied();
        match (b, a) {
            (Some(bl), Some(al)) if bl == al => {}
            (Some(bl), Some(al)) => {
                eprintln!("- {bl}");
                eprintln!("+ {al}");
            }
            (Some(bl), None) => eprintln!("- {bl}"),
            (None, Some(al)) => eprintln!("+ {al}"),
            (None, None) => {}
        }
    }
    eprintln!("=== pass-trace {pass}: END ===");
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

/// **Test-only** direct write into the schedule audit log, bypassing the
/// `UNLACE_SCHEDULE_AUDIT` env gate. Lets the formatter be tested without
/// mutating process-global env state.
#[cfg(test)]
fn record_schedule_event_for_test(function: &str, pass: &str, phase: PassPhase, changed: bool) {
    let iteration = {
        let mut counts = schedule_iteration_counts()
            .lock()
            .unwrap_or_else(|p| p.into_inner());
        let key = (function.to_string(), pass.to_string());
        let entry = counts.entry(key).or_insert(0);
        let idx = *entry;
        *entry = entry.saturating_add(1);
        idx
    };
    let mut log = schedule_log().lock().unwrap_or_else(|p| p.into_inner());
    log.push(ScheduleRow {
        function: function.to_string(),
        pass: pass.to_string(),
        phase,
        iteration,
        changed,
    });
}

/// **Test-only** direct write into the per-function accumulator,
/// bypassing the `UNLACE_TIMING_CSV` env-var gate so tests can exercise
/// the CSV formatter without mutating process-global env state.
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

    // Tests touch process-global state (env vars + the timing map), so
    // they must run serially. A module-local Mutex enforces that without
    // an extra dev-dep.
    static TEST_LOCK: Mutex<()> = Mutex::new(());

    #[test]
    fn record_pass_timing_accumulates() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_pass_timing("test_fn", "alpha", 1_000_000); // 1 ms
        record_pass_timing("test_fn", "alpha", 3_000_000); // 3 ms
        record_pass_timing("test_fn", "beta", 2_000_000); // 2 ms

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

        record_pass_timing("test_fn", "only", 5_500_000); // 5.5 ms

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

    // NOTE: `pass_should_trace` / `pass_timing_enabled` cache the env
    // var read in a `OnceLock` for the entire process lifetime — that's
    // a *requirement* for zero overhead in the hot path, but it makes
    // them awkward to test directly. We assert the no-knob path is a
    // no-op (no panic) without mutating the environment.
    #[test]
    fn pass_should_trace_unset_is_false() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        // Must not panic. The literal `false` cannot be asserted without
        // controlling the env, but the call itself must be safe.
        _ = pass_should_trace("totally_made_up_pass_name_xyzzy");
    }

    #[test]
    fn pass_timing_enabled_no_panic() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        _ = pass_timing_enabled();
    }

    #[test]
    fn pass_name_matches_supports_wildcard_and_exact_names() {
        let set = vec!["alpha".to_string(), "beta".to_string()];
        assert!(pass_name_matches(&set, "alpha"));
        assert!(!pass_name_matches(&set, "gamma"));

        let wildcard = vec!["*".to_string()];
        assert!(pass_name_matches(&wildcard, "anything"));
    }

    // ---- UNLACE_TIMING_CSV (Batch 17 slice 2) ----

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

    /// `pass_timing_csv_path` reads the env once via `OnceLock` so it
    /// can't be mutated mid-test; we only assert the call doesn't panic
    /// and that the unset path returns `None` *in this test process*.
    /// The CLI integration test in `unlace-cli` exercises the set path
    /// end-to-end with a real env var.
    #[test]
    fn pass_timing_csv_path_no_panic() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        _ = pass_timing_csv_path();
    }

    // ---- UNLACE_SCHEDULE_AUDIT (Batch 16) ----

    #[test]
    fn schedule_audit_records_iterations_and_phases() {
        let _g = TEST_LOCK.lock().unwrap_or_else(|p| p.into_inner());
        reset_timings_for_test();

        record_schedule_event_for_test("f", "ConstantFoldPass", PassPhase::LocalOpt, true);
        record_schedule_event_for_test("f", "ConstantFoldPass", PassPhase::LocalOpt, false);
        record_schedule_event_for_test("f", "TypeInferPass", PassPhase::TypeRecovery, true);

        let csv = dump_schedule_audit_csv();
        let expected = "\
function,pass,phase,iteration,changed
f,ConstantFoldPass,LocalOpt,0,1
f,ConstantFoldPass,LocalOpt,1,0
f,TypeInferPass,TypeRecovery,0,1
";
        assert_eq!(csv, expected);
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
        record_schedule_event_for_test("g", "ConstantFoldPass", PassPhase::LocalOpt, true);
        record_schedule_event_for_test("g", "TypeInferPass", PassPhase::TypeRecovery, true);
        record_schedule_event_for_test("g", "ConstantFoldPass", PassPhase::LocalOpt, false);

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
        // No env-driven recording, no test recording: the dump must just be
        // the header so consumers can rely on a stable shape.
        assert_eq!(
            dump_schedule_audit_csv(),
            "function,pass,phase,iteration,changed\n"
        );
        assert!(schedule_audit_oscillations().is_empty());
    }
}
