//! Printers over the exported tree: the [`Printer`] trait, whose defaults print C in the
//! decompiler's layout, and [`CPrinter`], the reference printer that is those defaults.

use super::{Brace, ExportTree, Form, Keyword, Kind, Node, Style};
use crate::lang::{OutLang, OutLangExt};

/// The text a [`Printer`] writes, the layout it writes it in and the language it is written in.
pub struct Writer<'a> {
    pub style: &'a Style,
    pub lang: OutLang,
    pub out: String,
}

impl<'a> Writer<'a> {
    /// An empty text in `style`, in `lang`.
    pub fn new(style: &'a Style, lang: OutLang) -> Writer<'a> {
        Writer {
            style,
            lang,
            out: String::new(),
        }
    }

    /// Does the language parenthesise the test of `if`, `while` and `for`?
    fn parenthesised_tests(&self) -> bool {
        self.lang.profile().caps.paren_conditions
    }

    /// End a statement: the language's terminator (`;`, or nothing in Go).
    pub fn terminator(&mut self) {
        let end = self.lang.profile().kw_semicolon;
        self.out.push_str(end);
    }

    /// Append `text`.
    pub fn push(&mut self, text: &str) {
        self.out.push_str(text);
    }

    /// Append `keyword` as the style spells it.
    pub fn keyword(&mut self, keyword: Keyword) {
        self.out.push_str(self.style.keyword(keyword));
    }

    /// Append `columns` spaces.
    pub fn pad(&mut self, columns: u32) {
        for _ in 0..columns {
            self.out.push(' ');
        }
    }

    /// Start a new line at column `indent`.
    pub fn line(&mut self, indent: u32) {
        self.out.push('\n');
        self.pad(indent);
    }
}

/// Where the items of a block print: statements at `indent`, blank lines and `case` labels at
/// `blank` (the same column, except in the body of a `switch`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Place {
    pub indent: u32,
    pub blank: u32,
}

impl Place {
    /// The inside of a block whose statements print at `indent`.
    pub fn block(indent: u32) -> Place {
        Place {
            indent,
            blank: indent,
        }
    }
}

/// A printer over the exported tree. Every method has a default that prints C in the
/// decompiler's own layout ([`CPrinter`] is those defaults and nothing else), and the defaults
/// call back into the printer for the nodes under the one they print. A printer for another
/// flavour overrides the methods for what it prints differently.
pub trait Printer {
    /// The whole function: the comments above it, the prototype, the body.
    fn function(&mut self, w: &mut Writer, node: &Node) {
        print_function(self, w, node);
    }

    /// The prototype line.
    fn prototype(&mut self, w: &mut Writer, node: &Node) {
        w.push(&node.text);
    }

    /// A local declaration, with its terminator.
    fn declaration(&mut self, w: &mut Writer, node: &Node) {
        w.push(&node.text);
        w.terminator();
    }

    /// One item of a block, from the end of the line before it.
    fn item(&mut self, w: &mut Writer, item: &Node, place: Place) {
        print_item(self, w, item, place);
    }

    /// A statement, from its first column `indent`.
    fn statement(&mut self, w: &mut Writer, node: &Node, indent: u32) {
        print_statement(self, w, node, indent);
    }

    /// An expression.
    fn expr(&mut self, w: &mut Writer, node: &Node) {
        print_expr(self, w, node);
    }
}

/// The reference printer: the defaults of [`Printer`], which print each language in its own
/// layout (the tree's [`ExportTree::lang`]); C in the decompiler's layout is the first of them.
pub struct CPrinter;

impl Printer for CPrinter {}

/// Print `tree` with `printer`.
pub fn print<P: Printer + ?Sized>(printer: &mut P, tree: &ExportTree) -> String {
    let mut w = Writer::new(&tree.style, tree.lang);
    printer.function(&mut w, &tree.root);
    w.out
}

/// Print `tree` in its output language: the function's `code`.
pub fn print_c(tree: &ExportTree) -> String {
    print(&mut CPrinter, tree)
}

/// Is `node` the constant `true` of a loop that never tests (`while( true )`)?
fn is_true(style: &Style, node: &Node) -> bool {
    node.kind == Kind::Const && node.text == style.keyword(Keyword::True)
}

/// The column an item of a block starts at.
pub fn item_column(style: &Style, kind: Kind, place: Place) -> u32 {
    match kind {
        Kind::Label => 0,
        Kind::Comment => style.comment_indent,
        Kind::Case | Kind::Default => place.blank,
        _ => place.indent,
    }
}

/// [`Printer::function`]'s default.
pub fn print_function<P: Printer + ?Sized>(p: &mut P, w: &mut Writer, node: &Node) {
    if node.kind != Kind::Function {
        w.push(&node.text);
        return;
    }
    for (at, child) in node.children.iter().enumerate() {
        match child.kind {
            Kind::EolComment => {
                w.push(" ");
                w.push(&child.text);
            }
            Kind::Block => {
                open_brace(w, w.style.brace_function, 0);
                let place = Place::block(w.style.indent);
                for item in &child.children {
                    p.item(w, item, place);
                }
                w.line(0);
                w.push("}");
            }
            _ => {
                if at > 0 {
                    w.push("\n");
                }
                if child.kind == Kind::Prototype {
                    p.prototype(w, child);
                } else {
                    w.push(&child.text);
                }
            }
        }
    }
}

fn open_brace(w: &mut Writer, brace: Brace, indent: u32) {
    match brace {
        Brace::SameLine => w.push(" "),
        Brace::NextLine => w.line(indent),
        Brace::SkipLine => {
            w.line(indent);
            w.line(indent);
        }
    }
    w.push("{");
}

/// [`Printer::item`]'s default.
pub fn print_item<P: Printer + ?Sized>(p: &mut P, w: &mut Writer, item: &Node, place: Place) {
    match item.kind {
        Kind::EolComment => {
            w.push(" ");
            w.push(&item.text);
        }
        Kind::BlankLine => w.line(place.blank),
        Kind::Raw => {
            w.push("\n");
            w.push(&item.text);
        }
        _ => {
            let column = item_column(w.style, item.kind, place);
            w.line(column);
            print_item_text(p, w, item, column);
        }
    }
}

/// An item that starts a line, from its first column `indent`.
pub(super) fn print_item_text<P: Printer + ?Sized>(
    p: &mut P,
    w: &mut Writer,
    item: &Node,
    indent: u32,
) {
    match item.kind {
        Kind::Comment => w.push(&item.text),
        Kind::Label => {
            w.push(&item.text);
            w.push(":");
        }
        Kind::Case => {
            w.keyword(Keyword::Case);
            w.push(" ");
            for value in &item.children {
                p.expr(w, value);
            }
            w.push(":");
        }
        Kind::Default => {
            w.keyword(Keyword::Default);
            w.push(":");
        }
        _ => p.statement(w, item, indent),
    }
}

/// The braces of `block` and the items between them, a level deeper than `indent`.
pub fn print_braced<P: Printer + ?Sized>(
    p: &mut P,
    w: &mut Writer,
    block: &Node,
    brace: Brace,
    indent: u32,
) {
    open_brace(w, brace, indent);
    let place = Place::block(indent + w.style.indent);
    for item in &block.children {
        p.item(w, item, place);
    }
    w.line(indent);
    w.push("}");
}

/// The comments behind what was just printed, each after one space.
fn eol_comments<'a>(
    w: &mut Writer,
    parts: &mut std::iter::Peekable<impl Iterator<Item = &'a Node>>,
) {
    while let Some(comment) = parts.next_if(|part| part.kind == Kind::EolComment) {
        w.push(" ");
        w.push(&comment.text);
    }
}

/// The parenthesized test of a loop: `( true )` glued to the keyword for a loop that never
/// tests, else a space and the condition in parentheses.
fn loop_test<P: Printer + ?Sized>(p: &mut P, w: &mut Writer, cond: &Node) {
    if !w.parenthesised_tests() {
        if cond.kind != Kind::Empty {
            w.push(" ");
            p.expr(w, cond);
        }
    } else if is_true(w.style, cond) {
        w.push("( ");
        w.keyword(Keyword::True);
        w.push(" )");
    } else {
        w.push(" (");
        p.expr(w, cond);
        w.push(")");
    }
}

/// [`Printer::statement`]'s default.
pub fn print_statement<P: Printer + ?Sized>(p: &mut P, w: &mut Writer, node: &Node, indent: u32) {
    let step = w.style.indent;
    match node.kind {
        Kind::Decl => p.declaration(w, node),
        Kind::Expr => {
            for child in &node.children {
                p.expr(w, child);
            }
            w.terminator();
        }
        Kind::Return => {
            w.keyword(Keyword::Return);
            for child in &node.children {
                w.push(" ");
                p.expr(w, child);
            }
            w.terminator();
        }
        Kind::Goto => {
            w.keyword(Keyword::Goto);
            w.push(" ");
            w.push(&node.text);
            w.terminator();
        }
        Kind::Break => {
            w.keyword(Keyword::Break);
            w.terminator();
        }
        Kind::Continue => {
            w.keyword(Keyword::Continue);
            w.terminator();
        }
        Kind::If => {
            let mut parts = node.children.iter().peekable();
            loop {
                w.keyword(Keyword::If);
                if w.parenthesised_tests() {
                    w.push(" (");
                } else {
                    w.push(" ");
                }
                if let Some(cond) = parts.next() {
                    p.expr(w, cond);
                }
                if w.parenthesised_tests() {
                    w.push(")");
                }
                eol_comments(w, &mut parts);
                if let Some(then) = parts.next() {
                    match then.kind {
                        Kind::Block => print_braced(p, w, then, w.style.brace_ifelse, indent),
                        Kind::Goto | Kind::Break | Kind::Continue => {
                            w.push(" ");
                            p.statement(w, then, indent);
                        }
                        _ => {
                            w.line(indent + step);
                            p.statement(w, then, indent + step);
                        }
                    }
                }
                eol_comments(w, &mut parts);
                let Some(next) = parts.peek() else {
                    break;
                };
                w.line(indent);
                w.keyword(Keyword::Else);
                if !next.kind.is_statement() {
                    w.push(" ");
                    continue;
                }
                match next.kind {
                    Kind::Block => print_braced(p, w, next, w.style.brace_ifelse, indent),
                    _ => {
                        w.line(indent + step);
                        p.statement(w, next, indent + step);
                    }
                }
                break;
            }
        }
        Kind::While => {
            if let [cond, body] = node.children.as_slice() {
                if cond.kind == Kind::Empty
                    && w.lang.profile().forms.inf_loop == crate::lang::InfLoopForm::RustLoop
                {
                    w.push("loop");
                } else {
                    w.keyword(Keyword::While);
                    loop_test(p, w, cond);
                }
                print_braced(p, w, body, w.style.brace_loop, indent);
            }
        }
        Kind::DoWhile => {
            w.keyword(Keyword::Do);
            if let [body, cond] = node.children.as_slice() {
                print_braced(p, w, body, w.style.brace_loop, indent);
                w.push(" ");
                w.keyword(Keyword::While);
                loop_test(p, w, cond);
                w.terminator();
            }
        }
        Kind::For => {
            w.keyword(Keyword::For);
            let parenthesised = w.parenthesised_tests();
            w.push(if parenthesised { " (" } else { " " });
            if let [init, cond, next, body] = node.children.as_slice() {
                p.expr(w, init);
                w.push("; ");
                p.expr(w, cond);
                w.push("; ");
                p.expr(w, next);
                if parenthesised {
                    w.push(")");
                }
                print_braced(p, w, body, w.style.brace_loop, indent);
            }
        }
        Kind::Switch => {
            w.keyword(Keyword::Switch);
            let parenthesised = w.parenthesised_tests();
            w.push(if parenthesised { "(" } else { " " });
            match node.children.as_slice() {
                [value, body] => {
                    p.expr(w, value);
                    if parenthesised {
                        w.push(")");
                    }
                    open_brace(w, w.style.brace_switch, indent);
                    let arms = w.lang.profile().forms.switch == crate::lang::SwitchForm::RustMatch;
                    let place = Place {
                        indent: indent + if arms { step } else { 2 * step },
                        blank: indent + step,
                    };
                    for item in &body.children {
                        p.item(w, item, place);
                    }
                    w.line(indent);
                    w.push("}");
                }
                [value] => {
                    p.expr(w, value);
                    if parenthesised {
                        w.push(")");
                    }
                    w.terminator();
                }
                _ => {}
            }
        }
        Kind::Arm => {
            if let [pattern, body] = node.children.as_slice() {
                p.expr(w, pattern);
                w.push(" =>");
                if body.children.is_empty() {
                    w.push(" {}");
                } else {
                    print_braced(p, w, body, w.style.brace_switch, indent);
                }
            }
        }
        Kind::Try => {
            w.push("try");
            if let [body, handler] = node.children.as_slice() {
                print_braced(p, w, body, w.style.brace_ifelse, indent);
                w.push(" ");
                w.push(&node.text);
                print_braced(p, w, handler, w.style.brace_ifelse, indent);
            }
        }
        Kind::Block => {
            w.push("{");
            let place = Place::block(indent + step);
            for item in &node.children {
                p.item(w, item, place);
            }
            w.line(indent);
            w.push("}");
        }
        _ => p.expr(w, node),
    }
}

/// [`Printer::expr`]'s default.
pub fn print_expr<P: Printer + ?Sized>(p: &mut P, w: &mut Writer, node: &Node) {
    match node.kind {
        Kind::Paren => {
            w.push("(");
            for child in &node.children {
                p.expr(w, child);
            }
            w.push(")");
        }
        Kind::List => separated(p, w, &node.children, &node.sep),
        Kind::Call => {
            if let Some((callee, arguments)) = node.children.split_first() {
                p.expr(w, callee);
                w.pad(node.spacing);
                w.push(&node.text);
                separated(p, w, arguments, &node.sep);
                w.push(&node.close);
            }
        }
        Kind::Op => {
            let groups = match node.grouped {
                true => node.children.len().saturating_sub(2),
                false => 0,
            };
            w.push(&"(".repeat(groups));
            for (visited, child) in node.children.iter().enumerate() {
                op_token(w, node, visited);
                p.expr(w, child);
                if (1..=groups).contains(&visited) {
                    w.push(")");
                }
            }
            op_token(w, node, node.children.len());
        }
        _ => w.push(&node.text),
    }
}

fn separated<P: Printer + ?Sized>(p: &mut P, w: &mut Writer, nodes: &[Node], sep: &str) {
    for (i, node) in nodes.iter().enumerate() {
        if i > 0 {
            w.push(sep);
        }
        p.expr(w, node);
    }
}

/// What an operator prints when `visited` of its children are printed: the RPN driver's
/// `emit_op`, and for a chain of more than two operands its token before each further one.
fn op_token(w: &mut Writer, node: &Node, visited: usize) {
    match (node.form, visited) {
        (Form::Binary, 1..) if visited < node.children.len() => {
            let closing = visited == 2 && !node.close.is_empty();
            w.pad(node.spacing);
            w.push(if closing { &node.close } else { &node.text });
            w.pad(node.spacing);
        }
        (Form::Prefix, 0) => {
            w.push(&node.text);
            w.pad(node.spacing);
        }
        (Form::Postsurround, 1) => {
            w.pad(node.spacing);
            w.push(&node.text);
        }
        (Form::Postsurround, 2..) => w.push(&node.close),
        (Form::Presurround, 0) => w.push(&node.text),
        (Form::Presurround, 1) => {
            w.push(&node.close);
            w.pad(node.spacing);
        }
        (Form::Space, 1) => w.pad(node.spacing),
        _ => {}
    }
}
