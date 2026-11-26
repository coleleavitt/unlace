use unlace_decomp::ctreeexport::print_c;

use super::*;
use crate::jsonfmt;

fn tree() -> ExportTree {
    let mut callee = Node::with_text(Kind::Func, "g");
    callee.addresses = vec![0x1004];
    let mut argument = Node::with_text(Kind::Var, "a");
    argument.ty = Some("int".into());
    argument.span = Span {
        line: 3,
        col: 8,
        end_line: 3,
        end_col: 9,
    };
    let mut call = Node::new(Kind::Call);
    call.text = "(".into();
    call.close = ")".into();
    call.sep = ",".into();
    call.children = vec![callee, argument];
    let mut value = Node::with_text(Kind::Var, "v");
    value.ty = Some("long".into());
    let mut assign = Node::op("assign", Form::Binary, "=", 1, vec![value, call]);
    assign.ty = Some("long".into());
    assign.addresses = vec![0x1004];
    let mut statement = Node::new(Kind::Expr);
    statement.children = vec![assign];
    statement.addresses = vec![0x1000, 0x1004];
    statement.span = Span {
        line: 3,
        col: 2,
        end_line: 3,
        end_col: 11,
    };
    let mut block = Node::new(Kind::Block);
    block.children = vec![statement, Node::new(Kind::BlankLine)];
    let mut root = Node::new(Kind::Function);
    root.children = vec![Node::with_text(Kind::Prototype, "void f(int a)"), block];
    ExportTree {
        style: Style {
            indent: 2,
            comment_indent: 20,
            brace_function: Brace::NextLine,
            brace_ifelse: Brace::SameLine,
            brace_loop: Brace::SkipLine,
            brace_switch: Brace::SameLine,
        },
        root,
    }
}

#[test]
fn the_document_reads_back_as_the_tree_it_was_written_from() {
    let tree = tree();
    let text = jsonfmt::dumps_indent2(&to_json(&tree));
    let read = from_json(&jsonfmt::parse(&text).expect("JSON")).expect("a tree");
    assert_eq!(read, tree);
    assert_eq!(print_c(&read), "void f(int a)\n{\n  v = g(a);\n  \n}");
}

#[test]
fn a_node_writes_only_the_members_it_has() {
    let tree = tree();
    let statement = node_json(&tree.root.children[1].children[0]);
    let expected = r#"{
  "kind": "expr",
  "line": 3,
  "col": 2,
  "end_line": 3,
  "end_col": 11,
  "addresses": [
    4096,
    4100
  ],
  "children": [
    {
      "kind": "op",
      "op": "assign",
      "form": "binary",
      "text": "=",
      "spacing": 1,
      "type": "long",
      "addresses": [
        4100
      ],
      "children": [
        {
          "kind": "var",
          "text": "v",
          "type": "long"
        },
        {
          "kind": "call",
          "text": "(",
          "close": ")",
          "sep": ",",
          "children": [
            {
              "kind": "func",
              "text": "g",
              "addresses": [
                4100
              ]
            },
            {
              "kind": "var",
              "text": "a",
              "type": "int",
              "line": 3,
              "col": 8,
              "end_line": 3,
              "end_col": 9
            }
          ]
        }
      ]
    }
  ]
}"#;
    assert_eq!(jsonfmt::dumps_indent2(&statement), expected);
}

#[test]
fn a_document_that_is_not_a_tree_is_refused_with_the_member_at_fault() {
    let parse = |text: &str| from_json(&jsonfmt::parse(text).expect("JSON"));
    let text = jsonfmt::dumps_indent2(&to_json(&tree()));
    for (from, to, fault) in [
        (
            "\"kind\": \"expr\"",
            "\"kind\": \"statement\"",
            "unknown kind `statement`",
        ),
        (
            "\"form\": \"binary\"",
            "\"form\": \"infix\"",
            "unknown form `infix`",
        ),
        ("\"next_line\"", "\"below\"", "style.brace_function"),
        ("\"indent\": 2", "\"indent\": \"two\"", "style.indent"),
    ] {
        assert!(text.contains(from), "{from}");
        let error = parse(&text.replace(from, to)).unwrap_err();
        assert!(error.contains(fault), "{error}");
    }
    assert!(parse("{}").unwrap_err().contains("style"));
}
