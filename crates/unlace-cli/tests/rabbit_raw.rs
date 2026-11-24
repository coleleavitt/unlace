//! The Rabbit 2000 and 3000A languages decompile a hand-assembled add/compare/store routine.
use crate::common;
use common::{repo_root, run_kuna};

fn decompile(target: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/rabbit/add_store.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_kuna(&[
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

#[test]
fn rabbit_add_compare_store_decompiles() {
    for target in ["Rabbit2000:LE:16:default", "Rabbit3000:LE:16:default"] {
        let stdout = decompile(target);
        assert!(stdout.contains("<= 0xf"), "the CP / JR NC test survives: {stdout}");
        assert!(stdout.contains("dat_8000 = "), "the store to 0x8000: {stdout}");
        assert!(stdout.contains("return 5;"), "the taken path: {stdout}");
        assert!(stdout.contains("return 0;"), "the fall-back path: {stdout}");
    }
}
