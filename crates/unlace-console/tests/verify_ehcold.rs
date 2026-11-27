//! End-to-end two-pass gate for `ehcold`: an exception-cleanup `.cold` part is
//! its owner's, not a function.
//!
//! Fixture: `ehcold_x86_64` (`g++ -O2`, stripped; source alongside). `work`'s
//! cleanups live in its `.cold` part at `0x11e2`, reached only from `work`'s
//! landing pads; `main.cold` at `0x12a6` likewise. `may_throw.cold` at `0x11c0`
//! is the throw path, reached by an ordinary branch, and stays a function.

use std::path::PathBuf;

use unlace_console::engine::{ConsoleProgram, bootstrap_from_object};

fn bootstrap(ehcold: bool) -> ConsoleProgram {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap();
    let bin = root.join("crates/unlace-analysis/tests/fixtures/ehcold_x86_64");
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.arch_mut()
        .set_unlace_option("ehcold", if ehcold { "on" } else { "off" })
        .expect("ehcold flips");
    // functails (default on since #1559) withholds the same single-owner parts.
    if !ehcold {
        prog.arch_mut()
            .set_unlace_option("functails", "off")
            .expect("functails flips");
    }
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    prog
}

#[test]
fn cleanup_cold_parts_are_functions_with_the_option_off() {
    let prog = bootstrap(false);
    assert!(prog.lookup_symbol("sub_11e2").is_some());
    assert!(prog.lookup_symbol("sub_12a6").is_some());
}

#[test]
fn cleanup_cold_parts_are_withheld_by_default() {
    let prog = bootstrap(true);
    assert!(
        prog.lookup_symbol("sub_11e2").is_none(),
        "work.cold is reached only from work's landing pads"
    );
    assert!(
        prog.lookup_symbol("sub_12a6").is_none(),
        "main.cold is reached only from main's landing pads"
    );
    assert!(
        prog.lookup_symbol("sub_11c0").is_some(),
        "may_throw.cold is the throw path, not a cleanup"
    );
}
