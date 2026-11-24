//! The Windows on ARM `/GS` helpers are recognised in a stripped PE and their call-fixups keep
//! the caller's stack offsets (fixture `fixtures/armgscookie`).
use crate::common;
use common::{repo_root, run_unlace};

fn fixture() -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/armgscookie/gs_thumb.exe")
        .to_str()
        .unwrap()
        .to_owned()
}

#[test]
fn the_cookie_helpers_are_named_by_their_bytes() {
    let (stdout, stderr, code) = run_unlace(&["functions", &fixture()]);
    assert_eq!(code, 0, "{stderr}");
    assert!(
        stdout.contains("0x401028\t__security_push_cookie"),
        "{stdout}"
    );
    assert!(
        stdout.contains("0x401040\t__security_pop_cookie"),
        "{stdout}"
    );
}

#[test]
fn the_push_moves_the_stack_pointer_so_the_first_stack_argument_is_read() {
    let (stdout, stderr, code) = run_unlace(&["decompile", &fixture(), "0x401014", "--addr"]);
    assert_eq!(code, 0, "{stderr}");
    assert!(stdout.contains("// r0 | stack + 0x0"), "{stdout}");
    assert!(!stdout.contains("stack + 0x4"), "{stdout}");
    assert!(!stdout.contains("__security_push_cookie("), "{stdout}");
}
