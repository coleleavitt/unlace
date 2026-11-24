//! The M32R language loads a big-endian raw image of two hand-assembled
//! functions (a compare-and-branch leaf and a caller using `ld24`, `bl` and
//! the parallel-slot `|| nop` filler) and decompiles both.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/m32r/minmax_call.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "M32R:BE:32:default",
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
fn m32r_compare_branch_leaf_decompiles() {
    let out = decompile("0x0");
    assert!(out.contains("if (a0 < a1)"), "{out}");
    assert!(out.contains("return a1 - a0;"), "{out}");
    assert!(out.contains("return a0 + a1 * 4;"), "{out}");
}

#[test]
fn m32r_call_through_parallel_slot_decompiles() {
    let out = decompile("0x14");
    assert!(out.contains("sub_0("), "{out}");
    assert!(out.contains("0x1234"), "{out}");
}
