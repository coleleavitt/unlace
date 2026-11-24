//! The Imagination META language decompiles a GNU as-assembled raw image: a counted loop
//! over a pointer with post-increment loads, and a caller that saves registers with MSETL,
//! calls through CALLR and builds a 32-bit constant from MOVT and ADD.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/meta/sum_call.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "META:LE:32:default",
        "--base",
        "0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `sum`: D1Ar1 counts down, GETD D0Ar6,[D0Ar2++] walks the array, MOV PC,D1RtP returns.
#[test]
fn meta_counted_loop_decompiles() {
    let out = decompile("0x0");
    assert!(out.contains("int sub_0(int a0,int *a1)"), "{out}");
    assert!(out.contains("while (0 < a0) {"), "{out}");
    assert!(out.contains("v1 += *a1;"), "{out}");
    assert!(out.contains("return v1;"), "{out}");
}

/// `callit`: CALLR D1RtP links the call, MOVT+ADD fold into 0x12345678, SETD [A1GbP+#8].
#[test]
fn meta_call_and_constant_decompile() {
    let out = decompile("0x24");
    assert!(out.contains("v1 = sub_0();"), "{out}");
    assert!(out.contains("(v2 + 8) = 0x12345678;"), "{out}");
    assert!(out.contains("return v1 + a0;"), "{out}");
}
