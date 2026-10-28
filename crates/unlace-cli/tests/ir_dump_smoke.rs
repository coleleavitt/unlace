//! Smoke tests for the `unlace ir-dump` subcommand (Batch 16 slice 2).
//!
//! `--log unlace::pass::ir=trace` already prints per-pass IR diffs *during* the
//! pipeline; this subcommand snapshots the end-state IR after a named
//! milestone (`lift`, `post-passes`, `post-structuring`) so users can
//! inspect a single function's final shape without grepping a trace
//! firehose. The tests below exercise each phase against `hello_world.elf`
//! and verify the canonical IR header (`func main @ 0x…`) lands in stdout.

use std::process::Command;

fn unlace_bin() -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    cmd.env_remove("RUST_LOG");
    cmd
}

fn fixture(name: &str) -> String {
    let manifest = env!("CARGO_MANIFEST_DIR");
    format!("{manifest}/../../fixtures/{name}")
}

#[test]
fn ir_dump_default_phase_emits_post_passes_ir_for_named_function() {
    let output = unlace_bin()
        .args(["ir-dump", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("func main @ 0x"),
        "ir-dump should emit canonical SSA header, got: {stdout}"
    );
}

#[test]
fn ir_dump_lift_phase_runs_without_passes() {
    let output = unlace_bin()
        .args(["ir-dump", "--function", "main", "--phase", "lift"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("func main @ 0x"),
        "lift-phase dump should still emit the SSA header, got: {stdout}"
    );
}

#[test]
fn ir_dump_post_structuring_phase_succeeds() {
    let output = unlace_bin()
        .args([
            "ir-dump",
            "--function",
            "main",
            "--phase",
            "post-structuring",
        ])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("func main @ 0x"),
        "post-structuring dump should emit the SSA header, got: {stdout}"
    );
}

#[test]
fn ir_dump_unknown_phase_errors() {
    let output = unlace_bin()
        .args(["ir-dump", "--function", "main", "--phase", "bogus"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(!output.status.success(), "unknown phase should fail");
    let stderr = String::from_utf8_lossy(&output.stderr);
    assert!(
        stderr.contains("unknown --phase") || stderr.contains("bogus"),
        "should mention the bad phase value: {stderr}"
    );
}

#[test]
fn ir_dump_all_functions_when_no_filter() {
    let output = unlace_bin()
        .args(["ir-dump"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    // No --function filter ⇒ every discovered function gets a `func …` header.
    let header_count = stdout.matches("func ").count();
    assert!(
        header_count >= 2,
        "expected multiple function headers, found {header_count} in:\n{stdout}"
    );
}
