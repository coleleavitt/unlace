//! The native Intel 4004 language decompiles a raw image: a 4-bit add with carry
//! stored through the SRC latch into 4002 RAM.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn i4004_add_and_ram_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/i4004/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "4004:LE:16:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(
        stdout.contains("dat_12 = 3;"),
        "the RAM store folds to bank 0, address 0x12: {stdout}"
    );
    assert!(
        stdout.contains("return 0;"),
        "BBL 0 returns 0 in A: {stdout}"
    );
}
