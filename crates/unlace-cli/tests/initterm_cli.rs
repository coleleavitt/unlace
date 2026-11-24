//! (kuna) The PE32 C runtime's initializer tables are function-entry evidence:
//! every non-null word between the bounds the CRT startup pushes for
//! `_initterm` / `_initterm_e` is a function the runtime calls, and nothing else
//! references it. Fixture: `initterm_pe_i386.exe` (fixtures README).
use crate::common;
use common::process;
use std::process::Command;

fn kuna() -> std::ffi::OsString {
    std::env::var_os("KUNA_TEST_BIN").unwrap_or_else(|| env!("CARGO_BIN_EXE_unlace").into())
}

#[test]
fn every_initializer_the_crt_runs_is_a_function() {
    let fixture = common::fixture("initterm_pe_i386.exe");
    let mut command = Command::new(kuna());
    command.args(["functions", &fixture, "--json"]);
    let output = process::required_output(&mut command);
    let document: serde_json::Value = serde_json::from_slice(&output.stdout).unwrap();
    let starts: Vec<&str> = document["functions"]
        .as_array()
        .unwrap()
        .iter()
        .filter_map(|f| f["address_hex"].as_str())
        .collect();
    for want in ["0x401030", "0x401040", "0x401050", "0x401060"] {
        assert!(
            starts.contains(&want),
            "initializer {want} is not a function: {starts:?}"
        );
    }
}
