//! The V8 Ignition (V8 13.6, Node.js 24) language decompiles bytecode arrays printed by
//! `node --print-bytecode` for `fixtures/v8ignition/source.js`: the accumulator and frame
//! registers fold into expressions over user-ops, and Wide operands decode.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/v8ignition")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "V8Ignition:LE:32:13.6",
        "--base",
        "0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `f`: a counted for loop with a break (TestLessThan, JumpIfFalse, JumpLoop, Inc).
#[test]
fn ignition_loop_decompiles() {
    let out = decompile("loop.bin");
    assert!(out.contains("v2 = js_add(v2,js_mul(v1,a2));"), "{out}");
    assert!(out.contains("v1 = js_inc(v1);"), "{out}");
    assert!(out.contains("return v2;"), "{out}");
}

/// `g`: named and keyed property loads and a CallProperty2 method call.
#[test]
fn ignition_properties_decompile() {
    let out = decompile("props.bin");
    assert!(out.contains("v1 = js_getprop(a1,js_const(0));"), "{out}");
    assert!(
        out.contains("return js_add(v1,js_call(js_getprop(a1,js_const(2)),a1,1,2));"),
        "{out}"
    );
}

/// `w`: AddSmi and MulSmi with Wide-prefixed 16- and 32-bit immediates.
#[test]
fn ignition_wide_operands_decode() {
    let out = decompile("wide.bin");
    assert!(
        out.contains("return js_mul(js_add(a1,300),100000);"),
        "{out}"
    );
}
