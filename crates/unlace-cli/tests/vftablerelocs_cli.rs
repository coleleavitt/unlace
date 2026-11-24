//! (unlace `rtti`) A relocatable PE's base-relocation table lists every MSVC
//! vftable slot, so the slot walk ends at the first word it does not list, even
//! when that word holds an address inside `.text`. Fixture:
//! `vftablerelocs_pe_i386.dll` (fixtures README).
use crate::common;
use common::process;
use std::process::Command;

fn unlace() -> std::ffi::OsString {
    unlace_base::env::var_os("UNLACE_TEST_BIN")
        .unwrap_or_else(|| env!("CARGO_BIN_EXE_unlace").into())
}

#[test]
fn an_unrelocated_word_after_a_vftable_is_no_slot() {
    let fixture = common::fixture("vftablerelocs_pe_i386.dll");
    let mut command = Command::new(unlace());
    command.args(["functions", &fixture, "--json"]);
    let output = process::required_output(&mut command);
    let document: serde_json::Value = serde_json::from_slice(&output.stdout).unwrap();
    let functions: Vec<(String, String)> = document["functions"]
        .as_array()
        .unwrap()
        .iter()
        .map(|f| {
            (
                f["address_hex"].as_str().unwrap_or("").to_string(),
                f["name"].as_str().unwrap_or("").to_string(),
            )
        })
        .collect();
    let has = |addr: &str, name: &str| functions.iter().any(|(a, n)| a == addr && n == name);
    assert!(has("0x10001010", "Foo::vfunc_0"), "{functions:?}");
    assert!(has("0x10001020", "Foo::vfunc_1"), "{functions:?}");
    assert!(
        !functions
            .iter()
            .any(|(a, n)| a == "0x10001024" || n == "Foo::vfunc_2"),
        "the unrelocated word after the vftable became a slot: {functions:?}"
    );
}
