//! Flow into unmapped memory ends that path; it does not lose the function.
//!
//! Fixture: `unmapped_branch_x86_64` (`unmapped_branch_x86_64.py` carries the
//! byte-by-byte layout) — 17 mapped bytes at 0x401000 that disassemble cleanly
//! and whose last instruction is `jmp 0x0`, an address in no segment of the
//! image. That is the reduced form of crackmes.one/5e51836e33c5d4439bb2dc24's
//! `sub_496920`: 160 mapped bytes, a clean disassembly, and a tail jump whose
//! displacement resolves to zero.
//!
//! Before the fix, following that edge asked the loader for bytes at 0x0,
//! `load_fill` raised, and the raise unwound the whole flow follow — so
//! selecting the function produced no body at all and `unlace decompile` reported
//! the entry as an external symbol in another module. Now the edge is refused
//! the way a target outside a declared extent already was: a halt stub, a
//! `flows into unmapped memory` warning, and the rest of the body.

use unlace_console::engine::{ConsoleProgram, bootstrap_from_object};
use unlace_console::project::decompile_targets;

/// `e_entry`, and the only function in the image.
const ENTRY: u64 = 0x401000;
/// The `jmp` that leaves the image, and where it goes.
const BRANCH_SITE: u64 = 0x40100c;

use unlace_testkit::repo_root;

fn boot() -> ConsoleProgram {
    let root = repo_root();
    let spec_roots = vec![root.join("specs").to_str().unwrap().to_string()];
    let path = root.join("crates/unlace-analysis/tests/fixtures/unmapped_branch_x86_64");
    assert!(path.exists(), "missing fixture {path:?}");
    let mut prog = bootstrap_from_object(path.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    prog
}

fn entry_at(prog: &ConsoleProgram, vma: u64) -> unlace_console::engine::FunctionEntry {
    prog.function_entries_canonical()
        .into_iter()
        .find(|e| e.addr.get_offset() == vma)
        .unwrap_or_else(|| panic!("no inventory entry at {vma:#x}"))
}

/// The headline: the function decompiles, and its body carries the value only a
/// real decode of the mapped bytes can produce.
#[test]
fn a_function_that_branches_into_unmapped_memory_still_decompiles() {
    let mut prog = boot();

    let target = entry_at(&prog, ENTRY);
    let out = decompile_targets(&mut prog, vec![target], true, false, false);
    assert_eq!(out.len(), 1);
    let r = &out[0];
    assert!(
        r.error.is_none(),
        "the selection must not fail, got: {:?}",
        r.error
    );
    let code = r.code.as_deref().unwrap_or("");
    assert!(
        code.contains("0x539"),
        "the body must carry the constant the mapped bytes move into EAX, got: {code:?}"
    );
    assert!(
        !code.contains("external symbol"),
        "an entry with 17 mapped bytes is not an external, got: {code:?}"
    );
    assert!(
        !code.contains("Unable to load"),
        "the byte-load failure must not reach the output, got: {code:?}"
    );
}

/// The edge is not silently dropped: the body says where flow left the image.
#[test]
fn the_lost_edge_is_reported_at_its_branch_site() {
    let mut prog = boot();

    let target = entry_at(&prog, ENTRY);
    let out = decompile_targets(&mut prog, vec![target], true, false, false);
    let code = out[0].code.as_deref().unwrap_or("");
    assert!(
        code.contains("Function flows into unmapped memory"),
        "the function header must name the condition, got: {code:?}"
    );
    assert!(
        code.contains(&format!("{BRANCH_SITE:08x}")),
        "the per-site warning must name the branch at {BRANCH_SITE:#x}, got: {code:?}"
    );
}

/// The premise of the whole fix: the entry's own bytes ARE in the image, so
/// classifying the selection as an external was reading someone else's failure.
#[test]
fn the_entry_itself_is_mapped_and_the_branch_target_is_not() {
    let prog = boot();
    assert!(
        prog.vma_bytes_mapped(ENTRY),
        "the entry has bytes behind it"
    );
    assert!(
        prog.vma_bytes_mapped(BRANCH_SITE),
        "so does the branch instruction"
    );
    assert!(!prog.vma_bytes_mapped(0), "the branch target does not");
}
