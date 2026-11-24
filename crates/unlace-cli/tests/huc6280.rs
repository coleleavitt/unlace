//! The HuC6280 language loads a raw image and decompiles it: a zero-page add,
//! a T-mode (`SET`) OR into the zero-page byte at X, and a `TII` block copy.
use crate::common;
use common::{repo_root, run_unlace};

#[test]
fn huc6280_add_tmode_and_block_copy_decompile() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/huc6280/add_store_block.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0xe000",
        "--raw-image",
        "--target",
        "HuC6280:LE:16:default",
        "--base",
        "0xe000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    assert!(
        stdout.contains("dat_2200 = dat_2010 + '\\x05';"),
        "zero page is logical page 0x20:\n{stdout}"
    );
    assert!(
        stdout.contains("+ 0x2000) | 0xf;"),
        "SET makes ORA write the zero-page byte at X:\n{stdout}"
    );
    assert!(stdout.contains("*v2++ = *v1++;"), "TII copies:\n{stdout}");
}
