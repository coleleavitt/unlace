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
        self.symbols.push(LspSymbol {
            name: name.into(),
            kind,
            range,
            addr,
        });
    }

    /// Find the symbol at a given position (for hover/goto).
    pub fn symbol_at(&self, pos: Position) -> Option<&LspSymbol> {
        self.symbols.iter().find(|s| {
            pos.line >= s.range.start.line
                && pos.line <= s.range.end.line
                && (pos.line > s.range.start.line || pos.character >= s.range.start.character)
                && (pos.line < s.range.end.line || pos.character <= s.range.end.character)
        })
    }

    /// Generate hover info for a position.
    pub fn hover(&self, pos: Position) -> Option<HoverInfo> {
        let sym = self.symbol_at(pos)?;
        let contents = format!("{:?} `{}` @ 0x{:x}", sym.kind, sym.name, sym.addr);
        Some(HoverInfo {
            contents,
            range: Some(sym.range),
        })
    }

    /// List all symbols (for document symbol request).
    pub fn document_symbols(&self) -> &[LspSymbol] {
        &self.symbols
    }

    /// §5.11: extract the identifier under `pos` from `source_lines`.
    ///
    /// Scans the target line for `[A-Za-z_][A-Za-z0-9_]*` and returns
    /// the token whose span covers `pos.character`. Used by
    /// `textDocument/definition` to convert a cursor position into a
    /// symbol name without requiring an explicit symbol range to be
    /// registered at the call site.
    pub fn identifier_at(&self, pos: Position) -> Option<String> {
        let line = self.source_lines.get(pos.line as usize)?;
        let bytes = line.as_bytes();
        let col = pos.character as usize;
        if col > bytes.len() {
            return None;
        }
        let is_word = |b: u8| b.is_ascii_alphanumeric() || b == b'_';
        // Walk backward to find start.
        let mut start = col;
        while start > 0 && is_word(bytes[start - 1]) {
            start -= 1;
        }
        // Walk forward to find end.
        let mut end = col;
        while end < bytes.len() && is_word(bytes[end]) {
            end += 1;
        }
        if start == end {
            return None;
        }
        // First char must not be a digit (real C identifier rules).
        if bytes[start].is_ascii_digit() {
            return None;
        }
        Some(String::from_utf8_lossy(&bytes[start..end]).into_owned())
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
    pub fn goto_definition(&self, uri: &str, name: &str) -> Option<serde_json::Value> {
        let state = self.document(uri)?;
        let sym = state.symbols.iter().find(|s| s.name == name)?;
        Some(serde_json::json!({
            "uri": uri,
            "range": sym.range,
        }))
    }

    /// §5.11: position-aware goto-definition.
    ///
    /// Extracts the identifier under `pos` from the document's source,
    /// then looks it up in the recovered-symbol table. Returns the
    /// symbol's declaration range encoded as an LSP `Location`.
    ///
    /// This handles the standard editor flow where the user clicks
    /// (or invokes goto-def) on a *use* of an identifier and expects
    /// to jump to its *declaration* — even if no symbol range is
    /// registered at the use site.
    pub fn goto_definition_at(&self, uri: &str, pos: Position) -> Option<serde_json::Value> {
        let state = self.document(uri)?;
        let name = state.identifier_at(pos)?;
        self.goto_definition(uri, &name)
    }

    /// §5.11: completion-item list scoped to a prefix.
    ///
    /// Variant of `completions` that filters by the identifier prefix
    /// under `pos`. Used by `textDocument/completion` so editors
    /// presenting completions while the user is mid-token get a
    /// pre-filtered list rather than every recovered symbol.
    ///
    /// Determinism: symbols are iterated in `LspState::symbols` order;
    /// names are de-duplicated via `BTreeSet` so identical labels from
    /// multiple sources (DWARF + PDB + FLIRT) collapse to one item.
    pub fn completions_at(&self, uri: &str, pos: Position) -> Vec<serde_json::Value> {
        let Some(state) = self.document(uri) else {
            return Vec::new();
        };
        let prefix = state.identifier_at(pos).unwrap_or_default();
        let mut seen = std::collections::BTreeSet::<String>::new();
        let mut out = Vec::new();
        for s in &state.symbols {
            if !prefix.is_empty() && !s.name.starts_with(&prefix) {
                continue;
            }
            if !seen.insert(s.name.clone()) {
                continue;
            }
            out.push(serde_json::json!({
                "label": s.name,
                "kind": match s.kind {
                    SymbolKind::Function => 3,  // CompletionItemKind::Function
                    SymbolKind::Variable => 6,  // Variable
                    SymbolKind::Type => 7,      // Class
                    SymbolKind::Constant => 21, // Constant
                },
                "detail": format!("0x{:x}", s.addr),
            }));
        }
        out
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
                .unwrap_or(Position {
                    line: 0,
                    character: 0,
                });
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

/// §5.11: server-aware JSON-RPC dispatcher.
///
/// Routes `textDocument/*` requests against an `LspServer` document
/// store (versus `handle_request`'s single-state model). Recognises
/// `initialize`, `textDocument/didOpen`, `didChange`, `didClose`,
/// `textDocument/completion`, and `textDocument/definition`. Other
/// document-scoped requests fall through to `handle_request` on the
/// resolved document state.
///
/// The `initialize` response advertises `completionProvider` +
/// `definitionProvider` so editors know to enable those features.
pub fn handle_server_request(
    server: &mut LspServer,
    body: &serde_json::Value,
) -> serde_json::Value {
    use serde_json::json;
    let method = body.get("method").and_then(|v| v.as_str()).unwrap_or("");
    let id = body.get("id").cloned().unwrap_or(json!(null));
    let uri = body
        .pointer("/params/textDocument/uri")
        .and_then(|v| v.as_str())
        .unwrap_or("")
        .to_string();
    match method {
        "initialize" => json!({
            "jsonrpc": "2.0",
            "id": id,
            "result": {
                "capabilities": {
                    "textDocumentSync": 1, // Full
                    "hoverProvider": true,
                    "documentSymbolProvider": true,
                    "definitionProvider": true,
                    "completionProvider": {
                        "triggerCharacters": ["."],
                    },
                },
                "serverInfo": {
                    "name": "unlace-lsp",
                    "version": env!("CARGO_PKG_VERSION"),
                }
            }
        }),
        "textDocument/didOpen" => {
            let version = body
                .pointer("/params/textDocument/version")
                .and_then(|v| v.as_i64())
                .unwrap_or(0);
            let text = body
                .pointer("/params/textDocument/text")
                .and_then(|v| v.as_str())
                .unwrap_or("");
            server.did_open(&uri, version, text);
            json!(null)
        }
        "textDocument/didChange" => {
            let version = body
                .pointer("/params/textDocument/version")
                .and_then(|v| v.as_i64())
                .unwrap_or(0);
            // We use TextDocumentSyncKind::Full, so the change is the
            // last contentChanges entry's `text` field.
            let text = body
                .pointer("/params/contentChanges/0/text")
                .and_then(|v| v.as_str())
                .unwrap_or("");
            server.did_change(&uri, version, text);
            json!(null)
        }
        "textDocument/didClose" => {
            server.did_close(&uri);
            json!(null)
        }
        "textDocument/completion" => {
            let pos = body
                .pointer("/params/position")
                .and_then(|v| serde_json::from_value::<Position>(v.clone()).ok())
                .unwrap_or(Position {
                    line: 0,
                    character: 0,
                });
            let items = server.completions_at(&uri, pos);
            json!({
                "jsonrpc": "2.0",
                "id": id,
                "result": {
                    "isIncomplete": false,
                    "items": items,
                },
            })
        }
        "textDocument/definition" => {
            let pos = body
                .pointer("/params/position")
                .and_then(|v| serde_json::from_value::<Position>(v.clone()).ok())
                .unwrap_or(Position {
                    line: 0,
                    character: 0,
                });
            let loc = server.goto_definition_at(&uri, pos);
            json!({
                "jsonrpc": "2.0",
                "id": id,
                "result": loc,
            })
        }
        _ => {
            // Document-scoped fallthrough: delegate to the per-state
            // dispatcher so hover/documentSymbol keep working.
            if let Some(state) = server.document(&uri) {
                handle_request(state, body)
            } else {
                json!({
                    "jsonrpc": "2.0",
                    "id": id,
                    "error": {
                        "code": -32601,
                        "message": format!("method not found: {method}")
                    }
                })
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn test_range(line: u32, start_char: u32, end_char: u32) -> Range {
        Range {
            start: Position {
                line,
                character: start_char,
            },
            end: Position {
                line,
                character: end_char,
            },
        }
    }

    #[test]
    fn symbol_lookup() {
        let mut state = LspState::new("int main() {\n  return 0;\n}\n");
        state.add_symbol("main", SymbolKind::Function, test_range(0, 4, 8), 0x401000);
        let sym = state
            .symbol_at(Position {
                line: 0,
                character: 5,
            })
            .unwrap();
        assert_eq!(sym.name, "main");
    }

    #[test]
    fn hover_info() {
        let mut state = LspState::new("void foo();\n");
        state.add_symbol("foo", SymbolKind::Function, test_range(0, 5, 8), 0x402000);
        let hover = state
            .hover(Position {
                line: 0,
                character: 6,
            })
            .unwrap();
        assert!(hover.contents.contains("foo"));
        assert!(hover.contents.contains("0x402000"));
    }

    #[test]
    fn no_symbol_at_empty_pos() {
        let state = LspState::new("int x = 0;\n");
        assert!(
            state
                .symbol_at(Position {
                    line: 0,
                    character: 0
                })
                .is_none()
        );
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
            state.add_symbol(
                "g_count",
                SymbolKind::Variable,
                test_range(1, 4, 11),
                0x500000,
            );
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

    // ----- §5.11 completion + goto-def via JSON-RPC dispatcher ---------

    /// `identifier_at` extracts the C-identifier under the cursor.
    /// Convention: the cursor is logically *before* `character`, so a
    /// cursor at the right edge of a token (where `bytes[col-1]` is a
    /// word char) still selects that token — this matches the LSP
    /// completion flow where the user has just finished typing.
    #[test]
    fn identifier_at_extracts_word_under_cursor() {
        let state = LspState::new("int main(int argc) { return argc; }\n   \n");
        // Cursor at start of "main" (col 4).
        assert_eq!(
            state
                .identifier_at(Position {
                    line: 0,
                    character: 4
                })
                .as_deref(),
            Some("main")
        );
        // Cursor in the middle of "argc" (col 30).
        assert_eq!(
            state
                .identifier_at(Position {
                    line: 0,
                    character: 30
                })
                .as_deref(),
            Some("argc")
        );
        // Cursor at the right edge of "int" (col 3) — picks "int" via
        // the trailing-edge rule.
        assert_eq!(
            state
                .identifier_at(Position {
                    line: 0,
                    character: 3
                })
                .as_deref(),
            Some("int")
        );
        // Cursor truly inside whitespace on a blank line — no identifier.
        assert!(
            state
                .identifier_at(Position {
                    line: 1,
                    character: 2
                })
                .is_none()
        );
        // Cursor past end of line — no identifier.
        assert!(
            state
                .identifier_at(Position {
                    line: 0,
                    character: 999
                })
                .is_none()
        );
    }

    /// `textDocument/completion` returns recovered symbols as
    /// completion items via the server-aware dispatcher, filtered by
    /// the identifier prefix under the cursor.
    #[test]
    fn lsp_completion_request_returns_recovered_symbols() {
        use serde_json::json;
        let mut server = LspServer::new();
        // Open via the dispatcher so we exercise the full JSON-RPC
        // wire path, not just the helper methods.
        let open = json!({
            "jsonrpc": "2.0",
            "method": "textDocument/didOpen",
            "params": {
                "textDocument": {
                    "uri": "file:///a.c",
                    "languageId": "c",
                    "version": 1,
                    "text": "void m_helper() {}\nvoid main() {\n  m_\n}\n"
                }
            }
        });
        let _ = handle_server_request(&mut server, &open);

        // Register the recovered-symbol table (in real flow this comes
        // from DwarfInfo / PdbTypes / FlirtMatch; here we seed it
        // directly to keep the test hermetic).
        if let Some(state) = server.document_mut("file:///a.c") {
            state.add_symbol("main", SymbolKind::Function, test_range(1, 5, 9), 0x401000);
            state.add_symbol(
                "m_helper",
                SymbolKind::Function,
                test_range(0, 5, 13),
                0x401100,
            );
            state.add_symbol(
                "local_var",
                SymbolKind::Variable,
                test_range(2, 6, 15),
                0x500000,
            );
        }

        // Cursor sits at end of "m_" on line 2 — should match both
        // `main` and `m_helper`.
        let req = json!({
            "jsonrpc": "2.0",
            "id": 11,
            "method": "textDocument/completion",
            "params": {
                "textDocument": { "uri": "file:///a.c" },
                "position": { "line": 2, "character": 4 }
            }
        });
        let resp = handle_server_request(&mut server, &req);
        assert_eq!(resp["id"], 11);
        assert_eq!(resp["result"]["isIncomplete"], false);
        let items = resp["result"]["items"].as_array().expect("items array");
        // Both `main` and `m_helper` start with "m_"... wait, only
        // `m_helper` does. Verify the prefix filter.
        let labels: Vec<&str> = items.iter().filter_map(|i| i["label"].as_str()).collect();
        assert!(
            labels.contains(&"m_helper"),
            "expected m_helper in {:?}",
            labels
        );
        assert!(
            !labels.contains(&"main"),
            "main does not start with m_; got {:?}",
            labels
        );
        assert!(!labels.contains(&"local_var"));
        // Confirm CompletionItemKind::Function (3) survives JSON
        // serialisation.
        let helper = items.iter().find(|i| i["label"] == "m_helper").unwrap();
        assert_eq!(helper["kind"], 3);
    }

    /// `textDocument/definition` maps an identifier under the cursor
    /// (a *use*) back to the declaration's range — proving the
    /// position→name→declaration round-trip.
    #[test]
    fn lsp_definition_request_jumps_to_declaration_line() {
        use serde_json::json;
        let mut server = LspServer::new();
        // Source: function `helper` declared on line 0, called on line 2.
        let src = "void helper(int x);\nvoid main() {\n  helper(42);\n}\n";
        let open = json!({
            "jsonrpc": "2.0",
            "method": "textDocument/didOpen",
            "params": {
                "textDocument": {
                    "uri": "file:///b.c",
                    "languageId": "c",
                    "version": 1,
                    "text": src,
                }
            }
        });
        let _ = handle_server_request(&mut server, &open);

        // Register the *declaration* range only — the call site has no
        // explicit range, mirroring what the c_printer produces from
        // the recovered DwarfInfo / function table.
        if let Some(state) = server.document_mut("file:///b.c") {
            state.add_symbol(
                "helper",
                SymbolKind::Function,
                test_range(0, 5, 11),
                0x404000,
            );
        }

        // Cursor on the *call site* (line 2, inside "helper").
        let req = json!({
            "jsonrpc": "2.0",
            "id": 42,
            "method": "textDocument/definition",
            "params": {
                "textDocument": { "uri": "file:///b.c" },
                "position": { "line": 2, "character": 4 }
            }
        });
        let resp = handle_server_request(&mut server, &req);
        assert_eq!(resp["id"], 42);
        // Result is the declaration's range, not the call-site range.
        assert_eq!(resp["result"]["uri"], "file:///b.c");
        assert_eq!(resp["result"]["range"]["start"]["line"], 0);
        assert_eq!(resp["result"]["range"]["start"]["character"], 5);

        // Cursor on whitespace returns null definition.
        let miss = json!({
            "jsonrpc": "2.0",
            "id": 43,
            "method": "textDocument/definition",
            "params": {
                "textDocument": { "uri": "file:///b.c" },
                "position": { "line": 1, "character": 0 }
            }
        });
        let miss_resp = handle_server_request(&mut server, &miss);
        assert!(miss_resp["result"].is_null());
    }

    /// `initialize` via the server-aware dispatcher advertises both
    /// completion + definition capabilities.
    #[test]
    fn lsp_server_initialize_advertises_completion_and_definition() {
        use serde_json::json;
        let mut server = LspServer::new();
        let req = json!({
            "jsonrpc": "2.0",
            "id": 1,
            "method": "initialize",
            "params": {}
        });
        let resp = handle_server_request(&mut server, &req);
        assert_eq!(resp["result"]["capabilities"]["definitionProvider"], true);
        assert!(resp["result"]["capabilities"]["completionProvider"].is_object());
        assert_eq!(resp["result"]["capabilities"]["textDocumentSync"], 1);
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
