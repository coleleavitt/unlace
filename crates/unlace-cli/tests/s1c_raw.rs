//! The Epson S1C17 and S1C33 languages load little-endian raw images of two
//! hand-assembled functions each (a compare-and-branch leaf whose constant needs
//! the `ext` prefix, and a caller that loads through an `ext` displacement and
//! fills a delayed call's slot) and decompile both.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(fixture: &str, target: &str, addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/s1c")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        target,
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
fn s1c17_ext_extended_compare_decompiles() {
    let out = decompile("s1c17_clamp_call.bin", "S1C17:LE:24:default", "0x0");
    assert!(out.contains("a0 + a1 <= 100"), "{out}");
    assert!(out.contains("return 100;"), "{out}");
}

#[test]
fn s1c17_delayed_call_with_ext_displacement_decompiles() {
    let out = decompile("s1c17_clamp_call.bin", "S1C17:LE:24:default", "0x10");
    assert!(out.contains("[1]"), "{out}");
    assert!(out.contains("sub_0(v1,5) ^ 3"), "{out}");
}

#[test]
fn s1c33_ext_extended_add_decompiles() {
    let out = decompile("s1c33_max_call.bin", "S1C33:LE:32:default", "0x0");
    assert!(out.contains("if (a0 < a1)"), "{out}");
    assert!(out.contains("return a0 + 1000;"), "{out}");
}

#[test]
fn s1c33_delayed_call_with_ext_displacement_decompiles() {
    let out = decompile("s1c33_max_call.bin", "S1C33:LE:32:default", "0x10");
    assert!(out.contains("[2]"), "{out}");
    assert!(out.contains("sub_0(v1,3) ^ 0x55"), "{out}");
}
