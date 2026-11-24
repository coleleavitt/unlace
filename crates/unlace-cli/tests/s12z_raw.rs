//! The NXP S12Z language decompiles a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn s12z_add_compare_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/s12z/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "S12Z:BE:24:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        stdout.contains("if (a0 + 3U <= 0xf) {"),
        "the ADD / CMP / BCC test survives: {stdout}"
    );
    assert!(
        stdout.contains("dat_8000 = a0 + 3U;"),
        "the store to 0x8000: {stdout}"
    );
    assert!(stdout.contains("return 5;"), "the taken path: {stdout}");
    assert!(stdout.contains("return 0;"), "the fall-back path: {stdout}");
}
