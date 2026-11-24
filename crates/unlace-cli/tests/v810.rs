//! The V810 language loads a raw image and decompiles it.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/v810")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x7000000",
        "--raw-image",
        "--target",
        "V810:LE:32:default",
        "--base",
        "0x7000000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// A `ld.w`/`add`/`bne` loop summing r7 words at r6, then `movhi` + `st.w` to 0x05000010.
#[test]
fn v810_sum_loop_and_store_decompile() {
    let out = decompile("sum_store.bin");
    assert!(out.contains("v1 += *a0++;"), "{out}");
    assert!(out.contains("} while (a1);"), "{out}");
    assert!(out.contains("dat_5000010 = v1;"), "{out}");
}

/// `mul r7,r6; mov r6,r10; jmp [lp]` returns the product in r10.
#[test]
fn v810_mul_return_decompiles() {
    let out = decompile("mul_ret.bin");
    assert!(out.contains("return a0 * a1;"), "{out}");
}
