//! End-to-end two-pass gate for `fdeflowbound`: fall-through stops at the end
//! of the function's own FDE.
//!
//! Fixture: `fdeflowbound_x86_64.so` (`gcc -shared` of the `.s` alongside). `f`'s
//! FDE ends after `call mydie@plt`, an import unlace cannot know never returns,
//! and `mov eax,7; ret` follows with no symbol and no FDE.

use std::path::PathBuf;

use unlace_console::engine::bootstrap_from_object;
use unlace_console::ifacedecomp::{
    DECOMPILE_MODULE, IfaceDecompData, execute, register_decomp_commands,
};
use unlace_console::ifaceterm::ConsoleCommands;

fn decompile(on: bool) -> String {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap();
    let bin = root.join("crates/unlace-analysis/tests/fixtures/fdeflowbound_x86_64.so");
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.arch_mut()
        .set_unlace_option("fdeflowbound", if on { "on" } else { "off" })
        .expect("fdeflowbound flips");
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    let cmds: Vec<String> = [
        "load function f".to_string(),
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

#[test]
fn flow_walks_past_the_fde_with_the_option_off() {
    let off = decompile(false);
    assert!(
        off.contains("return 7;"),
        "the bytes after f's FDE are decoded as f, got:\n{off}"
    );
}

#[test]
fn flow_stops_at_the_end_of_the_fde() {
    let on = decompile(true);
    assert!(!on.contains("return 7;"), "got:\n{on}");
    assert!(
        on.contains("fdeflowbound"),
        "the truncation is reported, got:\n{on}"
    );
}
