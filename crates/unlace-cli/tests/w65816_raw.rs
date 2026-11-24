//! The vendored 65816 language loads a raw image and decompiles it with a
//! 16-bit accumulator.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn w65816_sixteen_bit_add_and_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/w65816/add16_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x8000",
        "--raw-image",
        "--target",
        "65816:LE:16:default",
        "--base",
        "0x8000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        lower.contains("2000"),
        "the store to $2000 survives: {stdout}"
    );
}
