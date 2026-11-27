//! End-to-end gate for `pdbtypes` and `pdblines`: a clang-cl `/Od /Z7` x64 PE
//! whose matching `.pdb` sits beside it. With the options off the functions are
//! named (the `pdb` pass) but untyped; with `pdbtypes` on, `rect_area` takes its
//! source parameters and its scope holds the stack array `buf` (its stores only
//! feed its own reads, so the printed C folds them away); with `pdblines` on, its
//! body carries `pdb_types.cpp:N` comments. Fixture recipe: `tests/fixtures/README.md`.

use unlace_console::engine::{ConsoleProgram, bootstrap_from_object};
use unlace_console::ifacedecomp::{
    DECOMPILE_MODULE, IfaceDecompData, execute, register_decomp_commands,
};
use unlace_console::ifaceterm::ConsoleCommands;

use unlace_testkit::repo_root;

fn program(options: &[(&str, &str)]) -> ConsoleProgram {
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
    prog
}

fn decompile(func: &str, options: &[(&str, &str)]) -> String {
    let prog = program(options);
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

    // `sub rsp,0x28` puts `buf[0..3]` at `[rsp+0x0..0xc]`: entry SP - 40.
    let prog = program(&[("pdbtypes", "on")]);
    let entry = prog.lookup_symbol("rect_area").expect("rect_area");
    let locals = prog.dwarf_locals_for(entry.get_offset());
    let buf = locals
        .iter()
        .find(|(name, ..)| name == "buf")
        .unwrap_or_else(|| panic!("on seeds the stack array, got {locals:?}"));
    assert_eq!(buf.1.num_elements(), Some(4), "{buf:?}");
    assert_eq!(buf.1.get_size(), 16, "{buf:?}");
    assert_eq!(buf.2.get_offset(), (-40i64) as u64, "{buf:?}");
    assert!(
        program(&[]).dwarf_locals_for(entry.get_offset()).is_empty(),
        "off seeds no PDB locals"
    );
}

#[test]
fn pdblines_comments_the_body() {
    let off = decompile("rect_area", &[]);
    assert!(!off.contains("pdb_types.cpp:"), "got:\n{off}");
    let on = decompile("rect_area", &[("pdblines", "on")]);
    assert!(on.contains("pdb_types.cpp:"), "got:\n{on}");
}
