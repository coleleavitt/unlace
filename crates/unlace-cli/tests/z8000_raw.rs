//! The Zilog Z8002 language decompiles a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn z8002_add_compare_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/z8000/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x1000",
        "--raw-image",
        "--target",
        "Z8002:BE:16:default",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        stdout.contains("if (0x65 <= a0 + a1)"),
        "the ADD / CP / JR LE test survives: {stdout}"
    );
    assert!(
        stdout.contains("dat_2000 = a0 + a1;"),
        "the store to 0x2000: {stdout}"
    );
    assert!(stdout.contains("return;"), "the returns: {stdout}");
}
