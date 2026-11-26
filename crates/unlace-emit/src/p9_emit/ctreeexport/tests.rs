use std::collections::BTreeMap;

use super::*;
use crate::prettyprint::{EmitToken, SyntaxHighlight, TokenKind};

const STYLE: Style = Style {
    indent: 2,
    comment_indent: 20,
    brace_function: Brace::NextLine,
    brace_ifelse: Brace::SameLine,
    brace_loop: Brace::SameLine,
    brace_switch: Brace::SameLine,
};

fn leaf(kind: Kind, text: &str) -> Node {
    Node::with_text(kind, text)
}

fn var(name: &str) -> Node {
    leaf(Kind::Var, name)
}

fn num(text: &str) -> Node {
    leaf(Kind::Const, text)
}

fn with(kind: Kind, children: Vec<Node>) -> Node {
    let mut node = Node::new(kind);
    node.children = children;
    node
}

fn binary(name: &str, token: &str, left: Node, right: Node) -> Node {
    Node::op(name, Form::Binary, token, 1, vec![left, right])
}

fn stmt(expr: Node) -> Node {
    with(Kind::Expr, vec![expr])
}

fn call(callee: &str, arguments: Vec<Node>) -> Node {
    let mut node = with(Kind::Call, vec![leaf(Kind::Func, callee)]);
    node.children.extend(arguments);
    node.text = "(".into();
    node.close = ")".into();
    node.sep = ",".into();
    node
}

fn function(prototype: &str, body: Vec<Node>) -> Node {
    with(
        Kind::Function,
        vec![leaf(Kind::Prototype, prototype), with(Kind::Block, body)],
    )
}

fn tree(style: Style, root: Node) -> ExportTree {
    ExportTree { style, root }
}

#[test]
fn the_reference_printer_lays_statements_out_as_the_decompiler_does() {
    let mut cast = Node::op(
        "cast",
        Form::Presurround,
        "(",
        0,
        vec![leaf(Kind::Type, "char"), var("c")],
    );
    cast.close = ")".into();
    let mut subscript = Node::op(
        "subscript",
        Form::Postsurround,
        "[",
        0,
        vec![var("p"), binary("add", "+", var("i"), num("1"))],
    );
    subscript.close = "]".into();
    let mut cond = Node::op(
        "cond",
        Form::Binary,
        "?",
        1,
        vec![var("a"), var("b"), var("c")],
    );
    cond.close = ":".into();
    let mut sequence = with(
        Kind::List,
        vec![
            binary("assign", "=", var("i"), call("next", vec![])),
            binary("ne", "!=", var("i"), num("0")),
        ],
    );
    sequence.sep = ", ".into();
    let mut try_ = with(
        Kind::Try,
        vec![
            with(Kind::Block, vec![stmt(call("g", vec![]))]),
            with(Kind::Block, vec![with(Kind::Return, vec![num("1")])]),
        ],
    );
    try_.text = "catch (int)".into();
    let body = vec![
        leaf(Kind::Decl, "int i"),
        leaf(Kind::EolComment, "// eax"),
        Node::new(Kind::BlankLine),
        with(
            Kind::If,
            vec![
                binary("lt", "<", var("i"), num("0")),
                with(
                    Kind::Block,
                    vec![stmt(binary("assign", "=", var("i"), cast))],
                ),
                with(
                    Kind::If,
                    vec![
                        var("i"),
                        leaf(Kind::EolComment, "// branch-flip"),
                        stmt(binary("assign", "=", subscript, cond)),
                        leaf(Kind::EolComment, "// dupe"),
                        stmt(call("h", vec![var("i"), num("2")])),
                    ],
                ),
            ],
        ),
        with(Kind::If, vec![var("a"), leaf(Kind::Goto, "out")]),
        with(
            Kind::While,
            vec![
                num("true"),
                with(
                    Kind::Block,
                    vec![with(
                        Kind::If,
                        vec![with(Kind::Paren, vec![sequence]), Node::new(Kind::Break)],
                    )],
                ),
            ],
        ),
        with(
            Kind::DoWhile,
            vec![
                with(Kind::Block, vec![Node::new(Kind::Continue)]),
                Node::op("not", Form::Prefix, "!", 0, vec![var("a")]),
            ],
        ),
        with(
            Kind::For,
            vec![
                binary("assign", "=", var("i"), num("0")),
                binary("lt", "<", var("i"), num("4")),
                Node::new(Kind::Empty),
                with(Kind::Block, vec![Node::new(Kind::Expr)]),
            ],
        ),
        with(
            Kind::Switch,
            vec![
                var("i"),
                with(
                    Kind::Block,
                    vec![
                        with(Kind::Case, vec![num("1")]),
                        stmt(call("g", vec![])),
                        Node::new(Kind::Break),
                        Node::new(Kind::Default),
                        Node::new(Kind::BlankLine),
                    ],
                ),
            ],
        ),
        try_,
        with(Kind::Switch, vec![var("i")]),
        leaf(Kind::Label, "out"),
        leaf(Kind::Comment, "/* done */"),
        with(Kind::Return, vec![var("i")]),
    ];
    let printed = print_c(&tree(STYLE, function("int f(int a,char *p)", body)));
    let expected = "\
int f(int a,char *p)
{
  int i; // eax
  
  if (i < 0) {
    i = (char)c;
  }
  else if (i) // branch-flip
    p[i + 1] = a ? b : c; // dupe
  else
    h(i,2);
  if (a) goto out;
  while( true ) {
    if ((i = next(), i != 0)) break;
  }
  do {
    continue;
  } while (!a);
  for (i = 0; i < 4; ) {
    ;
  }
  switch(i) {
    case 1:
      g();
      break;
    default:
    
  }
  try {
    g();
  } catch (int) {
    return 1;
  }
  switch(i);
out:
                    /* done */
  return i;
}";
    assert_eq!(printed, expected);
}

#[test]
fn braces_follow_the_style() {
    let style = Style {
        indent: 4,
        brace_function: Brace::SameLine,
        brace_ifelse: Brace::NextLine,
        brace_loop: Brace::SkipLine,
        ..STYLE
    };
    let body = vec![
        with(
            Kind::If,
            vec![
                var("a"),
                with(Kind::Block, vec![Node::new(Kind::Return)]),
                with(Kind::Block, vec![stmt(call("g", vec![]))]),
            ],
        ),
        with(
            Kind::While,
            vec![var("a"), with(Kind::Block, vec![Node::new(Kind::Break)])],
        ),
    ];
    let printed = print_c(&tree(style, function("void f(int a)", body)));
    let expected = "\
void f(int a) {
    if (a)
    {
        return;
    }
    else
    {
        g();
    }
    while (a)
    
    {
        break;
    }
}";
    assert_eq!(printed, expected);
}

/// Declarations as `let` bindings, and every variable in upper case: the two overrides reach
/// the nodes the default methods print around them.
struct Shout;

impl Printer for Shout {
    fn declaration(&mut self, w: &mut Writer, node: &Node) {
        let name = node.children.iter().find(|child| child.kind == Kind::Var);
        w.push("let ");
        w.push(&name.map_or(String::new(), |name| name.text.to_uppercase()));
        w.push(": ");
        w.push(node.ty.as_deref().unwrap_or("_"));
        w.push(";");
    }

    fn expr(&mut self, w: &mut Writer, node: &Node) {
        match node.kind {
            Kind::Var => w.push(&node.text.to_uppercase()),
            _ => print_expr(self, w, node),
        }
    }
}

#[test]
fn a_printer_overrides_what_it_prints_differently() {
    let mut decl = with(Kind::Decl, vec![leaf(Kind::Type, "long"), var("acc")]);
    decl.text = "long acc".into();
    decl.ty = Some("long".into());
    let body = vec![
        decl,
        with(
            Kind::If,
            vec![
                var("n"),
                with(
                    Kind::Block,
                    vec![stmt(binary(
                        "assign",
                        "=",
                        var("acc"),
                        call("g", vec![var("n")]),
                    ))],
                ),
            ],
        ),
        with(Kind::Return, vec![var("acc")]),
    ];
    let tree = tree(STYLE, function("long f(int n)", body));
    assert_eq!(
        print(&mut Shout, &tree),
        "long f(int n)\n{\n  let ACC: long;\n  if (N) {\n    ACC = g(N);\n  }\n  return ACC;\n}"
    );
    assert_eq!(
        print_c(&tree),
        "long f(int n)\n{\n  long acc;\n  if (n) {\n    acc = g(n);\n  }\n  return acc;\n}"
    );
}

/// The token stream of `code`: each part is found after the one before it.
struct Lexed {
    tokens: Vec<EmitToken>,
    cursor: usize,
    code: &'static str,
}

impl Lexed {
    fn new(code: &'static str) -> Lexed {
        Lexed {
            tokens: Vec::new(),
            cursor: 0,
            code,
        }
    }

    /// Append the token `text` and return its index.
    fn push(&mut self, text: &str, kind: TokenKind, color: SyntaxHighlight) -> u32 {
        let at = self.cursor
            + self.code[self.cursor..]
                .find(text)
                .expect("token in the code");
        let line_start = self.code[..at].rfind('\n').map_or(0, |nl| nl + 1);
        self.cursor = at + text.len();
        self.tokens.push(EmitToken {
            line: 1 + self.code[..at].matches('\n').count(),
            col: at - line_start,
            text: text.to_string(),
            kind,
            color,
            opref: None,
            varref: None,
            at: None,
            type_name: None,
            in_var_decl: false,
            in_return_type: false,
            in_proto: false,
        });
        self.tokens.len() as u32 - 1
    }

    fn syntax(&mut self, text: &str) -> u32 {
        self.push(text, TokenKind::Syntax, SyntaxHighlight::NoColor)
    }

    fn keyword(&mut self, text: &str) -> u32 {
        self.push(text, TokenKind::Op, SyntaxHighlight::KeywordColor)
    }

    fn var(&mut self, text: &str) -> u32 {
        self.push(text, TokenKind::Variable, SyntaxHighlight::VarColor)
    }

    /// `void f(void)` and the opening brace.
    fn prototype(&mut self) {
        let first = self.tokens.len();
        self.push("void", TokenKind::Type, SyntaxHighlight::TypeColor);
        self.push("f", TokenKind::FuncName, SyntaxHighlight::FuncnameColor);
        self.syntax("(");
        self.push("void", TokenKind::Type, SyntaxHighlight::TypeColor);
        self.syntax(")");
        for token in &mut self.tokens[first..] {
            token.in_proto = true;
        }
        self.tokens[first].in_return_type = true;
        self.syntax("{");
    }

    fn build(&self, capture: &Capture) -> Result<ExportTree, String> {
        let untrimmed = format!("\n{}\n", self.code);
        build(
            &self.tokens,
            capture,
            &BTreeMap::new(),
            &untrimmed,
            self.code,
        )
    }
}

fn atom(first: u32, text: &str, parent: Option<u32>) -> CapturedExpr {
    CapturedExpr {
        parent,
        first,
        end: first + 1,
        shape: ExprShape::Leaf(LeafKind::Var, text.to_string()),
        paren: false,
        op: None,
        ty: None,
    }
}

fn capture(exprs: Vec<CapturedExpr>, marks: Vec<CaptureMark>) -> Capture {
    Capture {
        exprs,
        marks,
        style: STYLE,
        c_output: true,
        ..Capture::default()
    }
}

fn kinds(node: &Node) -> Vec<Kind> {
    node.children.iter().map(|child| child.kind).collect()
}

#[test]
fn a_statement_the_vocabulary_does_not_cover_is_kept_as_its_text() {
    let code = "void f(void)\n{\n  a = b;\n  __asm { nop };\n  return;\n}";
    let mut lex = Lexed::new(code);
    lex.prototype();
    let a = lex.var("a");
    let assign = lex.push("=", TokenKind::Op, SyntaxHighlight::NoColor);
    let b = lex.var("b");
    let semi = lex.syntax(";");
    let asm = lex.syntax("__asm { nop }");
    lex.syntax(";");
    let ret = lex.keyword("return");
    let ret_semi = lex.syntax(";");
    lex.syntax("}");
    let exprs = vec![
        CapturedExpr {
            parent: None,
            first: a,
            end: b + 1,
            shape: ExprShape::Op {
                name: "assign",
                form: Form::Binary,
                open: "=",
                close: "",
                spacing: 1,
                operands: 2,
            },
            paren: false,
            op: None,
            ty: Some("int".into()),
        },
        atom(a, "a", Some(0)),
        atom(b, "b", Some(0)),
    ];
    let mut capture = capture(
        exprs,
        vec![
            CaptureMark::StatementBegin(a as usize, None),
            CaptureMark::StatementEnd(semi as usize),
            CaptureMark::StatementBegin(ret as usize, None),
            CaptureMark::StatementEnd(ret_semi as usize),
        ],
    );
    capture.engine_tokens = vec![(assign, assign + 1)];
    let tree = lex.build(&capture).expect("a tree");
    assert_eq!(print_c(&tree), code);
    let body = &tree.root.children[1];
    assert_eq!(kinds(body), [Kind::Expr, Kind::Raw, Kind::Return]);
    assert_eq!(body.children[1].text, "  __asm { nop };");
    let assignment = &body.children[0].children[0];
    assert_eq!(
        (assignment.name.as_str(), assignment.ty.as_deref()),
        ("assign", Some("int"))
    );
    assert_eq!(kinds(assignment), [Kind::Var, Kind::Var]);
    assert_eq!(
        assignment.span,
        Span {
            line: 3,
            col: 2,
            end_line: 3,
            end_col: 7
        }
    );
    assert_eq!(asm, b + 2);
}

#[test]
fn an_operator_with_text_of_its_own_is_kept_as_its_text() {
    let code = "void f(void)\n{\n  a = WRAP<b>;\n}";
    let mut lex = Lexed::new(code);
    lex.prototype();
    let a = lex.var("a");
    let assign = lex.push("=", TokenKind::Op, SyntaxHighlight::NoColor);
    let open = lex.syntax("WRAP<");
    let b = lex.var("b");
    let close = lex.syntax(">");
    let semi = lex.syntax(";");
    lex.syntax("}");
    let binary = |name, open, first, end, parent| CapturedExpr {
        parent,
        first,
        end,
        shape: ExprShape::Op {
            name,
            form: Form::Binary,
            open,
            close: "",
            spacing: 1,
            operands: 2,
        },
        paren: false,
        op: None,
        ty: None,
    };
    let mut wrap = binary("", "", open, close + 1, Some(0));
    wrap.shape = ExprShape::Op {
        name: "",
        form: Form::Prefix,
        open: "",
        close: "",
        spacing: 0,
        operands: 1,
    };
    let exprs = vec![
        binary("assign", "=", a, close + 1, None),
        atom(a, "a", Some(0)),
        wrap,
        atom(b, "b", Some(2)),
    ];
    let mut capture = capture(
        exprs,
        vec![
            CaptureMark::StatementBegin(a as usize, None),
            CaptureMark::StatementEnd(semi as usize),
        ],
    );
    capture.engine_tokens = vec![(assign, assign + 1)];
    let tree = lex.build(&capture).expect("a tree");
    assert_eq!(print_c(&tree), code);
    let assignment = &tree.root.children[1].children[0].children[0];
    assert_eq!(kinds(assignment), [Kind::Var, Kind::Raw]);
    assert_eq!(assignment.children[1].text, "WRAP<b>");
}

#[test]
fn a_render_that_is_not_the_reported_text_has_no_tree() {
    let code = "void f(void)\n{\n  return;\n}";
    let mut lex = Lexed::new(code);
    lex.prototype();
    lex.keyword("return");
    lex.syntax(";");
    lex.syntax("}");
    let marks = vec![
        CaptureMark::StatementBegin(6, None),
        CaptureMark::StatementEnd(7),
    ];
    let tree = lex
        .build(&capture(Vec::new(), marks.clone()))
        .expect("a tree");
    assert_eq!(kinds(&tree.root.children[1]), [Kind::Return]);

    let mut moved = Lexed {
        tokens: lex.tokens.clone(),
        ..Lexed::new(code)
    };
    moved.tokens[6].col += 1;
    let error = moved
        .build(&capture(Vec::new(), marks.clone()))
        .unwrap_err();
    assert!(error.contains("is not in the text"), "{error}");

    let mut other_language = capture(Vec::new(), marks);
    other_language.c_output = false;
    let error = lex.build(&other_language).unwrap_err();
    assert!(error.contains("C output only"), "{error}");
}

fn spanned(mut node: Node, line: u32, col: u32, end_col: u32) -> Node {
    node.span = Span {
        line,
        col,
        end_line: line,
        end_col,
    };
    node
}

#[test]
fn a_cast_written_into_the_text_wraps_its_expression_and_moves_what_follows() {
    // `  sink(&v1,2); // note` on line 3, then `  return;` on line 4.
    let address = spanned(
        Node::op(
            "addr_of",
            Form::Prefix,
            "&",
            0,
            vec![spanned(var("v1"), 3, 8, 10)],
        ),
        3,
        7,
        10,
    );
    let mut sink = call("sink", vec![address, spanned(num("2"), 3, 11, 12)]);
    sink.children[0] = spanned(leaf(Kind::Func, "sink"), 3, 2, 6);
    let body = vec![
        spanned(stmt(spanned(sink, 3, 2, 13)), 3, 2, 14),
        spanned(leaf(Kind::EolComment, "// note"), 3, 15, 22),
        spanned(Node::new(Kind::Return), 4, 2, 9),
    ];
    let mut tree = tree(STYLE, function("void f(void)", body));
    let lines = |line, end_line| Span {
        line,
        col: 0,
        end_line,
        end_col: 1,
    };
    tree.root.span = lines(1, 5);
    tree.root.children[1].span = lines(2, 5);
    let before = tree.clone();
    assert!(!tree.insert_cast(3, 7, 4, "char *"), "no node is `&v1,`");
    assert_eq!(tree, before);

    assert!(tree.insert_cast(3, 7, 3, "char *"));
    assert_eq!(
        print_c(&tree),
        "void f(void)\n{\n  sink((char *)&v1,2); // note\n  return;\n}"
    );
    let cols = |node: &Node| (node.span.col, node.span.end_col);
    let block = &tree.root.children[1];
    let [statement, comment, ret] = block.children.as_slice() else {
        panic!("{:?}", kinds(block));
    };
    let call = &statement.children[0];
    let cast = &call.children[1];
    assert_eq!(
        (cast.name.as_str(), cast.ty.as_deref()),
        ("cast", Some("char *"))
    );
    assert_eq!(
        [
            cols(statement),
            cols(call),
            cols(&call.children[0]),
            cols(cast)
        ],
        [(2, 22), (2, 21), (2, 6), (7, 18)]
    );
    assert_eq!(
        [
            cols(&cast.children[0]),
            cols(&cast.children[1]),
            cols(&cast.children[1].children[0])
        ],
        [(8, 14), (15, 18), (16, 18)]
    );
    assert_eq!(
        [cols(&call.children[2]), cols(comment), cols(ret)],
        [(19, 20), (23, 30), (2, 9)]
    );
}
