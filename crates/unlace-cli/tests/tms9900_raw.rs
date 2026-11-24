//! The native TMS9900 language decompiles a raw image: a DEC/JNE loop, a store
//! through *R2, and a symbolic-to-symbolic MOV with two extension words.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn tms9900_sum_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/tms9900/sum_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x100",
        "--raw-image",
        "--target",
        "TMS9900:BE:16:default",
        "--base",
        "0x100",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(!lower.contains("halt_baddata"), "{stdout}");
    assert!(
        stdout.contains("do {"),
        "the JNE loop is recovered: {stdout}"
    );
    assert!(
        stdout.contains("dat_1000 = "),
        "MOV R3,*R2 stores to 0x1000: {stdout}"
    );
    assert!(
        stdout.contains("dat_3000 = dat_2000;"),
        "both extension words decode: {stdout}"
    );
}
