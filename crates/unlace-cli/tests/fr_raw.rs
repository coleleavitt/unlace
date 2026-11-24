//! The Fujitsu FR language loads a big-endian raw image of two hand-assembled
//! functions that use delay slots (`ble:d`, `ret:d`, `call:d`) and decompiles
//! both.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/fr/delay_call.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "FR:BE:32:default",
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
fn fr_delay_slot_branches_decompile() {
    let out = decompile("0x0");
    assert!(out.contains("if (a1 < a0)"), "{out}");
    assert!(out.contains("return a0 - a1;"), "{out}");
    assert!(out.contains("return a0 + a1 * 4;"), "{out}");
}

#[test]
fn fr_delayed_call_passes_its_slot_argument() {
    let out = decompile("0x12");
    assert!(out.contains("sub_0("), "{out}");
    assert!(out.contains(",7)"), "{out}");
    assert!(out.contains("+ 1"), "{out}");
}
