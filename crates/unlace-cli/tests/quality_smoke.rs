//! Regression-safety tests for the `quality` subcommand (plan.md Batch 0).
//!
//! Two gates:
//! 1. **Malformed-input safety** — `analyze_binary` must not panic on any
//!    fixture in `fixtures/`, including `empty.elf` and `stripped.elf`.
//! 2. **Baseline snapshots** — counter totals for three core fixtures are
//!    pinned so a future pass that silently regresses output is caught.
//!
//! When a pass *intentionally* changes output, update the pinned baselines
//! in the same commit (and confirm the new numbers are actually better).

use std::path::PathBuf;

use unlace_cli::quality::{analyze_binary, QualityTotals};

fn fixtures_dir() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../fixtures")
}

fn analyze(name: &str) -> QualityTotals {
    let path = fixtures_dir().join(name);
    analyze_binary(&path)
        .unwrap_or_else(|e| panic!("quality analysis of {name} failed: {e:#}"))
        .totals
}

/// Fixtures excluded from the per-fixture smoke loop because they are large
/// real-world binaries (thousands of functions) — running the full pass
/// pipeline over them takes minutes, which is fine for an explicit CLI
/// invocation but not for a unit test. The `quality` command itself is not
/// restricted; only this test loop skips them.
const SLOW_FIXTURES: &[&str] = &["go_hello.elf"];

/// Every (small) ELF fixture must analyse without panicking. A per-function
/// failure is tolerated (it increments `functions_failed`); a panic or a hard
/// error on the binary itself is not.
#[test]
fn quality_runs_on_every_fixture_without_panic() {
    let dir = fixtures_dir();
    let mut checked = 0;
    for entry in std::fs::read_dir(&dir).expect("fixtures dir is readable") {
        let path = entry.expect("readable dir entry").path();
        if path.extension().and_then(|e| e.to_str()) != Some("elf") {
            continue;
        }
        let name = path.file_name().unwrap().to_string_lossy().into_owned();
        if SLOW_FIXTURES.contains(&name.as_str()) {
            continue;
        }
        // Loaders may legitimately reject a fixture (non-ELF magic, unknown
        // arch); that surfaces as an `Err`, not a panic. Either outcome is
        // acceptable here — the gate is "no panic".
        match analyze_binary(&path) {
            Ok(report) => {
                // A produced report must be internally consistent.
                assert_eq!(
                    report.functions.len(),
                    report.functions_ok,
                    "{name}: functions vec length must match functions_ok",
                );
            }
            Err(_) => { /* tolerated: loader rejected the binary */ }
        }
        checked += 1;
    }
    assert!(checked >= 10, "expected to check >=10 ELF fixtures, saw {checked}");
}

/// Pinned baseline for `hello_world.elf`. Update deliberately when a pass
/// changes output for the better.
#[test]
fn baseline_hello_world() {
    let t = analyze("hello_world.elf");
    assert_eq!(t.unimplemented_ops, 0, "hello_world should have no Unimplemented ops");
    assert_eq!(t.asm_blocks, 0, "hello_world should have no raw __asm blocks");
    // Batch 0+ extended counters pinned baselines. hello_world is a
    // single direct-call printf wrapper — no compound assigns, no
    // short-circuit, no SIMD, all calls direct (rate = 100%).
    assert_eq!(t.compound_assignments, 0, "hello_world: no compound assigns");
    assert_eq!(t.short_circuit_ops, 0, "hello_world: no &&/||");
    assert_eq!(t.simd_typed_vars, 0, "hello_world: no SIMD-typed vars");
    assert_eq!(
        t.call_resolution_rate, 100.0,
        "hello_world: every call site is direct → 100% resolved",
    );
}

/// Pinned baseline for `branches.elf`. Captures the current shape: one
/// `Callother` and one goto/label pair in `classify`, two stack vars + two
/// recovered struct fields in `sub_10f0`.
#[test]
fn baseline_branches() {
    let t = analyze("branches.elf");
    assert_eq!(t.unimplemented_ops, 0, "branches: no Unimplemented ops");
    assert_eq!(t.callother_ops, 0, "branches: no Callother ops (SSE mov lowered to Copy)");
    assert_eq!(t.stack_vars_recovered, 3, "branches: three stack vars recovered");
    assert_eq!(t.struct_fields_recovered, 2, "branches: two struct fields recovered");
    assert_eq!(t.gotos_emitted, 0, "branches: no gotos emitted");
    assert_eq!(t.labels_emitted, 0, "branches: no labels emitted");
    assert_eq!(t.asm_blocks, 0, "branches: no raw __asm blocks");
}

/// Pinned baseline for `loops.elf`.
#[test]
fn baseline_loops() {
    let t = analyze("loops.elf");
    assert_eq!(t.unimplemented_ops, 0, "loops: no Unimplemented ops");
    assert_eq!(t.asm_blocks, 0, "loops: no raw __asm blocks");
    // loops.elf must produce a non-trivial amount of IR — a guard against
    // the pipeline silently collapsing to empty output.
    assert!(t.ir_insns > 20, "loops: expected >20 IR insns, got {}", t.ir_insns);
    // Batch 0+ extended counters: loops contains a `&local` flowing into
    // a call (current detector picks up exactly one byref local).
    assert_eq!(t.byref_args, 1, "loops: one byref-taken local");
    assert_eq!(
        t.call_resolution_rate, 100.0,
        "loops: every call site is direct → 100% resolved",
    );
}
