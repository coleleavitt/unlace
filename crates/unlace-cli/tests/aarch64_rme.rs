//! The Armv9 RME system instructions (TLBI RPAOS/RPALOS/PAALL/PAALLOS and their
//! nXS forms, DC CIPAPA/CIGDPAPA) and the FEAT_ATS1A address translations decode
//! under their names and lift to named user operations; before, each was a
//! generic `sys`.
use crate::common;
use common::{repo_root, run_unlace};

#[test]
fn rme_maintenance_raw_image_decompiles() {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/aarch64_rme/rme.bin")
        .to_str()
        .unwrap()
        .to_owned();
    let (stdout, stderr, code) = run_unlace(&[
        "decompile",
        &bin,
        "0x1000",
        "--raw-image",
        "--target",
        "AARCH64:LE:64:v8A",
        "--base",
        "0x1000",
    ]);
    assert_eq!(code, 0, "{stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{stdout}");
    assert!(!lower.contains("bad instruction"), "{stdout}");
    for want in [
        "TLBI_RPAOS(a0);",
        "DC_CIPAPA(a1);",
        "TLBI_PAALL();",
        "par_el1 = AT_S1E3A(a2);",
        "return par_el1;",
    ] {
        assert!(stdout.contains(want), "missing {want}:\n{stdout}");
    }
}
