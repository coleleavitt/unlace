//! Builds the exported tree of one function from its tree-capture render, checking every part
//! against the text with the reference printer ([`super::print_c`]).

use std::collections::{BTreeMap, BTreeSet};

use super::printer::print_item_text;
use super::{
    CPrinter, Capture, ExportTree, ExprShape, Form, Kind, LeafKind, Node, Place, Printer, Span,
    Style, Writer, item_column, print_c,
};
use crate::prettyprint::{CaptureMark, EmitToken, SyntaxHighlight, TokenKind};

fn utf16_len(text: &str) -> usize {
    text.encode_utf16().count()
}

/// The byte offset of UTF-16 column `col` in `line`, clamped to its end.
fn byte_at(line: &str, col: usize) -> usize {
    if line.is_ascii() {
        return col.min(line.len());
    }
    let mut units = 0;
    for (at, c) in line.char_indices() {
        if units >= col {
            return at;
        }
        units += c.len_utf16();
    }
    line.len()
}

/// Build the exported tree of one function from its tree-capture render: `tokens` and
/// `capture` (`PrintC::doc_function_capture`), the instruction address of each `opref`, the
/// plain render `untrimmed` and the `code` reported for it (`untrimmed` without its
/// surrounding line breaks). `Err` says why the function has no tree; a tree, when there is
/// one, prints back to `code` exactly ([`print_c`]).
pub fn build(
    tokens: &[EmitToken],
    capture: &Capture,
    op_addresses: &BTreeMap<u64, u64>,
    untrimmed: &str,
    code: &str,
) -> Result<ExportTree, String> {
    if !capture.c_output {
        return Err("the tree is exported for C output only".to_string());
    }
    let builder = Builder::new(tokens, capture, op_addresses, untrimmed, code)?;
    let mut root = builder.function()?;
    builder.statement_addresses(&mut root);
    let tree = ExportTree {
        style: capture.style,
        root,
    };
    let printed = print_c(&tree);
    if printed != code {
        let line = printed
            .lines()
            .zip(code.lines())
            .position(|(a, b)| a != b)
            .unwrap_or(printed.lines().count().min(code.lines().count()))
            + 1;
        return Err(format!(
            "the tree does not print back to the text (first difference on line {line})"
        ));
    }
    Ok(tree)
}

struct Builder<'a> {
    toks: &'a [EmitToken],
    capture: &'a Capture,
    addresses: &'a BTreeMap<u64, u64>,
    lines: Vec<&'a str>,
    /// The 1-based `code` line of each token.
    line_of: Vec<u32>,
    /// The recorded expression nodes under each recorded node, in print order.
    kids: Vec<Vec<u32>>,
    /// The outermost recorded node that starts at a token.
    root_at: BTreeMap<u32, u32>,
    /// Is the token inside a recorded expression?
    in_expr: Vec<bool>,
    /// Was the token printed by the RPN engine itself?
    engine: Vec<bool>,
    /// The end of the statement mark that begins at a token.
    stmt_end: BTreeMap<u32, u32>,
    function_begin: usize,
    style: Style,
}

type Parsed = Option<(Node, usize)>;

impl<'a> Builder<'a> {
    fn new(
        toks: &'a [EmitToken],
        capture: &'a Capture,
        addresses: &'a BTreeMap<u64, u64>,
        untrimmed: &str,
        code: &'a str,
    ) -> Result<Builder<'a>, String> {
        let lines: Vec<&str> = code.split('\n').collect();
        let skip = untrimmed.len() - untrimmed.trim_start_matches('\n').len();
        let mut line_of = Vec::with_capacity(toks.len());
        for tok in toks {
            let line = (tok.line + 1)
                .checked_sub(skip)
                .filter(|line| (1..=lines.len()).contains(line))
                .ok_or_else(|| format!("token {:?} is outside the text", tok.text))?;
            let text = lines[line - 1];
            let (from, to) = (
                byte_at(text, tok.col),
                byte_at(text, tok.col + utf16_len(&tok.text)),
            );
            if text.get(from..to) != Some(tok.text.as_str()) {
                return Err(format!(
                    "token {:?} at {line}:{} is not in the text",
                    tok.text, tok.col
                ));
            }
            line_of.push(u32::try_from(line).map_err(|_| "too many lines".to_string())?);
        }
        let ordered = (1..toks.len()).all(|i| {
            let end = toks[i - 1].col + utf16_len(&toks[i - 1].text);
            (line_of[i - 1], end) <= (line_of[i], toks[i].col)
        });
        if !ordered {
            return Err("the tokens are not in the order of the text".to_string());
        }
        let count = toks.len();
        let mut kids = vec![Vec::new(); capture.exprs.len()];
        let mut root_at = BTreeMap::new();
        let mut in_expr = vec![false; count];
        for (id, expr) in capture.exprs.iter().enumerate() {
            let id = u32::try_from(id).map_err(|_| "too many expressions".to_string())?;
            if expr.first > expr.end || expr.end as usize > count {
                return Err("a recorded expression is outside the tokens".to_string());
            }
            match expr.parent {
                Some(parent) => kids
                    .get_mut(parent as usize)
                    .ok_or("a recorded expression names no parent")?
                    .push(id),
                None if expr.first < expr.end => {
                    root_at.entry(expr.first).or_insert(id);
                    for flag in &mut in_expr[expr.first as usize..expr.end as usize] {
                        *flag = true;
                    }
                }
                None => {}
            }
        }
        let mut engine = vec![false; count];
        for &(first, end) in &capture.engine_tokens {
            for flag in engine
                .get_mut(first as usize..(end as usize).min(count))
                .unwrap_or_default()
            {
                *flag = true;
            }
        }
        let mut stmt_end = BTreeMap::new();
        let mut open = Vec::new();
        let mut function_begin = 0;
        for mark in &capture.marks {
            match *mark {
                CaptureMark::FunctionBegin(at) => function_begin = at.min(count),
                CaptureMark::StatementBegin(at, _) => open.push(at),
                CaptureMark::StatementEnd(at) => {
                    if let Some(begin) = open.pop()
                        && open.is_empty()
                        && begin < at
                        && at <= count
                    {
                        stmt_end.entry(begin as u32).or_insert(at as u32);
                    }
                }
            }
        }
        Ok(Builder {
            toks,
            capture,
            addresses,
            lines,
            line_of,
            kids,
            root_at,
            in_expr,
            engine,
            stmt_end,
            function_begin,
            style: capture.style,
        })
    }

    // --- text ---------------------------------------------------------------------------------

    fn end_col(&self, i: usize) -> usize {
        self.toks[i].col + utf16_len(&self.toks[i].text)
    }

    /// The text of `code` from the start of token `a` to the end of token `b - 1`.
    fn text(&self, a: usize, b: usize) -> String {
        if a >= b {
            return String::new();
        }
        let (first, last) = (self.line_of[a] as usize, self.line_of[b - 1] as usize);
        let head = self.lines[first - 1];
        let from = byte_at(head, self.toks[a].col);
        if first == last {
            return head[from..byte_at(head, self.end_col(b - 1))].to_string();
        }
        let mut out = head[from..].to_string();
        for line in &self.lines[first..last - 1] {
            out.push('\n');
            out.push_str(line);
        }
        let tail = self.lines[last - 1];
        out.push('\n');
        out.push_str(&tail[..byte_at(tail, self.end_col(b - 1))]);
        out
    }

    /// Where the tokens `a..b` are in `code`; no span for no tokens.
    fn span(&self, a: usize, b: usize) -> Span {
        if a >= b {
            return Span::default();
        }
        Span {
            line: self.line_of[a],
            col: self.toks[a].col as u32,
            end_line: self.line_of[b - 1],
            end_col: self.end_col(b - 1) as u32,
        }
    }

    /// The tokens a span covers: tokens are in text order.
    fn tokens_of(&self, span: &Span) -> (usize, usize) {
        let before = |line: u32, col: u32| {
            let (mut low, mut high) = (0, self.toks.len());
            while low < high {
                let mid = low + (high - low) / 2;
                if (self.line_of[mid], self.toks[mid].col as u32) < (line, col) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }
            low
        };
        (
            before(span.line, span.col),
            before(span.end_line, span.end_col),
        )
    }

    fn node(&self, kind: Kind, a: usize, b: usize) -> Node {
        Node {
            kind,
            span: self.span(a, b),
            ..Node::default()
        }
    }

    fn leaf(&self, kind: Kind, a: usize, b: usize) -> Node {
        Node {
            text: self.text(a, b),
            ..self.node(kind, a, b)
        }
    }

    fn printed(&self, print: impl FnOnce(&mut CPrinter, &mut Writer)) -> String {
        let mut w = Writer::new(&self.style);
        print(&mut CPrinter, &mut w);
        w.out
    }

    // --- tokens -------------------------------------------------------------------------------

    fn loose(&self, i: usize) -> bool {
        !self.in_expr[i]
    }

    /// Is token `i` the punctuation or operator `text`, outside every recorded expression?
    fn sym(&self, i: usize, text: &str) -> bool {
        self.toks.get(i).is_some_and(|tok| {
            self.loose(i)
                && tok.text == text
                && matches!(tok.kind, TokenKind::Syntax | TokenKind::Op)
        })
    }

    /// Is token `i` the keyword `text`?
    fn kw(&self, i: usize, text: &str) -> bool {
        self.toks.get(i).is_some_and(|tok| {
            self.loose(i) && tok.text == text && tok.color == SyntaxHighlight::KeywordColor
        })
    }

    fn first_on_line(&self, i: usize) -> bool {
        i == 0 || self.line_of[i - 1] != self.line_of[i]
    }

    /// Is token `i` a comment one space behind the token before it on its line?
    fn eol_comment(&self, i: usize) -> bool {
        i > 0
            && self.toks[i].kind == TokenKind::Comment
            && self.line_of[i] == self.line_of[i - 1]
            && self.toks[i].col == self.end_col(i - 1) + 1
    }

    /// The token that closes the bracket opened at `open`, before `limit`.
    fn close_of(&self, open: usize, limit: usize, opener: &str, closer: &str) -> Option<usize> {
        let mut depth = 0usize;
        for i in open..limit {
            if self.sym(i, opener) {
                depth += 1;
            } else if self.sym(i, closer) {
                depth = depth.checked_sub(1)?;
                if depth == 0 {
                    return Some(i);
                }
            }
        }
        None
    }

    // --- expressions --------------------------------------------------------------------------

    /// The expression printed by the tokens `a..b`: typed when it parses and prints back to
    /// those tokens' text, else that text.
    fn expr(&self, a: usize, b: usize) -> Node {
        if a >= b {
            return self.node(Kind::Empty, a, a);
        }
        let mut at = a;
        let parsed = self.sequence(&mut at, b).filter(|_| at == b);
        match parsed {
            Some(node) => self.checked(node),
            None => self.leaf(Kind::Raw, a, b),
        }
    }

    /// Expressions the printer separates with commas outside the RPN driver: the statements a
    /// condition runs before its test.
    fn sequence(&self, at: &mut usize, limit: usize) -> Option<Node> {
        let first = *at;
        let mut parts = vec![self.binary(at, limit, 0)?];
        while *at < limit && self.sym(*at, ",") {
            *at += 1;
            parts.push(self.binary(at, limit, 0)?);
        }
        if parts.len() == 1 {
            return parts.pop();
        }
        Some(Node {
            sep: ", ".to_string(),
            children: parts,
            ..self.node(Kind::List, first, *at)
        })
    }

    /// `node` when it prints back to its text; else its children checked the same way, and
    /// the node as raw text when that is still not enough.
    fn checked(&self, mut node: Node) -> Node {
        let (a, b) = self.tokens_of(&node.span);
        let text = self.text(a, b);
        if self.printed(|p, w| p.expr(w, &node)) == text {
            return node;
        }
        if node.children.is_empty() {
            return self.leaf(Kind::Raw, a, b);
        }
        node.children = std::mem::take(&mut node.children)
            .into_iter()
            .map(|child| self.checked(child))
            .collect();
        if self.printed(|p, w| p.expr(w, &node)) == text {
            node
        } else {
            self.leaf(Kind::Raw, a, b)
        }
    }

    /// The instruction address of the op token `i` was printed for.
    fn token_address(&self, i: usize) -> Option<u64> {
        self.addresses.get(&self.toks[i].opref?).copied()
    }

    fn loose_op(&self, i: usize, limit: usize) -> Option<&str> {
        (i < limit && self.loose(i) && self.toks[i].kind == TokenKind::Op)
            .then(|| self.toks[i].text.as_str())
    }

    /// The operators the printer writes between expressions outside the RPN driver: `=`,
    /// `?:`, `||`, `&&`, loosest first.
    fn binary(&self, at: &mut usize, limit: usize, min: u32) -> Option<Node> {
        let first = *at;
        let mut left = self.unary(at, limit)?;
        while let Some(op) = self.loose_op(*at, limit) {
            let (level, name) = match op {
                "=" => (1, "assign"),
                "?" => (2, "cond"),
                "||" => (3, "or"),
                "&&" => (4, "and"),
                _ => break,
            };
            if level < min {
                break;
            }
            let token = op.to_string();
            let addresses = self.token_address(*at).into_iter().collect();
            *at += 1;
            let mut children = vec![left];
            let mut close = String::new();
            if level == 2 {
                children.push(self.binary(at, limit, 2)?);
                if self.loose_op(*at, limit) != Some(":") {
                    return None;
                }
                close.push(':');
                *at += 1;
            }
            children.push(self.binary(at, limit, if level <= 2 { level } else { level + 1 })?);
            left = Node {
                close,
                addresses,
                span: self.span(first, *at),
                ..Node::op(name, Form::Binary, &token, 1, children)
            };
        }
        Some(left)
    }

    fn unary(&self, at: &mut usize, limit: usize) -> Option<Node> {
        if self.loose_op(*at, limit) == Some("!") {
            let first = *at;
            *at += 1;
            let operand = self.unary(at, limit)?;
            return Some(Node {
                addresses: self.token_address(first).into_iter().collect(),
                span: self.span(first, *at),
                ..Node::op("not", Form::Prefix, "!", 0, vec![operand])
            });
        }
        self.primary(at, limit)
    }

    fn primary(&self, at: &mut usize, limit: usize) -> Option<Node> {
        let i = *at;
        if i >= limit {
            return None;
        }
        if let Some(&id) = self.root_at.get(&(i as u32)) {
            let end = self.capture.exprs[id as usize].end as usize;
            if end > limit {
                return None;
            }
            *at = end;
            return Some(self.recorded(id));
        }
        if !self.loose(i) {
            return None;
        }
        if self.sym(i, "(") {
            let close = self.close_of(i, limit, "(", ")")?;
            let mut inner_at = i + 1;
            let inner = self
                .sequence(&mut inner_at, close)
                .filter(|_| inner_at == close)?;
            *at = close + 1;
            return Some(Node {
                children: vec![inner],
                ..self.node(Kind::Paren, i, close + 1)
            });
        }
        if self.toks[i].kind == TokenKind::FuncName && self.sym(i + 1, "(") {
            let close = self.close_of(i + 1, limit, "(", ")")?;
            let mut children = vec![self.leaf(Kind::Func, i, i + 1)];
            let mut inner_at = i + 2;
            while inner_at < close {
                children.push(self.binary(&mut inner_at, close, 0)?);
                if inner_at < close {
                    if !self.sym(inner_at, ",") {
                        return None;
                    }
                    inner_at += 1;
                }
            }
            *at = close + 1;
            return Some(Node {
                text: "(".to_string(),
                close: ")".to_string(),
                sep: ",".to_string(),
                children,
                ..self.node(Kind::Call, i, close + 1)
            });
        }
        let kind = match self.toks[i].kind {
            TokenKind::Value => Kind::Const,
            TokenKind::Variable => Kind::Var,
            TokenKind::FuncName => Kind::Func,
            TokenKind::Type => Kind::Type,
            TokenKind::Field => Kind::Field,
            _ => return None,
        };
        *at = i + 1;
        Some(self.leaf(kind, i, i + 1))
    }

    /// The node the RPN driver recorded as `id`, with the nodes under it. A leaf's text is the
    /// atom's own, which keeps the spaces the token capture trims, unless the emitter
    /// respelled the name: then it is the spelling that was printed. An operator is kept as
    /// raw text when its operands are not the ones its token takes, or when it covers a token
    /// that neither an operand nor the RPN engine printed: the routine that pushed it wrote
    /// that token straight to the emitter.
    fn recorded(&self, id: u32) -> Node {
        let expr = &self.capture.exprs[id as usize];
        let (first, end) = (expr.first as usize, expr.end as usize);
        let address = expr.op.and_then(|op| self.addresses.get(&op)).copied();
        let (name, form, open, close, spacing, operands) = match &expr.shape {
            ExprShape::Leaf(kind, text) => {
                let kind = match kind {
                    _ if text.is_empty() => Kind::Empty,
                    LeafKind::Var => Kind::Var,
                    LeafKind::Const => Kind::Const,
                    LeafKind::Func => Kind::Func,
                    LeafKind::Type => Kind::Type,
                    LeafKind::Field => Kind::Field,
                    LeafKind::Text | LeafKind::Empty => Kind::Text,
                };
                let printed = self.text(first, end);
                let text = if text.trim() == printed {
                    text.clone()
                } else {
                    printed
                };
                return Node {
                    text,
                    ty: expr.ty.clone(),
                    addresses: address.into_iter().collect(),
                    ..self.node(kind, first, end)
                };
            }
            ExprShape::Op {
                name,
                form,
                open,
                close,
                spacing,
                operands,
            } => (*name, *form, *open, *close, *spacing, *operands),
        };
        let kids = &self.kids[id as usize];
        let mut own = vec![true; end - first];
        let mut nested = true;
        for &kid in kids {
            let kid = &self.capture.exprs[kid as usize];
            match own.get_mut(
                (kid.first as usize).wrapping_sub(first)..(kid.end as usize).wrapping_sub(first),
            ) {
                Some(covered) => covered.fill(false),
                None => nested = false,
            }
        }
        let foreign = own
            .iter()
            .enumerate()
            .any(|(at, own)| *own && !self.engine[first + at]);
        if !nested || foreign || kids.len() != operands as usize {
            return self.leaf(Kind::Raw, first, end);
        }
        let mut children: Vec<Node> = kids.iter().map(|&kid| self.recorded(kid)).collect();
        let (inner_first, inner_end) = if expr.paren {
            (first + 1, end.saturating_sub(1))
        } else {
            (first, end)
        };
        let mut node = match form {
            Form::Hidden => match children.pop() {
                Some(only) => only,
                None => self.node(Kind::Empty, inner_first, inner_first),
            },
            _ => Node {
                close: close.to_string(),
                ty: expr.ty.clone(),
                addresses: address.into_iter().collect(),
                span: self.span(inner_first, inner_end),
                ..Node::op(name, form, open, spacing, children)
            },
        };
        if node.kind == Kind::Op && node.name == "call" && node.form == Form::Postsurround {
            node = call(node);
        }
        if expr.paren {
            node = Node {
                children: vec![node],
                ..self.node(Kind::Paren, first, end)
            };
        }
        node
    }

    // --- statements ---------------------------------------------------------------------------

    fn function(&self) -> Result<Node, String> {
        let count = self.toks.len();
        let proto = (self.function_begin..count)
            .find(|&i| self.toks[i].in_proto)
            .ok_or("no prototype")?;
        let mut body = proto;
        while body < count && self.toks[body].in_proto {
            body += 1;
        }
        if !self.first_on_line(proto) || self.toks[proto].col != 0 {
            return Err("the prototype does not start its line".to_string());
        }
        if self.line_of[proto] != self.line_of[body - 1] {
            return Err("the prototype is not on one line".to_string());
        }
        let mut children = Vec::new();
        let mut prev_line = 0;
        let mut i = 0;
        while i < proto {
            if !self.first_on_line(i) {
                return Err("the text above the prototype does not parse into lines".to_string());
            }
            self.blank_lines(&mut children, prev_line, self.line_of[i], 0);
            let comment = self.toks[i].kind == TokenKind::Comment
                && self.toks[i].col == 0
                && (i + 1 == count || self.line_of[i + 1] != self.line_of[i]);
            let (node, next) = if comment && i >= self.function_begin {
                (self.leaf(Kind::Comment, i, i + 1), i + 1)
            } else {
                self.raw_lines(i, proto)
            };
            prev_line = self.line_of[next - 1];
            children.push(node);
            i = next;
        }
        self.blank_lines(&mut children, prev_line, self.line_of[proto], 0);
        children.push(self.prototype(proto, body));
        let mut i = body;
        while i < count && self.eol_comment(i) {
            children.push(self.leaf(Kind::EolComment, i, i + 1));
            i += 1;
        }
        if !self.sym(i, "{")
            || !self.sym(count - 1, "}")
            || self.close_of(i, count, "{", "}") != Some(count - 1)
        {
            return Err("the function body is not one brace pair".to_string());
        }
        let place = Place::block(self.style.indent);
        let items = self.items(i + 1, count - 1, place, self.line_of[i]);
        children.push(Node {
            children: items,
            ..self.node(Kind::Block, i, count)
        });
        Ok(Node {
            children,
            ..self.node(Kind::Function, self.function_begin.min(proto), count)
        })
    }

    fn prototype(&self, a: usize, b: usize) -> Node {
        let mut children = Vec::new();
        let returns: Vec<usize> = (a..b).filter(|&i| self.toks[i].in_return_type).collect();
        if let (Some(&first), Some(&last)) = (returns.first(), returns.last()) {
            children.push(self.leaf(Kind::Type, first, last + 1));
        }
        let name = (a..b).find(|&i| self.toks[i].kind == TokenKind::FuncName);
        if let Some(name) = name {
            children.push(self.leaf(Kind::Func, name, name + 1));
            if let Some(close) = self.close_of(name + 1, b, "(", ")") {
                let mut start = name + 2;
                let mut depth = 0usize;
                for i in name + 2..=close {
                    let split = i == close || (depth == 0 && self.sym(i, ","));
                    if self.sym(i, "(") {
                        depth += 1;
                    } else if self.sym(i, ")") && i != close {
                        depth = depth.saturating_sub(1);
                    }
                    if split {
                        if let Some(param) = self.declaration(start, i) {
                            children.push(param);
                        }
                        start = i + 1;
                    }
                }
            }
        }
        Node {
            children,
            ..self.leaf(Kind::Prototype, a, b)
        }
    }

    /// The declaration printed by the tokens `a..b`: its text, its type tokens and its
    /// variable; its declared type is the declarator without the identifier. `None` when the
    /// tokens name no variable (the `void` of an empty parameter list).
    fn declaration(&self, a: usize, b: usize) -> Option<Node> {
        let var = (a..b).find(|&i| self.toks[i].kind == TokenKind::Variable)?;
        let children = (a..b)
            .filter(|&i| i == var || self.toks[i].kind == TokenKind::Type)
            .map(|i| {
                let kind = if i == var { Kind::Var } else { Kind::Type };
                self.leaf(kind, i, i + 1)
            })
            .collect();
        let (before, after) = (self.text(a, var), self.text(var + 1, b));
        let glued = var > a && self.toks[var].col == self.end_col(var - 1);
        let ty = match (glued, after.is_empty()) {
            (_, true) => before,
            (true, false) => format!("{before}{after}"),
            (false, false) => {
                let gap = self.toks[var + 1].col.saturating_sub(self.end_col(var));
                format!("{before}{}{after}", " ".repeat(gap.max(1)))
            }
        };
        Some(Node {
            ty: Some(ty),
            children,
            ..self.leaf(Kind::Decl, a, b)
        })
    }

    /// The lines `from + 1 .. to`, which hold no token: blank lines at `indent`, anything
    /// else as raw text.
    fn blank_lines(&self, out: &mut Vec<Node>, from: u32, to: u32, indent: u32) {
        for line in from + 1..to {
            let text = self.lines[line as usize - 1];
            let blank = text.len() == indent as usize && text.bytes().all(|b| b == b' ');
            out.push(Node {
                kind: if blank { Kind::BlankLine } else { Kind::Raw },
                text: if blank {
                    String::new()
                } else {
                    text.to_string()
                },
                span: Span {
                    line,
                    col: 0,
                    end_line: line,
                    end_col: utf16_len(text) as u32,
                },
                ..Node::default()
            });
        }
    }

    /// The items printed by the tokens `i..end` (the inside of a brace pair opened on line
    /// `prev_line`), each typed when it parses, sits where its kind is printed and prints back
    /// to its text, else kept as the raw lines it covers. An item that does not end its line
    /// (a token follows it that is not a comment) is taken back and kept as raw lines too.
    fn items(&self, mut i: usize, end: usize, place: Place, mut prev_line: u32) -> Vec<Node> {
        let mut out: Vec<Node> = Vec::new();
        let mut last_item = None;
        while i < end {
            let line = self.line_of[i];
            if !self.first_on_line(i) {
                if self.eol_comment(i) {
                    out.push(self.leaf(Kind::EolComment, i, i + 1));
                    i += 1;
                    continue;
                }
                let Some((start, kept)) = last_item.take() else {
                    break;
                };
                out.truncate(kept);
                let (node, next) = self.raw_lines(start, end);
                prev_line = self.line_of[next - 1];
                out.push(node);
                i = next;
                continue;
            }
            self.blank_lines(&mut out, prev_line, line, place.blank);
            let parsed = self.item(i, end, place).filter(|(node, next)| {
                self.toks[i].col as u32 == item_column(&self.style, node.kind, place)
                    && self.printed(|p, w| print_item_text(p, w, node, self.toks[i].col as u32))
                        == self.text(i, *next)
            });
            let (node, next) = parsed.unwrap_or_else(|| self.raw_lines(i, end));
            last_item = Some((i, out.len()));
            prev_line = self.line_of[next - 1];
            out.push(node);
            i = next;
        }
        if let Some(&close_line) = self.line_of.get(end) {
            self.blank_lines(&mut out, prev_line, close_line, place.blank);
        }
        out
    }

    /// The whole lines from token `i` (the first of its line) through the end of the line the
    /// brace pairs opened on the way are closed on, as raw text.
    fn raw_lines(&self, i: usize, end: usize) -> (Node, usize) {
        let mut j = i;
        let mut depth = 0usize;
        let mut line = self.line_of[i];
        while j < end {
            if self.line_of[j] != line {
                if depth == 0 {
                    break;
                }
                line = self.line_of[j];
            }
            if self.sym(j, "{") {
                depth += 1;
            } else if self.sym(j, "}") {
                depth = depth.saturating_sub(1);
            }
            j += 1;
        }
        (self.raw_span(i, j.max(i + 1)), j.max(i + 1))
    }

    /// Tokens `a..b` as raw text that starts with the indentation of its first line.
    fn raw_span(&self, a: usize, b: usize) -> Node {
        let head = self.lines[self.line_of[a] as usize - 1];
        let mut text = head[..byte_at(head, self.toks[a].col)].to_string();
        text.push_str(&self.text(a, b));
        Node {
            text,
            ..self.node(Kind::Raw, a, b)
        }
    }

    /// The item that starts at token `i`: a comment line, a declaration (flagged by the
    /// emitter, or the `va_list ap;` the printer writes with no variable behind it), a
    /// statement opened by its keyword, a `case` or `default` label, an empty statement, a
    /// statement the emitter bracketed, or a label line.
    fn item(&self, i: usize, end: usize, place: Place) -> Parsed {
        let tok = &self.toks[i];
        let indent = place.indent;
        if tok.kind == TokenKind::Comment {
            return Some((self.leaf(Kind::Comment, i, i + 1), i + 1));
        }
        if tok.in_var_decl {
            let mut j = i;
            while j < end && self.toks[j].in_var_decl {
                j += 1;
            }
            let decl = self.declaration(i, j).filter(|_| self.sym(j, ";"))?;
            return Some((
                Node {
                    span: self.span(i, j + 1),
                    ..decl
                },
                j + 1,
            ));
        }
        if self.kw(i, "if") {
            return self.if_statement(i, end, indent);
        }
        if self.kw(i, "while") {
            let close = self
                .close_of(i + 1, end, "(", ")")
                .filter(|_| self.sym(i + 1, "("))?;
            let cond = self.expr(i + 2, close);
            let (body, next) = self.block(close + 1, end, indent)?;
            return Some((
                Node {
                    children: vec![cond, body],
                    ..self.node(Kind::While, i, next)
                },
                next,
            ));
        }
        if self.kw(i, "do") {
            let (body, at) = self.block(i + 1, end, indent)?;
            let close = self
                .close_of(at + 1, end, "(", ")")
                .filter(|_| self.kw(at, "while") && self.sym(at + 1, "("))?;
            if !self.sym(close + 1, ";") {
                return None;
            }
            let cond = self.expr(at + 2, close);
            return Some((
                Node {
                    children: vec![body, cond],
                    ..self.node(Kind::DoWhile, i, close + 2)
                },
                close + 2,
            ));
        }
        if self.kw(i, "for") {
            let close = self
                .close_of(i + 1, end, "(", ")")
                .filter(|_| self.sym(i + 1, "("))?;
            let semis: Vec<usize> = (i + 2..close).filter(|&k| self.sym(k, ";")).collect();
            let [first, second] = semis.as_slice() else {
                return None;
            };
            let init = self.expr(i + 2, *first);
            let cond = self.expr(first + 1, *second);
            let step = self.expr(second + 1, close);
            let (body, next) = self.block(close + 1, end, indent)?;
            return Some((
                Node {
                    children: vec![init, cond, step, body],
                    ..self.node(Kind::For, i, next)
                },
                next,
            ));
        }
        if self.kw(i, "switch") {
            let close = self
                .close_of(i + 1, end, "(", ")")
                .filter(|_| self.sym(i + 1, "("))?;
            let value = self.expr(i + 2, close);
            if self.sym(close + 1, ";") {
                return Some((
                    Node {
                        children: vec![value],
                        ..self.node(Kind::Switch, i, close + 2)
                    },
                    close + 2,
                ));
            }
            let open = close + 1;
            let last = self
                .close_of(open, end, "{", "}")
                .filter(|_| self.sym(open, "{"))?;
            let step = self.style.indent;
            let inside = Place {
                indent: indent + 2 * step,
                blank: indent + step,
            };
            let body = Node {
                children: self.items(open + 1, last, inside, self.line_of[open]),
                ..self.node(Kind::Block, open, last + 1)
            };
            return Some((
                Node {
                    children: vec![value, body],
                    ..self.node(Kind::Switch, i, last + 1)
                },
                last + 1,
            ));
        }
        if self.kw(i, "try") {
            let (body, at) = self.block(i + 1, end, indent)?;
            let header = at < end
                && self.loose(at)
                && self.toks[at].color == SyntaxHighlight::KeywordColor
                && self.line_of[at] == self.line_of[at - 1];
            let (handler, next) = self.block(at + 1, end, indent).filter(|_| header)?;
            return Some((
                Node {
                    text: self.toks[at].text.clone(),
                    children: vec![body, handler],
                    ..self.node(Kind::Try, i, next)
                },
                next,
            ));
        }
        if self.kw(i, "case") {
            let colon = (i + 1..end)
                .take_while(|&k| self.line_of[k] == self.line_of[i])
                .find(|&k| self.sym(k, ":"))?;
            return Some((
                Node {
                    children: vec![self.expr(i + 1, colon)],
                    ..self.node(Kind::Case, i, colon + 1)
                },
                colon + 1,
            ));
        }
        if self.kw(i, "default") && self.sym(i + 1, ":") {
            return Some((self.node(Kind::Default, i, i + 2), i + 2));
        }
        if self.sym(i, ";") {
            return Some((self.node(Kind::Expr, i, i + 1), i + 1));
        }
        if let Some(&mark) = self.stmt_end.get(&(i as u32)) {
            return self.simple(i, mark as usize, end);
        }
        if tok.color == SyntaxHighlight::TypeColor
            && i + 2 < end
            && self.toks[i + 1].color == SyntaxHighlight::VarColor
            && self.sym(i + 2, ";")
            && self.line_of[i + 2] == self.line_of[i]
        {
            return Some((
                Node {
                    ty: Some(tok.text.clone()),
                    children: vec![
                        self.leaf(Kind::Type, i, i + 1),
                        self.leaf(Kind::Var, i + 1, i + 2),
                    ],
                    span: self.span(i, i + 3),
                    ..self.leaf(Kind::Decl, i, i + 2)
                },
                i + 3,
            ));
        }
        if self.loose(i)
            && matches!(tok.kind, TokenKind::Syntax | TokenKind::Label)
            && self.sym(i + 1, ":")
            && i + 1 < end
            && self.line_of[i + 1] == self.line_of[i]
        {
            return Some((
                Node {
                    span: self.span(i, i + 2),
                    ..self.leaf(Kind::Label, i, i + 1)
                },
                i + 2,
            ));
        }
        None
    }

    /// A statement the printer bracketed as one (the mark `i..mark`): a jump, a `return` or an
    /// expression statement.
    fn simple(&self, i: usize, mark: usize, end: usize) -> Parsed {
        for (keyword, kind) in [("break", Kind::Break), ("continue", Kind::Continue)] {
            if self.kw(i, keyword) && mark == i + 2 && self.sym(i + 1, ";") {
                return Some((self.node(kind, i, mark), mark));
            }
        }
        if self.kw(i, "goto") && mark == i + 3 && self.sym(i + 2, ";") {
            return Some((
                Node {
                    span: self.span(i, mark),
                    ..self.leaf(Kind::Goto, i + 1, i + 2)
                },
                mark,
            ));
        }
        if mark >= end || !self.sym(mark, ";") {
            return None;
        }
        let (kind, from) = if self.kw(i, "return") {
            (Kind::Return, i + 1)
        } else {
            (Kind::Expr, i)
        };
        let children = if from < mark {
            vec![self.expr(from, mark)]
        } else {
            Vec::new()
        };
        Some((
            Node {
                children,
                ..self.node(kind, i, mark + 1)
            },
            mark + 1,
        ))
    }

    /// The braces opened at token `open` and the items between them, a level deeper than
    /// `indent`.
    fn block(&self, open: usize, end: usize, indent: u32) -> Parsed {
        let close = self
            .close_of(open, end, "{", "}")
            .filter(|_| self.sym(open, "{"))?;
        let inside = Place::block(indent + self.style.indent);
        Some((
            Node {
                children: self.items(open + 1, close, inside, self.line_of[open]),
                ..self.node(Kind::Block, open, close + 1)
            },
            close + 1,
        ))
    }

    /// The `if` at token `i`: its condition, the comments behind it, the then arm, the `else`
    /// arm if any. Comments at the end of the then arm's last line are the `if`'s when an
    /// `else` follows; otherwise they stay items of the block.
    fn if_statement(&self, i: usize, end: usize, indent: u32) -> Parsed {
        let close = self
            .close_of(i + 1, end, "(", ")")
            .filter(|_| self.sym(i + 1, "("))?;
        let mut children = vec![self.expr(i + 2, close)];
        let mut at = close + 1;
        while at < end && self.eol_comment(at) {
            children.push(self.leaf(Kind::EolComment, at, at + 1));
            at += 1;
        }
        let (body, next) = self.arm(at, end, indent)?;
        children.push(body);
        at = next;
        let mut after = at;
        while after < end && self.eol_comment(after) {
            after += 1;
        }
        if after > at && self.kw(after, "else") && self.first_on_line(after) {
            children.extend((at..after).map(|i| self.leaf(Kind::EolComment, i, i + 1)));
            at = after;
        }
        if at < end && self.kw(at, "else") && self.first_on_line(at) {
            let chained = self.kw(at + 1, "if") && self.line_of[at + 1] == self.line_of[at];
            let (els, next) = if chained {
                self.if_statement(at + 1, end, indent)?
            } else {
                self.arm(at + 1, end, indent)?
            };
            children.push(els);
            at = next;
        }
        Some((
            Node {
                children,
                ..self.node(Kind::If, i, at)
            },
            at,
        ))
    }

    /// One arm of an `if` that starts at token `at`: a block, or one statement without braces.
    fn arm(&self, at: usize, end: usize, indent: u32) -> Parsed {
        if at >= end {
            return None;
        }
        if self.sym(at, "{") {
            return self.block(at, end, indent);
        }
        let place = Place::block(indent + self.style.indent);
        self.item(at, end, place)
            .filter(|(node, _)| node.kind.is_statement())
    }

    // --- addresses ----------------------------------------------------------------------------

    /// Give every statement under `node` the instruction addresses of the ops its tokens were
    /// printed for.
    fn statement_addresses(&self, node: &mut Node) {
        if node.kind.is_statement() || node.kind == Kind::Raw {
            let (a, b) = self.tokens_of(&node.span);
            let found: BTreeSet<u64> = (a..b).filter_map(|i| self.token_address(i)).collect();
            node.addresses = found.into_iter().collect();
        }
        for child in &mut node.children {
            self.statement_addresses(child);
        }
    }
}

/// A recorded call as a `call` node: the callee, then the arguments its comma operators
/// separate, in order.
fn call(node: Node) -> Node {
    let Node {
        text,
        close,
        spacing,
        ty,
        span,
        addresses,
        mut children,
        ..
    } = node;
    let arguments = children.pop();
    let mut flat = children;
    let mut sep = String::from(",");
    let mut pending = Vec::new();
    pending.extend(arguments);
    while let Some(argument) = pending.pop() {
        let comma = argument.kind == Kind::Op
            && argument.name == "comma"
            && argument.form == Form::Binary
            && argument.children.len() == 2;
        if comma {
            let pad = " ".repeat(argument.spacing as usize);
            sep = format!("{pad}{}{pad}", argument.text);
            pending.extend(argument.children.into_iter().rev());
        } else if argument.kind != Kind::Empty {
            flat.push(argument);
        }
    }
    Node {
        kind: Kind::Call,
        text,
        close,
        sep,
        spacing,
        ty,
        span,
        addresses,
        children: flat,
        ..Node::default()
    }
}
