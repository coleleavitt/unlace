//! The native TMS320C3x language decompiles a raw image: an indirect
//! post-increment load in a DBU loop, direct stores through DP, and a
//! three-operand ADDI3.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn tms320c3x_sum_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/tms320c3x/sum_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x100",
        "--raw-image",
        "--target",
        "TMS320C3x:LE:32:default",
        "--base",
        "0x100",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(
        stdout.contains("do {"),
        "the DBU loop is recovered: {stdout}"
    );
    assert!(stdout.contains("+= *"), "ADDI reads *AR1++: {stdout}");
    assert!(
        stdout.contains("(int *)0x200"),
        "AR1 starts at the array: {stdout}"
    );
    assert!(
        stdout.contains("* 2;"),
        "ADDI3 R0,R0,R1 doubles the sum: {stdout}"
    );
}
