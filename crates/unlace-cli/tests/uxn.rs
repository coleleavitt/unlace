//! The Uxn language loads a raw ROM image at 0x100 and decompiles a reset vector.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/uxn")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x100",
        "--raw-image",
        "--target",
        "Uxn:BE:16:default",
        "--base",
        "0x100",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `#05 #03 ADD #10 STZ BRK`: the working stack folds away.
#[test]
fn uxn_add_and_zero_page_store_decompiles() {
    let out = decompile("add_stz.bin");
    assert!(out.contains("dat_10 = 8;"), "{out}");
}

/// A `DUP .. STZ INC DUP #0a NEQ ?loop` counting loop, then a short `STZ2`.
#[test]
fn uxn_jci_loop_and_short_store_decompile() {
    let out = decompile("loop.bin");
    assert!(out.contains("do {"), "{out}");
    assert!(out.contains("dat_10 = v1;"), "{out}");
    assert!(out.contains("while (v1 != '\\n');"), "{out}");
    assert!(out.contains("dat_20 = 0x1234;"), "{out}");
}
