//! The PDP-11 language (written from the DEC handbooks) decompiles a
//! hand-assembled raw image: add(a, b) at 0x1000 and max(a, b) at 0x1010.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/pdp11/add_max.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "PDP-11:LE:16:default",
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
fn pdp11_stack_arguments_add() {
    // MOV 2(SP),R0; ADD 4(SP),R0; RTS PC
    let out = decompile("0x1000");
    assert!(out.contains("return a0 + a1;"), "{out}");
}

#[test]
fn pdp11_signed_max() {
    // MOV 2(SP),R0; CMP R0,4(SP); BGE 1f; MOV 4(SP),R0; 1: RTS PC
    let out = decompile("0x1010");
    assert!(out.contains("if (a0 < a1)"), "{out}");
}
