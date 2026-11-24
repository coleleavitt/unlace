//! The Data General Nova language (written from DG's Nova programmer's
//! references) decompiles a hand-assembled, word-addressed raw image.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/nova/funcs.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "Nova:BE:16:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("baddata"), "{stdout}");
    stdout
}

#[test]
fn nova_operate_add() {
    // ADD 1,0; JMP 0,3
    let out = decompile("0x10");
    assert!(out.contains("return a1 + a0;"), "{out}");
}

#[test]
fn nova_subtract_skip_max() {
    // SUBZ# 1,0,SNC; MOV 1,0; JMP 0,3
    let out = decompile("0x14");
    assert!(out.contains("if (a0 < a1)"), "{out}");
    assert!(out.contains("a0 = a1;"), "{out}");
}

#[test]
fn nova_page_zero_load_store() {
    // LDA 0,050; LDA 1,051; ADD 1,0; STA 0,052; JMP 0,3 (words; symbols print bytes)
    let out = decompile("0x18");
    assert!(out.contains("dat_54 = dat_52 + dat_50;"), "{out}");
}

#[test]
fn nova_rotate_through_carry() {
    // SAV; ADDZL 0,0; STA 0,-4,3; RET
    let out = decompile("0x28");
    assert!(out.contains("return a0 << 2 |"), "{out}");
}

#[test]
fn nova3_frame_call() {
    // SAV; JSR 020; MFFP 3; STA 0,-4,3; RET
    let out = decompile("0x38");
    assert!(out.contains("return sub_10(a0,a1);"), "{out}");
}
