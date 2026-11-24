//! The EVM language decompiles hand-assembled bytecode from a raw image: stack slots fold
//! into values, `PUSH`+`JUMPI` becomes a branch, and a `PUSH32` decodes across its
//! `PUSHDATA` continuations.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(addr: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/evm/branch_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        addr,
        "--raw-image",
        "--target",
        "EVM:BE:32:Cancun",
        "--base",
        "0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `x = calldataload(4) * 3; if (100 < x) { mstore(0, x); return(0, 32) } sstore(0, x); stop`.
#[test]
fn evm_branch_and_store_decompile() {
    let out = decompile("0x0");
    assert!(out.contains("v1 = dat_4 * 3;"), "{out}");
    assert!(out.contains("if (100 < v1) {"), "{out}");
    assert!(out.contains("sstore(0,v1);"), "{out}");
    assert!(out.contains("evm_return(0,0x20);"), "{out}");
}

/// `PUSH32 0x0102..20; PUSH1 0; SSTORE; STOP`: the head and two continuations decode,
/// and the 256-bit value prints as one literal (option `wideconst`).
#[test]
fn evm_push32_continuations_decode() {
    let out = decompile("0x40");
    assert!(
        out.contains(
            "sstore(0,0x102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f20);"
        ),
        "{out}"
    );
}
