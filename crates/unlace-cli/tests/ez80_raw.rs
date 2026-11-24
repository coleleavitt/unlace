//! The eZ80 ADL-mode language decompiles a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

#[test]
fn ez80_adl_add_compare_store_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/ez80/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
        "decompile",
        &bin,
        "0x0",
        "--raw-image",
        "--target",
        "eZ80:LE:24:ADL",
        "--base",
        "0x0",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        stdout.contains("if ((unsigned char)(dat_c000 + 3U) <= 0xf) {"),
        "the CP / JR NC test survives: {stdout}"
    );
    assert!(
        stdout.contains("dat_8000 = dat_c000 + 3U;"),
        "the store to 0x8000: {stdout}"
    );
    assert!(stdout.contains("return 5;"), "the taken path: {stdout}");
    assert!(stdout.contains("return 0;"), "the fall-back path: {stdout}");
}
