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

#[derive(Debug, Clone, Copy)]
struct FixtureQualityBudget {
    fixture: &'static str,
    max_gotos: usize,
    max_labels: usize,
    max_leaked_temps: usize,
    max_raw_stack_ops: usize,
    max_unknown_helpers: usize,
    max_bad_types: usize,
    max_semantic_failures: usize,
}

const QUALITY_BUDGETS: &[FixtureQualityBudget] = &[
    budget("arc_features.elf", 0, 0, 0, 0, 0, 0),
    budget("arm64_features.elf", 0, 0, 4, 0, 0, 0),
    budget("branches.elf", 0, 0, 6, 0, 0, 7),
    budget("calls.elf", 0, 0, 6, 0, 0, 6),
    budget("cpp_exceptions.elf", 0, 0, 6, 0, 0, 7),
    budget("cpp_rtti.elf", 0, 0, 10, 0, 0, 18),
    budget("cpp_vtable.elf", 0, 0, 5, 0, 0, 5),
    // -g -O0 debug companions for the gap fixtures. -O0 leaks more SSA temps
    // and unknown-type facts than the -O2 originals; these budgets bound the
    // current honest output measured by `unlace quality`.
    budget("debug_branches.elf", 0, 0, 3, 0, 0, 17),
    budget("debug_cpp_exceptions.elf", 0, 0, 6, 0, 0, 6),
    budget("debug_cpp_rtti.elf", 1, 1, 17, 0, 0, 32),
    budget("debug_cpp_vtable.elf", 1, 1, 9, 0, 0, 16),
    budget("debug_loops.elf", 0, 0, 5, 0, 0, 23),
    budget("debug_medium.elf", 12, 12, 37, 0, 0, 285),
    budget("debug_switch_table.elf", 0, 0, 1, 0, 0, 41),
    budget("debug_x87_math.elf", 0, 0, 11, 0, 0, 7),
    budget("debug_calls.elf", 0, 0, 32, 0, 0, 19),
    budget("debug_hello.elf", 0, 0, 4, 0, 0, 5),
    budget("debug_structs.elf", 0, 0, 7, 0, 0, 7),
    budget("debug_templates.elf", 0, 0, 8, 0, 0, 16),
    budget("empty.elf", 0, 0, 4, 0, 0, 5),
    budget("hello_world.elf", 0, 0, 4, 0, 0, 5),
    budget("loops.elf", 0, 0, 7, 0, 0, 28),
    budget("medium.elf", 77, 53, 53, 0, 0, 216),
    budget("mips64_features.elf", 0, 0, 2, 0, 0, 1),
    budget("ppc64_features.elf", 0, 0, 0, 0, 0, 0),
    budget("riscv64_features.elf", 0, 0, 2, 0, 0, 1),
    budget("stripped.elf", 77, 53, 54, 0, 0, 217),
    budget("switch_table.elf", 0, 0, 7, 0, 0, 8),
    budget("type_stack_o2.elf", 0, 0, 10, 0, 0, 13),
    budget("v850_features.elf", 0, 0, 1, 0, 0, 0),
    budget("x87_math.elf", 0, 0, 9, 0, 0, 8),
];

const fn budget(
    fixture: &'static str,
    max_gotos: usize,
    max_labels: usize,
    max_leaked_temps: usize,
    max_raw_stack_ops: usize,
    max_unknown_helpers: usize,
    max_bad_types: usize,
) -> FixtureQualityBudget {
    FixtureQualityBudget {
        fixture,
        max_gotos,
        max_labels,
        max_leaked_temps,
        max_raw_stack_ops,
        max_unknown_helpers,
        max_bad_types,
        max_semantic_failures: 0,
    }
}

fn quality_budget_for(fixture: &str) -> Option<&'static FixtureQualityBudget> {
    QUALITY_BUDGETS
        .iter()
        .find(|budget| budget.fixture == fixture)
}

fn assert_within_quality_budget(name: &str, report: &BinaryQuality, budget: &FixtureQualityBudget) {
    let t = &report.totals;
    let unknown_helpers =
        t.unimplemented_ops + t.callother_semantic_gap_ops + t.output_unimplemented_tokens;

    assert!(
        t.gotos_emitted <= budget.max_gotos,
        "{name}: goto budget exceeded: got {}, max {}",
        t.gotos_emitted,
        budget.max_gotos,
    );
    assert!(
        t.labels_emitted <= budget.max_labels,
        "{name}: label budget exceeded: got {}, max {}",
        t.labels_emitted,
        budget.max_labels,
    );
    assert!(
        t.output_leaked_temp_decls <= budget.max_leaked_temps,
        "{name}: leaked temp budget exceeded: got {}, max {}",
        t.output_leaked_temp_decls,
        budget.max_leaked_temps,
    );
    assert!(
        t.output_lost_frame_offset_sites <= budget.max_raw_stack_ops,
        "{name}: raw stack-op budget exceeded: got {}, max {}",
        t.output_lost_frame_offset_sites,
        budget.max_raw_stack_ops,
    );
    assert!(
        unknown_helpers <= budget.max_unknown_helpers,
        "{name}: unknown-helper budget exceeded: got {unknown_helpers}, max {}",
        budget.max_unknown_helpers,
    );
    assert!(
        t.unknown_types <= budget.max_bad_types,
        "{name}: bad/unknown type-fact budget exceeded: got {}, max {}",
        t.unknown_types,
        budget.max_bad_types,
    );
    assert_eq!(
        budget.max_semantic_failures, 0,
        "{name}: semantic failures must stay a zero budget; xtask semantic-report enforces the executable cases",
    );
}

fn assert_no_hard_negative_output(name: &str, t: &QualityTotals) {
    assert_eq!(
        t.callother_semantic_gap_ops, 0,
        "{name}: unknown Callother helper spam must stay at zero"
    );
    assert_eq!(
        t.output_null_deref_sites, 0,
        "{name}: final C must not emit null-address dereferences"
    );
    assert_eq!(
        t.output_stale_return_result, 0,
        "{name}: final C must not emit stale `return result;` placeholders"
    );
    assert_eq!(
        t.output_unimplemented_tokens, 0,
        "{name}: final C must not leak `Unimplemented` tokens"
    );
    assert_eq!(
        t.output_empty_bodies, 0,
        "{name}: final C must not emit empty structured bodies"
    );
    assert_eq!(
        t.output_impossible_lvalue_sites, 0,
        "{name}: final C must not write through impossible small-immediate lvalues"
    );
    assert_eq!(
        t.output_lost_frame_offset_sites, 0,
        "{name}: final C must not leak raw frame-relative pointer arithmetic"
    );
}

/// Fixtures excluded from the per-fixture smoke loop because they are large
/// real-world binaries (thousands of functions) — running the full pass
/// pipeline over them takes minutes, which is fine for an explicit CLI
/// invocation but not for a unit test. The `quality` command itself is not
/// restricted; only this test loop skips them.
const SLOW_FIXTURES: &[&str] = &["go_hello.elf"];

#[test]
fn per_fixture_quality_budgets_cover_current_small_elf_fixtures() {
    let dir = fixtures_dir();
    let mut checked = 0usize;
    for entry in std::fs::read_dir(&dir).expect("fixtures dir is readable") {
        let path = entry.expect("readable dir entry").path();
        if path.extension().and_then(|e| e.to_str()) != Some("elf") {
            continue;
        }
        let name = path.file_name().unwrap().to_string_lossy().into_owned();
        if SLOW_FIXTURES.contains(&name.as_str()) {
            continue;
        }
        let budget = quality_budget_for(&name)
            .unwrap_or_else(|| panic!("{name}: missing per-fixture quality budget"));
        assert_eq!(
            budget.max_semantic_failures, 0,
            "{name}: semantic failure budget must remain zero"
        );
        checked += 1;
    }
    assert_eq!(
        checked,
        QUALITY_BUDGETS.len(),
        "budget table should match the current non-slow ELF fixture set"
    );
}

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
                let budget = quality_budget_for(&name)
                    .unwrap_or_else(|| panic!("{name}: missing per-fixture quality budget"));
                assert_within_quality_budget(&name, &report, budget);
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
    // single direct-call printf wrapper. Current frame-base cleanup suppresses
    // startup stack arithmetic instead of counting it as source-shaped
    // compound assignments; no short-circuit, no SIMD, all calls direct.
    assert_eq!(
        t.compound_assignments, 0,
        "hello_world: startup frame-base arithmetic is suppressed"
    );
    assert_eq!(t.callother_ops, 1, "hello_world: one terminal startup trap");
    assert_eq!(
        t.callother_trap_ops, 1,
        "hello_world: terminal startup trap is classified"
    );
    assert_eq!(
        t.callother_semantic_gap_ops, 0,
        "hello_world: no unknown Callother semantic gaps"
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
/// stopped zeroing first-use register inputs, and Callother accounting split
/// terminal startup traps from real unknown semantic gaps.
#[test]
fn baseline_branches() {
    let t = analyze("branches.elf");
    assert_eq!(t.unimplemented_ops, 0, "branches: no Unimplemented ops");
    assert_eq!(
        t.callother_ops, 1,
        "branches: one terminal startup trap Callother remains visible"
    );
    assert_eq!(
        t.callother_trap_ops, 1,
        "branches: terminal startup trap is classified"
    );
    assert_eq!(
        t.callother_semantic_gap_ops, 0,
        "branches: no unknown Callother semantic gaps"
    );
    assert_eq!(
        t.stack_vars_recovered, 2,
        "branches: startup stack artifacts remain recovered (the `push rbp` \
         save is frame setup, not a stack variable)"
    );
    assert_eq!(
        t.struct_fields_recovered, 2,
        "branches: startup synthetic stack composite is still visible"
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
    // `may_throw(int) [clone .cold]` ends every path in `__cxa_throw`.
    // (`medium.elf` has none: `main` only calls `__stack_chk_fail` on its
    // cold path, which does not make it noreturn.)
    let exceptions = analyze("cpp_exceptions.elf");
    assert!(
        exceptions.noreturn_functions > 0,
        "cpp_exceptions.elf must report >0 noreturn functions (got {}); \
         NoreturnDetectPass writes ssa.noreturn and FunctionQuality reads \
         it — if this assertion fires, the producer / consumer wiring has \
         drifted (e.g. field renamed, resolver dropped from analyze_function)",
        exceptions.noreturn_functions,
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

#[test]
fn batch17_stack_provenance_negative_output_gates() {
    for fixture in ["loops.elf", "type_stack_o2.elf"] {
        let report = analyze_report(fixture);
        let t = &report.totals;
        assert_no_hard_negative_output(fixture, t);
        assert_eq!(
            t.stack_accesses_lost_provenance, 0,
            "{fixture}: every recorded stack access must resolve to recovered provenance"
        );
        assert!(
            t.stack_accesses_recorded > 0,
            "{fixture}: provenance gate must exercise at least one recorded stack access"
        );
    }
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
    // Batch 0+ extended counters: loops.c has no address-taken locals or
    // calls inside the loop bodies, so byref detection should stay quiet.
    assert_eq!(t.byref_args, 0, "loops: no byref-taken locals");
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
        md.contains("| function | insns | unimpl | callother | stkvars | holes | fields | switch | indcall | flirt_hc | goto | label | unktype | asm | nullderef | badret | badtok | leaktemp |"),
        "markdown table must include output-sanity and FLIRT quality columns"
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
    assert!(
        md.contains("- leaked temp declarations: 0"),
        "markdown must render aggregate leaked-temp declaration count"
    );
    assert!(
        md.contains("- flirt-matched calls (high confidence"),
        "markdown must render aggregate FLIRT confidence count"
    );

    let main = find_function(&report, "main");
    assert_eq!(main.output_null_deref_sites, 0);
    assert_eq!(main.output_stale_return_result, 0);
    assert_eq!(main.output_unimplemented_tokens, 0);
    assert_eq!(main.output_leaked_temp_decls, 0);
    assert_eq!(report.totals.output_null_deref_sites, 0);
    assert_eq!(report.totals.output_stale_return_result, 0);
    assert_eq!(report.totals.output_leaked_temp_decls, 0);
}
