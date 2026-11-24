//! `ehnote`: a function whose landing pads flow does not show says so in its
//! header. Fixture `ehcold_x86_64` (g++ -O2, stripped): `main` at 0x12d0 catches
//! `int` around `work`; `work` at 0x1410 has three cleanup pads.

use std::path::PathBuf;

use unlace_console::engine::bootstrap_from_object;
use unlace_console::ifacedecomp::{
    DECOMPILE_MODULE, IfaceDecompData, execute, register_decomp_commands,
};
use unlace_console::ifaceterm::ConsoleCommands;

fn decompile(addr: &str, options: &[(&str, &str)]) -> String {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap();
    let bin = root.join("crates/unlace-analysis/tests/fixtures/ehcold_x86_64");
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    for (name, value) in options {
        prog.arch_mut()
            .set_unlace_option(name, value)
            .expect("option flips");
    }
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    let cmds: Vec<String> = [
        format!("load addr {addr}"),
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
fn hidden_pads_are_noted_in_the_header() {
    let main = decompile("0x12d0", &[("itaniumeh", "off")]);
    assert!(
        main.contains("/* eh: 1 call site unwinds to C++ landing pads (catch int); not shown */"),
        "got:\n{main}"
    );
    let work = decompile("0x1410", &[("itaniumeh", "off")]);
    assert!(
        work.contains("/* eh: 3 call sites unwind to C++ landing pads (3 cleanup); not shown */"),
        "got:\n{work}"
    );
}

#[test]
fn no_note_with_the_option_off_or_the_pads_shown() {
    assert!(!decompile("0x12d0", &[("ehnote", "off")]).contains("eh:"));
    assert!(!decompile("0x12d0", &[("itaniumeh", "on")]).contains("/* eh:"));
}
