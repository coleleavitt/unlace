//! The clean-room Toshiba TLCS-90 language loads a raw image and decompiles it.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn tlcs90_add_store_compare_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/tlcs90/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x1000",
        "--raw-image",
        "--target",
        "TLCS90:LE:16:default",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(lower.contains("8000"), "the store to 8000 survives: {stdout}");
    assert!(stdout.contains("return 5"), "{stdout}");
    assert!(stdout.contains("return 0"), "{stdout}");
}
