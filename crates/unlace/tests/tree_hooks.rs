//! Tree callbacks (`unlace::unstable::ctree`) end to end on a raw x86-64 blob: a callback
//! edits what prints, callbacks see every level in order, and a reload keeps them.

use std::cell::RefCell;
use std::rc::Rc;

use unlace::unstable::ctree::{CMaturity, CTree, Funcdata, OpId, StmtKind};
use unlace::unstable::printer::{Kind, print_c};
use unlace::{Decompiler, Error, Target};

const G: u64 = 0x1020;

/// `f` at 0x1000 calls `g` (0x1020) and `h` (0x1030) and returns its argument:
/// `push rbx; mov ebx, edi; call g; call h; mov eax, ebx; pop rbx; ret`.
fn blob() -> Vec<u8> {
    let mut bytes = vec![0xcc; 0x40];
    bytes[..0x11].copy_from_slice(&[
        0x53, 0x89, 0xfb, 0xe8, 0x18, 0x00, 0x00, 0x00, 0xe8, 0x23, 0x00, 0x00, 0x00, 0x89, 0xd8,
        0x5b, 0xc3,
    ]);
    bytes[0x20] = 0xc3;
    bytes[0x30] = 0xc3;
    bytes
}

fn declared() -> Decompiler {
    Decompiler::from_raw(
        blob(),
        Target::X86_64,
        0x1000,
        &[],
        &[0x1000, 0x1020, 0x1030],
    )
    .unwrap()
    .with_function(0x1000, Some(0x1011), Some("f"))
    .with_function(0x1020, Some(0x1021), Some("g"))
    .with_function(0x1030, Some(0x1031), Some("h"))
    .with_prototype(0x1000, "int f(int a)")
    .with_prototype(0x1020, "void g(void)")
    .with_prototype(0x1030, "void h(void)")
}

/// Take every call to `G` out of the leaves, so its statement does not print.
fn drop_calls_to_g(tree: &mut CTree, fd: &Funcdata) {
    let calls_g: Vec<OpId> = (0..fd.num_calls())
        .map(|i| fd.get_call_specs(i))
        .filter(|call| call.get_entry_address().get_offset() == G)
        .map(|call| call.get_op())
        .collect();
    for id in tree.stmt_ids() {
        if let StmtKind::Stmts { ops, .. } = &mut tree.stmt_mut(id).kind {
            ops.retain(|op| !calls_g.contains(op));
        }
    }
}

#[test]
fn a_hook_removes_a_statement_from_the_printed_function() {
    let plain = declared().decompile(0x1000).unwrap().c;
    assert!(plain.contains("g();") && plain.contains("h();"), "{plain}");

    let mut hooked = declared().with_tree_hook(CMaturity::Statements, drop_calls_to_g);
    let edited = hooked.decompile(0x1000).unwrap().c;
    assert_eq!(edited, plain.replace("  g();\n", ""), "{edited}");
    assert_eq!(
        hooked.decompile(0x1020).unwrap().c,
        declared().decompile(0x1020).unwrap().c
    );
}

#[test]
fn hooks_run_at_their_level_whatever_the_order_they_were_added_in() {
    let seen = Rc::new(RefCell::new(Vec::new()));
    let mut decompiler = declared();
    for level in [
        CMaturity::Final,
        CMaturity::Rewritten,
        CMaturity::Statements,
        CMaturity::Built,
    ] {
        let seen = Rc::clone(&seen);
        decompiler = decompiler.with_tree_hook(level, move |tree, fd| {
            if fd.get_name() != "f" {
                return;
            }
            let kinds = |split: bool| {
                tree.stmt_ids()
                    .into_iter()
                    .filter(|id| match &tree.stmt(*id).kind {
                        StmtKind::Stmts { .. } => split,
                        StmtKind::Ops { .. } => !split,
                        _ => false,
                    })
                    .count()
            };
            seen.borrow_mut()
                .push((level, tree.maturity(), kinds(false), kinds(true)));
        });
    }
    decompiler.decompile(0x1000).unwrap();
    let seen = seen.borrow();
    let levels: Vec<CMaturity> = seen.iter().map(|row| row.0).collect();
    assert!(!levels.is_empty());
    for print in levels.chunks(CMaturity::LEVELS.len()) {
        assert_eq!(
            print,
            CMaturity::LEVELS,
            "one pass over the levels per print"
        );
    }
    for (level, maturity, unsplit, split) in seen.iter() {
        assert_eq!(level, maturity, "the tree is at the hook's level");
        if *level == CMaturity::Built {
            assert!(*unsplit > 0 && *split == 0, "{seen:?}");
        } else {
            assert!(*unsplit == 0 && *split > 0, "{seen:?}");
        }
    }
}

#[test]
fn hooks_survive_a_reload() {
    let mut decompiler = declared()
        .with_tree_hook(CMaturity::Statements, drop_calls_to_g)
        .with_max_fn_seconds(30);
    let first = decompiler.decompile(0x1000).unwrap().c;
    assert!(!first.contains("g();") && first.contains("h();"), "{first}");
    let mut decompiler = decompiler.with_max_fn_seconds(60);
    assert_eq!(decompiler.decompile(0x1000).unwrap().c, first);
}

#[test]
fn a_panic_in_a_hook_fails_the_function_it_was_printing_and_no_other() {
    let mut decompiler = declared().with_tree_hook(CMaturity::Statements, |_, fd| {
        assert!(fd.get_name() != "f", "the hook refuses f");
    });
    for _ in 0..2 {
        match decompiler.decompile(0x1000) {
            Err(Error::Decompile { name, reason, .. }) => {
                assert_eq!(name, "f");
                assert!(reason.contains("panic while rendering C"), "{reason}");
            }
            other => panic!("{:?}", other.map(|function| function.c)),
        }
        let untouched = decompiler.decompile(0x1020).unwrap().c;
        assert_eq!(untouched, declared().decompile(0x1020).unwrap().c);
    }
}

#[test]
fn the_exported_tree_is_the_tree_of_the_hooked_text() {
    let mut hooked = declared().with_tree_hook(CMaturity::Statements, drop_calls_to_g);
    let code = hooked.decompile(0x1000).unwrap().c;
    let tree = hooked.tree(0x1000).unwrap();
    assert_eq!(print_c(&tree), code);
    let mut callees = Vec::new();
    tree.root.walk(&mut |node| {
        if node.kind == Kind::Call {
            callees.push(node.children[0].text.clone());
        }
    });
    assert_eq!(callees, ["h"]);
}
