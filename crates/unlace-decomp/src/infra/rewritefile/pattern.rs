//! The expression text of a rewrite rule: `INT_AND(x:1, 0xff)`.
//!
//! ```text
//! expr     := node [":" SIZE]
//! node     := OPCODE "(" expr ("," expr)* ")"   an op and its inputs
//!           | NAME                              a capture
//!           | NUMBER                            a constant with this value
//!           | NUMBER "/" NUMBER                 a constant c with c & mask == value
//! NAME     := a lower-case letter, then lower-case letters, digits, "_"
//! NUMBER   := ["-"] decimal digits | ["-"] "0x" hex digits
//! SIZE     := decimal digits, a size in bytes
//! ```
//!
//! An opcode is spelled as `unlace raw-pcode` prints it (`INT_ADD`,
//! `SUBPIECE`, `INT2FLOAT`); which ones a rule may use, and what their sizes
//! must be, is [`super::sizes`]'s business.

use std::ops::Range;

use unlace_num::opcodes::{OpCode, get_opcode};

/// A constant's value as written: a magnitude and its sign.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) struct Number {
    pub(super) magnitude: u64,
    pub(super) negative: bool,
}

impl Number {
    /// The value in `size` bytes, two's complement when it is negative.
    /// `None` when it does not fit them; a constant has at most 8 bytes.
    pub(super) fn bits(self, size: i32) -> Option<u64> {
        if !(1..=8).contains(&size) {
            return None;
        }
        let mask = unlace_base::address::calc_mask(size);
        if !self.negative {
            return (self.magnitude <= mask).then_some(self.magnitude);
        }
        let lowest = 1u64 << (8 * size - 1);
        (self.magnitude <= lowest).then(|| self.magnitude.wrapping_neg() & mask)
    }
}

/// What one node of an expression is.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(super) enum Kind {
    /// An op and its inputs.
    Op(OpCode, Vec<Expr>),
    /// A named Varnode.
    Capture(String),
    /// A constant with exactly this value.
    Const(Number),
    /// A constant `c` with `c & mask == value`.
    Masked { value: u64, mask: u64 },
}

/// One node of an expression, with the size it was given and where it is in
/// the text.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(super) struct Expr {
    pub(super) kind: Kind,
    pub(super) size: Option<i32>,
    pub(super) span: Range<usize>,
}

/// Why an expression did not parse, and where.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(super) struct SyntaxError {
    pub(super) at: usize,
    pub(super) message: String,
}

/// The most nodes one expression has. The checker and the rule walk an
/// expression by recursion, one level per node at worst.
const MAX_NODES: usize = 256;

/// Parse one whole expression.
pub(super) fn parse(text: &str) -> Result<Expr, SyntaxError> {
    let mut parser = Parser {
        text,
        at: 0,
        nodes: 0,
    };
    let expr = parser.expr()?;
    parser.blanks();
    match parser.peek() {
        None => Ok(expr),
        Some(c) => Err(parser.error(format!("unexpected `{c}` after the expression"))),
    }
}

struct Parser<'a> {
    text: &'a str,
    at: usize,
    nodes: usize,
}

impl Parser<'_> {
    fn error(&self, message: String) -> SyntaxError {
        SyntaxError {
            at: self.at,
            message,
        }
    }

    fn peek(&self) -> Option<char> {
        self.text[self.at..].chars().next()
    }

    fn blanks(&mut self) {
        while self.peek().is_some_and(char::is_whitespace) {
            self.bump();
        }
    }

    fn bump(&mut self) {
        self.at += self.peek().map_or(0, char::len_utf8);
    }

    fn eat(&mut self, expected: char) -> bool {
        self.blanks();
        let found = self.peek() == Some(expected);
        if found {
            self.bump();
        }
        found
    }

    /// The run of characters `keep` accepts, starting here.
    fn run(&mut self, keep: impl Fn(char) -> bool) -> &str {
        let start = self.at;
        while self.peek().is_some_and(&keep) {
            self.bump();
        }
        &self.text[start..self.at]
    }

    fn expr(&mut self) -> Result<Expr, SyntaxError> {
        self.blanks();
        let start = self.at;
        self.nodes += 1;
        if self.nodes > MAX_NODES {
            return Err(self.error(format!(
                "the expression has more than {MAX_NODES} ops, captures and constants"
            )));
        }
        let kind = match self.peek() {
            Some(c) if c.is_ascii_alphabetic() => self.named()?,
            Some(c) if c.is_ascii_digit() || c == '-' => self.constant()?,
            Some(c) => return Err(self.error(format!("unexpected `{c}`"))),
            None => return Err(self.error("the expression ends here".to_string())),
        };
        let size = if self.eat(':') {
            Some(self.size()?)
        } else {
            None
        };
        Ok(Expr {
            kind,
            size,
            span: start..self.at,
        })
    }

    /// An op with its inputs, or a capture.
    fn named(&mut self) -> Result<Kind, SyntaxError> {
        let start = self.at;
        let name = self
            .run(|c| c.is_ascii_alphanumeric() || c == '_')
            .to_string();
        if !self.eat('(') {
            let lower = |c: char| c.is_ascii_lowercase() || c.is_ascii_digit() || c == '_';
            if name.chars().all(lower) {
                return Ok(Kind::Capture(name));
            }
            self.at = start;
            return Err(self.error(match get_opcode(&name) {
                Some(_) => format!("opcode {name} needs its inputs in parentheses"),
                None => format!("`{name}` is not a capture: a capture name is lower case"),
            }));
        }
        let Some(code) = get_opcode(&name) else {
            self.at = start;
            return Err(self.error(format!("unknown opcode {name}")));
        };
        let mut inputs = Vec::new();
        loop {
            inputs.push(self.expr()?);
            if self.eat(')') {
                return Ok(Kind::Op(code, inputs));
            }
            if !self.eat(',') {
                return Err(self.error(format!("expected `,` or `)` in the inputs of {name}")));
            }
        }
    }

    fn constant(&mut self) -> Result<Kind, SyntaxError> {
        let value = self.number()?;
        if !self.eat('/') {
            return Ok(Kind::Const(value));
        }
        self.blanks();
        let at = self.at;
        let mask = self.number()?;
        if value.negative || mask.negative {
            self.at = at;
            return Err(self.error("a masked constant takes no minus sign".to_string()));
        }
        Ok(Kind::Masked {
            value: value.magnitude,
            mask: mask.magnitude,
        })
    }

    fn number(&mut self) -> Result<Number, SyntaxError> {
        let start = self.at;
        let negative = self.peek() == Some('-');
        if negative {
            self.bump();
        }
        let digits = self.run(|c| c.is_ascii_alphanumeric()).to_string();
        let parsed = match digits.strip_prefix("0x") {
            Some(hex) => u64::from_str_radix(hex, 16),
            None => digits.parse::<u64>(),
        };
        match parsed {
            Ok(magnitude) => Ok(Number {
                magnitude,
                negative,
            }),
            Err(_) => {
                let text = &self.text[start..self.at];
                self.at = start;
                Err(self.error(format!("`{text}` is not a number of at most 64 bits")))
            }
        }
    }

    fn size(&mut self) -> Result<i32, SyntaxError> {
        self.blanks();
        let start = self.at;
        let digits = self.run(|c| c.is_ascii_alphanumeric()).to_string();
        match digits.parse::<i32>() {
            Ok(size) if size > 0 => Ok(size),
            _ => {
                self.at = start;
                Err(self.error(format!(
                    "`{digits}` is not a size: a size is a number of bytes, 1 or more"
                )))
            }
        }
    }
}
