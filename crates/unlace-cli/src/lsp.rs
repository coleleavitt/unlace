//! LSP (Language Server Protocol) server for decompiled output (t450).
//!
//! Implements the protocol types for integrating unlace into editors
//! (VS Code, Helix, Neovim) as a decompilation backend. Provides
//! hover info, go-to-definition, and symbol listing over decompiled code.

use serde::{Deserialize, Serialize};

/// LSP position (0-indexed line and character).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct Position {
    pub line: u32,
    pub character: u32,
}

/// LSP range.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct Range {
    pub start: Position,
    pub end: Position,
}

/// A symbol in the decompiled output.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct LspSymbol {
    pub name: String,
    pub kind: SymbolKind,
    pub range: Range,
    pub addr: u64,
}

/// Symbol kinds we surface.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub enum SymbolKind {
    Function,
    Variable,
    Type,
    Constant,
}

/// Hover information for a symbol.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct HoverInfo {
    pub contents: String,
    pub range: Option<Range>,
}

/// Go-to-definition result.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct DefinitionResult {
    pub uri: String,
    pub range: Range,
}

/// LSP server state for a single decompiled file.
#[derive(Debug, Clone)]
pub struct LspState {
    pub symbols: Vec<LspSymbol>,
    pub source_lines: Vec<String>,
}

impl LspState {
    pub fn new(source: &str) -> Self {
        Self {
            symbols: Vec::new(),
            source_lines: source.lines().map(|l| l.to_string()).collect(),
        }
    }

    /// Register a symbol at a given range.
    pub fn add_symbol(&mut self, name: &str, kind: SymbolKind, range: Range, addr: u64) {
        self.symbols.push(LspSymbol { name: name.into(), kind, range, addr });
    }

    /// Find the symbol at a given position (for hover/goto).
    pub fn symbol_at(&self, pos: Position) -> Option<&LspSymbol> {
        self.symbols.iter().find(|s| {
            pos.line >= s.range.start.line && pos.line <= s.range.end.line &&
            (pos.line > s.range.start.line || pos.character >= s.range.start.character) &&
            (pos.line < s.range.end.line || pos.character <= s.range.end.character)
        })
    }

    /// Generate hover info for a position.
    pub fn hover(&self, pos: Position) -> Option<HoverInfo> {
        let sym = self.symbol_at(pos)?;
        let contents = format!("{:?} `{}` @ 0x{:x}", sym.kind, sym.name, sym.addr);
        Some(HoverInfo { contents, range: Some(sym.range) })
    }

    /// List all symbols (for document symbol request).
    pub fn document_symbols(&self) -> &[LspSymbol] {
        &self.symbols
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn test_range(line: u32, start_char: u32, end_char: u32) -> Range {
        Range { start: Position { line, character: start_char }, end: Position { line, character: end_char } }
    }

    #[test]
    fn symbol_lookup() {
        let mut state = LspState::new("int main() {\n  return 0;\n}\n");
        state.add_symbol("main", SymbolKind::Function, test_range(0, 4, 8), 0x401000);
        let sym = state.symbol_at(Position { line: 0, character: 5 }).unwrap();
        assert_eq!(sym.name, "main");
    }

    #[test]
    fn hover_info() {
        let mut state = LspState::new("void foo();\n");
        state.add_symbol("foo", SymbolKind::Function, test_range(0, 5, 8), 0x402000);
        let hover = state.hover(Position { line: 0, character: 6 }).unwrap();
        assert!(hover.contents.contains("foo"));
        assert!(hover.contents.contains("0x402000"));
    }

    #[test]
    fn no_symbol_at_empty_pos() {
        let state = LspState::new("int x = 0;\n");
        assert!(state.symbol_at(Position { line: 0, character: 0 }).is_none());
    }

    #[test]
    fn document_symbols_list() {
        let mut state = LspState::new("");
        state.add_symbol("a", SymbolKind::Function, test_range(0, 0, 1), 0x1000);
        state.add_symbol("b", SymbolKind::Variable, test_range(1, 0, 1), 0x2000);
        assert_eq!(state.document_symbols().len(), 2);
    }
}
