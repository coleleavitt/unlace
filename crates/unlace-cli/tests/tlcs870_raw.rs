//! The TLCS-870 language decompiles a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn tlcs870_add_compare_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/tlcs870/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0xe000",
        "--raw-image",
        "--target",
        "TLCS870:LE:16:default",
        "--base",
        "0xe000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        stdout.contains("if ((char)(a0 + '\\x05') == '\\x10') {"),
        "the ADD / CMP / JR NE test survives: {stdout}"
    );
    assert!(
        stdout.contains("dat_80 = a0 + '\\x05';"),
        "the store to (0x80): {stdout}"
    );
    assert!(stdout.contains("return 0x10;"), "the taken path: {stdout}");
    assert!(stdout.contains("return 0;"), "the fall-back path: {stdout}");
}
