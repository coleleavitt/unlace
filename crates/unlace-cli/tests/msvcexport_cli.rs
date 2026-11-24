//! (unlace `cppsig`, MSVC arm) A PE DLL keeps no symbol table, so the MSVC
//! declaration of a `__declspec(dllexport)` member survives only as its export
//! name. The export directory is read like a defined symbol: `Port::Send` takes
//! its `__thiscall` `this` and its `can_frame *`, and the `static` `Port::Pack`
//! takes none. Fixture: `msvcexport_pe_i386.dll` (fixtures README).
use crate::common;
use common::process;
use std::process::Command;

fn unlace() -> std::ffi::OsString {
    unlace_base::env::var_os("UNLACE_TEST_BIN")
        .unwrap_or_else(|| env!("CARGO_BIN_EXE_unlace").into())
}

fn bodies() -> std::collections::HashMap<String, String> {
    let fixture = common::fixture("msvcexport_pe_i386.dll");
    let mut command = Command::new(unlace());
    command.args(["decompile-all", &fixture, "--json"]);
    let output = process::required_output(&mut command);
    let document: serde_json::Value = serde_json::from_slice(&output.stdout).unwrap();
    document["functions"]
        .as_array()
        .unwrap()
        .iter()
        .map(|f| {
            (
                f["address_hex"].as_str().unwrap().to_string(),
                f["code"].as_str().unwrap_or("").to_string(),
            )
        })
        .collect()
}

#[test]
fn exported_msvc_members_take_their_declared_prototypes() {
    let all = bodies();
    let send = &all["0x10001000"];
    let head = send
        .lines()
        .find(|l| l.contains("Port::Send("))
        .unwrap_or("");
    assert!(!head.is_empty(), "Send:\n{send}");
    assert!(
        head.contains("Port *this"),
        "Send lost its __thiscall this:\n{send}"
    );
    assert!(
        head.contains("can_frame *"),
        "Send's frame pointer is untyped:\n{send}"
    );
    assert!(
        !head.contains("struct_0"),
        "Send's this is a synthesized record:\n{send}"
    );
    let pack = &all["0x10001030"];
    let head = pack
        .lines()
        .find(|l| l.contains("Port::Pack("))
        .unwrap_or("");
    assert!(!head.is_empty(), "Pack:\n{pack}");
    assert!(!head.contains("this"), "static Pack took a this:\n{pack}");
}
