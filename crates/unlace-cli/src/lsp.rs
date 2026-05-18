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

/// §5.11: per-document LSP server state. Keyed by URI so multiple
/// open documents share one server process.
///
/// `LspServer` owns the document store; each entry is an `LspState`
/// (plus a version counter for `didChange` tracking).
#[derive(Debug, Default)]
pub struct LspServer {
    documents: std::collections::BTreeMap<String, DocumentEntry>,
}

#[derive(Debug, Clone)]
struct DocumentEntry {
    state: LspState,
    /// LSP `textDocument.version` — last received via didOpen/didChange.
    version: i64,
}

impl LspServer {
    pub fn new() -> Self {
        Self {
            documents: std::collections::BTreeMap::new(),
        }
    }

    /// Open a new document (LSP `textDocument/didOpen`).
    pub fn did_open(&mut self, uri: &str, version: i64, text: &str) {
        self.documents.insert(
            uri.to_string(),
            DocumentEntry {
                state: LspState::new(text),
                version,
            },
        );
    }

    /// Apply a full-document change (`didChange` with TextDocumentSyncKind::Full).
    /// We don't model incremental edits in this slice — editors that
    /// support TextDocumentSyncKind::Incremental should be configured
    /// to send Full ranges.
    pub fn did_change(&mut self, uri: &str, version: i64, text: &str) {
        if let Some(entry) = self.documents.get_mut(uri) {
            entry.version = version;
            entry.state = LspState::new(text);
        } else {
            self.did_open(uri, version, text);
        }
    }

    /// Close a document.
    pub fn did_close(&mut self, uri: &str) {
        self.documents.remove(uri);
    }

    /// Borrow the state for a given URI.
    pub fn document(&self, uri: &str) -> Option<&LspState> {
        self.documents.get(uri).map(|e| &e.state)
    }

    /// Borrow the state mutably (for adding symbols after open).
    pub fn document_mut(&mut self, uri: &str) -> Option<&mut LspState> {
        self.documents.get_mut(uri).map(|e| &mut e.state)
    }

    /// Number of open documents.
    pub fn document_count(&self) -> usize {
        self.documents.len()
    }

    /// Build a completion-item list for the document at `uri`.
    /// Returns every registered symbol name as a completion item.
    pub fn completions(&self, uri: &str) -> Vec<serde_json::Value> {
        let Some(state) = self.document(uri) else {
            return Vec::new();
        };
        state
            .symbols
            .iter()
            .map(|s| {
                serde_json::json!({
                    "label": s.name,
                    "kind": match s.kind {
                        SymbolKind::Function => 3,  // CompletionItemKind::Function
                        SymbolKind::Variable => 6,  // Variable
                        SymbolKind::Type => 7,      // Class
                        SymbolKind::Constant => 21, // Constant
                    },
                    "detail": format!("0x{:x}", s.addr),
                })
            })
            .collect()
    }

    /// Goto-definition handler. Returns the symbol's range encoded as
    /// an LSP `Location` with the document's URI.
    pub fn goto_definition(
        &self,
        uri: &str,
        name: &str,
    ) -> Option<serde_json::Value> {
        let state = self.document(uri)?;
        let sym = state.symbols.iter().find(|s| s.name == name)?;
        Some(serde_json::json!({
            "uri": uri,
            "range": sym.range,
        }))
    }
}

/// Batch 24: minimal LSP JSON-RPC method dispatcher.
///
/// Recognises `initialize`, `initialized`, `shutdown`, `exit`,
/// `textDocument/hover`, and `textDocument/documentSymbol`. Returns the
/// JSON-encoded response body (without LSP Content-Length framing — the
/// caller wraps it with the standard `Content-Length` header).
///
/// This is intentionally not a full LSP runtime: there's no document
/// store, no diagnostics push, no Cargo features for cargo-lsp wiring.
/// It exists so an editor extension can talk to `unlace` for static
/// hover/goto over a pre-decompiled buffer the user opens manually.
pub fn handle_request(state: &LspState, body: &serde_json::Value) -> serde_json::Value {
    use serde_json::json;
    let method = body.get("method").and_then(|v| v.as_str()).unwrap_or("");
    let id = body.get("id").cloned().unwrap_or(json!(null));
    match method {
        "initialize" => json!({
            "jsonrpc": "2.0",
            "id": id,
            "result": {
                "capabilities": {
                    "hoverProvider": true,
                    "documentSymbolProvider": true,
                    "definitionProvider": true,
                },
                "serverInfo": {
                    "name": "unlace-lsp",
                    "version": env!("CARGO_PKG_VERSION"),
                }
            }
        }),
        "initialized" | "exit" => json!(null),
        "shutdown" => json!({ "jsonrpc": "2.0", "id": id, "result": null }),
        "textDocument/hover" => {
            let pos = body
                .pointer("/params/position")
                .and_then(|v| serde_json::from_value::<Position>(v.clone()).ok())
                .unwrap_or(Position { line: 0, character: 0 });
            let hover = state.hover(pos);
            json!({ "jsonrpc": "2.0", "id": id, "result": hover })
        }
        "textDocument/documentSymbol" => {
            json!({ "jsonrpc": "2.0", "id": id, "result": state.document_symbols() })
        }
        _ => json!({
            "jsonrpc": "2.0",
            "id": id,
            "error": { "code": -32601, "message": format!("method not found: {method}") }
        }),
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

    /// Batch 24: `handle_request` answers `initialize` with the standard
    /// LSP capability advertisement.
    #[test]
    fn lsp_initialize_advertises_capabilities() {
        use serde_json::json;
        let state = LspState::new("");
        let req = json!({
            "jsonrpc": "2.0",
            "id": 1,
            "method": "initialize",
            "params": {}
        });
        let resp = handle_request(&state, &req);
        assert_eq!(resp["id"], 1);
        assert_eq!(resp["result"]["capabilities"]["hoverProvider"], true);
        assert_eq!(
            resp["result"]["capabilities"]["documentSymbolProvider"],
            true
        );
        assert_eq!(resp["result"]["serverInfo"]["name"], "unlace-lsp");
    }

    /// Hover via JSON-RPC returns the registered symbol's hover info.
    #[test]
    fn lsp_hover_returns_symbol_info() {
        use serde_json::json;
        let mut state = LspState::new("void foo();\n");
        state.add_symbol("foo", SymbolKind::Function, test_range(0, 5, 8), 0x402000);
        let req = json!({
            "jsonrpc": "2.0",
            "id": 7,
            "method": "textDocument/hover",
            "params": { "position": { "line": 0, "character": 6 } }
        });
        let resp = handle_request(&state, &req);
        assert_eq!(resp["id"], 7);
        let contents = resp["result"]["contents"].as_str().unwrap_or("");
        assert!(contents.contains("foo"));
        assert!(contents.contains("0x402000"));
    }

    // ----- §5.11 LspServer document-store -------------------------------

    #[test]
    fn lsp_server_tracks_didopen_and_didchange_versions() {
        let mut server = LspServer::new();
        server.did_open("file:///a.c", 1, "int x;\n");
        assert_eq!(server.document_count(), 1);
        assert!(server.document("file:///a.c").is_some());

        server.did_change("file:///a.c", 2, "int x = 5;\n");
        let st = server.document("file:///a.c").expect("still open");
        // Source is replaced, version bumps internally; we only check
        // the new text via source_lines.
        assert_eq!(st.source_lines[0], "int x = 5;");

        server.did_close("file:///a.c");
        assert_eq!(server.document_count(), 0);
    }

    #[test]
    fn lsp_server_completions_list_registered_symbols() {
        let mut server = LspServer::new();
        server.did_open("file:///a.c", 1, "int main();\n");
        if let Some(state) = server.document_mut("file:///a.c") {
            state.add_symbol("main", SymbolKind::Function, test_range(0, 4, 8), 0x401000);
            state.add_symbol("g_count", SymbolKind::Variable, test_range(1, 4, 11), 0x500000);
        }
        let comps = server.completions("file:///a.c");
        assert_eq!(comps.len(), 2);
        assert_eq!(comps[0]["label"], "main");
        assert_eq!(comps[0]["kind"], 3); // Function
        assert_eq!(comps[1]["label"], "g_count");
        assert_eq!(comps[1]["kind"], 6); // Variable
    }

    #[test]
    fn lsp_server_goto_definition_returns_symbol_range() {
        let mut server = LspServer::new();
        server.did_open("file:///a.c", 1, "void foo();\n");
        if let Some(state) = server.document_mut("file:///a.c") {
            state.add_symbol("foo", SymbolKind::Function, test_range(0, 5, 8), 0x402000);
        }
        let loc = server.goto_definition("file:///a.c", "foo").expect("found");
        assert_eq!(loc["uri"], "file:///a.c");
        assert_eq!(loc["range"]["start"]["line"], 0);
        assert_eq!(loc["range"]["start"]["character"], 5);
    }

    #[test]
    fn lsp_server_goto_definition_missing_symbol_returns_none() {
        let mut server = LspServer::new();
        server.did_open("file:///a.c", 1, "void foo();\n");
        assert!(server.goto_definition("file:///a.c", "bar").is_none());
    }

    /// Unknown methods come back with the JSON-RPC error code -32601.
    #[test]
    fn lsp_unknown_method_returns_method_not_found() {
        use serde_json::json;
        let state = LspState::new("");
        let req = json!({
            "jsonrpc": "2.0",
            "id": 99,
            "method": "textDocument/wild_unknown",
            "params": {}
        });
        let resp = handle_request(&state, &req);
        assert_eq!(resp["error"]["code"], -32601);
    }
}
