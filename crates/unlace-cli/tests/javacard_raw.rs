//! The Java Card 3.1 bytecode language decompiles hand-assembled method bodies from a raw
//! image: 16-bit stack words and locals, int pairs, array and field user-ops.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/javacard")
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
        "JavaCard:BE:16:3.1",
        "--base",
        "0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `static short sum(short[] a, short n) { short s = 0; for (short i = 0; i < n; i++) s += a[i];
/// return s; }` hand-assembled: sconst_0, sstore_2, sconst_0, sstore_3, sload_3, sload_1,
/// if_scmpge +13, sload_2, aload_0, sload_3, saload, sadd, sstore_2, sinc 3 1, goto -13,
/// sload_2, sreturn.
#[test]
fn javacard_short_loop_decompiles() {
    let out = decompile("sum.bin");
    assert!(
        out.contains("short sub_0(unsigned short a0,short a1)"),
        "{out}"
    );
    assert!(out.contains("v1 += jc_array_load(a0,v2);"), "{out}");
    assert!(out.contains("v2 += 1;"), "{out}");
    assert!(out.contains("return v1;"), "{out}");
}

/// `int f(short x) { return x * 1000 + this.f0; }`: sload_1, s2i, sipush 1000, imul,
/// getfield_i_this 0, iadd, ireturn.
#[test]
fn javacard_int_field_decompiles() {
    let out = decompile("field.bin");
    assert!(
        out.contains("return a1 * 1000 + jc_getfield(a0,0);"),
        "{out}"
    );
}

/// Every opcode that neither branches nor returns, in order with its operands, then
/// impdep1, impdep2 and return.
#[test]
fn javacard_all_straight_line_opcodes_decode() {
    decompile("coverage.bin");
}
