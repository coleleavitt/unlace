//! The Zilog Z380 language decompiles a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn z380_add_compare_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/z380/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x100",
        "--raw-image",
        "--target",
        "Z380:LE:32:default",
        "--base",
        "0x100",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        stdout.contains("if (0x10 <= (unsigned char)(dat_8000 + 5U))"),
        "the ADD / CP / JR C test survives: {stdout}"
    );
    assert!(
        stdout.contains("dat_8001 = dat_8000 + 5U;"),
        "the store to 0x8001: {stdout}"
    );
    assert!(stdout.contains("return;"), "{stdout}");
}
