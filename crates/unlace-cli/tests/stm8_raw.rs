//! The vendored STM8 languages load a raw image and decompile it.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn stm8_add_and_store_decompiles_in_both_memory_models() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/stm8/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    for target in ["STM8:BE:16:default", "STM8:BE:24:default"] {
        let (stdout, stderr, code) = run_kuna(&[
            "decompile",
            &bin,
            "0x8000",
            "--raw-image",
            "--target",
            target,
            "--base",
            "0x8000",
        ]);
        assert_eq!(code, 0, "{target}: {stderr}");
        let lower = stdout.to_lowercase();
        assert!(!lower.contains("unimplemented"), "{target}: {stdout}");
        assert!(!lower.contains("bad instruction"), "{target}: {stdout}");
        assert!(
            lower.contains("10"),
            "{target}: the store to $10 survives: {stdout}"
        );
    }
}
