//! PDB (Program Database) debug info import.
//!
//! Parses Microsoft PDB files to extract function symbols with addresses,
//! line number mappings, and source file information. Uses the `pdb` crate.

use std::collections::BTreeMap;
use std::path::Path;

use fallible_iterator::FallibleIterator;
use pdb::{PDB, Rva, SymbolData};

use crate::error::LoadError;
use crate::image::{Symbol, SymbolKind};

/// Source location for a given RVA.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SourceLocation {
    pub file: String,
    pub line: u32,
    pub column: Option<u32>,
}

/// Aggregated debug info extracted from a PDB file.
#[derive(Debug, Clone)]
pub struct PdbInfo {
    pub symbols: BTreeMap<u64, Symbol>,
    pub lines: BTreeMap<u64, SourceLocation>,
}

/// Parse a `.pdb` file and extract function symbols and line information.
///
/// Addresses in the returned maps are RVAs (relative virtual addresses).
/// Callers should add the PE image base to convert to absolute VAs.
pub fn import_pdb(pdb_path: &Path) -> Result<PdbInfo, LoadError> {
    let file = std::fs::File::open(pdb_path)?;
    let mut pdb = PDB::open(file)?;

    let address_map = pdb.address_map()?;
    let dbi = pdb.debug_information()?;
    let mut symbols = BTreeMap::new();
    let mut lines = BTreeMap::new();

    collect_global_symbols(&mut pdb, &address_map, &mut symbols)?;

    let mut modules = dbi.modules()?;
    while let Some(module) = modules.next()? {
        let module_info = match pdb.module_info(&module)? {
            Some(info) => info,
            None => continue,
        };

        collect_module_symbols(&module_info, &address_map, &mut symbols)?;
        collect_line_info(&module_info, &address_map, &mut lines)?;
    }

    tracing::debug!(
        functions = symbols.len(),
        line_records = lines.len(),
        "PDB import complete"
    );

    Ok(PdbInfo { symbols, lines })
}

fn collect_global_symbols(
    pdb: &mut PDB<std::fs::File>,
    address_map: &pdb::AddressMap,
    out: &mut BTreeMap<u64, Symbol>,
) -> Result<(), LoadError> {
    let global_symbols = pdb.global_symbols()?;
    let mut iter = global_symbols.iter();

    while let Some(sym) = iter.next()? {
        if let Ok(data) = sym.parse() {
            match data {
                SymbolData::Public(pub_sym) if pub_sym.function => {
                    if let Some(rva) = pub_sym.offset.to_rva(&address_map) {
                        insert_symbol(out, rva, pub_sym.name.to_string().to_string(), 0);
                    }
                }
                _ => {}
            }
        }
    }

    Ok(())
}

fn collect_module_symbols(
    module_info: &pdb::ModuleInfo<'_>,
    address_map: &pdb::AddressMap,
    out: &mut BTreeMap<u64, Symbol>,
) -> Result<(), LoadError> {
    let mut iter = module_info.symbols()?;

    while let Some(sym) = iter.next()? {
        if let Ok(data) = sym.parse() {
            match data {
                SymbolData::Procedure(proc) => {
                    if let Some(rva) = proc.offset.to_rva(&address_map) {
                        insert_symbol(out, rva, proc.name.to_string().to_string(), proc.len as u64);
                    }
                }
                SymbolData::Data(data_sym) if data_sym.global => {
                    if let Some(rva) = data_sym.offset.to_rva(&address_map) {
                        insert_data_symbol(out, rva, data_sym.name.to_string().to_string());
                    }
                }
                _ => {}
            }
        }
    }

    Ok(())
}

fn collect_line_info(
    module_info: &pdb::ModuleInfo<'_>,
    address_map: &pdb::AddressMap,
    out: &mut BTreeMap<u64, SourceLocation>,
) -> Result<(), LoadError> {
    let line_program = module_info.line_program()?;
    let mut line_iter = line_program.lines();

    while let Some(line) = line_iter.next()? {
        let rva = match line.offset.to_rva(&address_map) {
            Some(r) => r,
            None => continue,
        };

        let file_info = match line_program.get_file_info(line.file_index) {
            Ok(fi) => fi,
            Err(_) => continue,
        };

        let loc = SourceLocation {
            file: file_info.name.to_string().to_string(),
            line: line.line_start,
            column: line.column_start,
        };

        out.entry(rva_to_u64(rva)).or_insert(loc);
    }

    Ok(())
}

fn insert_symbol(out: &mut BTreeMap<u64, Symbol>, rva: Rva, name: String, size: u64) {
    let addr = rva_to_u64(rva);
    // Prefer Procedure symbols (with size) over Public symbols (without).
    out.entry(addr)
        .and_modify(|existing| {
            if existing.size == 0 && size > 0 {
                existing.size = size;
            }
            if existing.name.is_empty() && !name.is_empty() {
                existing.name = name.clone();
            }
        })
        .or_insert(Symbol {
            name,
            addr,
            size,
            kind: SymbolKind::Function,
        });
}

fn insert_data_symbol(out: &mut BTreeMap<u64, Symbol>, rva: Rva, name: String) {
    let addr = rva_to_u64(rva);
    out.entry(addr).or_insert(Symbol {
        name,
        addr,
        size: 0,
        kind: SymbolKind::Object,
    });
}

fn rva_to_u64(rva: Rva) -> u64 {
    u64::from(u32::from(rva))
}

/// Merge PDB-sourced symbols into an existing symbol map.
///
/// PDB symbols are RVAs; `image_base` is added to convert to absolute VAs
/// matching the PE image's address space.
pub fn merge_pdb_symbols(target: &mut BTreeMap<u64, Symbol>, pdb_info: &PdbInfo, image_base: u64) {
    for (rva, sym) in &pdb_info.symbols {
        let va = rva + image_base;
        let adjusted = Symbol {
            name: sym.name.clone(),
            addr: va,
            size: sym.size,
            kind: sym.kind,
        };

        target
            .entry(va)
            .and_modify(|existing| {
                // PDB procedure symbols are higher fidelity than COFF/export symbols.
                if existing.name.is_empty() || sym.kind == SymbolKind::Function {
                    existing.name = adjusted.name.clone();
                }
                if existing.size == 0 && adjusted.size > 0 {
                    existing.size = adjusted.size;
                }
                if existing.kind != SymbolKind::Function && adjusted.kind == SymbolKind::Function {
                    existing.kind = SymbolKind::Function;
                }
            })
            .or_insert(adjusted);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn rva_to_u64_roundtrip() {
        let rva = Rva(0x1000);
        assert_eq!(rva_to_u64(rva), 0x1000u64);
    }

    #[test]
    fn insert_symbol_prefers_sized() {
        let mut map = BTreeMap::new();
        let rva = Rva(0x1000);

        insert_symbol(&mut map, rva, "foo".into(), 0);
        assert_eq!(map[&0x1000].size, 0);

        insert_symbol(&mut map, rva, "foo".into(), 42);
        assert_eq!(map[&0x1000].size, 42);
    }

    #[test]
    fn insert_symbol_prefers_named() {
        let mut map = BTreeMap::new();
        let rva = Rva(0x2000);

        insert_symbol(&mut map, rva, String::new(), 10);
        assert!(map[&0x2000].name.is_empty());

        insert_symbol(&mut map, rva, "bar".into(), 0);
        assert_eq!(map[&0x2000].name, "bar");
    }

    #[test]
    fn insert_data_symbol_no_overwrite() {
        let mut map = BTreeMap::new();
        let rva = Rva(0x3000);

        insert_data_symbol(&mut map, rva, "global_var".into());
        assert_eq!(map[&0x3000].kind, SymbolKind::Object);

        insert_data_symbol(&mut map, rva, "other_var".into());
        assert_eq!(map[&0x3000].name, "global_var");
    }

    #[test]
    fn merge_pdb_symbols_adds_image_base() {
        let mut target = BTreeMap::new();
        let pdb_info = PdbInfo {
            symbols: BTreeMap::from([(
                0x1000,
                Symbol {
                    name: "main".into(),
                    addr: 0x1000,
                    size: 100,
                    kind: SymbolKind::Function,
                },
            )]),
            lines: BTreeMap::new(),
        };

        let image_base = 0x0040_0000u64;
        merge_pdb_symbols(&mut target, &pdb_info, image_base);

        let sym = target.get(&0x0040_1000).expect("symbol at VA");
        assert_eq!(sym.name, "main");
        assert_eq!(sym.addr, 0x0040_1000);
        assert_eq!(sym.size, 100);
    }

    #[test]
    fn merge_pdb_symbols_upgrades_existing() {
        let mut target = BTreeMap::new();
        target.insert(
            0x0040_1000,
            Symbol {
                name: "".into(),
                addr: 0x0040_1000,
                size: 0,
                kind: SymbolKind::Unknown,
            },
        );

        let pdb_info = PdbInfo {
            symbols: BTreeMap::from([(
                0x1000,
                Symbol {
                    name: "main".into(),
                    addr: 0x1000,
                    size: 200,
                    kind: SymbolKind::Function,
                },
            )]),
            lines: BTreeMap::new(),
        };

        merge_pdb_symbols(&mut target, &pdb_info, 0x0040_0000);

        let sym = &target[&0x0040_1000];
        assert_eq!(sym.name, "main");
        assert_eq!(sym.size, 200);
        assert_eq!(sym.kind, SymbolKind::Function);
    }

    #[test]
    fn source_location_equality() {
        let a = SourceLocation {
            file: "main.c".into(),
            line: 10,
            column: Some(5),
        };
        let b = SourceLocation {
            file: "main.c".into(),
            line: 10,
            column: Some(5),
        };
        assert_eq!(a, b);
    }

    #[test]
    #[ignore = "requires a real PDB fixture file"]
    fn import_real_pdb() {
        let info = import_pdb(Path::new("fixtures/test.pdb")).unwrap();
        assert!(!info.symbols.is_empty(), "should extract symbols from PDB");
    }
}
