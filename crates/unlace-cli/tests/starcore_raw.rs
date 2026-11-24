//! The native StarCore SC140 language decompiles raw images assembled by hand
//! from the manual's encoding tables: an add, a compare and conditional branch, a
//! two-word-prefix execution set with a high-bank register and a post-increment
//! load, an indexed load and a call.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(image: &str, addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/starcore")
        .join(image)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--addr",
        "--raw-image",
        "--target",
        "StarCore:LE:32:SC140",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(!lower.contains("invalid_word"), "{stdout}");
    stdout
}

#[test]
fn starcore_add_returns_the_sum() {
    let out = decompile("sets.bin", "0x0");
    assert!(out.contains("return a0 + a1;"), "{out}");
}

#[test]
fn starcore_compare_and_branch_select_the_maximum() {
    let out = decompile("max.bin", "0x0");
    assert!(out.contains("a0 = a1;"), "BT skips the TFR when D0 > D1: {out}");
    assert!(out.contains("return a0;"), "{out}");
}

#[test]
fn starcore_prefixed_set_loads_through_r0() {
    let out = decompile("sets.bin", "0xc");
    assert!(out.contains("*a2"), "MOVE.W (R0)+ reads the third argument: {out}");
}

#[test]
fn starcore_indexed_load_decompiles() {
    let out = decompile("sets.bin", "0x18");
    assert!(out.contains("[4]"), "(R0+8) is the fifth word: {out}");
}

#[test]
fn starcore_call_decompiles() {
    let out = decompile("sets.bin", "0x1e");
    assert!(out.contains("sub_6() + 1"), "BSR and the D0 result: {out}");
}
