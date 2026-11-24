//! The native RCA CDP1802 language (SCRT variant) decompiles a raw image: a
//! store-increment loop through R1 closed by BNZ, returning with SEP R5.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn cdp1802_fill_loop_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/cdp1802/fill_loop.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "CDP1802:BE:16:SCRT",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(stdout.contains("(char *)0x1000"), "R1 is built from PHI/PLO: {stdout}");
    assert!(stdout.contains("do {"), "the BNZ loop is recovered: {stdout}");
}
