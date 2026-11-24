//! The native Signetics 2650 language decompiles a raw image: a BDRR
//! decrement-and-branch loop summing into R0, then an absolute store.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn s2650_sum_loop_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/s2650/sum_loop.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "2650:BE:16:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(
        stdout.contains("do {"),
        "the BDRR loop is recovered: {stdout}"
    );
    assert!(
        stdout.contains("dat_1000 = "),
        "the absolute store survives: {stdout}"
    );
}
