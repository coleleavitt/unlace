//! The vendored M6800-family languages (MC6800, MC6801, HD6301, MC68HC11) load
//! raw images and decompile; before, none of them existed.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/m6800")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

fn decompile(bin: &str, target: &str) -> String {
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &fixture(bin),
        "0x8000",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x8000",
    ]);
    assert_eq!(code, 0, "{bin} as {target}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

#[test]
fn mc6800_add_and_store_decompiles() {
    let out = decompile("mc6800.bin", "MC6800:BE:16:default");
    assert!(out.contains("12"), "the store to $12 survives: {out}");
}

#[test]
fn hd6301_memory_immediate_operations_decompile() {
    decompile("hd6301.bin", "HD6301:BE:16:default");
}

#[test]
fn mc68hc11_y_indexed_code_decompiles() {
    decompile("mc68hc11.bin", "MC68HC11:BE:16:default");
}
