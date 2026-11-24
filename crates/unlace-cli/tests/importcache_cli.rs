//! (unlace `importdata`) A function import's IAT slot read as a value renders as
//! the import's address: MSVC caches `[__imp_GetTickCount]` in a frame slot and
//! calls through the copy, and the read printed as the anonymous `dat_<slot>`.
//! Fixture: `importcache_pe_i386.dll` (fixtures README).
use crate::common;
use common::process;
use std::process::Command;

fn unlace() -> std::ffi::OsString {
    unlace_base::env::var_os("UNLACE_TEST_BIN")
        .unwrap_or_else(|| env!("CARGO_BIN_EXE_unlace").into())
}

#[test]
fn a_cached_import_slot_reads_as_the_import() {
    let fixture = common::fixture("importcache_pe_i386.dll");
    let mut command = Command::new(unlace());
    command.args(["decompile", &fixture, "elapsed"]);
    let output = process::required_output(&mut command);
    let text = String::from_utf8_lossy(&output.stdout);
    assert!(
        text.contains("&GetTickCount;"),
        "the cached slot read is not the import:\n{text}"
    );
    assert!(
        !text.contains("dat_100020a0"),
        "the slot still prints anonymously:\n{text}"
    );
}
