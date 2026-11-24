//! The native National SC/MP language decompiles a raw image: an auto-indexed
//! store loop through P1, closed by JNZ with the pre-incremented PC.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn scmp_fill_loop_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/scmp/fill_loop.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "SCMP:LE:16:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(
        stdout.contains("(char *)0x1000"),
        "P1 is built with XPAH/XPAL: {stdout}"
    );
    assert!(
        stdout.contains("do {"),
        "the JNZ loop is recovered: {stdout}"
    );
    assert!(
        stdout.contains("0xfff"),
        "the pointer wraps in its 4 KiB page: {stdout}"
    );
}
