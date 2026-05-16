//! Smoke tests for the `--scope` regex filter and `--max-iterations` cap
//! added to the `unlace batch` subcommand.
//!
//! These exercise the public CLI surface end-to-end by invoking the
//! built `unlace` binary against the real multi-function fixture
//! `medium.elf`.
//!
//! - `scope_filters_to_single_function`: passes `--scope ^main$` and
//!   asserts that the merged stdout output contains exactly one
//!   function header (the `main` separator) and no others.
//! - `max_iterations_one_does_not_panic`: enables `--interproc` with
//!   `--max-iterations 1` and asserts the batch run completes without
//!   error even on a binary that wouldn't fully converge in a single
//!   sweep.

use std::path::PathBuf;
use std::process::Command;

fn fixture(name: &str) -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../../fixtures")
        .join(name)
}

fn unlace_bin() -> PathBuf {
    PathBuf::from(env!("CARGO_BIN_EXE_unlace"))
}

#[test]
fn scope_filters_to_single_function() {
    let out = Command::new(unlace_bin())
        .args([
            "batch",
            fixture("medium.elf").to_str().unwrap(),
            "--scope",
            "^main$",
            "--jobs",
            "1",
            "--timeout",
            "60",
        ])
        .output()
        .expect("spawn unlace");
    assert!(
        out.status.success(),
        "unlace batch --scope failed: status={:?}\nstderr={}",
        out.status,
        String::from_utf8_lossy(&out.stderr),
    );
    let stdout = String::from_utf8_lossy(&out.stdout);
    let header_count = stdout.lines().filter(|l| l.starts_with("// \u{2550}")).count();
    assert_eq!(
        header_count, 1,
        "expected exactly one function header after --scope ^main$, got {header_count}\n{stdout}",
    );
    assert!(
        stdout.contains(" main @ "),
        "merged output must contain the `main` header; got:\n{stdout}",
    );
}

#[test]
fn max_iterations_one_does_not_panic() {
    let out = Command::new(unlace_bin())
        .args([
            "batch",
            fixture("medium.elf").to_str().unwrap(),
            "--interproc",
            "--max-iterations",
            "1",
            "--jobs",
            "1",
            "--timeout",
            "60",
        ])
        .output()
        .expect("spawn unlace");
    assert!(
        out.status.success(),
        "unlace batch --interproc --max-iterations 1 failed: status={:?}\nstderr={}",
        out.status,
        String::from_utf8_lossy(&out.stderr),
    );
    let stdout = String::from_utf8_lossy(&out.stdout);
    assert!(
        stdout.lines().any(|l| l.starts_with("// \u{2550}")),
        "merged output should contain at least one function header even when interproc caps at 1 iteration",
    );
}
