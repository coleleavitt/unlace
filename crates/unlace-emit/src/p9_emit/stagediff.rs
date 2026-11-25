//! (unlace) Per-stage attribution of text-level cleanup removals.
//!
//! With `UNLACE_STAGE_DIFF` set, each post-render text stage reports, to
//! stderr, the statement lines it removed or added: a multiset diff of the text
//! before and after the stage, capped at [`STAGE_DIFF_CAP`] lines per stage and
//! direction. A statement that vanishes is attributed to the stage that dropped
//! it, with its text. The archived unlace printer ran the same diff behind
//! tracing gates; here the environment variable is the only gate.

use std::collections::BTreeMap;

/// Environment variable that enables the stage diff.
pub const STAGE_DIFF_ENV: &str = "UNLACE_STAGE_DIFF";

/// Most lines reported per stage and per direction before the note line.
pub const STAGE_DIFF_CAP: i64 = 40;

/// Whether the stage diff is enabled for this process.
pub fn stage_diff_enabled() -> bool {
    unlace_base::env::var_os(STAGE_DIFF_ENV).is_some()
}

/// The non-blank lines whose count changed across a stage, as `(line, delta)`
/// in sorted order: a positive delta is a line the stage removed, a negative
/// one a line it added. Lines compare trimmed.
pub fn stage_line_deltas<'a>(before: &'a str, after: &'a str) -> Vec<(&'a str, i64)> {
    let mut counts: BTreeMap<&str, i64> = BTreeMap::new();
    for line in before.lines() {
        *counts.entry(line.trim()).or_insert(0) += 1;
    }
    for line in after.lines() {
        *counts.entry(line.trim()).or_insert(0) -= 1;
    }
    counts
        .into_iter()
        .filter(|(line, delta)| !line.is_empty() && *delta != 0)
        .collect()
}

/// Report the lines `stage` removed and added between `before` and `after` for
/// the function at `func_name`, on stderr.
pub fn trace_stage_diff(func_name: &str, stage: &str, before: &str, after: &str) {
    let mut removed = 0i64;
    let mut added = 0i64;
    for (line, delta) in stage_line_deltas(before, after) {
        let (op, shown, total) = if delta > 0 {
            ("removed", delta, &mut removed)
        } else {
            ("added", -delta, &mut added)
        };
        *total += shown;
        for _ in 0..shown.min(STAGE_DIFF_CAP) {
            eprintln!("stage func={func_name} name={stage} op={op} line={line:?}");
        }
    }
    if removed > STAGE_DIFF_CAP || added > STAGE_DIFF_CAP {
        eprintln!(
            "stage func={func_name} name={stage} note=diff-capped total_removed={removed} total_added={added}"
        );
    }
}

#[cfg(test)]
mod tests;
