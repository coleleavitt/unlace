//! The VAX language loads a raw image and decompiles it.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(fixture: &str, func: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/vax")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        func,
        "--raw-image",
        "--target",
        "VAX:LE:32:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `pushl #3; pushl #5; calls #2, sub` and a procedure (entry mask, `addl3 4(ap), 8(ap), r0`, `ret`).
#[test]
fn vax_calls_procedure_decompiles() {
    let caller = decompile("calls.bin", "0x0");
    assert!(caller.contains("sub_20(5,3);"), "{caller}");
    let callee = decompile("calls.bin", "0x20");
    assert!(callee.contains("return a1 + a0;"), "{callee}");
}

/// An `addl2 (r1)+, r0` / `sobgtr` loop summing longwords, then an absolute store.
#[test]
fn vax_sum_loop_and_store_decompile() {
    let out = decompile("sum_store.bin", "0x0");
    assert!(out.contains("v1 += *a0;"), "{out}");
    assert!(out.contains("} while (0 < a1);"), "{out}");
    assert!(out.contains("dat_200010 = v1;"), "{out}");
}

/// `extzv #4, #8, 4(sp), r0` extracts a byte-wide field.
#[test]
fn vax_extzv_decompiles() {
    let out = decompile("extzv.bin", "0x0");
    assert!(out.contains("return a0 >> 4 & 0xff;"), "{out}");
}
