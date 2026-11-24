//! The vendored TMS320C28x language loads a word-addressed raw image and
//! decompiles it.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn c28x_add_immediate_and_return_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/c28x/addb_lret.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x8000",
        "--raw-image",
        "--target",
        "tms320c28:LE:32:default",
        "--base",
        "0x8000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
}
