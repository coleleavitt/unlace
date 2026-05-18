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

use unlace_cli::quality::{
    BinaryQuality, FunctionQuality, QualityTotals, analyze_binary, render_markdown,
};

fn fixtures_dir() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../fixtures")
}

fn analyze(name: &str) -> QualityTotals {
    analyze_report(name).totals
}

fn analyze_report(name: &str) -> BinaryQuality {
    let path = fixtures_dir().join(name);
    analyze_binary(&path).unwrap_or_else(|e| panic!("quality analysis of {name} failed: {e:#}"))
}

fn find_function<'a>(report: &'a BinaryQuality, name: &str) -> &'a FunctionQuality {
    report
        .functions
        .iter()
        .find(|q| q.name == name)
        .unwrap_or_else(|| panic!("{}: missing function {name}", report.binary))
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
    assert!(
        checked >= 10,
        "expected to check >=10 ELF fixtures, saw {checked}"
    );
}

/// Pinned baseline for `hello_world.elf`. Update deliberately when a pass
/// changes output for the better.
#[test]
fn baseline_hello_world() {
    let report = analyze_report("hello_world.elf");
    let main = find_function(&report, "main");
    let t = &report.totals;
    assert_eq!(
        t.unimplemented_ops, 0,
        "hello_world should have no Unimplemented ops"
    );
    assert_eq!(
        t.asm_blocks, 0,
        "hello_world should have no raw __asm blocks"
    );
    // Batch 0+ extended counters pinned baselines. hello_world is a
    // single direct-call printf wrapper. Batch 17 stack/SSA provenance now
    // preserves startup stack arithmetic, exposing two compound assignments
    // in helper output; no short-circuit, no SIMD, all calls direct.
    assert_eq!(
        t.compound_assignments, 2,
        "hello_world: two startup compound assigns recovered"
    );
    assert_eq!(t.short_circuit_ops, 0, "hello_world: no &&/||");
    assert_eq!(t.simd_typed_vars, 0, "hello_world: no SIMD-typed vars");
    assert_eq!(
        t.call_resolution_rate, 100.0,
        "hello_world: every call site is direct → 100% resolved",
    );
    assert_eq!(
        main.output_null_deref_sites, 0,
        "hello_world:main must not emit null-address dereferences"
    );
    assert_eq!(
        main.output_stale_return_result, 0,
        "hello_world:main must not emit stale `return result;`"
    );
    assert_eq!(
        main.output_unimplemented_tokens, 0,
        "hello_world:main must not leak `Unimplemented` tokens"
    );
    assert_eq!(
        t.output_null_deref_sites, 0,
        "hello_world aggregate null-deref output fixed"
    );
    assert_eq!(
        t.output_stale_return_result, 0,
        "hello_world aggregate stale helper returns fixed"
    );
    assert_eq!(
        t.output_unimplemented_tokens, 0,
        "hello_world aggregate must not leak Unimplemented tokens"
    );
    assert_eq!(
        t.output_impossible_lvalue_sites, 0,
        "hello_world aggregate must not emit small-immediate lvalue writes"
    );
    assert_eq!(
        t.output_lost_frame_offset_sites, 0,
        "hello_world aggregate must not leak raw frame-relative pointer arithmetic"
    );
}

/// Pinned baseline for `branches.elf`. Captures the current shape after x86
/// calls stopped materializing synthetic return-address stack stores, SCCP
/// stopped zeroing first-use register inputs, and stack/struct artifact
/// suppression stopped counting non-source startup temporaries as recovered
/// source objects.
#[test]
fn baseline_branches() {
    let t = analyze("branches.elf");
    assert_eq!(t.unimplemented_ops, 0, "branches: no Unimplemented ops");
    assert_eq!(
        t.callother_ops, 0,
        "branches: no Callother ops (SSE mov lowered to Copy)"
    );
    assert_eq!(
        t.stack_vars_recovered, 2,
        "branches: two startup/helper stack vars remain recovered"
    );
    assert_eq!(
        t.struct_fields_recovered, 0,
        "branches: no source struct fields recovered"
    );
    assert_eq!(t.gotos_emitted, 0, "branches: no gotos emitted");
    assert_eq!(t.labels_emitted, 0, "branches: no labels emitted");
    assert_eq!(t.asm_blocks, 0, "branches: no raw __asm blocks");
    assert_eq!(
        t.output_null_deref_sites, 0,
        "branches aggregate null-deref output fixed"
    );
    assert_eq!(
        t.output_stale_return_result, 0,
        "branches aggregate stale helper returns fixed"
    );
    assert_eq!(
        t.output_unimplemented_tokens, 0,
        "branches aggregate must not leak Unimplemented tokens"
    );
}

/// `noreturn_functions` and `libc_annotated_calls` are SSA-field-derived
/// counters wired in Batch 1 / Batch 6. Both have a producer
/// (`NoreturnDetectPass` writing `ssa.noreturn`; `annotate_libc_calls`
/// writing `ssa.libc_call_annotations`) and a reader
/// (`FunctionQuality::collect`). This test pins the wiring end-to-end so
/// a future refactor that renames either side — or skips the resolver
/// hand-off in `analyze_function` — is caught at test time rather than
/// silently zeroing the counter in the report.
///
/// `medium.elf` is the chosen anchor because it calls `__stack_chk_fail`
/// from `f_rec_fib` (a recognised noreturn name), so the counter MUST be
/// at least 1 whenever the producer / consumer agree on the SSA field
/// name (`SsaFunction::noreturn`). `cpp_vtable.elf` is the anchor for the
/// libc counter because it imports `__printf_chk` — which IS in the
/// `recognize_libc` roster — so the annotator must place at least one
/// entry in `ssa.libc_call_annotations`.
#[test]
fn noreturn_and_libc_counters_wired() {
    let medium = analyze("medium.elf");
    assert!(
        medium.noreturn_functions > 0,
        "medium.elf must report >0 noreturn functions (got {}); \
         NoreturnDetectPass writes ssa.noreturn and FunctionQuality reads \
         it — if this assertion fires, the producer / consumer wiring has \
         drifted (e.g. field renamed, resolver dropped from analyze_function)",
        medium.noreturn_functions,
    );

    let vtable = analyze("cpp_vtable.elf");
    assert!(
        vtable.libc_annotated_calls > 0,
        "cpp_vtable.elf must report >0 libc-annotated calls (got {}); \
         annotate_libc_calls writes ssa.libc_call_annotations and \
         FunctionQuality reads it — if this fires, the resolver / annotator \
         hand-off in quality::analyze_function is broken",
        vtable.libc_annotated_calls,
    );
}

/// Pinned baseline for `loops.elf`.
#[test]
fn baseline_loops() {
    let t = analyze("loops.elf");
    assert_eq!(t.unimplemented_ops, 0, "loops: no Unimplemented ops");
    assert_eq!(t.asm_blocks, 0, "loops: no raw __asm blocks");
    // loops.elf must produce a non-trivial amount of IR — a guard against
    // the pipeline silently collapsing to empty output.
    assert!(
        t.ir_insns > 20,
        "loops: expected >20 IR insns, got {}",
        t.ir_insns
    );
    // Batch 0+ extended counters: loops contains `&local` flows into calls;
    // current detector picks up one in each sum_* body.
    assert_eq!(t.byref_args, 3, "loops: three byref-taken locals");
    assert_eq!(
        t.call_resolution_rate, 100.0,
        "loops: every call site is direct → 100% resolved",
    );
    assert_eq!(
        t.output_null_deref_sites, 0,
        "loops aggregate null-deref output fixed"
    );
    assert_eq!(
        t.output_stale_return_result, 0,
        "loops aggregate stale helper returns fixed"
    );
    assert_eq!(
        t.output_unimplemented_tokens, 0,
        "loops aggregate must not leak Unimplemented tokens"
    );
}

/// The quality report must expose bad final emitted-C shapes, not only SSA/HIR
/// counters. This keeps stack/frame provenance work measurable across all
/// functions while also pinning the already-fixed `hello_world:main` path.
#[test]
fn output_sanity_counters_are_reported() {
    let report = analyze_report("hello_world.elf");
    let md = render_markdown(&report);

    assert!(
        md.contains("| function | insns | unimpl | callother | stkvars | holes | fields | switch | indcall | goto | label | unktype | asm | nullderef | badret | badtok |"),
        "markdown table must include output-sanity columns"
    );
    assert!(
        md.contains("### Output sanity"),
        "markdown extended totals must include output sanity"
    );
    assert!(
        md.contains("- null deref sites: 0"),
        "markdown must render aggregate null-deref count"
    );
    assert!(
        md.contains("- stale `return result;`: 0"),
        "markdown must render aggregate stale-return count"
    );

    let main = find_function(&report, "main");
    assert_eq!(main.output_null_deref_sites, 0);
    assert_eq!(main.output_stale_return_result, 0);
    assert_eq!(main.output_unimplemented_tokens, 0);
    assert_eq!(report.totals.output_null_deref_sites, 0);
    assert_eq!(report.totals.output_stale_return_result, 0);
}
