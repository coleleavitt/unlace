//! The parity gates: the datatest corpus (`tests/datatests`) against
//! `docs/baseline.json` and the stage corpus (`tests/stages`) against
//! `docs/baseline-stages.json`, each run through `unlace test --datatests` exactly as
//! a person runs it, and passing only on its `PARITY OK` verdict.
//!
//! `unlace test` drives `decomp_test_dbg`, which `unlace-harness` builds. This
//! target reads it from beside the `unlace` binary under test, so build both first:
//! `cargo build -p unlace-harness -p unlace-cli && cargo test -p unlace-cli --test
//! parity` (`cargo nextest run --workspace` builds both). A harness that is missing,
//! or built from other sources than this `unlace`, fails the gate instead of
//! measuring a stale engine. Its own `[[test]]` target, so a release gate compiles
//! only this file and not the whole CLI suite.

use std::path::{Path, PathBuf};
use std::process::Command;

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .expect("the repository root")
}

fn harness() -> PathBuf {
    let unlace = Path::new(env!("CARGO_BIN_EXE_unlace"));
    let name = format!("decomp_test_dbg{}", std::env::consts::EXE_SUFFIX);
    let harness = unlace.with_file_name(name);
    assert!(
        harness.is_file(),
        "{} is missing: build it with `cargo build -p unlace-harness` (same profile as this test)",
        harness.display()
    );
    harness
}

fn unlace_test(root: &Path, corpus: &Path) -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    cmd.current_dir(root)
        .env("KUNA_ROOT", root)
        .arg("test")
        .arg("--datatests")
        .arg("--binary")
        .arg(harness())
        .arg("--sleighpath")
        .arg(root.join("specs"))
        .arg("--datatests-dir")
        .arg(corpus);
    cmd
}

/// `unlace` names a harness built from other sources on stderr; an empty corpus
/// asks it in a second instead of after a whole corpus.
fn assert_fresh_harness(stderr: &str) {
    assert!(
        !stderr.contains("is a different build"),
        "decomp_test_dbg is stale: rebuild it with `cargo build -p unlace-harness`\n{stderr}"
    );
}

/// Run `unlace test --datatests` over `corpus` against `baseline` and require
/// `PARITY OK` from the same build of the harness.
fn parity(corpus: &str, baseline: &str) {
    let root = repo_root();
    let empty = PathBuf::from(env!("CARGO_TARGET_TMPDIR"))
        .join(format!("parity-empty-{}", corpus.replace('/', "-")));
    std::fs::create_dir_all(&empty).expect("create the empty probe corpus");
    let probe = unlace_test(&root, &empty)
        .output()
        .expect("run unlace test");
    assert_fresh_harness(&String::from_utf8_lossy(&probe.stderr));

    let out = unlace_test(&root, &root.join(corpus))
        .arg("--baseline")
        .arg(root.join(baseline))
        .output()
        .expect("run unlace test");
    let stdout = String::from_utf8_lossy(&out.stdout);
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert_fresh_harness(&stderr);
    assert!(
        out.status.success() && stdout.lines().any(|l| l.contains("PARITY OK")),
        "{corpus} vs {baseline}: exit {:?}\n{stdout}\n{stderr}",
        out.status.code()
    );
}

#[test]
fn datatests_match_the_baseline() {
    parity("tests/datatests", "docs/baseline.json");
}

#[test]
fn stage_tests_match_the_baseline() {
    parity("tests/stages", "docs/baseline-stages.json");
}
