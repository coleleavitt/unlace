//! Fixture-based golden tests for stable decompiler output measurement.
//!
//! # Purpose
//!
//! Unlike `golden_x86_64.rs` (which validates Hex-Rays corpus integrity) and
//! `golden_arm.rs` (which smoke-tests the ARM lifter), this suite stores the
//! actual `unlace decompile` output for our own ELF fixtures and diffs against
//! it on every run. Any change to the decompiler that alters output for
//! `medium.elf`, `debug_structs.elf`, `debug_calls.elf`, `debug_hello.elf`,
//! `cpp_vtable.elf`, `cpp_exceptions.elf`, `cpp_rtti.elf`, or
//! `arm64_features.elf` will fail this test.
//!
//! # Running
//!
//! ```bash
//! # Verify current output matches stored goldens:
//! cargo test -p unlace-test-harness --test golden_fixtures
//!
//! # Refresh goldens after intentional output changes:
//! UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures
//! ```
//!
//! # Metrics
//!
//! The suite also reports per-fixture metrics (line count, `if`/`for`/`while`/
//! `return`/`goto` counts, variable-declaration count) so reviewers can track
//! output quality over time. Metrics are printed to stderr; pipe through
//! `--nocapture` to see them.
//!
//! # Quality scoring
//!
//! Each fixture is also scored against an IDA/Hex-Rays reference profile (see
//! `tests/golden/reference_metrics.toml`). The score is a weighted blend of
//! per-feature recovery ratios capped at 1.0, with penalties for `goto`s and
//! excess variables. Scores are printed in the format
//! `[score] <value> <fixture>` so the aggregate-parity script can sum them.

use std::path::{Path, PathBuf};
use std::process::Command;

fn workspace_root() -> &'static Path {
    static ROOT: std::sync::OnceLock<PathBuf> = std::sync::OnceLock::new();
    ROOT.get_or_init(|| {
        Path::new(env!("CARGO_MANIFEST_DIR"))
            .parent()
            .and_then(|p| p.parent())
            .expect("failed to find workspace root")
            .to_path_buf()
    })
}

fn unlace_bin() -> PathBuf {
    let target_dir = std::env::var("CARGO_TARGET_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|_| workspace_root().join("target"));
    let bin_path = target_dir.join("debug").join("unlace");

    assert!(
        bin_path.exists(),
        "unlace binary not found at {bin_path:?}. Run `cargo build -p unlace-cli` first."
    );
    bin_path
}

fn fixture_path(name: &str) -> PathBuf {
    workspace_root()
        .join("fixtures")
        .join(format!("{name}.elf"))
}

fn golden_path(name: &str) -> PathBuf {
    workspace_root()
        .join("tests/golden/expected")
        .join(format!("{name}.c"))
}

fn update_golden_enabled() -> bool {
    std::env::var("UPDATE_GOLDEN")
        .map(|v| !v.is_empty() && v != "0" && v.to_lowercase() != "false")
        .unwrap_or(false)
}

fn decompile(name: &str) -> String {
    let bin = unlace_bin();
    let elf = fixture_path(name);
    assert!(elf.exists(), "fixture missing: {elf:?}");

    let output = Command::new(&bin)
        .args(["decompile", "--emit", "c"])
        .arg(&elf)
        .env_remove("RUST_LOG")
        .output()
        .unwrap_or_else(|e| panic!("failed to spawn unlace on {name}: {e}"));

    assert!(
        output.status.success(),
        "unlace failed on {name}.elf:\nstdout: {}\nstderr: {}",
        String::from_utf8_lossy(&output.stdout),
        String::from_utf8_lossy(&output.stderr),
    );

    String::from_utf8(output.stdout).unwrap_or_else(|e| panic!("non-UTF8 output from {name}: {e}"))
}

/// Surface-level metrics scraped from decompiler output.
///
/// These are intentionally crude (substring scans, not AST visits) so the
/// harness has zero dependency on parser correctness; if metrics regress, the
/// number is meaningful regardless of whether the output is well-formed.
#[derive(Debug, Default, Clone, Copy, PartialEq, Eq)]
struct Metrics {
    lines: usize,
    if_count: usize,
    for_count: usize,
    while_count: usize,
    return_count: usize,
    goto_count: usize,
    variable_count: usize,
}

impl Metrics {
    fn collect(source: &str) -> Self {
        let mut m = Metrics::default();

        for line in source.lines() {
            m.lines += 1;
            let trimmed = line.trim_start();

            m.if_count += count_keyword(trimmed, "if");
            m.for_count += count_keyword(trimmed, "for");
            m.while_count += count_keyword(trimmed, "while");
            m.return_count += count_keyword(trimmed, "return");
            m.goto_count += count_keyword(trimmed, "goto");

            if !trimmed.starts_with("typedef") && !trimmed.starts_with("#define") {
                for ty in [
                    "_BYTE ", "_WORD ", "_DWORD ", "_QWORD ", "_BOOL ", "__int8 ", "__int16 ",
                    "__int32 ", "__int64 ",
                ] {
                    if trimmed.starts_with(ty) && trimmed.contains(';') {
                        m.variable_count += 1;
                        break;
                    }
                }
            }
        }

        m
    }

    fn report(&self, label: &str) {
        eprintln!(
            "[metrics] {label}: lines={} if={} for={} while={} return={} goto={} vars={}",
            self.lines,
            self.if_count,
            self.for_count,
            self.while_count,
            self.return_count,
            self.goto_count,
            self.variable_count,
        );
    }

    /// Quality score against an IDA/Hex-Rays reference profile, in `[0, 100]`.
    ///
    /// Each control-flow feature contributes `min(actual / reference, 1.0)`
    /// (cap prevents over-recovery from inflating the score). Weights:
    /// `if`/`for`/`while` = 3.0, `return` = 2.0. Penalties subtract from the
    /// numerator: `-2.0` per spurious `goto`, `-0.1` per variable above the
    /// reference. The final score is `numerator / total_weight * 100`, clamped
    /// to `[0.0, 100.0]`.
    fn score(&self, reference: &Metrics) -> f64 {
        const W_IF: f64 = 3.0;
        const W_FOR: f64 = 3.0;
        const W_WHILE: f64 = 3.0;
        const W_RETURN: f64 = 2.0;
        const PENALTY_GOTO: f64 = 2.0;
        const PENALTY_EXCESS_VAR: f64 = 0.1;

        let ratio = |actual: usize, reference: usize| -> f64 {
            if reference == 0 {
                1.0
            } else {
                (actual as f64 / reference as f64).min(1.0)
            }
        };

        let weighted = W_IF * ratio(self.if_count, reference.if_count)
            + W_FOR * ratio(self.for_count, reference.for_count)
            + W_WHILE * ratio(self.while_count, reference.while_count)
            + W_RETURN * ratio(self.return_count, reference.return_count);

        let goto_penalty = PENALTY_GOTO * self.goto_count as f64;
        let excess_vars = self.variable_count.saturating_sub(reference.variable_count);
        let var_penalty = PENALTY_EXCESS_VAR * excess_vars as f64;

        let total_weight = W_IF + W_FOR + W_WHILE + W_RETURN;
        let raw = (weighted - goto_penalty - var_penalty) / total_weight * 100.0;
        raw.clamp(0.0, 100.0)
    }
}

/// Count occurrences of a C keyword on a line.
///
/// A keyword match requires:
/// - exact prefix match, AND
/// - followed by whitespace, `(`, or `;` (so `iflag` and `returns` don't count).
fn count_keyword(line: &str, kw: &str) -> usize {
    let mut count = 0;
    let mut search = line;
    while let Some(idx) = search.find(kw) {
        let after = &search[idx + kw.len()..];
        let before_ok = idx == 0
            || !search.as_bytes()[idx - 1].is_ascii_alphanumeric()
                && search.as_bytes()[idx - 1] != b'_';
        let after_ok = after
            .as_bytes()
            .first()
            .is_none_or(|b| !b.is_ascii_alphanumeric() && *b != b'_');
        if before_ok && after_ok {
            count += 1;
        }
        search = &search[idx + kw.len()..];
    }
    count
}

/// Result of comparing actual decompiler output against the stored golden.
enum DiffResult {
    Match,
    Mismatch {
        first_diff_line: usize,
        summary: String,
    },
}

impl DiffResult {
    fn compare(actual: &str, expected: &str) -> Self {
        if actual == expected {
            return DiffResult::Match;
        }

        let actual_lines: Vec<&str> = actual.lines().collect();
        let expected_lines: Vec<&str> = expected.lines().collect();
        let max_len = actual_lines.len().max(expected_lines.len());

        let mut first_diff_line = 0;
        for i in 0..max_len {
            let a = actual_lines.get(i).copied().unwrap_or("<EOF>");
            let e = expected_lines.get(i).copied().unwrap_or("<EOF>");
            if a != e {
                first_diff_line = i + 1;
                break;
            }
        }

        let start = first_diff_line.saturating_sub(3);
        let end = (first_diff_line + 3).min(max_len);
        let mut summary = String::new();
        summary.push_str(&format!(
            "lines: actual={} expected={} (first diff at line {first_diff_line})\n",
            actual_lines.len(),
            expected_lines.len(),
        ));
        for i in start..end {
            let a = actual_lines.get(i).copied().unwrap_or("<EOF>");
            let e = expected_lines.get(i).copied().unwrap_or("<EOF>");
            if a == e {
                summary.push_str(&format!("  {:>4}   {a}\n", i + 1));
            } else {
                summary.push_str(&format!("  {:>4} - {e}\n", i + 1));
                summary.push_str(&format!("  {:>4} + {a}\n", i + 1));
            }
        }

        DiffResult::Mismatch {
            first_diff_line,
            summary,
        }
    }
}

fn reference_metrics_path() -> PathBuf {
    workspace_root().join("tests/golden/reference_metrics.toml")
}

fn reference_metrics(name: &str) -> Option<Metrics> {
    static REFS: std::sync::OnceLock<std::collections::HashMap<String, Metrics>> =
        std::sync::OnceLock::new();
    let table = REFS.get_or_init(|| {
        let path = reference_metrics_path();
        let text = std::fs::read_to_string(&path)
            .unwrap_or_else(|e| panic!("failed to read {path:?}: {e}"));
        parse_reference_metrics(&text).unwrap_or_else(|e| panic!("failed to parse {path:?}: {e}"))
    });
    table.get(name).copied()
}

/// Parse the simple TOML schema used by `reference_metrics.toml`.
///
/// Supports only `[section]` headers and `key = <unsigned integer>` lines;
/// anything else (comments after `#`, blank lines) is skipped. Keeping this
/// inline avoids pulling a `toml` dev-dep into the harness for a static
/// config file.
fn parse_reference_metrics(
    text: &str,
) -> Result<std::collections::HashMap<String, Metrics>, String> {
    let mut out: std::collections::HashMap<String, Metrics> = std::collections::HashMap::new();
    let mut current: Option<String> = None;
    let mut current_metrics = Metrics::default();

    let flush = |name: &Option<String>,
                 metrics: &Metrics,
                 out: &mut std::collections::HashMap<String, Metrics>| {
        if let Some(n) = name {
            out.insert(n.clone(), *metrics);
        }
    };

    for (idx, raw) in text.lines().enumerate() {
        let line_no = idx + 1;
        let line = match raw.find('#') {
            Some(i) => &raw[..i],
            None => raw,
        };
        let line = line.trim();
        if line.is_empty() {
            continue;
        }

        if let Some(rest) = line.strip_prefix('[') {
            let name = rest
                .strip_suffix(']')
                .ok_or_else(|| format!("line {line_no}: missing ']' in section header"))?
                .trim()
                .to_string();
            flush(&current, &current_metrics, &mut out);
            current = Some(name);
            current_metrics = Metrics::default();
            continue;
        }

        let (key, value) = line
            .split_once('=')
            .ok_or_else(|| format!("line {line_no}: expected 'key = value'"))?;
        let key = key.trim();
        let value: usize = value.trim().parse().map_err(|e| {
            format!("line {line_no}: value for '{key}' is not an unsigned integer: {e}")
        })?;

        let target = match key {
            "if_count" => &mut current_metrics.if_count,
            "for_count" => &mut current_metrics.for_count,
            "while_count" => &mut current_metrics.while_count,
            "return_count" => &mut current_metrics.return_count,
            "goto_count" => &mut current_metrics.goto_count,
            "var_count" => &mut current_metrics.variable_count,
            "line_count" => &mut current_metrics.lines,
            other => {
                return Err(format!("line {line_no}: unknown key '{other}'"));
            }
        };
        *target = value;
    }
    flush(&current, &current_metrics, &mut out);
    Ok(out)
}

fn write_golden(path: &Path, contents: &str) {
    std::fs::create_dir_all(path.parent().unwrap()).expect("create golden dir");
    std::fs::write(path, contents).expect("write golden");
}

fn bootstrap_golden(path: &Path, contents: &str) {
    write_golden(path, contents);
    eprintln!(
        "[bootstrap] created {} ({} bytes)",
        path.display(),
        contents.len()
    );
}

fn run_golden(name: &str) {
    let actual = decompile(name);
    let metrics = Metrics::collect(&actual);
    metrics.report(name);
    if let Some(reference) = reference_metrics(name) {
        let score = metrics.score(&reference);
        eprintln!("[score] {score:.1} {name}");
    }

    let path = golden_path(name);

    if update_golden_enabled() {
        write_golden(&path, &actual);
        eprintln!("[update] wrote {} ({} bytes)", path.display(), actual.len());
        return;
    }

    if !path.exists() {
        bootstrap_golden(&path, &actual);
        return;
    }

    let expected = std::fs::read_to_string(&path)
        .unwrap_or_else(|e| panic!("failed to read golden {path:?}: {e}"));

    match DiffResult::compare(&actual, &expected) {
        DiffResult::Match => {}
        DiffResult::Mismatch {
            first_diff_line,
            summary,
        } => {
            panic!(
                "golden mismatch for {name}.elf at line {first_diff_line}\n\
                 Re-run with UPDATE_GOLDEN=1 if the change is intentional.\n\n\
                 {summary}"
            );
        }
    }
}

#[test]
fn golden_medium() {
    run_golden("medium");
}

#[test]
fn golden_debug_structs() {
    run_golden("debug_structs");
}

#[test]
fn golden_debug_calls() {
    run_golden("debug_calls");
}

#[test]
fn golden_debug_hello() {
    run_golden("debug_hello");
}

#[test]
fn golden_cpp_vtable() {
    run_golden("cpp_vtable");
}

#[test]
fn golden_cpp_exceptions() {
    run_golden("cpp_exceptions");
}

#[test]
fn golden_cpp_rtti() {
    run_golden("cpp_rtti");
}

#[test]
fn golden_x87_math() {
    run_golden("x87_math");
}

#[test]
fn golden_arm64_features() {
    run_golden("arm64_features");
}

#[test]
fn golden_fixtures_metrics_summary() {
    let fixtures = [
        "medium",
        "debug_structs",
        "debug_calls",
        "debug_hello",
        "cpp_vtable",
        "cpp_exceptions",
        "cpp_rtti",
        "arm64_features",
    ];
    let mut total = Metrics::default();

    eprintln!();
    eprintln!("=== fixture metrics summary ===");
    for name in fixtures {
        let path = golden_path(name);
        if !path.exists() {
            eprintln!("[skip] {name}: no golden file yet");
            continue;
        }
        let source = std::fs::read_to_string(&path)
            .unwrap_or_else(|e| panic!("failed to read {path:?}: {e}"));
        let m = Metrics::collect(&source);
        m.report(name);
        if let Some(reference) = reference_metrics(name) {
            eprintln!("[score] {:.1} {name}", m.score(&reference));
        }
        total.lines += m.lines;
        total.if_count += m.if_count;
        total.for_count += m.for_count;
        total.while_count += m.while_count;
        total.return_count += m.return_count;
        total.goto_count += m.goto_count;
        total.variable_count += m.variable_count;
    }
    total.report("TOTAL");
}

#[test]
fn count_keyword_only_matches_word_boundaries() {
    assert_eq!(count_keyword("if (x) {", "if"), 1);
    assert_eq!(count_keyword("if(x){", "if"), 1);
    assert_eq!(count_keyword("iflag = 1;", "if"), 0);
    assert_eq!(count_keyword("return 0;", "return"), 1);
    assert_eq!(count_keyword("returns_value();", "return"), 0);
    assert_eq!(count_keyword("if (a) if (b) c;", "if"), 2);
}

#[test]
fn metrics_collect_counts_basic_constructs() {
    let src = "\
int main() {
    _DWORD v0;
    _QWORD v1;
    if (v0 == 0) {
        return 0;
    }
    return 1;
}
";
    let m = Metrics::collect(src);
    assert_eq!(m.if_count, 1);
    assert_eq!(m.return_count, 2);
    assert_eq!(m.variable_count, 2);
    assert!(m.lines >= 8);
}

#[test]
fn metrics_collect_counts_loops_and_goto() {
    let src = "\
void f() {
    for (int i = 0; i < 10; i++) {}
    while (cond) { goto end; }
    do_x();
end:
    return;
}
";
    let m = Metrics::collect(src);
    assert_eq!(m.for_count, 1);
    assert_eq!(m.while_count, 1);
    assert_eq!(m.goto_count, 1);
    assert_eq!(m.return_count, 1);
}

#[test]
fn score_perfect_match_caps_at_one_hundred() {
    let reference = Metrics {
        if_count: 10,
        for_count: 2,
        while_count: 1,
        return_count: 3,
        variable_count: 5,
        ..Default::default()
    };
    let actual = reference;
    assert!((actual.score(&reference) - 100.0).abs() < 1e-9);
}

#[test]
fn score_caps_recovery_ratio_at_one() {
    let reference = Metrics {
        if_count: 4,
        return_count: 1,
        ..Default::default()
    };
    let inflated = Metrics {
        if_count: 100,
        return_count: 100,
        ..Default::default()
    };
    let baseline = inflated.score(&Metrics {
        if_count: 100,
        return_count: 100,
        ..Default::default()
    });
    assert!((inflated.score(&reference) - baseline).abs() < 1e-9);
}

#[test]
fn score_partial_recovery() {
    let reference = Metrics {
        if_count: 10,
        for_count: 2,
        while_count: 2,
        return_count: 4,
        ..Default::default()
    };
    let actual = Metrics {
        if_count: 5,
        for_count: 1,
        while_count: 1,
        return_count: 2,
        ..Default::default()
    };
    let s = actual.score(&reference);
    assert!((s - 50.0).abs() < 1e-9, "expected ~50, got {s}");
}

#[test]
fn score_penalizes_goto_and_excess_vars() {
    let reference = Metrics {
        if_count: 10,
        return_count: 4,
        variable_count: 5,
        ..Default::default()
    };
    let clean = Metrics {
        if_count: 10,
        return_count: 4,
        variable_count: 5,
        ..Default::default()
    };
    let with_goto = Metrics {
        goto_count: 3,
        ..clean
    };
    let with_excess = Metrics {
        variable_count: 25,
        ..clean
    };
    assert!(with_goto.score(&reference) < clean.score(&reference));
    assert!(with_excess.score(&reference) < clean.score(&reference));
}

#[test]
fn score_clamped_to_non_negative() {
    let reference = Metrics {
        if_count: 1,
        ..Default::default()
    };
    let bad = Metrics {
        goto_count: 1000,
        ..Default::default()
    };
    assert_eq!(bad.score(&reference), 0.0);
}

#[test]
fn parse_reference_metrics_basic() {
    let text = "\
# Header comment
[medium]
if_count = 60
for_count = 5
while_count = 3
return_count = 8
goto_count = 0
var_count = 30
line_count = 500

[debug_hello]  # inline comment
if_count = 0
return_count = 1
var_count = 3
line_count = 15
";
    let table = parse_reference_metrics(text).expect("parse ok");
    let medium = table.get("medium").expect("medium present");
    assert_eq!(medium.if_count, 60);
    assert_eq!(medium.for_count, 5);
    assert_eq!(medium.return_count, 8);
    assert_eq!(medium.variable_count, 30);
    assert_eq!(medium.lines, 500);

    let hello = table.get("debug_hello").expect("debug_hello present");
    assert_eq!(hello.if_count, 0);
    assert_eq!(hello.return_count, 1);
    assert_eq!(hello.variable_count, 3);
}

#[test]
fn parse_reference_metrics_rejects_unknown_key() {
    let text = "[s]\nbogus = 1\n";
    assert!(parse_reference_metrics(text).is_err());
}

#[test]
fn parse_reference_metrics_rejects_malformed_header() {
    let text = "[unterminated\nif_count = 1\n";
    assert!(parse_reference_metrics(text).is_err());
}

#[test]
fn reference_metrics_file_loads_for_all_fixtures() {
    for name in [
        "medium",
        "debug_calls",
        "debug_structs",
        "debug_hello",
        "branches",
        "cpp_vtable",
        "cpp_exceptions",
        "cpp_rtti",
        "arm64_features",
    ] {
        assert!(
            reference_metrics(name).is_some(),
            "missing reference profile for {name}",
        );
    }
}

#[test]
fn diff_result_match_for_identical_input() {
    let s = "int main() { return 0; }\n";
    assert!(matches!(DiffResult::compare(s, s), DiffResult::Match));
}

#[test]
fn diff_result_locates_first_difference() {
    let a = "line 1\nline 2\nline 3\n";
    let b = "line 1\nline X\nline 3\n";
    match DiffResult::compare(a, b) {
        DiffResult::Mismatch {
            first_diff_line, ..
        } => assert_eq!(first_diff_line, 2),
        DiffResult::Match => panic!("expected mismatch"),
    }
}
