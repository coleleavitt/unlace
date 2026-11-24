//! The CLIPPER language (written from the C300 data book) decompiles a
//! hand-assembled raw image of four routines.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/clipper/funcs.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "clipper:LE:32:default",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("baddata"), "{stdout}");
    stdout
}

#[test]
fn clipper_register_add() {
    // addw r1,r0; ret r15
    let out = decompile("0x1000");
    assert!(out.contains("return a0 + a1;"), "{out}");
}

#[test]
fn clipper_compare_branch_max() {
    // cmpw r1,r0; bcle pc16; movw r1,r0; ret r15
    let out = decompile("0x1010");
    assert!(out.contains("if (a0 < a1)"), "{out}");
}

#[test]
fn clipper_abs32_load() {
    // loadw 0x12345678,r0; ret r15
    let out = decompile("0x1020");
    assert!(out.contains("return dat_12345678;"), "{out}");
}

#[test]
fn clipper_pc32_call() {
    // loadq $7,r1; call r15,pc32 0x1000; ret r15
    let out = decompile("0x1030");
    assert!(out.contains("sub_1000(a0,7);"), "{out}");
}
