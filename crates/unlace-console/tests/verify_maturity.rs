//! Maturity levels end to end (`docs/spec/00-overview.md` §0.10): a full `decompile` climbs
//! every level in schedule order, and `phase status` reports where the function got.

use unlace_console::engine::bootstrap_from_object;
use unlace_console::ifacedecomp::{
    DECOMPILE_MODULE, IfaceDecompData, execute, register_decomp_commands,
};
use unlace_console::ifaceterm::ConsoleCommands;
use unlace_decomp::maturity::{Fact, Maturity};

use unlace_testkit::repo_root;

/// Run `cmds` on the x86-64 `fmt` fixture; return the console transcript and the decompile
/// module's data.
fn drive(cmds: &[&str]) -> (String, Vec<Maturity>, Vec<Fact>, bool) {
    let root = repo_root();
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let bin = root.join("crates/unlace-analysis/tests/fixtures/fmt_x86_64");
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap the fixture");
    prog.commit_pending_analysis().expect("analysis commit");
    let cmds: Vec<String> = cmds.iter().map(|s| s.to_string()).collect();
    let count = cmds.len();
    let mut status = ConsoleCommands::into_status(cmds);
    register_decomp_commands(&mut status);
    unlace_console::console::register_unlace_commands(&mut status);
    status
        .get_data_mut(DECOMPILE_MODULE)
        .unwrap()
        .as_any_mut()
        .downcast_mut::<IfaceDecompData>()
        .unwrap()
        .conf = Some(prog);
    for _ in 0..count {
        execute(&mut status);
    }
    let dcp = status
        .get_data_mut(DECOMPILE_MODULE)
        .unwrap()
        .as_any_mut()
        .downcast_mut::<IfaceDecompData>()
        .unwrap();
    let fd = dcp.fd.as_ref().expect("a function is selected");
    let reached = fd.maturity_reached().to_vec();
    let settled = fd.settled_facts();
    let tracked = fd.maturity_tracked();
    (status.optr.clone(), reached, settled, tracked)
}

#[test]
fn a_full_decompile_reaches_every_level_in_order() {
    let (out, reached, settled, tracked) = drive(&["load function main", "decompile"]);
    assert!(out.contains("Decompilation complete"), "{out}");
    assert_eq!(reached, Maturity::ALL[1..].to_vec(), "{out}");
    assert_eq!(settled, Fact::ALL.to_vec());
    assert!(
        tracked,
        "the decompile drive holds the function to the tree's order"
    );
}

#[test]
fn a_loaded_function_is_raw_and_phase_status_reports_the_level() {
    let (out, reached, settled, _) = drive(&["load function main", "phase status"]);
    assert!(reached.is_empty(), "{reached:?}");
    assert!(settled.is_empty(), "{settled:?}");
    assert!(out.contains("maturity: raw (settled: none)"), "{out}");

    let (out, _, _, _) = drive(&["load function main", "decompile", "phase status"]);
    assert!(
        out.contains(
            "maturity: complete (settled: ssa, high-variables, flow, call-specs, dataflow, \
             clean-up, merge, block-structure, prototype, casts, complete)"
        ),
        "{out}"
    );
}
