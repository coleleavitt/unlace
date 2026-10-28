//! Tokens of the C expressions the printer emits.

/// One token, borrowed from the statement text. `start` is the byte offset
/// in that text, so a parser can recover exact source slices (cast types).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) struct Tok<'a> {
    pub(super) kind: TokKind,
    pub(super) text: &'a str,
    pub(super) start: usize,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum TokKind {
    /// Identifier, including `::`-qualified C++ names.
    Ident,
    Number,
    Str,
    Char,
    Punct,
}

impl Tok<'_> {
    pub(super) fn end(&self) -> usize {
        self.start + self.text.len()
    }

    pub(super) fn is_punct(&self, p: &str) -> bool {
        self.kind == TokKind::Punct && self.text == p
    }

    /// Can this token start an operand (as opposed to an operator)?
    pub(super) fn starts_operand(&self) -> bool {
        matches!(
            self.kind,
            TokKind::Ident | TokKind::Number | TokKind::Str | TokKind::Char
        )
    }
}

/// Longest-match-first punctuator table.
const PUNCTS: &[&str] = &[
    "<<=", ">>=", "...", "->", "++", "--", "<<", ">>", "<=", ">=", "==", "!=", "&&", "||", "+=",
    "-=", "*=", "/=", "%=", "&=", "|=", "^=", "::", "+", "-", "*", "/", "%", "&", "|", "^", "!",
    "~", "<", ">", "=", "?", ":", ",", "(", ")", "[", "]", ".", ";", "{", "}",
];

/// Tokenize `src`, or `None` when it holds anything outside the expression
/// subset (comments, preprocessor text, stray characters).
pub(super) fn lex(src: &str) -> Option<Vec<Tok<'_>>> {
    let bytes = src.as_bytes();
    let mut toks = Vec::new();
    let mut i = 0;
    while i < bytes.len() {
        let b = bytes[i];
        if b.is_ascii_whitespace() {
            i += 1;
            continue;
        }
        let start = i;
        let kind = if b == b'_' || b.is_ascii_alphabetic() {
            i = ident_end(bytes, i);
            // `ns::name` and `Class::~Class` are one qualified identifier.
            while bytes.get(i..i + 2) == Some(b"::") {
                let mut j = i + 2;
                if bytes.get(j) == Some(&b'~') {
                    j += 1;
                }
                if !bytes
                    .get(j)
                    .is_some_and(|c| *c == b'_' || c.is_ascii_alphabetic())
                {
                    break;
                }
                i = ident_end(bytes, j);
            }
            TokKind::Ident
        } else if b.is_ascii_digit()
            || (b == b'.' && bytes.get(i + 1).is_some_and(u8::is_ascii_digit))
        {
            i = number_end(bytes, i);
            TokKind::Number
        } else if b == b'"' || b == b'\'' {
            i = quoted_end(bytes, i)?;
            if b == b'"' {
                TokKind::Str
            } else {
                TokKind::Char
            }
        } else {
            if src[i..].starts_with("/*") || src[i..].starts_with("//") {
                return None;
            }
            let p = PUNCTS.iter().find(|p| src[i..].starts_with(**p))?;
            i += p.len();
            TokKind::Punct
        };
        toks.push(Tok {
            kind,
            text: &src[start..i],
            start,
        });
    }
    Some(toks)
}

fn ident_end(bytes: &[u8], mut i: usize) -> usize {
    while bytes
        .get(i)
        .is_some_and(|c| *c == b'_' || c.is_ascii_alphanumeric())
    {
        i += 1;
    }
    i
}

fn number_end(bytes: &[u8], start: usize) -> usize {
    let hex = bytes.get(start) == Some(&b'0') && matches!(bytes.get(start + 1), Some(b'x' | b'X'));
    let mut i = start;
    while let Some(&c) = bytes.get(i) {
        let exponent_sign = matches!(c, b'+' | b'-')
            && i > start
            && if hex {
                matches!(bytes[i - 1], b'p' | b'P')
            } else {
                matches!(bytes[i - 1], b'e' | b'E')
            };
        if c.is_ascii_alphanumeric() || c == b'.' || c == b'_' || exponent_sign {
            i += 1;
        } else {
            break;
        }
    }
    i
}

fn quoted_end(bytes: &[u8], start: usize) -> Option<usize> {
    let quote = bytes[start];
    let mut i = start + 1;
    while i < bytes.len() {
        match bytes[i] {
            b'\\' => i += 2,
            c if c == quote => return Some(i + 1),
            _ => i += 1,
        }
    }
    None
}
