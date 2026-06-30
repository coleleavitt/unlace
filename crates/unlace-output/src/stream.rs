//! Tagged output stream — structured C printer output.
//!
//! Instead of emitting a raw `String`, the printer can emit a sequence
//! of [`Token`]s that carry semantic metadata (variable IDs, addresses,
//! types). This enables downstream consumers (IDEs, TUIs, web UIs) to
//! implement:
//!
//! - Click-to-rename: clicking a variable name highlights all uses and
//!   allows interactive renaming.
//! - Hover-for-xrefs: hovering a function call shows its prototype and
//!   callers/callees.
//! - Syntax highlighting: token kinds drive color themes without regex.
//! - Width measurement: token widths are pre-measured for line-wrapping.
//!
//! The stream is deterministic (iteration order matches print order) and
//! serializable for IPC/LSP integration.

use std::fmt;

/// Semantic classification of a printed token.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum TokenKind {
    /// C keyword (`if`, `while`, `return`, `void`, `int`, …).
    Keyword,
    /// User-defined or recovered identifier (variable name, function name).
    Identifier,
    /// Numeric literal (decimal, hex, float).
    Number,
    /// String literal (`"hello"`).
    StringLit,
    /// Operator or punctuation (`+`, `->`, `(`, `;`, …).
    Operator,
    /// Type name (struct/union/enum tag, typedef).
    TypeName,
    /// Comment text (`// …` or `/* … */`).
    Comment,
    /// Preprocessor directive (`#define`, `#include`).
    Preprocessor,
    /// Whitespace (space, tab — NOT newlines).
    Space,
    /// Newline (always `\n`).
    Newline,
    /// Indentation (leading whitespace at start of line).
    Indent,
}

/// Metadata attached to an identifier token for interactive features.
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub enum TokenMeta {
    /// This token refers to an SSA varnode (for variable tracking).
    Varnode {
        space: u8,
        offset: u64,
        version: u32,
    },
    /// This token refers to a function at the given entry address.
    FunctionAddr(u64),
    /// This token refers to a global data address.
    DataAddr(u64),
    /// This token refers to a struct/type by name.
    TypeRef(String),
    /// No additional metadata.
    None,
}

/// A single semantic token in the output stream.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Token {
    /// The printed text content.
    pub text: String,
    /// Semantic classification for highlighting/interaction.
    pub kind: TokenKind,
    /// Optional metadata for IDE features (rename, xref, hover).
    pub meta: TokenMeta,
}

impl Token {
    /// Create a simple token with no metadata.
    pub fn new(kind: TokenKind, text: impl Into<String>) -> Self {
        Self {
            text: text.into(),
            kind,
            meta: TokenMeta::None,
        }
    }

    /// Create a token with associated metadata.
    pub fn with_meta(kind: TokenKind, text: impl Into<String>, meta: TokenMeta) -> Self {
        Self {
            text: text.into(),
            kind,
            meta,
        }
    }

    /// Shorthand for a keyword token.
    pub fn keyword(text: &str) -> Self {
        Self::new(TokenKind::Keyword, text)
    }

    /// Shorthand for an operator/punctuation token.
    pub fn op(text: &str) -> Self {
        Self::new(TokenKind::Operator, text)
    }

    /// Shorthand for a number literal.
    pub fn number(text: impl Into<String>) -> Self {
        Self::new(TokenKind::Number, text)
    }

    /// Shorthand for a single space.
    pub fn space() -> Self {
        Self::new(TokenKind::Space, " ")
    }

    /// Shorthand for a newline.
    pub fn newline() -> Self {
        Self::new(TokenKind::Newline, "\n")
    }

    /// Shorthand for indentation (N spaces).
    pub fn indent(depth: usize) -> Self {
        Self::new(TokenKind::Indent, "    ".repeat(depth))
    }

    /// The display width of this token (byte length of text).
    pub fn width(&self) -> usize {
        self.text.len()
    }
}

/// A stream of tokens representing formatted C output.
///
/// Accumulates tokens in order and can be rendered to a flat string
/// (via `Display`) or consumed token-by-token for interactive UIs.
#[derive(Debug, Clone, Default)]
pub struct TaggedStream {
    tokens: Vec<Token>,
}

impl TaggedStream {
    pub fn new() -> Self {
        Self { tokens: Vec::new() }
    }

    /// Push a token onto the stream.
    pub fn push(&mut self, token: Token) {
        self.tokens.push(token);
    }

    /// Push raw text as a simple token.
    pub fn push_text(&mut self, kind: TokenKind, text: impl Into<String>) {
        self.tokens.push(Token::new(kind, text));
    }

    /// Push an identifier with varnode metadata.
    pub fn push_var(&mut self, name: impl Into<String>, space: u8, offset: u64, version: u32) {
        self.tokens.push(Token::with_meta(
            TokenKind::Identifier,
            name,
            TokenMeta::Varnode {
                space,
                offset,
                version,
            },
        ));
    }

    /// Push a function-call name with address metadata.
    pub fn push_func(&mut self, name: impl Into<String>, addr: u64) {
        self.tokens.push(Token::with_meta(
            TokenKind::Identifier,
            name,
            TokenMeta::FunctionAddr(addr),
        ));
    }

    /// Access the token list.
    pub fn tokens(&self) -> &[Token] {
        &self.tokens
    }

    /// Consume the stream into a token vector.
    pub fn into_tokens(self) -> Vec<Token> {
        self.tokens
    }

    /// Total character width of the current line (since last newline).
    pub fn current_line_width(&self) -> usize {
        let mut width = 0;
        for tok in self.tokens.iter().rev() {
            if tok.kind == TokenKind::Newline {
                break;
            }
            width += tok.width();
        }
        width
    }

    /// Total number of tokens.
    pub fn len(&self) -> usize {
        self.tokens.len()
    }

    /// Whether the stream is empty.
    pub fn is_empty(&self) -> bool {
        self.tokens.is_empty()
    }

    /// Render the stream to a flat string (drops all metadata).
    pub fn to_string_lossy(&self) -> String {
        let mut out = String::new();
        for tok in &self.tokens {
            out.push_str(&tok.text);
        }
        out
    }
}

impl fmt::Display for TaggedStream {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        for tok in &self.tokens {
            f.write_str(&tok.text)?;
        }
        Ok(())
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn stream_renders_to_string() {
        let mut s = TaggedStream::new();
        s.push(Token::keyword("int"));
        s.push(Token::space());
        s.push(Token::new(TokenKind::Identifier, "x"));
        s.push(Token::op(";"));
        s.push(Token::newline());
        assert_eq!(s.to_string(), "int x;\n");
    }

    #[test]
    fn current_line_width_resets_at_newline() {
        let mut s = TaggedStream::new();
        s.push(Token::keyword("void"));
        s.push(Token::space());
        s.push(Token::new(TokenKind::Identifier, "foo"));
        assert_eq!(s.current_line_width(), 8); // "void foo"
        s.push(Token::newline());
        s.push(Token::indent(1));
        assert_eq!(s.current_line_width(), 4); // "    "
    }

    #[test]
    fn push_var_carries_metadata() {
        let mut s = TaggedStream::new();
        s.push_var("v1", 3, 0x100, 2);
        let tok = &s.tokens()[0];
        assert_eq!(tok.kind, TokenKind::Identifier);
        assert_eq!(tok.text, "v1");
        assert_eq!(
            tok.meta,
            TokenMeta::Varnode {
                space: 3,
                offset: 0x100,
                version: 2
            }
        );
    }

    #[test]
    fn push_func_carries_address() {
        let mut s = TaggedStream::new();
        s.push_func("printf", 0x401050);
        let tok = &s.tokens()[0];
        assert_eq!(tok.meta, TokenMeta::FunctionAddr(0x401050));
    }

    #[test]
    fn final_output_tokens_preserve_rendered_text_and_metadata() {
        let mut s = TaggedStream::new();
        s.push(Token::keyword("return"));
        s.push(Token::space());
        s.push_func("callee", 0x401050);
        s.push(Token::op("("));
        s.push_var("arg_4", 1, 0x38, 4);
        s.push(Token::op(")"));
        s.push(Token::op(";"));
        s.push(Token::space());
        s.push(Token::new(TokenKind::Comment, "// src/main.c:42"));
        s.push(Token::newline());

        assert_eq!(
            s.to_string_lossy(),
            "return callee(arg_4); // src/main.c:42\n"
        );
        assert_eq!(s.to_string(), s.to_string_lossy());
        assert_eq!(s.current_line_width(), 0);

        let tokens = s.tokens();
        assert_eq!(tokens[0].kind, TokenKind::Keyword);
        assert_eq!(tokens[2].meta, TokenMeta::FunctionAddr(0x401050));
        assert_eq!(tokens[4].kind, TokenKind::Identifier);
        assert_eq!(
            tokens[4].meta,
            TokenMeta::Varnode {
                space: 1,
                offset: 0x38,
                version: 4,
            }
        );
        assert_eq!(tokens[8].kind, TokenKind::Comment);
        assert_eq!(tokens[9].kind, TokenKind::Newline);
    }
}
