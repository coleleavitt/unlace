//! End-to-end two-pass gates for `functails` and `nullsubs`.
//!
//! Fixture: `functails_x86_64` (source alongside). `work` at `0x401010` jumps to
//! its unlikely path, a lone `ud2` at `0x401001` with an FDE of its own, laid
//! before `work` and off the 16-byte alignment (gcc's `work.cold`); nothing else
//! reaches it. `nothing` at `0x401020` is a bare `ret` that `_start` calls.

use std::path::PathBuf;

use unlace_console::engine::{ConsoleProgram, bootstrap_from_object};

fn bootstrap(functails: &str, nullsubs: &str) -> ConsoleProgram {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap();
    let bin = root.join("crates/unlace-analysis/tests/fixtures/functails_x86_64");
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.arch_mut()
        .set_unlace_option("functails", functails)
        .expect("functails flips");
    prog.arch_mut()
        .set_unlace_option("nullsubs", nullsubs)
        .expect("nullsubs flips");
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    prog
}

#[test]
fn a_cold_part_is_a_function_by_default() {
    let prog = bootstrap("off", "off");
    assert!(prog.lookup_symbol("sub_401001").is_some());
    assert!(prog.lookup_symbol("sub_401010").is_some());
    assert!(prog.lookup_symbol("sub_401020").is_some());
}

#[test]
fn functails_keeps_the_cold_part_with_its_owner() {
    let prog = bootstrap("on", "off");
    assert!(
        prog.lookup_symbol("sub_401001").is_none(),
        "work.cold is reached only by work's jump"
    );
    assert!(prog.lookup_symbol("sub_401010").is_some(), "work stays");
}

/// The listing walk (`listing on`, the CLI default on a decompiling surface) seeds
/// from the committed entries. A withheld cold part must not come back as a root.
#[test]
fn functails_holds_with_the_listing_walk() {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap();
    let bin = root.join("crates/unlace-analysis/tests/fixtures/functails_x86_64");
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.arch_mut()
        .set_unlace_option("listing", "on")
        .expect("listing flips");
    prog.arch_mut()
        .set_unlace_option("functails", "on")
        .expect("functails flips");
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    assert!(
        prog.lookup_symbol("sub_401001").is_none(),
        "work.cold is reached only by work's jump, even with the listing walk on"
    );
    assert!(prog.lookup_symbol("sub_401010").is_some(), "work stays");
}

#[test]
fn nullsubs_names_the_empty_function() {
    let prog = bootstrap("off", "on");
    assert!(prog.lookup_symbol("nullsub_401020").is_some());
    let entry = prog
        .function_entries_canonical()
        .into_iter()
        .find(|e| e.addr.get_offset() == 0x401020)
        .expect("nothing is a function");
    assert_eq!(entry.name, "nullsub_401020");
    assert!(
        prog.lookup_symbol("sub_401010").is_some(),
        "work is not empty"
    );
}
