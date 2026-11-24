//! (unlace `calleeargsmsvc`) A register-only callee with an MSVC C++ exception
//! frame and a `/GS` cookie states its stack-argument extent, so it no longer
//! takes the push the caller made early for the `__thiscall` call after it.
//! Fixture: `calleeargsmsvc_pe_i386.dll` (fixtures README).
use crate::common;
use common::process;
use std::process::Command;

fn unlace() -> std::ffi::OsString {
    unlace_base::env::var_os("UNLACE_TEST_BIN")
        .unwrap_or_else(|| env!("CARGO_BIN_EXE_unlace").into())
}

fn report(mode: &str) -> String {
    report_of("calleeargsmsvc_pe_i386.dll", mode)
}

fn report_of(name: &str, mode: &str) -> String {
    let fixture = common::fixture(name);
    let mut command = Command::new(unlace());
    command.args([
        "decompile",
        &fixture,
        "report",
        "--option",
        "calleeargsmsvc",
        mode,
    ]);
    let output = process::required_output(&mut command);
    String::from_utf8_lossy(&output.stdout).into_owned()
}

#[test]
fn an_eh_framed_fastcall_does_not_take_the_next_calls_push() {
    let off = report("off");
    assert!(
        off.contains("\"frame error = \","),
        "off: the EH-framed callee keeps the upstream test:\n{off}"
    );
    let on = report("on");
    assert!(
        on.contains("\"frame error = \")"),
        "on: put_text takes only ECX and EDX:\n{on}"
    );
    assert!(
        !on.contains("\"frame error = \","),
        "on: put_text still takes the push meant for put_uint:\n{on}"
    );
}

#[test]
fn a_call_followed_by_int3_does_not_return_into_the_next_function() {
    let on = report_of("calleeargsmsvc_int3_pe_i386.dll", "on");
    assert!(
        on.contains("\"frame error = \")"),
        "on: put_text lost its text or took the push meant for put_uint:\n{on}"
    );
}
