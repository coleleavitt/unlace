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
    keywords: BTreeMap::new(),
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
    ExportTree {
        style,
        root,
        lang: OutLang::C,
    }
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
    let mut grouped_or = Node::op(
        "or",
        Form::Binary,
        "||",
        1,
        vec![var("a"), var("b"), var("c"), var("i")],
    );
    grouped_or.grouped = true;
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
                var("i"),
                leaf(Kind::EolComment, "// branch-flip"),
                stmt(binary("assign", "=", subscript, cond)),
                leaf(Kind::EolComment, "// dupe"),
                stmt(call("h", vec![var("i"), num("2")])),
            ],
        ),
        with(
            Kind::If,
            vec![
                var("a"),
                leaf(Kind::Goto, "out"),
                with(Kind::If, vec![var("b"), Node::new(Kind::Break)]),
            ],
        ),
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
        stmt(grouped_or),
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
  else
    if (b) break;
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
  ((a || b) || c) || i;
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

#[test]
fn keywords_are_spelled_as_the_style_spells_them() {
    let respelled = [
        (Keyword::If, "when"),
        (Keyword::Else, "otherwise"),
        (Keyword::While, "aslongas"),
        (Keyword::True, "ever"),
        (Keyword::Do, "repeat"),
        (Keyword::Goto, "jump"),
        (Keyword::Break, "leave"),
        (Keyword::Return, "give"),
    ];
    let style = Style {
        keywords: respelled
            .into_iter()
            .map(|(keyword, spelled)| (keyword, spelled.to_string()))
            .collect(),
        ..STYLE
    };
    let body = vec![
        with(
            Kind::If,
            vec![
                var("a"),
                leaf(Kind::Goto, "out"),
                with(Kind::Block, vec![Node::new(Kind::Break)]),
            ],
        ),
        with(
            Kind::While,
            vec![
                leaf(Kind::Const, "ever"),
                with(Kind::Block, vec![Node::new(Kind::Continue)]),
            ],
        ),
        with(
            Kind::DoWhile,
            vec![with(Kind::Block, vec![]), leaf(Kind::Const, "true")],
        ),
        with(Kind::Return, vec![var("a")]),
    ];
    let printed = print_c(&tree(style, function("int f(int a)", body)));
    let expected = "\
int f(int a)
{
  when (a) jump out;
  otherwise {
    leave;
  }
  aslongas( ever ) {
    continue;
  }
  repeat {
  } aslongas (true);
  give a;
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
    /// The instruction address of each `opref`.
    addresses: BTreeMap<u64, u64>,
}

impl Lexed {
    fn new(code: &'static str) -> Lexed {
        Lexed {
            tokens: Vec::new(),
            cursor: 0,
            code,
            addresses: BTreeMap::new(),
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
            &self.addresses,
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
        lang: OutLang::C,
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
fn respelled_keywords_and_operators_are_read_as_what_they_stand_for() {
    let code = "void f(void)\n{\n  when (not a and b and c) leave;\n}";
    let mut lex = Lexed::new(code);
    lex.prototype();
    let when = lex.keyword("when");
    lex.syntax("(");
    lex.push("not", TokenKind::Op, SyntaxHighlight::NoColor);
    let a = lex.var("a");
    lex.push("and", TokenKind::Op, SyntaxHighlight::NoColor);
    let b = lex.var("b");
    lex.push("and", TokenKind::Op, SyntaxHighlight::NoColor);
    let c = lex.var("c");
    lex.syntax(")");
    let leave = lex.keyword("leave");
    let semi = lex.syntax(";");
    lex.syntax("}");
    let mut capture = capture(
        vec![atom(a, "a", None), atom(b, "b", None), atom(c, "c", None)],
        vec![
            CaptureMark::StatementBegin(leave as usize, None),
            CaptureMark::StatementEnd(semi as usize + 1),
        ],
    );
    capture.loose = LooseOps {
        and: "and",
        not: "not ",
        ..LooseOps::default()
    };
    assert!(
        lex.build(&capture)
            .is_ok_and(|tree| { tree.root.children[1].children[0].kind == Kind::Raw })
    );

    capture.style.keywords = [(Keyword::If, "when"), (Keyword::Break, "leave")]
        .into_iter()
        .map(|(keyword, spelled)| (keyword, spelled.to_string()))
        .collect();
    let tree = lex.build(&capture).expect("a tree");
    assert_eq!(print_c(&tree), code);
    let statement = &tree.root.children[1].children[0];
    assert_eq!(kinds(statement), [Kind::Op, Kind::Break]);
    let condition = &statement.children[0];
    assert_eq!(
        (condition.name.as_str(), condition.text.as_str()),
        ("and", "and")
    );
    assert_eq!(kinds(condition), [Kind::Op, Kind::Var, Kind::Var]);
    let negation = &condition.children[0];
    assert_eq!(
        (
            negation.name.as_str(),
            negation.text.as_str(),
            negation.form
        ),
        ("not", "not ", Form::Prefix)
    );
    assert_eq!(when, 6);
}

#[test]
fn an_operator_applied_again_to_its_own_operand_is_one_wide_node() {
    // Line 3: `+` nested on both sides, no parentheses. Line 4: a sum of a sum in parentheses,
    // which is a chain too (`Node::grouped`). Line 5: `=` groups to the right and stays nested.
    let code = "void f(void)\n{\n  a + b + c + d;\n  (a + b) + c;\n  a = b = c;\n}";
    let mut lex = Lexed::new(code);
    lex.prototype();
    lex.addresses = [(1, 0x10), (2, 0x20), (3, 0x30)].into();
    let op = |name, token, first, end, parent, opref| CapturedExpr {
        parent,
        first,
        end,
        shape: ExprShape::Op {
            name,
            form: Form::Binary,
            open: token,
            close: "",
            spacing: 1,
            operands: 2,
        },
        paren: false,
        op: opref,
        ty: Some("int".into()),
    };
    let mut exprs: Vec<CapturedExpr> = Vec::new();
    let mut marks = Vec::new();
    let mut engine = Vec::new();
    type Shape<'a> = &'a dyn Fn(&[u32], u32) -> Vec<CapturedExpr>;
    let mut statement = |lex: &mut Lexed, words: &[&str], shape: Shape| {
        let base = exprs.len() as u32;
        let tokens: Vec<u32> = words
            .iter()
            .map(|word| match *word {
                "+" | "=" => {
                    let at = lex.push(word, TokenKind::Op, SyntaxHighlight::NoColor);
                    engine.push((at, at + 1));
                    at
                }
                "(" | ")" => {
                    let at = lex.syntax(word);
                    engine.push((at, at + 1));
                    at
                }
                _ => lex.var(word),
            })
            .collect();
        let semi = lex.syntax(";");
        marks.push(CaptureMark::StatementBegin(tokens[0] as usize, None));
        marks.push(CaptureMark::StatementEnd(semi as usize));
        exprs.extend(shape(&tokens, base));
    };
    // `(a + b) + (c + d)` as ops: the root, its left sum at `base + 1`, its right at `base + 4`.
    statement(
        &mut lex,
        &["a", "+", "b", "+", "c", "+", "d"],
        &|t, base| {
            vec![
                op("add", "+", t[0], t[6] + 1, None, Some(2)),
                op("add", "+", t[0], t[2] + 1, Some(base), Some(1)),
                atom(t[0], "a", Some(base + 1)),
                atom(t[2], "b", Some(base + 1)),
                op("add", "+", t[4], t[6] + 1, Some(base), Some(3)),
                atom(t[4], "c", Some(base + 4)),
                atom(t[6], "d", Some(base + 4)),
            ]
        },
    );
    statement(
        &mut lex,
        &["(", "a", "+", "b", ")", "+", "c"],
        &|t, base| {
            let mut inner = op("add", "+", t[0], t[4] + 1, Some(base), Some(1));
            inner.paren = true;
            vec![
                op("add", "+", t[0], t[6] + 1, None, Some(2)),
                inner,
                atom(t[1], "a", Some(base + 1)),
                atom(t[3], "b", Some(base + 1)),
                atom(t[6], "c", Some(base)),
            ]
        },
    );
    statement(&mut lex, &["a", "=", "b", "=", "c"], &|t, base| {
        vec![
            op("assign", "=", t[0], t[4] + 1, None, Some(2)),
            atom(t[0], "a", Some(base)),
            op("assign", "=", t[2], t[4] + 1, Some(base), Some(1)),
            atom(t[2], "b", Some(base + 2)),
            atom(t[4], "c", Some(base + 2)),
        ]
    });
    lex.syntax("}");
    let mut capture = capture(exprs, marks);
    capture.engine_tokens = engine;
    let tree = lex.build(&capture).expect("a tree");
    assert_eq!(print_c(&tree), code);
    let [wide, grouped, assigned] = tree.root.children[1].children.as_slice() else {
        panic!("{:?}", kinds(&tree.root.children[1]));
    };
    let wide = &wide.children[0];
    assert_eq!(kinds(wide), [Kind::Var; 4]);
    assert_eq!(wide.addresses, [0x10, 0x20, 0x30]);
    assert_eq!(
        (wide.name.as_str(), wide.ty.as_deref()),
        ("add", Some("int"))
    );
    let grouped = &grouped.children[0];
    assert_eq!(kinds(grouped), [Kind::Var; 3]);
    assert!(grouped.grouped && !wide.grouped);
    assert_eq!(grouped.addresses, [0x10, 0x20]);
    let assigned = &assigned.children[0];
    assert_eq!(kinds(assigned), [Kind::Var, Kind::Op]);
    assert_eq!(kinds(&assigned.children[1]), [Kind::Var, Kind::Var]);
}

#[test]
fn an_operator_applied_again_to_its_parenthesized_first_operand_is_one_grouped_node() {
    let code = "void f(void)\n{\n  ((a || b) || c) || d;\n}";
    let mut lex = Lexed::new(code);
    lex.prototype();
    let mut engine = Vec::new();
    let mut tokens = Vec::new();
    for word in ["(", "(", "a", "||", "b", ")", "||", "c", ")", "||", "d"] {
        let at = match word {
            "(" | ")" => lex.syntax(word),
            "||" => lex.push(word, TokenKind::Op, SyntaxHighlight::NoColor),
            _ => lex.var(word),
        };
        if !matches!(word, "a" | "b" | "c" | "d") {
            engine.push((at, at + 1));
        }
        tokens.push(at);
    }
    let semi = lex.syntax(";");
    lex.syntax("}");
    let or = |first: usize, end: usize, parent, paren| CapturedExpr {
        parent,
        first: tokens[first],
        end: tokens[end] + 1,
        shape: ExprShape::Op {
            name: "or",
            form: Form::Binary,
            open: "||",
            close: "",
            spacing: 1,
            operands: 2,
        },
        paren,
        op: None,
        ty: None,
    };
    let exprs = vec![
        or(0, 10, None, false),
        or(0, 8, Some(0), true),
        or(1, 5, Some(1), true),
        atom(tokens[2], "a", Some(2)),
        atom(tokens[4], "b", Some(2)),
        atom(tokens[7], "c", Some(1)),
        atom(tokens[10], "d", Some(0)),
    ];
    let mut capture = capture(
        exprs,
        vec![
            CaptureMark::StatementBegin(tokens[0] as usize, None),
            CaptureMark::StatementEnd(semi as usize),
        ],
    );
    capture.engine_tokens = engine;
    let tree = lex.build(&capture).expect("a tree");
    assert_eq!(print_c(&tree), code);
    let chain = &tree.root.children[1].children[0].children[0];
    assert_eq!((chain.name.as_str(), chain.grouped), ("or", true));
    assert_eq!(kinds(chain), [Kind::Var; 4]);
}

#[test]
fn an_else_if_chain_is_one_wide_node() {
    let links = 80;
    let mut text = String::from("void f(void)\n{\n  if (a) {\n    return;\n  }\n");
    for _ in 0..links {
        text += "  else if (a) {\n    return;\n  }\n";
    }
    text += "  else\n    return;\n}";
    let code: &'static str = Box::leak(text.into());
    let mut lex = Lexed::new(code);
    lex.prototype();
    let mut marks = Vec::new();
    let mut returns = |lex: &mut Lexed| {
        let keyword = lex.keyword("return");
        let semi = lex.syntax(";");
        marks.push(CaptureMark::StatementBegin(keyword as usize, None));
        marks.push(CaptureMark::StatementEnd(semi as usize));
    };
    for link in 0..=links {
        if link > 0 {
            lex.keyword("else");
        }
        lex.keyword("if");
        lex.syntax("(");
        lex.var("a");
        lex.syntax(")");
        lex.syntax("{");
        returns(&mut lex);
        lex.syntax("}");
    }
    lex.keyword("else");
    returns(&mut lex);
    lex.syntax("}");
    let tree = lex.build(&capture(Vec::new(), marks)).expect("a tree");
    assert_eq!(print_c(&tree), code);
    let [chain] = tree.root.children[1].children.as_slice() else {
        panic!("{:?}", kinds(&tree.root.children[1]));
    };
    assert_eq!(chain.kind, Kind::If);
    let parts = kinds(chain);
    assert_eq!(parts.len(), 2 * (links + 1) + 1);
    assert!(
        parts[..parts.len() - 1]
            .chunks(2)
            .all(|pair| pair == [Kind::Var, Kind::Block])
    );
    assert_eq!(parts[parts.len() - 1], Kind::Return);
    assert_eq!(depth(&tree.root), 5);
}

/// The deepest node under `node`, counting `node` as 1.
fn depth(node: &Node) -> usize {
    1 + node.children.iter().map(depth).max().unwrap_or(0)
}

#[test]
fn what_nests_too_deep_stays_text() {
    let open = "(".repeat(300);
    let close = ")".repeat(300);
    let code: &'static str =
        Box::leak(format!("void f(void)\n{{\n  return {open}a{close};\n  return (a);\n}}").into());
    let mut lex = Lexed::new(code);
    lex.prototype();
    let mut marks = Vec::new();
    let mut atoms = Vec::new();
    for parens in [300, 1] {
        let keyword = lex.keyword("return");
        for _ in 0..parens {
            lex.syntax("(");
        }
        atoms.push(atom(lex.var("a"), "a", None));
        for _ in 0..parens {
            lex.syntax(")");
        }
        let semi = lex.syntax(";");
        marks.push(CaptureMark::StatementBegin(keyword as usize, None));
        marks.push(CaptureMark::StatementEnd(semi as usize));
    }
    lex.syntax("}");
    let tree = lex.build(&capture(atoms, marks)).expect("a tree");
    assert_eq!(print_c(&tree), code);
    let [deep, shallow] = tree.root.children[1].children.as_slice() else {
        panic!("{:?}", kinds(&tree.root.children[1]));
    };
    assert_eq!(kinds(deep), [Kind::Raw]);
    assert_eq!(deep.children[0].text.len(), 601);
    assert_eq!(kinds(shallow), [Kind::Paren]);
    assert!(depth(&tree.root) < 10);
}

#[test]
fn operands_nested_past_the_last_level_stay_text() {
    // `return !!...!a;`: the return is level 3, the i-th `!` level 3 + i.
    let bangs = 80;
    let code: &'static str =
        Box::leak(format!("void f(void)\n{{\n  return {}a;\n}}", "!".repeat(bangs)).into());
    let mut lex = Lexed::new(code);
    lex.prototype();
    let keyword = lex.keyword("return");
    let first: Vec<u32> = (0..bangs)
        .map(|_| lex.push("!", TokenKind::Op, SyntaxHighlight::NoColor))
        .collect();
    let a = lex.var("a");
    let semi = lex.syntax(";");
    lex.syntax("}");
    let mut exprs: Vec<CapturedExpr> = first
        .iter()
        .enumerate()
        .map(|(i, &at)| CapturedExpr {
            parent: i.checked_sub(1).map(|parent| parent as u32),
            first: at,
            end: a + 1,
            shape: ExprShape::Op {
                name: "not",
                form: Form::Prefix,
                open: "!",
                close: "",
                spacing: 0,
                operands: 1,
            },
            paren: false,
            op: None,
            ty: None,
        })
        .collect();
    exprs.push(atom(a, "a", Some(bangs as u32 - 1)));
    let mut capture = capture(
        exprs,
        vec![
            CaptureMark::StatementBegin(keyword as usize, None),
            CaptureMark::StatementEnd(semi as usize),
        ],
    );
    capture.engine_tokens = first.iter().map(|&at| (at, at + 1)).collect();
    let tree = lex.build(&capture).expect("a tree");
    assert_eq!(print_c(&tree), code);
    assert_eq!(depth(&tree.root), ExportTree::MAX_LEVELS as usize);
    let mut node = &tree.root.children[1].children[0].children[0];
    let mut typed = 0;
    while node.kind == Kind::Op {
        typed += 1;
        node = &node.children[0];
    }
    let kept = ExportTree::MAX_LEVELS as usize - 4;
    assert_eq!(typed, kept);
    assert_eq!(
        (node.kind, node.text.as_str()),
        (Kind::Raw, format!("{}a", "!".repeat(bangs - kept)).as_str())
    );
}

#[test]
fn statements_nested_past_the_last_levels_stay_lines() {
    // The k-th nested `if` is level 1 + 2k and its body's statements two levels below it.
    let nested = 40;
    let mut text = String::from("void f(void)\n{\n");
    for k in 1..=nested {
        text += &format!("{}if (a) {{\n", "  ".repeat(k));
    }
    text += &format!("{}return;\n", "  ".repeat(nested + 1));
    for k in (1..=nested).rev() {
        text += &format!("{}}}\n", "  ".repeat(k));
    }
    text += "}";
    let code: &'static str = Box::leak(text.into());
    let mut lex = Lexed::new(code);
    lex.prototype();
    for _ in 0..nested {
        lex.keyword("if");
        lex.syntax("(");
        lex.var("a");
        lex.syntax(")");
        lex.syntax("{");
    }
    let keyword = lex.keyword("return");
    let semi = lex.syntax(";");
    for _ in 0..=nested {
        lex.syntax("}");
    }
    let marks = vec![
        CaptureMark::StatementBegin(keyword as usize, None),
        CaptureMark::StatementEnd(semi as usize),
    ];
    let tree = lex.build(&capture(Vec::new(), marks)).expect("a tree");
    assert_eq!(print_c(&tree), code);
    assert!(depth(&tree.root) <= ExportTree::MAX_LEVELS as usize);
    let (mut typed, mut raw) = (0, Vec::new());
    tree.root.walk(&mut |node| match node.kind {
        Kind::If => typed += 1,
        Kind::Raw => raw.push(node.text.clone()),
        _ => {}
    });
    // An `if` needs its block and the block's statements under it, and those statements a
    // level for their operands: the last typed `if` is on level MAX_LEVELS - 4.
    let kept = (ExportTree::MAX_LEVELS as usize - 4 - 1) / 2;
    assert_eq!(typed, kept);
    let [lines] = raw.as_slice() else {
        panic!("{} raw nodes", raw.len());
    };
    assert!(lines.starts_with(&format!("{}if (a) {{\n", "  ".repeat(kept + 1))));
    assert_eq!(lines.matches("if (a)").count(), nested - kept);
    assert!(lines.contains("return;"));
}

#[test]
fn a_cast_written_at_the_last_level_is_kept_as_text() {
    // `  (((...v...)));` on line 3: the statement is level 3, the leaf on the last level.
    let parens = ExportTree::MAX_LEVELS - 4;
    let leaf_col = 2 + parens;
    let mut node = spanned(var("v"), 3, leaf_col, leaf_col + 1);
    for i in (0..parens).rev() {
        let width = 2 * (parens - i) + 1;
        node = spanned(with(Kind::Paren, vec![node]), 3, 2 + i, 2 + i + width);
    }
    let width = 2 * parens + 1;
    let statement = spanned(stmt(node), 3, 2, 2 + width + 1);
    let mut tree = tree(STYLE, function("void f(void)", vec![statement]));
    let lines = |line, end_line| Span {
        line,
        col: 0,
        end_line,
        end_col: 1,
    };
    tree.root.span = lines(1, 4);
    tree.root.children[1].span = lines(2, 4);
    let open = "(".repeat(parens as usize);
    let close = ")".repeat(parens as usize);
    assert_eq!(depth(&tree.root), ExportTree::MAX_LEVELS as usize);
    assert_eq!(
        print_c(&tree),
        format!("void f(void)\n{{\n  {open}v{close};\n}}")
    );

    assert!(tree.insert_cast(3, leaf_col, 1, "char"));
    assert_eq!(
        print_c(&tree),
        format!("void f(void)\n{{\n  {open}(char)v{close};\n}}")
    );
    assert_eq!(depth(&tree.root), ExportTree::MAX_LEVELS as usize);
    let mut innermost = &tree.root;
    while let Some(child) = innermost.children.last() {
        innermost = child;
    }
    assert_eq!(
        (
            innermost.kind,
            innermost.text.as_str(),
            innermost.ty.as_deref()
        ),
        (Kind::Raw, "(char)v", Some("char"))
    );
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
