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
//! `arm64_features.elf`, `mips64_features.elf`, `riscv64_features.elf`,
//! `v850_features.elf`, `arc_features.elf`, or `ppc64_features.elf`
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
//! The suite also reports per-fixture metrics (line count, `if`/`for`/`while`/
//! `return`/`goto` counts, variable-declaration count) so reviewers can track
//! output quality over time. It also reports coarse decompiler-fidelity
//! taxonomy counters for known output artifacts. Metrics are printed to stderr;
//! pipe through `--nocapture` to see them.
//!
//! # Stylistic scoring
//!
//! Each fixture is also scored against an IDA/Hex-Rays reference profile (see
//! `tests/golden/reference_metrics.toml`). The score is a weighted blend of
//! per-feature recovery ratios capped at 1.0, with penalties for `goto`s and
//! excess variables. Scores are printed in the format
//! `[score] <value> <fixture>` so the stylistic-parity script can sum them.
//! This does not measure semantic equivalence or type/variable recovery.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};
use std::sync::OnceLock;

use unlace_cli::args::EmitFormat;
use unlace_cli::decompile;
use unlace_test_harness::fixture_metrics::{
    FIXTURE_DECOMPILE_TIMEOUT, FidelityCounters, GOLDEN_FIXTURES, Metrics, load_reference_metrics,
};

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
    let binary = fixture_path(name);
    assert!(binary.exists(), "fixture missing: {binary:?}");
    decompile::decompile_to_string(&binary, None, EmitFormat::C, FIXTURE_DECOMPILE_TIMEOUT)
        .unwrap_or_else(|e| panic!("unlace failed on {name}: {e:#}"))
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

fn reference_metrics(name: &str) -> Option<Metrics> {
    static REFS: OnceLock<BTreeMap<String, Metrics>> = OnceLock::new();
    let table = REFS.get_or_init(|| {
        load_reference_metrics(&workspace_root().join("tests/golden/reference_metrics.toml"))
            .unwrap_or_else(|e| panic!("{e}"))
    });
    table.get(name).copied()
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
    FidelityCounters::collect(&actual, &metrics).report(name);
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
fn golden_mips64_features() {
    run_golden("mips64_features");
}

#[test]
fn golden_riscv64_features() {
    run_golden("riscv64_features");
}

#[test]
fn golden_v850_features() {
    run_golden("v850_features");
}

#[test]
fn golden_arc_features() {
    run_golden("arc_features");
}

#[test]
fn golden_ppc64_features() {
    run_golden("ppc64_features");
}

#[test]
fn golden_switch_table() {
    run_golden("switch_table");
}

#[test]
fn golden_fixtures_metrics_summary() {
    let mut total = Metrics::default();
    let mut fidelity_total = FidelityCounters::default();

    eprintln!();
    eprintln!("=== fixture metrics summary ===");
    for name in GOLDEN_FIXTURES {
        let path = golden_path(name);
        if !path.exists() {
            eprintln!("[skip] {name}: no golden file yet");
            continue;
        }
        let source = std::fs::read_to_string(&path)
            .unwrap_or_else(|e| panic!("failed to read {path:?}: {e}"));
        let m = Metrics::collect(&source);
        let fidelity = FidelityCounters::collect(&source, &m);
        m.report(name);
        fidelity.report(name);
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
        fidelity_total.add(fidelity);
    }
    total.report("TOTAL");
    fidelity_total.report("TOTAL");
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
        "mips64_features",
        "riscv64_features",
        "x87_math",
        "v850_features",
        "arc_features",
        "ppc64_features",
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
