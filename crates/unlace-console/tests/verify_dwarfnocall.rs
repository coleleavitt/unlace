//! End-to-end gate for `--option dwarfnocall`: a clang `-O2 -g` static function
//! whose convention dead-argument elimination changed (`DW_CC_nocall`) keeps every
//! source parameter in its DWARF, and the removed ones carry no location. Locking
//! the source list shifted the real arguments onto the wrong names. Two-pass: off
//! reproduces the source prototype, the default drops the location-less parameters.

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

fn decompile(func: &str, nocall: bool) -> String {
    let root = repo_root();
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let path = root
        .join("crates/unlace-analysis/tests/fixtures/dwarfnocall_x86_64")
        .to_str()
        .expect("UTF-8 fixture path")
        .to_string();
    let mut prog = bootstrap_from_object(&path, "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.arch_mut()
        .set_unlace_option("dwarfnocall", if nocall { "on" } else { "off" })
        .expect("dwarfnocall is a registered option");
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

#[test]
fn removed_parameter_is_dropped_from_the_locked_prototype() {
    let off = decompile("work", false);
    assert!(
        off.contains("work(int4 *p,int4 unused,int4 k)"),
        "off keeps the source list, got:\n{off}"
    );
    assert!(
        off.contains("if (unused <= 0)"),
        "off reads k under the removed parameter's name, got:\n{off}"
    );
    let on = decompile("work", true);
    assert!(
        on.contains("work(int4 *p,int4 k)"),
        "on drops `unused`, got:\n{on}"
    );
    assert!(on.contains("if (k <= 0)"), "on reads k as k, got:\n{on}");
}

#[test]
fn constant_parameter_is_dropped_and_callers_pass_what_the_call_takes() {
    assert!(decompile("pick", true).contains("pick(int4 a)"));
    let off = decompile("main", false);
    assert!(
        off.contains("work(v1,argc + 2,k)"),
        "off passes an undefined third argument, got:\n{off}"
    );
    let on = decompile("main", true);
    assert!(on.contains("pick(argc);"), "got:\n{on}");
    assert!(on.contains("work(v1,argc + 2);"), "got:\n{on}");
}
