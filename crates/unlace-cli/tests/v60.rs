//! The V60 language loads a raw image and decompiles it.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(fixture: &str, func: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/v60")
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
        "V60:LE:32:default",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `mov.w 4[SP], R0; mul.w 8[SP], R0; rsr` multiplies the two stack arguments.
#[test]
fn v60_mul_return_decompiles() {
    let out = decompile("mul_ret.bin", "0x0");
    assert!(out.contains("return a0 * a1;"), "{out}");
}

/// An `add.w [R1+], R0` / `dbr R2` loop summing words, then a direct-address store.
#[test]
fn v60_sum_loop_and_store_decompile() {
    let out = decompile("sum_store.bin", "0x0");
    assert!(out.contains("v1 += *a0;"), "{out}");
    assert!(out.contains("} while (a1);"), "{out}");
    assert!(out.contains("dat_200010 = v1;"), "{out}");
}

/// `push`/`bsr` passes two stack arguments to a `prepare`/`pushm`/`popm`/`dispose`/`rsr`
/// frame that reads them through FP.
#[test]
fn v60_frame_and_call_decompile() {
    let caller = decompile("frame_call.bin", "0x0");
    assert!(caller.contains("sub_20(5,3);"), "{caller}");
    let callee = decompile("frame_call.bin", "0x20");
    assert!(callee.contains("return a0 + a1;"), "{callee}");
}
