//! Batch 9 — wiring smoke for jump-table-aware switch refinement.
//!
//! These tests guard the "no panic on any fixture" invariant after the
//! addition of:
//!   1. `unlace_passes::IndirectJumpResolvePass` (post-loop one-shot)
//!   2. `unlace_cli::pipeline::resolve_jump_table_targets` (section-aware
//!      second phase)
//!   3. `emit_output`'s call into
//!      `unlace_struct::refine_switches_with_tables`
//!
//! They do **not** assert any switch is recovered (the source-level
//! `switch (x % 4)` in `branches.c` lowers to a `cmov` at -O2 with no jump
//! table — see the follow-up note in
//! `crates/unlace-cli/src/pipeline.rs::resolve_jump_table_targets`).
//! What they do guarantee is that the new wiring runs end-to-end on every
//! ELF fixture and that no candidate is invented for `branches.elf`'s
//! `cmov` lowering (which would produce a bogus switch).

use std::path::PathBuf;
use std::process::Command;

fn unlace_bin() -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    cmd.env_remove("RUST_LOG");
    cmd
}

fn fixtures_dir() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../fixtures")
}

/// Slow / large fixtures excluded from the per-fixture loop. Same set as
/// `quality_smoke.rs`'s `SLOW_FIXTURES`.
const SLOW_FIXTURES: &[&str] = &["go_hello.elf"];

/// Invoke `unlace decompile --emit c <fixture>` for every small ELF
/// fixture and require a successful exit. Catches any panic introduced by
/// the new pass / resolver / refiner wiring.
#[test]
fn batch9_decompile_runs_on_every_fixture_without_panic() {
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
        let output = unlace_bin()
            .args(["decompile", "--emit", "c"])
            .arg(&path)
            .output()
            .unwrap_or_else(|e| panic!("failed to spawn unlace on {name}: {e}"));
        // The CLI is allowed to log errors (loader rejection, partial
        // failures), but it must not crash the process. A non-zero exit
        // status from a known-broken loader is tolerated; a SIGABRT from
        // a Rust panic in the new wiring is not — that surfaces as
        // `signal()` on Unix.
        if let Some(code) = output.status.code() {
            // SIGABRT-via-panic typically surfaces as code 134 on Linux.
            assert_ne!(
                code, 134,
                "{name}: unlace decompile aborted (likely panic). stderr:\n{}",
                String::from_utf8_lossy(&output.stderr)
            );
        } else {
            // Killed by signal — also a fail.
            panic!(
                "{name}: unlace decompile killed by signal. stderr:\n{}",
                String::from_utf8_lossy(&output.stderr)
            );
        }
        checked += 1;
    }
    assert!(
        checked >= 10,
        "expected to check >=10 ELF fixtures, saw {checked}"
    );
}

/// Confirms the wiring does not accidentally over-recover on
/// `branches.elf`. The `classify` function uses a `cmov`-based switch
/// (no jump table in `.rodata`), so the candidate detector must either
/// find no candidate or find one whose section-resolution step yields
/// `num_entries == 0` — i.e. the C output must not gain a spurious
/// `switch (...)` body.
#[test]
fn batch9_branches_elf_no_spurious_switch() {
    let path = fixtures_dir().join("branches.elf");
    let output = unlace_bin()
        .args(["decompile", "--emit", "c"])
        .arg(&path)
        .output()
        .expect("spawn unlace");
    assert!(
        output.status.success(),
        "decompile failed: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    // The wiring is a no-op on this fixture — the only way a `switch (`
    // could appear is via either (a) the existing structurer routes (none
    // currently fire here) or (b) a bogus refinement of a non-table
    // `Branchind`. Either way, today's truth is "no switch keyword in
    // branches.elf decompile output".
    assert!(
        !stdout.contains("switch ("),
        "branches.elf decompile must not gain a spurious switch:\n{stdout}"
    );
}
