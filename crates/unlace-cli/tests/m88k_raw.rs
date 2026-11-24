//! The Motorola 88000 language (written from the MC88100 manual) decompiles a
//! hand-assembled raw image of four routines.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/m88k/funcs.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "88000:BE:32:default",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("baddata"), "{stdout}");
    stdout
}

#[test]
fn m88k_register_add() {
    // addu r2,r2,r3; jmp r1
    let out = decompile("0x1000");
    assert!(out.contains("return a0 + a1;"), "{out}");
}

#[test]
fn m88k_cmp_bit_vector_max() {
    // cmp r4,r2,r3; bb1 ge,r4,1f; or r2,r0,r3; 1: jmp r1
    let out = decompile("0x1010");
    assert!(out.contains("if (a0 < a1)"), "{out}");
}

#[test]
fn m88k_high_low_absolute_load() {
    // or.u r5,r0,0x1234; ld r2,r5,0x5678; jmp r1
    let out = decompile("0x1020");
    assert!(out.contains("return dat_12345678;"), "{out}");
}

#[test]
fn m88k_bsr_delay_slot_call() {
    // bsr.n 0x1000 with "or r3,r0,7" in its delay slot
    let out = decompile("0x1030");
    assert!(out.contains("sub_1000(a0,7);"), "{out}");
}
