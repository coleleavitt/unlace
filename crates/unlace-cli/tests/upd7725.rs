//! The uPD7725 / uPD96050 languages load a raw program ROM (24-bit words as three
//! little-endian bytes) and decompile it.
use crate::common;
use common::{repo_root, run_unlace};

fn decompile(fixture: &str, target: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/upd7725")
        .join(fixture)
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    stdout
}

/// `ld #0x10,@dp; ld #5,@a; ld #3,@b; op mov b,@non | add idb,a; rt mov a,@mem`
/// stores the folded sum in data RAM word 0x10 (byte address 0x20).
#[test]
fn upd7725_add_and_store_decompiles() {
    for target in ["uPD7725:LE:16:default", "uPD96050:LE:16:default"] {
        let out = decompile("add_store.bin", target);
        assert!(out.contains("dat_20 = 8;"), "{target}:\n{out}");
    }
}

/// A `dec a` / `jnza` loop counting `b` up, then `b` stored to RAM word 0x20.
#[test]
fn upd7725_zero_flag_loop_decompiles() {
    let out = decompile("count_loop.bin", "uPD7725:LE:16:default");
    assert!(out.contains("do {"), "{out}");
    assert!(out.contains("} while (v1);"), "{out}");
    assert!(out.contains("dat_40 = v2;"), "{out}");
}
