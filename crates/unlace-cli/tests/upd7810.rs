//! The uPD7810 language loads a raw image and decompiles it, including the skip
//! instructions, which branch over the next instruction.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/upd7810")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x4000",
        "--raw-image",
        "--target",
        "uPD7810:LE:16:default",
        "--base",
        "0x4000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `LXI HL,0x8000; MVI C,9; MVI A,0; loop: ADDX (HL+); DCR C; JR loop; MOV (0x9000),A; RET`:
/// DCR skips the JR once C wraps.
#[test]
fn upd7810_dcr_skip_loop_decompiles() {
    let out = decompile("sum_loop.bin");
    assert!(out.contains("do {"), "{out}");
    assert!(out.contains("+= *v5++;"), "{out}");
    assert!(out.contains("dat_9000 = v3;"), "{out}");
}

/// `MOV A,PA; ONI A,1; JR -; MOV PB,A; CALF 0x834; RET`: a port poll through the
/// special-function-register space and a CALF call.
#[test]
fn upd7810_port_poll_and_calf_decompile() {
    let out = decompile("port_poll.bin");
    assert!(out.contains("while (!(PA & 1)) {"), "{out}");
    assert!(out.contains("PB = "), "{out}");
    assert!(out.contains("sub_834();"), "{out}");
}
