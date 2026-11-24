//! The IBM ROMP language (written from the RT PC Technical Reference)
//! decompiles a hand-assembled raw image of four routines.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/romp/funcs.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "ROMP:BE:32:default",
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
fn romp_register_add() {
    // a r2,r3; br r15
    let out = decompile("0x1000");
    assert!(out.contains("return a0 + a1;"), "{out}");
}

#[test]
fn romp_compare_jump_max() {
    // c r2,r3; jnb lt,1f; cas r2,r3,r0; 1: br r15
    let out = decompile("0x1010");
    assert!(out.contains("if (a0 < a1)"), "{out}");
}

#[test]
fn romp_upper_lower_absolute_load() {
    // cau r4,0x1234(0); l r2,0x5678(r4); br r15
    let out = decompile("0x1020");
    assert!(out.contains("return dat_12345678;"), "{out}");
}

#[test]
fn romp_branch_with_execute_call() {
    // balix r15,0x1000 with "lis r3,7" as its subject
    let out = decompile("0x1030");
    assert!(out.contains("sub_1000(a0,7);"), "{out}");
}
