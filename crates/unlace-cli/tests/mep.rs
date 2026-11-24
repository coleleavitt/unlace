//! The MeP languages (big- and little-endian MeP-c4 core) load a raw image at 0x1000 and
//! decompile it.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str, target: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/mep")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x1000",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `mov $0,0; beqz $1,.done; add3 $0,$0,$1; add $1,-1; bra .loop; ret` in both byte orders.
#[test]
fn mep_sum_loop_decompiles() {
    for (fixture, target) in [
        ("sum_loop_be.bin", "MeP:BE:32:default"),
        ("sum_loop_le.bin", "MeP:LE:32:default"),
    ] {
        let out = decompile(fixture, target);
        assert!(out.contains("int sub_1000(int a0)"), "{target}:\n{out}");
        assert!(out.contains("v1 += a0;"), "{target}:\n{out}");
        assert!(out.contains("return v1;"), "{target}:\n{out}");
    }
}

/// `movh`/`or3` build 0x12345678, `sw`/`lw` with 16-bit displacements, `add3`, `sll`.
#[test]
fn mep_displacement_loads_and_stores_decompile() {
    let out = decompile("store_be.bin", "MeP:BE:32:default");
    assert!(
        out.contains("((unsigned int *)a0)[1] = 0x12345678;"),
        "{out}"
    );
    assert!(out.contains("return (((int *)a0)[2] + a1) * 4;"), "{out}");
}

/// A frame that saves `$lp` through `ldc`/`sw`, calls with the 24-bit `bsr` and returns
/// the callee's `$0` plus one.
#[test]
fn mep_bsr24_call_decompiles() {
    let out = decompile("call_be.bin", "MeP:BE:32:default");
    assert!(out.contains("return sub_1020(5) + 1;"), "{out}");
}

/// `lbu $3,5($tp)`, `blti` over a clamp, then `mul` and `ldc $0,$lo`.
#[test]
fn mep_tp_load_branch_and_multiply_decompile() {
    let out = decompile("clamp_mul_be.bin", "MeP:BE:32:default");
    assert!(out.contains("v1 = *(unsigned char *)(v2 + 5);"), "{out}");
    assert!(out.contains("if (10 <= v1)"), "{out}");
    assert!(out.contains("return (unsigned int)v1 * a0;"), "{out}");
}
