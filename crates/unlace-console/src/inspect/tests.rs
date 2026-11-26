use unlace_decomp::ctreeexport::{Brace, ExportTree, Form, Kind, Node, Span, Style, print_c};
use unlace_decomp::pointerargs::{Insertion, Position};

use super::FuncDetail;

const ORIGINAL: &str = "void f(void)\n{\n  sink(&v1,2);\n}";

fn spanned(mut node: Node, col: u32, end_col: u32) -> Node {
    node.span = Span {
        line: 3,
        col,
        end_line: 3,
        end_col,
    };
    node
}

/// The tree of [`ORIGINAL`], as the exporter builds it.
fn detail() -> FuncDetail {
    let address = Node::op(
        "addr_of",
        Form::Prefix,
        "&",
        0,
        vec![spanned(Node::with_text(Kind::Var, "v1"), 8, 10)],
    );
    let mut call = Node::new(Kind::Call);
    call.text = "(".into();
    call.close = ")".into();
    call.sep = ",".into();
    call.children = vec![
        spanned(Node::with_text(Kind::Func, "sink"), 2, 6),
        spanned(address, 7, 10),
        spanned(Node::with_text(Kind::Const, "2"), 11, 12),
    ];
    let mut statement = Node::new(Kind::Expr);
    statement.children = vec![spanned(call, 2, 13)];
    let lines = |line, end_line| Span {
        line,
        col: 0,
        end_line,
        end_col: 1,
    };
    let mut block = Node::new(Kind::Block);
    block.children = vec![spanned(statement, 2, 14)];
    block.span = lines(2, 4);
    let mut root = Node::new(Kind::Function);
    root.children = vec![Node::with_text(Kind::Prototype, "void f(void)"), block];
    root.span = lines(1, 4);
    let tree = ExportTree {
        style: Style {
            indent: 2,
            brace_function: Brace::NextLine,
            ..Style::default()
        },
        root,
    };
    assert_eq!(print_c(&tree), ORIGINAL);
    FuncDetail {
        ctree: Some(Ok(tree)),
        ..FuncDetail::default()
    }
}

fn cast(column: usize, expression: &str) -> Insertion {
    Insertion {
        position: Position { line: 3, column },
        expression: expression.into(),
        spelling: "unsigned char *".into(),
    }
}

#[test]
fn the_tree_follows_the_pointer_argument_casts_a_batch_writes_into_the_code() {
    let mut detail = detail();
    detail.cast_tree_arguments(ORIGINAL, &[cast(7, "&v1")]);
    let tree = detail.ctree.expect("asked for").expect("a tree");
    assert_eq!(
        print_c(&tree),
        "void f(void)\n{\n  sink((unsigned char *)&v1,2);\n}"
    );
}

#[test]
fn a_cast_that_is_not_one_expression_of_the_tree_drops_the_tree() {
    let mut detail = detail();
    detail.cast_tree_arguments(ORIGINAL, &[cast(7, "&v1,2")]);
    let reason = detail.ctree.expect("asked for").expect_err("no tree");
    assert!(reason.contains("pointer-argument casts"), "{reason}");
}
