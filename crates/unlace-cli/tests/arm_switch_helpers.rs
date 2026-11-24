//! The ARM-mode switch helpers of Apple's libgcc and armcc are named in a stripped image and
//! their call-fixups turn each call into a switch (fixture `fixtures/armswitch`).
use crate::common;
use common::{repo_root, run_unlace};

fn fixture() -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/armswitch/sw_stripped.elf")
        .to_str()
        .unwrap()
        .to_owned()
}

#[test]
fn the_helpers_are_named_by_their_words() {
    let (stdout, stderr, code) = run_unlace(&["functions", &fixture()]);
    assert_eq!(code, 0, "{stderr}");
    for line in [
        "0x2016c\t___switch8",
        "0x20184\t___switchu8",
        "0x2019c\t___switch16",
        "0x201bc\t___switch32",
        "0x201dc\t__rt_switch8",
    ] {
        assert!(stdout.contains(line), "{line}: {stdout}");
    }
}

#[test]
fn every_helper_call_becomes_a_switch_with_its_cases() {
    for (addr, case0, default) in [
        ("0x200cc", "return 10;", "return 0;"),
        ("0x200e8", "return 0xb;", "return 1;"),
        ("0x20104", "return 0xc;", "return 2;"),
        ("0x20124", "return 0xd;", "return 3;"),
        ("0x2014e", "return 0xe;", "return 4;"),
    ] {
        let (stdout, stderr, code) = run_unlace(&["decompile", &fixture(), addr]);
        assert_eq!(code, 0, "{stderr}");
        assert!(stdout.contains("switch(a0)"), "{addr}: {stdout}");
        assert!(
            stdout.contains(case0) && stdout.contains(default),
            "{addr}: {stdout}"
        );
        assert!(
            !stdout.contains("switch8(") && !stdout.contains("switch16("),
            "{addr}: {stdout}"
        );
    }
}
