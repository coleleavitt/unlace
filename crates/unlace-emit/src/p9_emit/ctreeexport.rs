//! (unlace `ctreeexport`) The printed function as a tree of typed nodes, and the reference C
//! printer over that tree (`docs/architecture/ctree.md` section 11).
//!
//! [`build`] makes the tree from one tree-capture render (`PrintC::doc_function_capture`): the
//! tokens of the printed text with their positions, the statement marks, and the expression
//! nodes the RPN driver recorded. Expressions come from that record, so they have the
//! operators, operands, folding and names the printer chose; parentheses are nodes of their
//! own. Statements are read from the tokens: the tree describes the text that was printed, not
//! the structured blocks behind it.
//!
//! [`print_c`] is the reference printer: it prints a tree back to C in the printer's layout.
//! [`build`] uses it as its own check. Every statement and every expression it types is
//! printed and compared with the text it stands for; a part that does not print back exactly is
//! kept as a [`Kind::Raw`] node holding its text. So `print_c(&tree)` is the function's `code`
//! byte for byte whenever [`build`] returns a tree, and the `raw` nodes mark what the typed
//! vocabulary does not cover yet.

mod build;
mod printer;

pub use build::build;
pub use printer::{
    CPrinter, Place, Printer, Writer, item_column, print, print_braced, print_c, print_expr,
    print_function, print_item, print_statement,
};

use std::collections::BTreeMap;

use crate::prettyprint::CaptureMark;

/// What a node of the exported tree is. [`Kind::name`] is its JSON spelling.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, PartialOrd, Ord)]
pub enum Kind {
    /// The function: comments above it, its `prototype`, then its body `block`.
    Function,
    /// The prototype line; `text` is the line, the children are the return `type`, the `func`
    /// name and one `decl` per parameter.
    Prototype,
    /// A declaration; `text` is the declarator, the children are its `type` and its `var`.
    Decl,
    /// Statements between braces.
    Block,
    /// `if`: the condition, the then part, the `else` part when there is one; an
    /// `eol_comment` behind the condition or the then part follows it.
    If,
    /// `while`: the condition, then the body `block`.
    While,
    /// `do`-`while`: the body `block`, then the condition.
    DoWhile,
    /// `for`: initializer, condition, step (`empty` when absent), then the body `block`.
    For,
    /// `switch`: the value, then a `block` of `case`, `default` and statements. A jump through
    /// a table whose targets are not recovered has no block and prints `switch(value);`.
    Switch,
    /// `try`: the guarded `block`, then the handler `block`; `text` is the handler's header
    /// (`catch (int)`).
    Try,
    /// A `case` label; its child is the value.
    Case,
    /// A `default` label.
    Default,
    /// `goto`; `text` is the label.
    Goto,
    Break,
    Continue,
    /// `return`, with the value as its child when it returns one.
    Return,
    /// A label line; `text` is the label.
    Label,
    /// An expression statement; its child is the expression.
    Expr,
    /// A comment on a line of its own; `text` includes the delimiters.
    Comment,
    /// A comment at the end of the line before it.
    EolComment,
    /// An empty line.
    BlankLine,
    /// Text the typed vocabulary does not cover, kept as printed.
    #[default]
    Raw,
    /// A variable.
    Var,
    /// A constant, spelled as printed.
    Const,
    /// A function name.
    Func,
    /// A type name.
    Type,
    /// A field name.
    Field,
    /// Any other atom, spelled as printed.
    Text,
    /// Nothing: an absent part, or an atom that prints nothing.
    Empty,
    /// Its child in parentheses.
    Paren,
    /// Its children separated by `sep`.
    List,
    /// A call: the callee, then the arguments.
    Call,
    /// An operator applied to its children ([`Node::name`], [`Node::form`]).
    Op,
}

const KIND_NAMES: [(Kind, &str); 33] = [
    (Kind::Function, "function"),
    (Kind::Prototype, "prototype"),
    (Kind::Decl, "decl"),
    (Kind::Block, "block"),
    (Kind::If, "if"),
    (Kind::While, "while"),
    (Kind::DoWhile, "do_while"),
    (Kind::For, "for"),
    (Kind::Switch, "switch"),
    (Kind::Try, "try"),
    (Kind::Case, "case"),
    (Kind::Default, "default"),
    (Kind::Goto, "goto"),
    (Kind::Break, "break"),
    (Kind::Continue, "continue"),
    (Kind::Return, "return"),
    (Kind::Label, "label"),
    (Kind::Expr, "expr"),
    (Kind::Comment, "comment"),
    (Kind::EolComment, "eol_comment"),
    (Kind::BlankLine, "blank_line"),
    (Kind::Raw, "raw"),
    (Kind::Var, "var"),
    (Kind::Const, "const"),
    (Kind::Func, "func"),
    (Kind::Type, "type"),
    (Kind::Field, "field"),
    (Kind::Text, "text"),
    (Kind::Empty, "empty"),
    (Kind::Paren, "paren"),
    (Kind::List, "list"),
    (Kind::Call, "call"),
    (Kind::Op, "op"),
];

impl Kind {
    /// The kind's name in the JSON document.
    pub fn name(self) -> &'static str {
        KIND_NAMES
            .iter()
            .find(|(kind, _)| *kind == self)
            .map_or("op", |(_, name)| name)
    }

    /// The kind a JSON name spells.
    pub fn from_name(name: &str) -> Option<Kind> {
        KIND_NAMES
            .iter()
            .find(|(_, known)| *known == name)
            .map(|(kind, _)| *kind)
    }

    /// Is this the function, a block or a statement: a node whose addresses are those of
    /// every op printed under it?
    pub fn is_statement(self) -> bool {
        matches!(
            self,
            Kind::Function
                | Kind::Block
                | Kind::If
                | Kind::While
                | Kind::DoWhile
                | Kind::For
                | Kind::Switch
                | Kind::Try
                | Kind::Goto
                | Kind::Break
                | Kind::Continue
                | Kind::Return
                | Kind::Expr
        )
    }
}

/// How an operator node prints its token around its children.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum Form {
    /// Not an operator.
    #[default]
    None,
    /// Between its children: `a + b`. More than two children are a left-associative chain,
    /// `a + b + c` for `(a + b) + c`; with a closing token the third child follows it
    /// (`a ? b : c`).
    Binary,
    /// Before its child: `-a`.
    Prefix,
    /// After its first child and around the second: `a[b]`.
    Postsurround,
    /// Around its first child, before the second: `(type)a`.
    Presurround,
    /// Nothing but its spacing between two children.
    Space,
    /// Nothing at all; never exported.
    Hidden,
}

const FORM_NAMES: [(Form, &str); 5] = [
    (Form::Binary, "binary"),
    (Form::Prefix, "prefix"),
    (Form::Postsurround, "postsurround"),
    (Form::Presurround, "presurround"),
    (Form::Space, "space"),
];

impl Form {
    /// The form's name in the JSON document; `None` for a node that is not an operator.
    pub fn name(self) -> Option<&'static str> {
        FORM_NAMES
            .iter()
            .find(|(form, _)| *form == self)
            .map(|(_, name)| *name)
    }

    /// The form a JSON name spells.
    pub fn from_name(name: &str) -> Option<Form> {
        FORM_NAMES
            .iter()
            .find(|(_, known)| *known == name)
            .map(|(form, _)| *form)
    }
}

/// Where a node's text is in `code`: 1-based lines, UTF-16 columns, end exclusive.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub struct Span {
    pub line: u32,
    pub col: u32,
    pub end_line: u32,
    pub end_col: u32,
}

/// Where an opening brace goes.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum Brace {
    /// On the line of the statement it opens.
    #[default]
    SameLine,
    /// On the next line.
    NextLine,
    /// On the next line but one.
    SkipLine,
}

impl Brace {
    /// The JSON spelling.
    pub fn name(self) -> &'static str {
        match self {
            Brace::SameLine => "same_line",
            Brace::NextLine => "next_line",
            Brace::SkipLine => "skip_line",
        }
    }

    /// The placement a JSON name spells.
    pub fn from_name(name: &str) -> Option<Brace> {
        [Brace::SameLine, Brace::NextLine, Brace::SkipLine]
            .into_iter()
            .find(|brace| brace.name() == name)
    }
}

/// A keyword the statement forms print.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum Keyword {
    Break,
    Case,
    Continue,
    Default,
    Do,
    Else,
    For,
    Goto,
    If,
    Return,
    Switch,
    /// The condition of a loop that never tests.
    True,
    While,
}

impl Keyword {
    pub const ALL: [Keyword; 13] = [
        Keyword::Break,
        Keyword::Case,
        Keyword::Continue,
        Keyword::Default,
        Keyword::Do,
        Keyword::Else,
        Keyword::For,
        Keyword::Goto,
        Keyword::If,
        Keyword::Return,
        Keyword::Switch,
        Keyword::True,
        Keyword::While,
    ];

    /// The keyword's C spelling, which is also its name in the JSON document.
    pub fn c(self) -> &'static str {
        match self {
            Keyword::Break => "break",
            Keyword::Case => "case",
            Keyword::Continue => "continue",
            Keyword::Default => "default",
            Keyword::Do => "do",
            Keyword::Else => "else",
            Keyword::For => "for",
            Keyword::Goto => "goto",
            Keyword::If => "if",
            Keyword::Return => "return",
            Keyword::Switch => "switch",
            Keyword::True => "true",
            Keyword::While => "while",
        }
    }

    /// The keyword a C spelling names.
    pub fn from_c(name: &str) -> Option<Keyword> {
        Keyword::ALL.into_iter().find(|keyword| keyword.c() == name)
    }
}

/// The layout the text was printed in: what the printer's options and a language file
/// decided, which no node carries.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct Style {
    /// Spaces per nesting level.
    pub indent: u32,
    /// The column of a comment line.
    pub comment_indent: u32,
    pub brace_function: Brace,
    pub brace_ifelse: Brace,
    pub brace_loop: Brace,
    pub brace_switch: Brace,
    /// The keywords a language file respelled; any other keyword has its C spelling.
    pub keywords: BTreeMap<Keyword, String>,
}

impl Style {
    /// How `keyword` is spelled in the text.
    pub fn keyword(&self, keyword: Keyword) -> &str {
        self.keywords
            .get(&keyword)
            .map_or(keyword.c(), String::as_str)
    }
}

/// One node of the exported tree.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct Node {
    pub kind: Kind,
    /// An operator's name (`add`, `assign`, ...; empty for a token that has none).
    pub name: String,
    /// A leaf's, comment's, label's or declaration's text, raw text, or an operator's token.
    pub text: String,
    /// An operator's closing token (`]`, `)`, the `:` of `?:`).
    pub close: String,
    /// What separates the children of a `list` and the arguments of a `call`.
    pub sep: String,
    pub form: Form,
    /// Spaces on each side of a binary operator's token (after a prefix token, before an
    /// opening surround token).
    pub spacing: u32,
    /// The C type of an expression's value, where the printer knows it.
    pub ty: Option<String>,
    pub span: Span,
    /// Instruction addresses: of the op an expression node prints (of each operator of a
    /// chain); of every op under a statement.
    pub addresses: Vec<u64>,
    pub children: Vec<Node>,
}

impl Node {
    /// A node of `kind` with no text and no children.
    pub fn new(kind: Kind) -> Node {
        Node {
            kind,
            ..Node::default()
        }
    }

    /// A node of `kind` holding `text`.
    pub fn with_text(kind: Kind, text: impl Into<String>) -> Node {
        Node {
            kind,
            text: text.into(),
            ..Node::default()
        }
    }

    /// An operator node.
    pub fn op(name: &str, form: Form, token: &str, spacing: u32, children: Vec<Node>) -> Node {
        Node {
            kind: Kind::Op,
            name: name.to_string(),
            text: token.to_string(),
            form,
            spacing,
            children,
            ..Node::default()
        }
    }

    /// The node and every node under it, the node first.
    pub fn walk(&self, visit: &mut dyn FnMut(&Node)) {
        visit(self);
        for child in &self.children {
            child.walk(visit);
        }
    }

    /// Replace every address in the tree by `map` of it.
    pub fn map_addresses(&mut self, map: &dyn Fn(u64) -> u64) {
        for address in &mut self.addresses {
            *address = map(*address);
        }
        for child in &mut self.children {
            child.map_addresses(map);
        }
    }
}

/// The exported tree of one function.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct ExportTree {
    pub style: Style,
    pub root: Node,
}

impl ExportTree {
    /// Follow a cast written into the text after the tree was built: `(ty)` in front of the
    /// expression that is the `len` columns at `line`:`col`. The expression becomes the operand
    /// of a `cast` node and every span behind it on the line moves right. `false`, and no
    /// change, when no expression has exactly that span.
    pub fn insert_cast(&mut self, line: u32, col: u32, len: u32, ty: &str) -> bool {
        let site = Span {
            line,
            col,
            end_line: line,
            end_col: col.saturating_add(len),
        };
        let width = u32::try_from(ty.encode_utf16().count()).unwrap_or(u32::MAX);
        cast_at(&mut self.root, &site, ty, width.saturating_add(2).max(2))
    }
}

/// Move the spans of `node` and the nodes under it that lie behind `site`'s start on its line.
fn shift_behind(node: &mut Node, site: &Span, delta: u32) {
    if node.span.line == site.line && node.span.col >= site.col {
        node.span.col = node.span.col.saturating_add(delta);
    }
    if node.span.end_line == site.line && node.span.end_col > site.col {
        node.span.end_col = node.span.end_col.saturating_add(delta);
    }
    for child in &mut node.children {
        shift_behind(child, site, delta);
    }
}

/// [`ExportTree::insert_cast`] under `node`: the outermost node whose span is `site`.
fn cast_at(node: &mut Node, site: &Span, ty: &str, delta: u32) -> bool {
    let start = |span: &Span| (span.line, span.col);
    let end = |span: &Span| (span.end_line, span.end_col);
    if node.span == *site && !node.kind.is_statement() {
        let mut operand = std::mem::take(node);
        shift_behind(&mut operand, site, delta);
        let mut ty_node = Node::with_text(Kind::Type, ty);
        ty_node.span = Span {
            line: site.line,
            col: site.col.saturating_add(1),
            end_line: site.line,
            end_col: site.col.saturating_add(delta - 1),
        };
        *node = Node {
            close: ")".to_string(),
            ty: Some(ty.to_string()),
            span: Span {
                end_col: site.end_col.saturating_add(delta),
                ..*site
            },
            ..Node::op("cast", Form::Presurround, "(", 0, vec![ty_node, operand])
        };
        return true;
    }
    let Some(at) = node.children.iter().position(|child| {
        child.span.line != 0 && start(&child.span) <= start(site) && end(site) <= end(&child.span)
    }) else {
        return false;
    };
    if !cast_at(&mut node.children[at], site, ty, delta) {
        return false;
    }
    for later in &mut node.children[at + 1..] {
        shift_behind(later, site, delta);
    }
    if node.span.end_line == site.line && node.span.end_col > site.col {
        node.span.end_col = node.span.end_col.saturating_add(delta);
    }
    true
}

/// How a recorded expression node prints.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum ExprShape {
    Op {
        name: &'static str,
        form: Form,
        open: &'static str,
        close: &'static str,
        spacing: u32,
        operands: u32,
    },
    /// An atom and the text it printed.
    Leaf(LeafKind, String),
}

/// What a recorded atom is.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum LeafKind {
    Var,
    Const,
    Func,
    Type,
    Field,
    Text,
    Empty,
}

/// One expression node the RPN driver recorded, over the captured tokens `first..end`.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CapturedExpr {
    pub parent: Option<u32>,
    pub first: u32,
    pub end: u32,
    pub shape: ExprShape,
    /// The driver put the node in parentheses.
    pub paren: bool,
    /// The `opref` of the op the node prints.
    pub op: Option<u64>,
    pub ty: Option<String>,
}

/// How the render spells the operators `PrintC` writes outside the RPN driver (the forms of
/// the tree rewrites), as the emitter got them: C's, unless a language file respelled them.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct LooseOps {
    pub assign: &'static str,
    pub or: &'static str,
    pub and: &'static str,
    pub not: &'static str,
}

impl Default for LooseOps {
    fn default() -> LooseOps {
        LooseOps {
            assign: "=",
            or: "||",
            and: "&&",
            not: "!",
        }
    }
}

/// What a tree-capture render records beside its tokens.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct Capture {
    pub exprs: Vec<CapturedExpr>,
    /// Token ranges the RPN engine printed itself (operator tokens, its parentheses).
    pub engine_tokens: Vec<(u32, u32)>,
    pub marks: Vec<CaptureMark>,
    pub style: Style,
    pub loose: LooseOps,
    /// The render was C output (C itself or a language file over it); other output languages
    /// are not exported.
    pub c_output: bool,
}

#[cfg(test)]
mod tests;
