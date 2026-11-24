//! The SAM8 and SAM88RCRI languages decompile a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(target: &str, entry: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/sam8/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        entry,
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x100",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

#[test]
fn sam8_add_compare_store_decompiles() {
    let stdout = decompile("SAM8:BE:16:default", "0x100");
    assert!(
        stdout.contains("dat_c0 = dat_30 + 5"),
        "SRP #C0 puts R0 at C0h and the add folds: {stdout}"
    );
    assert!(stdout.contains("10 <= dat_c0"), "the borrow test survives: {stdout}");
    assert!(stdout.contains("dat_41 = 7"), "the store to 41h: {stdout}");
}

#[test]
fn sam88rcri_fixed_working_registers_decompile() {
    let stdout = decompile("SAM88RCRI:BE:16:default", "0x102");
    assert!(stdout.contains("dat_c0 = dat_30 + 5"), "R0 is C0h: {stdout}");
    assert!(stdout.contains("dat_40 = dat_c0"), "the store to 40h: {stdout}");
}
