//! The Solana sBPF languages decompile clang-built (v1) and hand-assembled (v2) code from a
//! raw image, with `syscall` targets named by their murmur3 hash.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str, addr: &str, target: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/sbpf")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        addr,
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

/// `clang --target=bpfel -mcpu=v1 -O2`: `for (i = 0; i < n; i++) s += p[i] * 3;`.
#[test]
fn sbpf_v1_loop_decompiles() {
    let out = decompile("v1_text.bin", "0x1000", "sBPF:LE:64:v1");
    assert!(out.contains("for (v2 = 0; v2 < a1; v2 = v2 + 1)"), "{out}");
    assert!(out.contains("v1 = *a0++ * 3 + v1;"), "{out}");
    assert!(out.contains("return v1;"), "{out}");
}

/// The same object's second function, with its `call` linked as a `sol_log_` syscall
/// (src 0, imm murmur3("sol_log_") = 0x207559bd) and `lddw` pointing into rodata.
#[test]
fn sbpf_v1_syscall_is_named() {
    let out = decompile("v1_text.bin", "0x1060", "sBPF:LE:64:v1");
    assert!(out.contains("sol_log_(0x100000200,6);"), "{out}");
    assert!(out.contains("a0->field_0x0 = a1;"), "{out}");
}

/// SBPFv2 opcodes: `ldxdw` 0x9c, `udiv64` 0x56, `lmul64` 0x9e, `stxdw` 0x9f.
#[test]
fn sbpf_v2_pqr_and_moved_memory_ops_decompile() {
    let out = decompile("v2_pqr.bin", "0x1000", "sBPF:LE:64:v2");
    assert!(
        out.contains("a0->field_0x8 = (a0->field_0x0 / 10) * a1;"),
        "{out}"
    );
}
