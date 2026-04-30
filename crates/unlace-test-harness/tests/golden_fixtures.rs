//! Fixture-based golden tests for stable decompiler output measurement.
//!
//! # Purpose
//!
//! Unlike `golden_x86_64.rs` (which validates Hex-Rays corpus integrity) and
//! `golden_arm.rs` (which smoke-tests the ARM lifter), this suite stores the
//! actual `unlace decompile` output for our own ELF fixtures and diffs against
//! it on every run. Any change to the decompiler that alters output for
//! `medium.elf`, `debug_structs.elf`, `debug_calls.elf`, or `debug_hello.elf`
//! will fail this test.
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
//! The suite also reports per-fixture metrics (line count, `if` count, `return`
//! count, variable-declaration count) so reviewers can track output quality
//! over time. Metrics are printed to stderr; pipe through `--nocapture` to see
//! them.

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
    workspace_root().join("fixtures").join(format!("{name}.elf"))
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

    String::from_utf8(output.stdout)
        .unwrap_or_else(|e| panic!("non-UTF8 output from {name}: {e}"))
}

/// Surface-level metrics scraped from decompiler output.
///
/// These are intentionally crude (substring scans, not AST visits) so the
/// harness has zero dependency on parser correctness; if metrics regress, the
/// number is meaningful regardless of whether the output is well-formed.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct Metrics {
    lines: usize,
    if_count: usize,
    return_count: usize,
    variable_count: usize,
}

impl Metrics {
    fn collect(source: &str) -> Self {
        let mut lines = 0usize;
        let mut if_count = 0usize;
        let mut return_count = 0usize;
        let mut variable_count = 0usize;

        for line in source.lines() {
            lines += 1;
            let trimmed = line.trim_start();

            if_count += count_keyword(trimmed, "if");
            return_count += count_keyword(trimmed, "return");

            if !trimmed.starts_with("typedef") && !trimmed.starts_with("#define") {
                for ty in [
                    "_BYTE ", "_WORD ", "_DWORD ", "_QWORD ", "_BOOL ",
                    "__int8 ", "__int16 ", "__int32 ", "__int64 ",
                ] {
                    if trimmed.starts_with(ty) && trimmed.contains(';') {
                        variable_count += 1;
                        break;
                    }
                }
            }
        }

        Metrics { lines, if_count, return_count, variable_count }
    }

    fn report(&self, label: &str) {
        eprintln!(
            "[metrics] {label}: lines={} if={} return={} vars={}",
            self.lines, self.if_count, self.return_count, self.variable_count,
        );
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
    Mismatch { first_diff_line: usize, summary: String },
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

        DiffResult::Mismatch { first_diff_line, summary }
    }
}

fn write_golden(path: &Path, contents: &str) {
    std::fs::create_dir_all(path.parent().unwrap()).expect("create golden dir");
    std::fs::write(path, contents).expect("write golden");
}

fn bootstrap_golden(path: &Path, contents: &str) {
    write_golden(path, contents);
    eprintln!("[bootstrap] created {} ({} bytes)", path.display(), contents.len());
}

fn run_golden(name: &str) {
    let actual = decompile(name);
    let metrics = Metrics::collect(&actual);
    metrics.report(name);

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
        DiffResult::Mismatch { first_diff_line, summary } => {
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
fn golden_fixtures_metrics_summary() {
    let fixtures = ["medium", "debug_structs", "debug_calls", "debug_hello"];
    let mut total = Metrics { lines: 0, if_count: 0, return_count: 0, variable_count: 0 };

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
        total.lines += m.lines;
        total.if_count += m.if_count;
        total.return_count += m.return_count;
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
fn diff_result_match_for_identical_input() {
    let s = "int main() { return 0; }\n";
    assert!(matches!(DiffResult::compare(s, s), DiffResult::Match));
}

#[test]
fn diff_result_locates_first_difference() {
    let a = "line 1\nline 2\nline 3\n";
    let b = "line 1\nline X\nline 3\n";
    match DiffResult::compare(a, b) {
        DiffResult::Mismatch { first_diff_line, .. } => assert_eq!(first_diff_line, 2),
        DiffResult::Match => panic!("expected mismatch"),
    }
}
