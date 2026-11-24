//! The native Blackfin language decompiles a raw image: a zero-overhead
//! hardware loop (LSETUP) becomes a loop, and a CALL with register arguments
//! and a multi-issue bundle decompiles to a call.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/blackfin/sum_loop.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "Blackfin:LE:32:default",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    stdout
}

#[test]
fn blackfin_hardware_loop_decompiles() {
    let out = decompile("0x1000");
    assert!(out.contains("do {"), "the LSETUP loop is recovered: {out}");
    assert!(out.contains("+= "), "the loop accumulates: {out}");
}

#[test]
fn blackfin_call_with_register_arguments_decompiles() {
    let out = decompile("0x1010");
    assert!(out.contains("sub_1000(5,7) + 1"), "R0/R1 arguments and the R0 result: {out}");
}
