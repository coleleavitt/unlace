//! The FT32 language decompiles a compare-and-branch routine and a caller built with ft32-elf-as.
use crate::common;
use common::{run_kuna, scratch_file};

#[test]
fn ft32_compare_branch_and_call_decompile() {
    let bin = scratch_file("ft32_compare_branch_and_call_decompile", "bin");
    std::fs::write(
        &bin,
        [
            0x12, 0x00, 0xe0, 0x5d, 0x04, 0x00, 0x28, 0x01, 0x02, 0x80, 0x00, 0x44,
            0x00, 0x00, 0x00, 0xa0, 0x12, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0xa0,
            0x00, 0x80, 0x06, 0x84, 0x00, 0x40, 0xd0, 0x44, 0x0a, 0x00, 0x10, 0x64,
            0x00, 0x00, 0x34, 0x00, 0x08, 0x80, 0x16, 0xac, 0x10, 0x00, 0x00, 0x44,
            0xd0, 0x00, 0x00, 0x44, 0x0d, 0x50, 0x00, 0x44, 0x00, 0x00, 0xd0, 0x8c,
            0x00, 0x00, 0x00, 0xa0,
        ],
    )
    .unwrap();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        bin.to_str().unwrap(),
        "0x0",
        "--raw-image",
        "--target",
        "ft32:LE:32:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(stdout.contains("if (a0 < a1)"), "{stdout}");
    assert!(stdout.contains("return a1 - a0;"), "{stdout}");
    assert!(stdout.contains("return a0 - a1;"), "{stdout}");
}
