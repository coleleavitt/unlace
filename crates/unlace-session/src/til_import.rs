//! TIL type-library → Session import pass.
//!
//! Mirrors IDA's `add_til` / `apply_tinfo` flow from
//! `research/decompiled-references/ida/ida-binary/all/apply_tinfo.c` /
//! `research/decompiled-references/ida/ida-binary/all/add_til.c`. The high-level idea:
//!
//! 1. Parse a `.til` file via [`crate::til_parser::TilFile`].
//! 2. Build an in-memory catalog keyed by symbol name → ordinal +
//!    raw type bytes. The catalog is exposed via [`TilCatalog`] so
//!    later passes (FLIRT name-match, demangler, prototype renderer)
//!    can pull prototypes by symbol name without re-decompressing.
//! 3. For every binary symbol whose name appears in the catalog,
//!    record a [`TypeAnnotation`] in the session — that surfaces the
//!    prototype in the type pane, xref panel, and pseudocode header.
//!
//! Decoding the raw `type_bytes` to a full TInfo AST is its own
//! project (typeinf.hpp has a 1000-line BT_* opcode dispatch); for
//! now we hex-encode it into the annotation `declaration` so the
//! type pane has something concrete to display, and downstream passes
//! can still query the catalog for the raw bytes.

use std::collections::BTreeMap;
use std::path::Path;

use crate::til_parser::TilFile;
use crate::{Session, TypeAnnotation};

/// One catalog entry: ordinal + raw IDA-encoded type bytes.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CatalogEntry {
    pub ordinal: u32,
    pub type_bytes: Vec<u8>,
}

/// In-memory type catalog built from one or more `.til` files. Lookups
/// are by symbol name (e.g. `"printf"`, `"SYS_open"`).
#[derive(Clone, Debug, Default)]
pub struct TilCatalog {
    by_name: BTreeMap<String, CatalogEntry>,
    library_titles: Vec<String>,
}

/// Report of one apply.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct TilApplyReport {
    /// Number of types added to the catalog.
    pub catalog_size: usize,
    /// Number of binary symbols that matched a catalog entry and got a
    /// [`TypeAnnotation`].
    pub annotated: usize,
    /// (address, symbol_name) pairs that received an annotation.
    pub applied: Vec<(u64, String)>,
}

impl TilCatalog {
    pub fn new() -> Self {
        Self::default()
    }

    /// Load a `.til` file from disk and add every symbol to the
    /// catalog. Returns the number of symbols added.
    pub fn load_til(&mut self, path: impl AsRef<Path>) -> anyhow::Result<usize> {
        let til = TilFile::load(path.as_ref())?;
        Ok(self.add_from_til(&til))
    }

    /// Merge a parsed `TilFile` into the catalog. Existing entries are
    /// kept (first writer wins) so loading multiple libraries with
    /// overlapping names is stable.
    pub fn add_from_til(&mut self, til: &TilFile) -> usize {
        if !til.title.is_empty() {
            self.library_titles.push(til.title.clone());
        }
        let mut added = 0usize;
        for sym in &til.symbols {
            if sym.name.is_empty() {
                continue;
            }
            self.by_name.entry(sym.name.clone()).or_insert_with(|| {
                added += 1;
                CatalogEntry {
                    ordinal: sym.ordinal,
                    type_bytes: sym.type_bytes.clone(),
                }
            });
        }
        added
    }

    /// Total number of cataloged symbols.
    pub fn len(&self) -> usize {
        self.by_name.len()
    }

    pub fn is_empty(&self) -> bool {
        self.by_name.is_empty()
    }

    /// Look up a symbol by name.
    pub fn get(&self, name: &str) -> Option<&CatalogEntry> {
        self.by_name.get(name)
    }

    /// Library titles that contributed entries, in load order.
    pub fn library_titles(&self) -> &[String] {
        &self.library_titles
    }

    /// Apply the catalog to a session: for every binary symbol whose
    /// name matches a catalog entry, attach a [`TypeAnnotation`] so
    /// the type pane shows the prototype.
    pub fn apply_to_session(&self, session: &Session) -> TilApplyReport {
        let mut report = TilApplyReport {
            catalog_size: self.by_name.len(),
            ..Default::default()
        };
        let symbol_pairs = session
            .with_binary(|img| {
                img.symbols
                    .iter()
                    .map(|(addr, sym)| (*addr, sym.name.clone()))
                    .collect::<Vec<_>>()
            })
            .unwrap_or_default();

        for (addr, name) in symbol_pairs {
            if let Some(entry) = self.by_name.get(&name) {
                session.set_type(TypeAnnotation {
                    ea: addr,
                    declaration: format_declaration(&name, entry),
                });
                report.applied.push((addr, name));
                report.annotated += 1;
            }
        }
        report.applied.sort_by_key(|(a, _)| *a);
        report
    }
}

/// Format a catalog entry into a readable type declaration. The raw
/// IDA encoding is preserved as a hex comment so a future TInfo
/// decoder can re-parse it deterministically.
fn format_declaration(name: &str, entry: &CatalogEntry) -> String {
    let hex: String = entry
        .type_bytes
        .iter()
        .take(32)
        .map(|b| format!("{:02X}", b))
        .collect();
    let suffix = if entry.type_bytes.len() > 32 {
        "…"
    } else {
        ""
    };
    format!(
        "// ordinal={} type_bytes={}{}\n{};",
        entry.ordinal, hex, suffix, name
    )
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::til_parser::TilSymbol;

    fn til_with(title: &str, symbols: Vec<(&str, u32, Vec<u8>)>) -> TilFile {
        TilFile {
            version: 18,
            flags: 0,
            title: title.to_string(),
            base: String::new(),
            symbols: symbols
                .into_iter()
                .map(|(n, o, t)| TilSymbol {
                    name: n.to_string(),
                    ordinal: o,
                    type_bytes: t,
                })
                .collect(),
        }
    }

    #[test]
    fn test_catalog_starts_empty() {
        let c = TilCatalog::new();
        assert!(c.is_empty());
        assert!(c.library_titles().is_empty());
    }

    #[test]
    fn test_add_from_til_counts_unique_inserts() {
        let mut c = TilCatalog::new();
        let added = c.add_from_til(&til_with(
            "libc",
            vec![("printf", 1, vec![0x10]), ("malloc", 2, vec![0x11])],
        ));
        assert_eq!(added, 2);
        assert_eq!(c.len(), 2);
        assert_eq!(c.library_titles(), &["libc".to_string()]);
    }

    #[test]
    fn test_first_writer_wins_on_duplicate_names() {
        let mut c = TilCatalog::new();
        c.add_from_til(&til_with("first", vec![("printf", 1, vec![0xAA])]));
        c.add_from_til(&til_with("second", vec![("printf", 99, vec![0xBB])]));
        let e = c.get("printf").unwrap();
        assert_eq!(e.ordinal, 1, "first writer must win");
        assert_eq!(e.type_bytes, vec![0xAA]);
    }

    #[test]
    fn test_empty_names_are_skipped() {
        let mut c = TilCatalog::new();
        let added = c.add_from_til(&til_with("x", vec![("", 1, vec![]), ("ok", 2, vec![0x10])]));
        assert_eq!(added, 1);
        assert_eq!(c.get("ok").unwrap().ordinal, 2);
    }

    #[test]
    fn test_format_declaration_includes_ordinal_and_hex() {
        let entry = CatalogEntry {
            ordinal: 42,
            type_bytes: vec![0xDE, 0xAD, 0xBE, 0xEF],
        };
        let s = format_declaration("printf", &entry);
        assert!(s.contains("ordinal=42"));
        assert!(s.contains("DEADBEEF"));
        assert!(s.contains("printf;"));
    }

    fn make_session_with_symbol(addr: u64, name: &str) -> Session {
        use unlace_loader::{ArchId, BinaryImage, Endian, Symbol, SymbolKind};
        let mut img = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        img.symbols.insert(
            addr,
            Symbol {
                name: name.to_string(),
                addr,
                size: 0,
                kind: SymbolKind::Function,
            },
        );
        let s = Session::new();
        s.set_binary(img);
        s
    }

    #[test]
    fn test_apply_attaches_type_annotation_for_known_symbols() {
        let mut c = TilCatalog::new();
        c.add_from_til(&til_with("libc", vec![("printf", 1, vec![0xDE, 0xAD])]));
        let s = make_session_with_symbol(0x1100, "printf");
        let report = c.apply_to_session(&s);
        assert_eq!(report.annotated, 1);
        assert_eq!(report.catalog_size, 1);
        assert_eq!(report.applied, vec![(0x1100, "printf".to_string())]);
        let t = s.annotations().types;
        let ann = t.get(&0x1100).unwrap();
        assert!(ann.declaration.contains("printf"));
        assert!(ann.declaration.contains("ordinal=1"));
    }

    #[test]
    fn test_apply_skips_unknown_symbols() {
        let mut c = TilCatalog::new();
        c.add_from_til(&til_with("libc", vec![("malloc", 1, vec![0x10])]));
        let s = make_session_with_symbol(0x1100, "totally_unrelated");
        let report = c.apply_to_session(&s);
        assert_eq!(report.annotated, 0);
        assert_eq!(report.catalog_size, 1);
    }

    #[test]
    fn test_apply_to_empty_session_is_noop() {
        let c = TilCatalog::new();
        let report = c.apply_to_session(&Session::new());
        assert_eq!(report, TilApplyReport::default());
    }
}
