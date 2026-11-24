use super::*;

#[test]
fn maturity_only_rises() {
    let mut tree = CTree::new();
    assert_eq!(tree.maturity(), CMaturity::Built);
    tree.advance(CMaturity::Rewritten);
    tree.advance(CMaturity::Statements);
    assert_eq!(tree.maturity(), CMaturity::Rewritten);
    tree.advance(CMaturity::Final);
    assert_eq!(tree.maturity().name(), "final");
}

#[test]
fn children_follow_print_order() {
    let mut tree = CTree::new();
    let pre = tree.add_stmt(StmtKind::Opaque, None);
    let then = tree.add_stmt(
        StmtKind::Return {
            value: None,
            op: None,
        },
        None,
    );
    let els = tree.add_stmt(StmtKind::Opaque, None);
    let c = tree.add_expr(ExprKind::Const { value: 1, size: 4 });
    let cond = tree.add_expr(ExprKind::Not(c));
    let stmt = tree.add_stmt(
        StmtKind::If {
            pre: Some(pre),
            cond,
            then,
            els: Some(els),
        },
        None,
    );
    let root = tree.add_stmt(StmtKind::Seq(vec![stmt]), None);
    tree.set_root(root);
    assert_eq!(tree.children(stmt), vec![pre, then, els]);
    assert_eq!(tree.children(root), vec![stmt]);
    assert_eq!(tree.stmt_count(), 5);
    assert_eq!(tree.expr_count(), 2);
    let dump = tree.dump();
    assert!(
        dump.starts_with("ctree (built)\n  seq[1]\n    if !0x1:4 else\n"),
        "{dump}"
    );
    assert!(dump.contains("      return\n"), "{dump}");
}
