//! The native TILE-Gx language decompiles a raw image of hand-assembled bundles:
//! a counted loop, a call with register arguments, a conditional move, a register
//! swap inside one bundle (parallel reads) and a bit-field extract.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/tilegx/bundles.bin")
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
        "TILEGX:LE:64:default",
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
fn tilegx_counted_loop_decompiles() {
    let out = decompile("0x0");
    assert!(out.contains("while"), "the load loop is recovered: {out}");
    assert!(out.contains("+= *"), "the loop accumulates loads: {out}");
}

#[test]
fn tilegx_call_with_register_arguments_decompiles() {
    let out = decompile("0x30");
    assert!(
        out.contains("sub_0(5,7) + 1"),
        "r0/r1 arguments and the r0 result: {out}"
    );
}

#[test]
fn tilegx_bundle_reads_before_it_writes() {
    let out = decompile("0x70");
    assert!(
        out.contains("return a1 - a0;"),
        "the in-bundle swap reads old values: {out}"
    );
}

#[test]
fn tilegx_conditional_move_decompiles() {
    let out = decompile("0x60");
    assert!(out.contains("a0 < a1"), "cmpltu feeds cmovnez: {out}");
}
