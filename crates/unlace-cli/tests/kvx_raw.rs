//! The native KVX kv3-1 language decompiles a raw image of hand-assembled
//! bundles: a counted loop, a call whose immediate extension syllable sits at the
//! bundle tail, a compare and conditional move, an in-bundle register swap
//! (parallel reads) and a scaled indexed load.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/kvx/bundles.bin")
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
        "KVX:LE:64:kv3-1",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(!lower.contains("invalid_syllable"), "{stdout}");
    stdout
}

#[test]
fn kvx_counted_loop_decompiles() {
    let out = decompile("0x0");
    assert!(out.contains("while"), "the load loop is recovered: {out}");
    assert!(out.contains("+= *"), "the loop accumulates loads: {out}");
}

#[test]
fn kvx_extension_syllable_reaches_its_instruction() {
    let out = decompile("0x24");
    assert!(
        out.contains("sub_0(5,0x123456789) + 100000"),
        "register arguments, the 43-bit immediate and the r0 result: {out}"
    );
}

#[test]
fn kvx_compare_and_conditional_move_decompile() {
    let out = decompile("0x58");
    assert!(out.contains("a0 < a1"), "compd.lt feeds cmoved.dnez: {out}");
}

#[test]
fn kvx_bundle_reads_before_it_writes() {
    let out = decompile("0x64");
    assert!(
        out.contains("return a1 - a0;"),
        "the in-bundle swap reads old values: {out}"
    );
}

#[test]
fn kvx_scaled_index_load_decompiles() {
    let out = decompile("0x74");
    assert!(out.contains("a1 + a0 * 8"), "ld.xs scales the index: {out}");
}
