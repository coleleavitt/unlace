//! The Moxie language decompiles a compare-and-branch routine built with moxie-elf-as.
use crate::common;
use common::{run_kuna, scratch_file};

#[test]
fn moxie_compare_branch_decompiles() {
    let bin = scratch_file("moxie_compare_branch_decompiles", "bin");
    std::fs::write(
        &bin,
        [
            0x0e, 0x23, 0xd8, 0x03, 0x29, 0x32, 0x02, 0x23, 0x04, 0x00, 0x29, 0x23,
            0x04, 0x00,
        ],
    )
    .unwrap();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        bin.to_str().unwrap(),
        "0x1000",
        "--raw-image",
        "--target",
        "moxie:BE:32:default",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(stdout.contains("if (a0 < a1)"), "{stdout}");
    assert!(stdout.contains("return a1 - a0;"), "{stdout}");
    assert!(stdout.contains("return a0 - a1;"), "{stdout}");
}
