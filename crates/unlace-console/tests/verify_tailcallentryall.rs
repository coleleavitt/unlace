//! End-to-end gate for `tailcallentryall`: `tailcallentry` on x86-64.
//!
//! Fixture `tailcallentryall_x86_64` (stripped): `helper`@0x40101f is reached
//! only by the tail `jmp` that ends `f`@0x401012, across `g`@0x401019.

use unlace_console::engine::{ConsoleProgram, bootstrap_from_object};

const HELPER: &str = "sub_40101f";

use unlace_testkit::repo_root;

fn bootstrap(all: bool) -> ConsoleProgram {
    let spec_roots = vec![repo_root().join("specs").to_str().unwrap().to_string()];
    let bin = repo_root().join("crates/unlace-analysis/tests/fixtures/tailcallentryall_x86_64");
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    let arch = prog.arch_mut();
    arch.set_unlace_option("listing", "on").unwrap();
    arch.set_unlace_option("tailcallentry", "on").unwrap();
    if all {
        arch.set_unlace_option("tailcallentryall", "on").unwrap();
    }
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    prog
}

#[test]
fn x86_tail_called_helper_is_a_function_only_with_tailcallentryall() {
    assert!(
        bootstrap(false).lookup_symbol(HELPER).is_none(),
        "tailcallentry alone is ARM-only"
    );
    let on = bootstrap(true);
    assert!(
        on.lookup_symbol(HELPER).is_some(),
        "the tail-called helper is a function"
    );
}
