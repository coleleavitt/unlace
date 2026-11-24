//! `movwpairs`: an address an ARM `movw`/`movt` or AArch64 `movz`/`movk` pair builds is a
//! reference in the discovery Listing (fixtures in `fixtures/movwpairs`).
use crate::common;
use common::{repo_root, run_unlace};

fn xrefs(fixture: &str, to: &str, mode: &str) -> String {
    let bin = repo_root()
        .join("crates/unlace-cli/tests/fixtures/movwpairs")
        .join(fixture);
    let (stdout, stderr, code) = run_unlace(&[
        "xrefs",
        bin.to_str().unwrap(),
        "--to",
        to,
        "--option",
        "movwpairs",
        mode,
    ]);
    assert_eq!(code, 0, "{stderr}");
    stdout
}

#[test]
fn movw_movt_pairs_reference_what_they_build() {
    for fixture in ["pairs_thumb.elf", "pairs_a64.elf"] {
        let off = xrefs(fixture, "counter", "off");
        assert!(
            off.contains("# 0 references to counter"),
            "{fixture}: {off}"
        );
        let access = xrefs(fixture, "counter", "access");
        assert!(access.contains("\tread\tbump+"), "{fixture}: {access}");
        assert!(access.contains("\twrite\tbump+"), "{fixture}: {access}");
        assert!(!access.contains("\tdata\t"), "{fixture}: {access}");
        let on = xrefs(fixture, "counter", "on");
        assert!(on.contains("\tdata\tbump+0x4\tmov"), "{fixture}: {on}");
        let table = xrefs(fixture, "table", "on");
        assert!(
            table.contains("\tdata\tread_tab+0x4\t"),
            "{fixture}: {table}"
        );
        let handler = xrefs(fixture, "handler_b", "on");
        assert!(
            handler.contains("\tdata\treg+0x4\t"),
            "{fixture}: {handler}"
        );
    }
}
