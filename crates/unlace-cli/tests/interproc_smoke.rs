//! Smoke test for the whole-program interprocedural fixed-point helper
//! (plan.md Batch 5 first slice).
//!
//! Verifies that [`run_whole_program_interproc`] can drive the existing
//! per-function pipeline over every function in a real ELF without
//! panicking, converges below the iteration cap on a small fixture, and
//! produces an `InterprocReport` whose iteration count is positive.
//!
//! This does NOT change the default decompile/batch output path — wiring
//! interproc into the per-function pipeline by default requires splitting
//! `decompile_function_with_symbols` into lift+passes / structure+emit
//! phases, which is a bigger refactor than this Batch 5 slice targets. The
//! helper exists so a downstream caller (or follow-up batch) can opt in.

use std::collections::BTreeMap;
use std::path::PathBuf;

use unlace_cli::pipeline::{self, FunctionEntry};
use unlace_ir::ssa::{SsaFunction, build_ssa};
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader};

fn fixture(name: &str) -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../../fixtures")
        .join(name)
}

/// Build an `BTreeMap<addr, SsaFunction>` covering every discovered
/// function in `binary`. Functions that fail to lift / SSA-build are
/// silently skipped — the helper is supposed to tolerate partial input.
fn build_ssa_map(binary: &str) -> BTreeMap<u64, SsaFunction> {
    let data = std::fs::read(fixture(binary)).unwrap_or_else(|e| {
        panic!("failed to read fixture {binary}: {e}");
    });
    let image = ElfLoader::load(&data).expect("parse ELF");
    let lifter = get_lifter(image.arch).expect("supported arch");
    let entries: Vec<FunctionEntry> =
        pipeline::discover_functions(&image, None).expect("discover functions");

    let mut funcs = BTreeMap::new();
    for entry in &entries {
        let Ok(ir) = pipeline::lift_function(&image, lifter.as_ref(), entry) else {
            continue;
        };
        let mut ssa = build_ssa(ir);
        ssa.arch = image.arch;
        funcs.insert(entry.addr, ssa);
    }
    funcs
}

#[test]
fn interproc_converges_on_branches() {
    // `branches.elf` is the smallest x86_64 fixture with more than one
    // user function (main, classify, sub_*). Small enough that the
    // fixed-point loop must converge within the default cap.
    let mut funcs = build_ssa_map("branches.elf");
    assert!(
        funcs.len() >= 2,
        "expected ≥2 functions, got {}",
        funcs.len()
    );

    let report = pipeline::run_whole_program_interproc(&mut funcs, 0)
        .expect("interproc fixed-point should succeed");

    assert!(
        report.iterations >= 1,
        "must perform at least one iteration"
    );
    assert!(
        report.iterations <= unlace_passes::DEFAULT_INTERPROC_CAP,
        "should converge within DEFAULT_INTERPROC_CAP ({}), got {}",
        unlace_passes::DEFAULT_INTERPROC_CAP,
        report.iterations
    );
    assert!(!report.hit_cap, "branches.elf must converge, not cap out");
}

#[test]
fn interproc_runs_on_medium_without_panic() {
    // `medium.elf` is the larger multi-function fixture (8 user
    // functions, ~2000 IR insns). Verify the helper doesn't panic on
    // realistic input and produces a report.
    let mut funcs = build_ssa_map("medium.elf");
    assert!(
        funcs.len() >= 5,
        "expected ≥5 functions, got {}",
        funcs.len()
    );

    let report = pipeline::run_whole_program_interproc(&mut funcs, 0)
        .expect("interproc fixed-point should succeed on medium.elf");

    assert!(report.iterations >= 1);
}
