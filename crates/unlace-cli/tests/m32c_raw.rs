//! The M32C/80 language loads a little-endian raw image of two functions built
//! with `m32c-elf-as` (`fixtures/m32c/mul_div.s`) that use the M32C-only
//! `MUL.L`, `SHANC.L` and `DIVU.L`, and decompiles both.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/m32c/mul_div.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "M32C/80:LE:24:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    stdout
}

#[test]
fn m32c_mul_l_and_shanc_decompile() {
    let out = decompile("0x0");
    assert!(out.contains("a1 * 1000 >> 2"), "{out}");
}

#[test]
fn m32c_divu_l_decompiles() {
    let out = decompile("0x20");
    assert!(out.contains("return a1 / a2;"), "{out}");
}
