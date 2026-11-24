//! (#421) An indirect tail jump to a no-return import ends the function at the
//! call: no `return;` follows it, in a thunk or at the end of a body.

use crate::common;

fn decompile_all(exe: &str) -> String {
    let exe = common::fixture(exe);
    let (out, err, code) = common::run_unlace(&["decompile-all", exe.as_str()]);
    assert_eq!(code, 0, "{err}");
    out
}

fn function<'a>(out: &'a str, name: &str, addr: &str) -> &'a str {
    let header = format!("// Function: {name} @ {addr}\n");
    let start = out
        .find(&header)
        .unwrap_or_else(|| panic!("no {header:?} in\n{out}"))
        + header.len();
    let end = out[start..]
        .find("// Function: ")
        .map_or(out.len(), |e| start + e);
    &out[start..end]
}

fn no_return_after_no_return_call(body: &str) -> bool {
    let lines: Vec<&str> = body.lines().collect();
    !lines
        .windows(2)
        .any(|w| w[0].contains("// no-return") && w[1].trim() == "return;")
}

#[test]
fn a_thunk_to_a_no_return_import_has_no_return() {
    let out = decompile_all("msvceh_x64.exe");
    let thunk = function(&out, "_CxxThrowException", "0x140001190");
    assert!(
        thunk.contains("_CxxThrowException(); // no-return"),
        "{thunk}"
    );
    assert!(no_return_after_no_return_call(thunk), "{thunk}");
}

#[test]
fn a_tail_jump_to_exitprocess_ends_the_body() {
    let out = decompile_all("libcnames_win32_x86_64.exe");
    let body = function(&out, "sub_140001190", "0x140001190");
    assert!(
        body.contains("ExitProcess(uExitCode); // no-return"),
        "{body}"
    );
    assert!(no_return_after_no_return_call(body), "{body}");
}
