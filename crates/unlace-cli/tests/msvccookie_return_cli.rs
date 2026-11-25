//! (unlace `msvcstackguard`) An x86-32 MSVC `/GS` checker whose pop only the
//! stack solver guessed is kept, but it is still the exact checker the cookie
//! algebra proves, and `__security_check_cookie` preserves EAX: the caller's
//! return value survives it. Fixture: `gsreturn_pe_i386.dll` (fixtures README),
//! whose `relay` returns 0 or the result of an indirect `__stdcall` call.
use crate::common;
use common::process;
use std::process::Command;

fn unlace() -> std::ffi::OsString {
    unlace_base::env::var_os("UNLACE_TEST_BIN")
        .unwrap_or_else(|| env!("CARGO_BIN_EXE_unlace").into())
}

#[test]
fn a_kept_cookie_checker_does_not_kill_the_return_value() {
    let fixture = common::fixture("gsreturn_pe_i386.dll");
    let mut command = Command::new(unlace());
    command.args(["decompile", &fixture, "relay"]);
    let output = process::required_output(&mut command);
    let text = format!("{}\n{}", String::from_utf8_lossy(&output.stdout), String::from_utf8_lossy(&output.stderr));
    let head = text.lines().find(|l| l.contains("relay(")).unwrap_or("");
    assert!(!head.is_empty(), "relay:\n{text}");
    assert!(
        !head.trim_start().starts_with("void"),
        "relay lost its return value across the cookie check:\n{text}"
    );
    assert!(
        text.contains("return 0;"),
        "the null-send path returns 0:\n{text}"
    );
}
