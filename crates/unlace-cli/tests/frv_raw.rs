//! The Fujitsu FR-V language loads a big-endian raw image of two hand-assembled
//! functions (an ICC compare-and-branch leaf returning through `bralr`, and a
//! caller that saves LR with `movsg`/`movgs`) and decompiles both.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/frv/branch_call.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "FRV:BE:32:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    stdout
}

#[test]
fn frv_icc_branch_leaf_decompiles() {
    let out = decompile("0x0");
    assert!(out.contains("if (a1 < a0)"), "{out}");
    assert!(out.contains("return a0 - a1;"), "{out}");
    assert!(out.contains("return a0 + a1 * 4;"), "{out}");
}

#[test]
fn frv_call_saving_lr_decompiles() {
    let out = decompile("0x1c");
    assert!(out.contains("sub_0("), "{out}");
    assert!(out.contains(",7)"), "{out}");
    assert!(out.contains("+ 1"), "{out}");
}
