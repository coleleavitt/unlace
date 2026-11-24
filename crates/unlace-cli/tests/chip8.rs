//! The CHIP-8 languages (COSMAC VIP and SUPER-CHIP 1.1) load a raw image at 0x200 and
//! decompile it.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str, target: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/chip8")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x200",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x200",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `LD V0,5; ADD V0,3; LD I,0x300; LD [I],V0; RET` stores the folded sum.
#[test]
fn chip8_store_through_i_decompiles() {
    for target in ["CHIP8:BE:16:VIP", "CHIP8:BE:16:SCHIP"] {
        let out = decompile("store_sum.bin", target);
        assert!(out.contains("dat_300 = 8;"), "{target}:\n{out}");
    }
}

/// A skip-and-jump loop summing 0..9 into V1, then `LD B,V1` storing its decimal digits.
#[test]
fn chip8_skip_loop_and_bcd_decompile() {
    let out = decompile("sum_loop.bin", "CHIP8:BE:16:VIP");
    assert!(out.contains("do {"), "{out}");
    assert!(out.contains("while (v1 != '\\n');"), "{out}");
    assert!(out.contains("dat_300 = v2 / 100;"), "{out}");
    assert!(out.contains("dat_301 = (v2 / 10) % 10;"), "{out}");
    assert!(out.contains("dat_302 = v2 % 10;"), "{out}");
}
