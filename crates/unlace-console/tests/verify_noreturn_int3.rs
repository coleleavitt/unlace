//! Cross-crate gate for the `int3` arm of the no-return evidence tally
//! (unlace#837): MSVC, and clang and rustc targeting Windows, plant an `int3`
//! after a call that does not return, so `call f ; int3` is positive evidence
//! that `f` never returns.
//!
//! Fixture: `noreturn_int3_x86_64` (`+.s`, rebuildable with the one-line `gcc`
//! command in its header). `thrower` calls through a writable pointer and returns,
//! like `_CxxThrowException` around `RaiseException`; `t1`/`t2`/`t3` follow
//! their `call thrower` with an `int3`, `xlen` does so once, and `usesxlen`
//! calls `xlen` on one path. Before, the successor of each call was an ordinary
//! decoded instruction and `t1` printed `thrower();` followed by the pad as a
//! call through `swi(3)`.

use std::path::PathBuf;

use unlace_console::engine::bootstrap_from_object;
use unlace_console::ifacedecomp::{
    DECOMPILE_MODULE, IfaceDecompData, execute, register_decomp_commands,
};
use unlace_console::ifaceterm::ConsoleCommands;

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap()
}

fn fixture() -> PathBuf {
    repo_root().join("crates/unlace-analysis/tests/fixtures/noreturn_int3_x86_64")
}

/// Bootstrap the fixture with the Listing + discovered-no-return consumer on,
/// decompile `func`, and return the captured C.
fn decompile(func: &str) -> String {
    let root = repo_root();
    let specs = root.join("specs");
    let spec_roots = vec![specs.to_str().unwrap().to_string()];

    let bin = fixture().to_str().expect("UTF-8 fixture path").to_string();
    let mut prog = bootstrap_from_object(&bin, "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");

    // The live-CLI ordering: every `option` line precedes `read symbols` (the
    // deferred analysis commit), so the Listing build + the consumer see the flags.
    prog.arch_mut()
        .set_unlace_option("listing", "on")
        .expect("listing flips on");
    prog.arch_mut()
        .set_unlace_option("noreturn_disc", "on")
        .expect("noreturn_disc flips on");
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");

    let cmds: Vec<String> = [
        format!("load function {func}"),
        "decompile".into(),
        "print C".into(),
    ]
    .to_vec();
    let count = cmds.len();
    let mut status = ConsoleCommands::into_status(cmds);
    register_decomp_commands(&mut status);
    {
        let data = status.get_data_mut(DECOMPILE_MODULE).unwrap();
        let dcp = data.as_any_mut().downcast_mut::<IfaceDecompData>().unwrap();
        dcp.conf = Some(prog);
    }
    for _ in 0..count {
        execute(&mut status);
    }
    status.optr.clone()
}

/// THE PAYOFF: three undecodable bytes must not delete `usesret`'s live tail.
/// Three `call thrower ; int3` sites conclude `thrower` no-return.
#[test]
fn int3_after_a_call_is_no_return_evidence() {
    let c = decompile("t1");
    assert!(c.contains("thrower(); // no-return"), "{c}");
    assert!(!c.contains("swi(3)"), "{c}");
}

/// A wrapper whose last act is `call thrower ; int3` is promoted, and its
/// caller loses only the dead path.
#[test]
fn int3_tail_wrapper_is_promoted() {
    let c = decompile("xlen");
    assert!(c.contains("thrower(); // no-return"), "{c}");
    let c = decompile("usesxlen");
    assert!(c.contains("xlen(); // no-return"), "{c}");
    assert!(c.contains("return 1;"), "{c}");
}
