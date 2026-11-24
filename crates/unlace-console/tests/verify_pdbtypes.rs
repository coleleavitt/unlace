//! End-to-end gate for `pdbtypes` and `pdblines`: a clang-cl `/Od /Z7` x64 PE
//! whose matching `.pdb` sits beside it. With the options off the functions are
//! named (the `pdb` pass) but untyped; with `pdbtypes` on, `rect_area` takes its
//! source parameters and its stack array is `buf`; with `pdblines` on, its body
//! carries `pdb_types.cpp:N` comments. Fixture recipe: `tests/fixtures/README.md`.

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

fn decompile(func: &str, options: &[(&str, &str)]) -> String {
    let root = repo_root();
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let path = root
        .join("crates/unlace-analysis/tests/fixtures/pdb_types_x86_64.exe")
        .to_str()
        .expect("UTF-8 fixture path")
        .to_string();
    let mut prog = bootstrap_from_object(&path, "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    for (name, value) in options {
        prog.arch_mut()
            .set_unlace_option(name, value)
            .expect("a registered option");
    }
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
fn pdbtypes_names_parameters_and_locals() {
    let off = decompile("rect_area", &[]);
    assert!(off.contains("rect_area("), "got:\n{off}");
    assert!(
        !off.contains("scale"),
        "off has no source names, got:\n{off}"
    );
    let on = decompile("rect_area", &[("pdbtypes", "on")]);
    assert!(on.contains("scale"), "on names the parameter, got:\n{on}");
    assert!(on.contains("buf"), "on names the stack array, got:\n{on}");
}

#[test]
fn pdblines_comments_the_body() {
    let off = decompile("rect_area", &[]);
    assert!(!off.contains("pdb_types.cpp:"), "got:\n{off}");
    let on = decompile("rect_area", &[("pdblines", "on")]);
    assert!(on.contains("pdb_types.cpp:"), "got:\n{on}");
}
