//! Batch 6 — wiring smoke for whole-program printf format-string parsing.
//!
//! Guards two regressions:
//!
//! 1. `parse_printf_format_strings` must run **before** the optimization
//!    pipeline. The IR pattern `find_constant_arg` keys on
//!    (`Copy(arg_reg, t)` where `t = IntAdd(image_base, const)`) is folded
//!    away by copyprop / sccp, so a post-pass-only call always returned
//!    empty on PIE binaries — i.e. every ELF fixture in this repo.
//! 2. The whole-program driver
//!    (`pipeline::run_whole_program_printf_parse`) must populate
//!    `SsaFunction::variadic_call_types` for every function whose Call
//!    sites resolve to a variadic libc family member.
//!
//! Canonical fixture: `cpp_exceptions.elf`. Compiled with `g++ -O0
//! -fno-inline` on x86-64-linux, it contains two `printf("caught: %s\n",
//! ...)` call sites — one in `safe_call(int)` and one in its cold split
//! `safe_call(int).cold`. Both go through the libc PLT thunk, so the
//! resolver must agree on the same canonical name ("printf") for the
//! parser to fire.

use std::path::PathBuf;
use std::process::Command;

use unlace_cli::pipeline::{self, FunctionEntry, PipelineConfig};
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader};

fn fixtures_dir() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../fixtures")
}

fn unlace_bin() -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    cmd.env_remove("RUST_LOG");
    cmd
}

/// End-to-end smoke through the `unlace quality` CLI: confirms the
/// pre-pass call site in `quality::collect` populates
/// `ssa.variadic_call_types`, and the per-binary aggregation in
/// `quality::FunctionQuality::variadic_call_sites` rolls those up. The
/// expected count (`2`) is exact, not lower-bounded — both printf sites
/// in `cpp_exceptions.elf` are discoverable and any regression in
/// `find_constant_arg` (the PIE-relative `IntAdd` walk) will drop it to
/// zero.
#[test]
fn printf_wiring_cpp_exceptions_reports_two_sites() {
    let path = fixtures_dir().join("cpp_exceptions.elf");
    assert!(
        path.exists(),
        "fixture cpp_exceptions.elf is missing at {}",
        path.display()
    );

    let output = unlace_bin()
        .args(["quality"])
        .arg(&path)
        .output()
        .expect("spawn unlace quality");
    assert!(
        output.status.success(),
        "unlace quality failed: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    let line = stdout
        .lines()
        .find(|l| l.contains("variadic call sites"))
        .unwrap_or_else(|| panic!("no 'variadic call sites' line in quality output:\n{stdout}"));
    // Format from quality.rs:
    //   "- variadic call sites (printf-family resolved): N"
    let n: usize = line
        .rsplit(':')
        .next()
        .and_then(|s| s.trim().parse().ok())
        .unwrap_or_else(|| panic!("could not parse count from line: {line:?}"));
    assert_eq!(
        n, 2,
        "expected exactly 2 variadic call sites on cpp_exceptions.elf, got {n}.\nfull output:\n{stdout}"
    );
}

/// Direct API smoke for the new whole-program driver. Lifts every
/// discovered function in `cpp_exceptions.elf`, runs
/// `run_whole_program_printf_parse`, and asserts the returned aggregate
/// count is `>= 2`. Lower-bounded rather than exact because future
/// pattern-recovery improvements (e.g. recovering format strings from
/// jump-table-fed call sites) are improvements we don't want this test
/// to penalise.
#[test]
fn whole_program_driver_populates_variadic_call_types() {
    let path = fixtures_dir().join("cpp_exceptions.elf");
    let data = std::fs::read(&path).expect("read cpp_exceptions.elf");
    assert!(
        ElfLoader::can_load(&data),
        "cpp_exceptions.elf failed ElfLoader::can_load"
    );
    let image = ElfLoader::load(&data).expect("load cpp_exceptions.elf");

    let functions: Vec<FunctionEntry> =
        pipeline::discover_functions(&image, None).expect("discover_functions");

    let lifter = get_lifter(image.arch).expect("supported arch");
    let pipeline_config = PipelineConfig {
        timeout: std::time::Duration::from_secs(60),
        options: Default::default(),
        annotations: None,
        flirt: pipeline::FlirtConfig::default(),
        dwarf_sidecar: None,
        symbol_context: None,
    };

    // Lift every discovered function (same as batch.rs Phase 1).
    let mut ssa_map: std::collections::BTreeMap<u64, unlace_ir::ssa::SsaFunction> =
        std::collections::BTreeMap::new();
    for entry in &functions {
        if let Ok(ssa) = pipeline::lift_and_run_passes(
            &image,
            lifter.as_ref(),
            entry,
            &pipeline_config,
            None,
            None,
            &functions,
        ) {
            ssa_map.insert(entry.addr, ssa);
        }
    }
    assert!(
        !ssa_map.is_empty(),
        "Phase 1 lift produced no SSA functions for cpp_exceptions.elf"
    );

    let total = pipeline::run_whole_program_printf_parse(&mut ssa_map, &image, &functions);
    assert!(
        total >= 2,
        "whole-program printf parse should populate at least 2 variadic_call_types entries on cpp_exceptions.elf, got {total}"
    );

    // Spot-check: at least one function must have a non-empty
    // variadic_call_types map. Without this we'd be measuring an
    // aggregate that could be fed by an unrelated source.
    let any_non_empty = ssa_map
        .values()
        .any(|ssa| !ssa.variadic_call_types.is_empty());
    assert!(
        any_non_empty,
        "no SsaFunction in the map ended up with a populated variadic_call_types"
    );
}
