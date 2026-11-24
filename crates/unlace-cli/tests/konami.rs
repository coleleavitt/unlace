//! The KONAMI CPU language loads a raw image and decompiles it.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/konami")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x8000",
        "--raw-image",
        "--target",
        "KONAMI:BE:16:default",
        "--base",
        "0x8000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `LDX #$4000; LDA #5; ADDA ,X; STA $2000; LDB #10; INC 1,X; DBJNZ`: indexed and
/// extended postbytes, and the decrement-B-and-branch loop.
#[test]
fn konami_add_store_and_dbjnz_loop_decompile() {
    let out = decompile("add_store_loop.bin");
    assert!(out.contains("dat_2000 = dat_4000 + '\\x05';"), "{out}");
    assert!(out.contains("do {"), "{out}");
    assert!(out.contains("dat_4001 += '\\x01';"), "{out}");
}

/// `PUSHS U; LDD #$1234; ADDD ,X; STD $3000; PULLS U,PC`: a PULLS with PC returns.
#[test]
fn konami_push_pull_pc_returns() {
    let out = decompile("push_add_pull.bin");
    assert!(out.contains("dat_3000 = *a0 + 0x1234;"), "{out}");
}
