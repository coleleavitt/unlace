//! Expression tree and parser for printer-emitted C expressions.
//!
//! The tree keeps parentheses as explicit [`Expr::Paren`] nodes and cast types
//! as source text, so printing an unmodified tree reproduces its input.

use super::lex::{Tok, TokKind, lex};

#[derive(Clone, Debug, PartialEq, Eq)]
pub(super) enum Expr {
    /// Identifier or literal, verbatim.
    Atom(String),
    Paren(Box<Expr>),
    Cast {
        ty: String,
        expr: Box<Expr>,
    },
    Prefix {
        op: PrefixOp,
        expr: Box<Expr>,
    },
    Postfix {
        op: IncDec,
        expr: Box<Expr>,
    },
    Call {
        callee: Box<Expr>,
        args: Vec<Expr>,
    },
    Index {
        base: Box<Expr>,
        index: Box<Expr>,
    },
    Member {
        base: Box<Expr>,
        arrow: bool,
        field: String,
    },
    Binary {
        op: BinOp,
        lhs: Box<Expr>,
        rhs: Box<Expr>,
    },
    Ternary {
        cond: Box<Expr>,
        then: Box<Expr>,
        els: Box<Expr>,
    },
    /// `lhs = rhs`, or `lhs op= rhs` when `op` is set.
    Assign {
        op: Option<BinOp>,
        lhs: Box<Expr>,
        rhs: Box<Expr>,
    },
    Comma {
        lhs: Box<Expr>,
        rhs: Box<Expr>,
    },
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum PrefixOp {
    Not,
    BitNot,
    Neg,
    Plus,
    Deref,
    AddrOf,
    Inc,
    Dec,
}

impl PrefixOp {
    pub(super) fn token(self) -> &'static str {
        match self {
            PrefixOp::Not => "!",
            PrefixOp::BitNot => "~",
            PrefixOp::Neg => "-",
            PrefixOp::Plus => "+",
            PrefixOp::Deref => "*",
            PrefixOp::AddrOf => "&",
            PrefixOp::Inc => "++",
            PrefixOp::Dec => "--",
        }
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum IncDec {
    Inc,
    Dec,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum BinOp {
    Mul,
    Div,
    Rem,
    Add,
    Sub,
    Shl,
    Shr,
    Lt,
    Le,
    Gt,
    Ge,
    Eq,
    Ne,
    BitAnd,
    BitXor,
    BitOr,
    LogAnd,
    LogOr,
}

impl BinOp {
    const ALL: [BinOp; 18] = [
        BinOp::Mul,
        BinOp::Div,
        BinOp::Rem,
        BinOp::Add,
        BinOp::Sub,
        BinOp::Shl,
        BinOp::Shr,
        BinOp::Lt,
        BinOp::Le,
        BinOp::Gt,
        BinOp::Ge,
        BinOp::Eq,
        BinOp::Ne,
        BinOp::BitAnd,
        BinOp::BitXor,
        BinOp::BitOr,
        BinOp::LogAnd,
        BinOp::LogOr,
    ];

    pub(super) fn token(self) -> &'static str {
        match self {
            BinOp::Mul => "*",
            BinOp::Div => "/",
            BinOp::Rem => "%",
            BinOp::Add => "+",
            BinOp::Sub => "-",
            BinOp::Shl => "<<",
            BinOp::Shr => ">>",
            BinOp::Lt => "<",
            BinOp::Le => "<=",
            BinOp::Gt => ">",
            BinOp::Ge => ">=",
            BinOp::Eq => "==",
            BinOp::Ne => "!=",
            BinOp::BitAnd => "&",
            BinOp::BitXor => "^",
            BinOp::BitOr => "|",
            BinOp::LogAnd => "&&",
            BinOp::LogOr => "||",
        }
    }

    /// C binding strength; larger binds tighter.
    fn precedence(self) -> u8 {
        match self {
            BinOp::Mul | BinOp::Div | BinOp::Rem => 10,
            BinOp::Add | BinOp::Sub => 9,
            BinOp::Shl | BinOp::Shr => 8,
            BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge => 7,
            BinOp::Eq | BinOp::Ne => 6,
            BinOp::BitAnd => 5,
            BinOp::BitXor => 4,
            BinOp::BitOr => 3,
            BinOp::LogAnd => 2,
            BinOp::LogOr => 1,
        }
    }

    pub(super) fn is_comparison(self) -> bool {
        matches!(
            self,
            BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge | BinOp::Eq | BinOp::Ne
        )
    }

    /// Has a compound-assignment form (`cot_asgadd` ...).
    pub(super) fn has_compound(self) -> bool {
        matches!(
            self,
            BinOp::Mul
                | BinOp::Div
                | BinOp::Rem
                | BinOp::Add
                | BinOp::Sub
                | BinOp::Shl
                | BinOp::Shr
                | BinOp::BitAnd
                | BinOp::BitXor
                | BinOp::BitOr
        )
    }

    pub(super) fn is_commutative(self) -> bool {
        matches!(
            self,
            BinOp::Mul | BinOp::Add | BinOp::BitAnd | BinOp::BitXor | BinOp::BitOr
        )
    }

    fn from_token(text: &str) -> Option<BinOp> {
        BinOp::ALL.into_iter().find(|op| op.token() == text)
    }

    fn from_compound_token(text: &str) -> Option<BinOp> {
        let base = text.strip_suffix('=')?;
        BinOp::from_token(base).filter(|op| op.has_compound())
    }
}

impl Expr {
    pub(super) fn atom(text: impl Into<String>) -> Expr {
        Expr::Atom(text.into())
    }

    pub(super) fn as_ident(&self) -> Option<&str> {
        match self {
            Expr::Atom(s) if s.starts_with(|c: char| c == '_' || c.is_ascii_alphabetic()) => {
                Some(s)
            }
            _ => None,
        }
    }

    /// Binds at least as tightly as a postfix expression, so it needs no
    /// parentheses as an operand of any operator.
    pub(super) fn is_primary(&self) -> bool {
        matches!(
            self,
            Expr::Atom(_)
                | Expr::Paren(_)
                | Expr::Call { .. }
                | Expr::Index { .. }
                | Expr::Member { .. }
        )
    }

    /// Binds at least as tightly as a unary (prefix/cast) expression.
    pub(super) fn is_unary_tight(&self) -> bool {
        self.is_primary()
            || matches!(
                self,
                Expr::Postfix { .. } | Expr::Prefix { .. } | Expr::Cast { .. }
            )
    }
}

/// Parse a whole expression; `None` unless every token is consumed.
pub(super) fn parse_expr(src: &str) -> Option<Expr> {
    let toks = lex(src)?;
    let mut p = Parser {
        src,
        toks: &toks,
        pos: 0,
    };
    let e = p.comma()?;
    (p.pos == toks.len()).then_some(e)
}

struct Parser<'s, 't> {
    src: &'s str,
    toks: &'t [Tok<'s>],
    pos: usize,
}

impl<'s> Parser<'s, '_> {
    fn peek(&self) -> Option<&Tok<'s>> {
        self.toks.get(self.pos)
    }

    fn peek_at(&self, n: usize) -> Option<&Tok<'s>> {
        self.toks.get(self.pos + n)
    }

    fn eat(&mut self, p: &str) -> bool {
        if self.peek().is_some_and(|t| t.is_punct(p)) {
            self.pos += 1;
            true
        } else {
            false
        }
    }

    fn expect(&mut self, p: &str) -> Option<()> {
        self.eat(p).then_some(())
    }

    fn comma(&mut self) -> Option<Expr> {
        let mut lhs = self.assign()?;
        while self.eat(",") {
            let rhs = self.assign()?;
            lhs = Expr::Comma {
                lhs: Box::new(lhs),
                rhs: Box::new(rhs),
            };
        }
        Some(lhs)
    }

    fn assign(&mut self) -> Option<Expr> {
        let lhs = self.ternary()?;
        let Some(tok) = self.peek().filter(|t| t.kind == TokKind::Punct) else {
            return Some(lhs);
        };
        let op = if tok.text == "=" {
            None
        } else if let Some(op) = BinOp::from_compound_token(tok.text) {
            Some(op)
        } else {
            return Some(lhs);
        };
        self.pos += 1;
        let rhs = self.assign()?;
        Some(Expr::Assign {
            op,
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        })
    }

    fn ternary(&mut self) -> Option<Expr> {
        let cond = self.binary(1)?;
        if !self.eat("?") {
            return Some(cond);
        }
        let then = self.comma()?;
        self.expect(":")?;
        let els = self.ternary()?;
        Some(Expr::Ternary {
            cond: Box::new(cond),
            then: Box::new(then),
            els: Box::new(els),
        })
    }

    fn binary(&mut self, min_prec: u8) -> Option<Expr> {
        let mut lhs = self.unary()?;
        while let Some(op) = self
            .peek()
            .filter(|t| t.kind == TokKind::Punct)
            .and_then(|t| BinOp::from_token(t.text))
            .filter(|op| op.precedence() >= min_prec)
        {
            self.pos += 1;
            let rhs = self.binary(op.precedence() + 1)?;
            lhs = Expr::Binary {
                op,
                lhs: Box::new(lhs),
                rhs: Box::new(rhs),
            };
        }
        Some(lhs)
    }

    fn unary(&mut self) -> Option<Expr> {
        let tok = *self.peek()?;
        if tok.kind == TokKind::Punct {
            let op = match tok.text {
                "!" => Some(PrefixOp::Not),
                "~" => Some(PrefixOp::BitNot),
                "-" => Some(PrefixOp::Neg),
                "+" => Some(PrefixOp::Plus),
                "*" => Some(PrefixOp::Deref),
                "&" => Some(PrefixOp::AddrOf),
                "++" => Some(PrefixOp::Inc),
                "--" => Some(PrefixOp::Dec),
                _ => None,
            };
            if let Some(op) = op {
                self.pos += 1;
                let expr = self.unary()?;
                return Some(Expr::Prefix {
                    op,
                    expr: Box::new(expr),
                });
            }
            if tok.text == "("
                && let Some((ty, close)) = self.cast_type()
            {
                self.pos = close + 1;
                let expr = self.unary()?;
                return Some(Expr::Cast {
                    ty,
                    expr: Box::new(expr),
                });
            }
        }
        self.postfix()
    }

    /// If the `(` at the cursor opens a cast, its type text and the index
    /// of the closing `)`.
    fn cast_type(&self) -> Option<(String, usize)> {
        let open = self.pos;
        let mut i = open + 1;
        let mut specifiers = 0usize;
        while self.toks.get(i)?.kind == TokKind::Ident {
            specifiers += 1;
            i += 1;
        }
        if specifiers == 0 {
            return None;
        }
        let first = self.toks[open + 1].text;
        let mut declarator = false;
        loop {
            let t = self.toks.get(i)?;
            if t.is_punct("*") {
                declarator = true;
                i += 1;
            } else if t.kind == TokKind::Ident && t.text == "const" && declarator {
                i += 1;
            } else {
                break;
            }
        }
        // Abstract function-pointer declarator `(*)(params)` or array `[N]`.
        if self.toks.get(i)?.is_punct("(") && self.toks.get(i + 1)?.is_punct("*") {
            i = self.balanced_end(i)? + 1;
            if !self.toks.get(i)?.is_punct("(") {
                return None;
            }
            i = self.balanced_end(i)? + 1;
            declarator = true;
        } else if self.toks.get(i)?.is_punct("[") {
            i = self.balanced_end(i)? + 1;
            declarator = true;
        }
        let close = self.toks.get(i)?;
        if !close.is_punct(")") {
            return None;
        }
        let is_type = declarator
            || specifiers >= 2
            || is_known_type_name(first)
            || self.toks.get(i + 1).is_some_and(|t| t.starts_operand());
        if !is_type {
            return None;
        }
        let ty = self.src[self.toks[open + 1].start..self.toks[i - 1].end()].to_string();
        Some((ty, i))
    }

    /// Index of the token closing the bracket opened at `open`.
    fn balanced_end(&self, open: usize) -> Option<usize> {
        let mut depth = 0usize;
        for (i, t) in self.toks.iter().enumerate().skip(open) {
            if t.kind != TokKind::Punct {
                continue;
            }
            match t.text {
                "(" | "[" => depth += 1,
                ")" | "]" => {
                    depth -= 1;
                    if depth == 0 {
                        return Some(i);
                    }
                }
                _ => {}
            }
        }
        None
    }

    fn postfix(&mut self) -> Option<Expr> {
        let mut e = self.primary()?;
        loop {
            if self.eat("(") {
                let mut args = Vec::new();
                if !self.eat(")") {
                    loop {
                        args.push(self.assign()?);
                        if self.eat(")") {
                            break;
                        }
                        self.expect(",")?;
                    }
                }
                e = Expr::Call {
                    callee: Box::new(e),
                    args,
                };
            } else if self.eat("[") {
                let index = self.comma()?;
                self.expect("]")?;
                e = Expr::Index {
                    base: Box::new(e),
                    index: Box::new(index),
                };
            } else if self
                .peek()
                .is_some_and(|t| t.is_punct("->") || t.is_punct("."))
            {
                let arrow = self.peek()?.text == "->";
                let field = self.peek_at(1).filter(|t| t.kind == TokKind::Ident)?;
                let field = field.text.to_string();
                self.pos += 2;
                e = Expr::Member {
                    base: Box::new(e),
                    arrow,
                    field,
                };
            } else if self.eat("++") {
                e = Expr::Postfix {
                    op: IncDec::Inc,
                    expr: Box::new(e),
                };
            } else if self.eat("--") {
                e = Expr::Postfix {
                    op: IncDec::Dec,
                    expr: Box::new(e),
                };
            } else {
                return Some(e);
            }
        }
    }

    fn primary(&mut self) -> Option<Expr> {
        let tok = *self.peek()?;
        match tok.kind {
            TokKind::Ident if is_keyword(tok.text) => None,
            TokKind::Ident | TokKind::Number | TokKind::Str | TokKind::Char => {
                self.pos += 1;
                Some(Expr::atom(tok.text))
            }
            TokKind::Punct if tok.text == "(" => {
                self.pos += 1;
                let inner = self.comma()?;
                self.expect(")")?;
                Some(Expr::Paren(Box::new(inner)))
            }
            TokKind::Punct => None,
        }
    }
}

/// Words that never start an expression operand here: statements, type
/// keywords outside a cast, and operators spelled as words.
fn is_keyword(word: &str) -> bool {
    matches!(
        word,
        "return"
            | "goto"
            | "sizeof"
            | "_Alignof"
            | "case"
            | "default"
            | "if"
            | "else"
            | "while"
            | "for"
            | "do"
            | "switch"
            | "struct"
            | "union"
            | "enum"
            | "typedef"
            | "static"
            | "const"
            | "volatile"
            | "unsigned"
            | "signed"
            | "void"
            | "char"
            | "short"
            | "int"
            | "long"
            | "float"
            | "double"
            | "new"
            | "delete"
            | "throw"
            | "operator"
    )
}

/// Type names the printer emits, so `(T)` before a `-`/`*`/`&` operand is a
/// cast rather than a parenthesised variable.
pub(super) fn is_known_type_name(name: &str) -> bool {
    matches!(
        name,
        "void"
            | "char"
            | "short"
            | "int"
            | "long"
            | "float"
            | "double"
            | "signed"
            | "unsigned"
            | "const"
            | "volatile"
            | "struct"
            | "union"
            | "enum"
            | "bool"
            | "_Bool"
            | "_BYTE"
            | "_WORD"
            | "_DWORD"
            | "_QWORD"
            | "_OWORD"
            | "_BOOL"
            | "_UNKNOWN"
            | "__int8"
            | "__int16"
            | "__int32"
            | "__int64"
            | "__int128"
    ) || name.ends_with("_t")
        || name.starts_with("__m")
        || name.starts_with("_BOOL")
}
