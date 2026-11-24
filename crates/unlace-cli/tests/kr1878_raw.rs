//! The KR1878VE1 language decompiles a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn kr1878_add_compare_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/kr1878/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "KR1878:LE:16:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        stdout.contains("dat_40 = dat_41 + 8"),
        "window A at 0x40 folds the add: {stdout}"
    );
    assert!(
        stdout.contains("0x10 <= "),
        "the borrow test survives: {stdout}"
    );
    assert!(stdout.contains("dat_42 = 7"), "the store to 0x42: {stdout}");
}
