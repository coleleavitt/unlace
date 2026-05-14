//! PDB (Program Database) debug info import.
//!
//! Parses Microsoft PDB files to extract function symbols with addresses,
//! line number mappings, source file information, and inlinee call-site maps.
//! Uses the `pdb` crate.

use std::collections::BTreeMap;
use std::path::Path;

use fallible_iterator::FallibleIterator;
use pdb::{BinaryAnnotation, IdIndex, PDB, Rva, SymbolData, TypeData, TypeIndex};
use pdb::{PDB, Rva, SymbolData};
use pdb::{PDB, Rva, SymbolData, TypeData, TypeIndex};
use unlace_ir::ssa::CallingConvention;
use pdb::{PDB, Rva, SymbolData};
use pdb::{IdData, ItemIndex, PDB, Rva, SymbolData};

use crate::error::LoadError;
use crate::image::{Symbol, SymbolKind};

/// Source location for a given RVA.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SourceLocation {
    pub file: String,
    pub line: u32,
    pub column: Option<u32>,
}

/// A PGO-inlined call site resolved from an `S_INLINESITE` record.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InlineeSite {
    /// RVA of the first instruction belonging to the inlined body.
    pub rva: u64,
    /// Synthetic name for the inlined callee (`_inlined_<name>(...)`).
    pub name: String,
    /// RVA of the parent (enclosing) procedure.
    pub parent_rva: Option<u64>,
/// PGO / CodeView inlinee call-site recovered from a PDB.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InlineeSite {
    /// Start RVA of the machine-code range attributed to the inlined callee.
    pub rva: u64,
    /// Length of the covered code range when known.
    pub length: Option<u32>,
    /// Display name of the inlined callee.
    pub name: String,
    /// Source location associated with the inlinee record when present.
    pub file: Option<String>,
    pub line: Option<u32>,
    pub column: Option<u32>,
}

/// Aggregated debug info extracted from a PDB file.
#[derive(Debug, Clone)]
pub struct PdbInfo {
    pub symbols: BTreeMap<u64, Symbol>,
    pub lines: BTreeMap<u64, SourceLocation>,
    /// Procedure/member-function type index → calling convention metadata.
    pub calling_conventions: BTreeMap<u32, CallingConvention>,
    /// Inlined call-sites from `S_INLINESITE` records.
    pub inlinee_sites: Vec<InlineeSite>,
    /// Instruction RVA → inlined callee metadata for PGO/CodeView inline sites.
    pub inlinee_sites: BTreeMap<u64, InlineeSite>,
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
    let id_info = pdb.id_information()?;
    let mut id_finder = id_info.finder();
    let mut id_iter = id_info.iter();
    while let Some(_id) = id_iter.next()? {
        id_finder.update(&id_iter);
    }

    let mut symbols = BTreeMap::new();
    let mut lines = BTreeMap::new();
    let calling_conventions = collect_type_calling_conventions(&mut pdb)?;

    // Build an ID finder for resolving inlinee names from the IPI stream.
    let id_info = pdb.id_information()?;
    let mut id_finder = id_info.finder();
    {
        let mut id_iter = id_info.iter();
        while id_iter.next()?.is_some() {
            id_finder.update(&id_iter);
        }
    }
    let mut inlinee_sites = BTreeMap::new();

    collect_global_symbols(&mut pdb, &address_map, &mut symbols)?;

    let mut inlinee_sites = Vec::new();

    let mut modules = dbi.modules()?;
    while let Some(module) = modules.next()? {
        let module_info = match pdb.module_info(&module)? {
            Some(info) => info,
            None => continue,
        };

        collect_module_symbols(&module_info, &address_map, &mut symbols)?;
        collect_line_info(&module_info, &address_map, &mut lines)?;
        collect_inlinee_sites(&module_info, &address_map, &id_finder, &mut inlinee_sites)?;
    }

    tracing::debug!(
        functions = symbols.len(),
        line_records = lines.len(),
        inlinee_sites = inlinee_sites.len(),
        "PDB import complete"
    );

    Ok(PdbInfo {
        symbols,
        lines,
        calling_conventions,
        inlinee_sites,
    })
}

fn collect_type_calling_conventions(
    pdb: &mut PDB<std::fs::File>,
) -> Result<BTreeMap<u32, CallingConvention>, LoadError> {
    let type_info = pdb.type_information()?;
    let mut out = BTreeMap::new();
    let mut iter = type_info.iter();

    while let Some(typ) = iter.next()? {
        let idx = ti_to_u32(typ.index());
        let Ok(parsed) = typ.parse() else {
            continue;
        };

        let convention = match parsed {
            TypeData::Procedure(proc) => {
                map_pdb_calling_convention(proc.attributes.calling_convention())
            }
    Ok(PdbInfo { symbols, lines })
    })
}

fn collect_type_calling_conventions(
    pdb: &mut PDB<std::fs::File>,
) -> Result<BTreeMap<u32, CallingConvention>, LoadError> {
    let type_info = pdb.type_information()?;
    let mut out = BTreeMap::new();
    let mut iter = type_info.iter();

    while let Some(typ) = iter.next()? {
        let idx = ti_to_u32(typ.index());
        let Ok(parsed) = typ.parse() else {
            continue;
        };

        let convention = match parsed {
            TypeData::Procedure(proc) => map_pdb_calling_convention(proc.attributes.calling_convention()),
            TypeData::MemberFunction(proc) => {
                map_pdb_calling_convention(proc.attributes.calling_convention())
            }
            _ => None,
        };

        if let Some(cc) = convention {
            out.insert(idx, cc);
        }
    }

    Ok(out)
}

fn map_pdb_calling_convention(raw: u8) -> Option<CallingConvention> {
    match raw {
        // CV_CALL_NEAR_C / CV_CALL_FAR_C
        0x00 | 0x01 => Some(CallingConvention::Cdecl),
        // CV_CALL_NEAR_PASCAL / CV_CALL_FAR_PASCAL / CV_CALL_NEAR_STD / CV_CALL_FAR_STD
        0x02 | 0x03 | 0x07 | 0x08 => Some(CallingConvention::Stdcall),
        // CV_CALL_NEAR_FAST / CV_CALL_FAR_FAST
        0x04 | 0x05 => Some(CallingConvention::MicrosoftX64),
        // CV_CALL_THISCALL
        0x0b => Some(CallingConvention::Thiscall),
        _ => None,
    }
}

fn ti_to_u32(t: TypeIndex) -> u32 {
    u32::from(t)
    Ok(PdbInfo { symbols, lines })
        inlinee_sites,
    })
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
                    if let Some(rva) = pub_sym.offset.to_rva(address_map) {
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
                    if let Some(rva) = proc.offset.to_rva(address_map) {
                        insert_symbol(out, rva, proc.name.to_string().to_string(), proc.len as u64);
                    }
                }
                SymbolData::Data(data_sym) if data_sym.global => {
                    if let Some(rva) = data_sym.offset.to_rva(address_map) {
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
        let rva = match line.offset.to_rva(address_map) {
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

/// Walk module symbols looking for `S_INLINESITE` records nested inside procedures.
///
/// For each inline site we resolve the inlinee function name from the IPI stream
/// and compute the first code offset from the binary annotations. The resulting
/// synthetic call-site is stored as `_inlined_<name>(...)`.
fn collect_inlinee_sites(
    module_info: &pdb::ModuleInfo<'_>,
    address_map: &pdb::AddressMap,
    id_finder: &pdb::IdFinder<'_>,
    out: &mut Vec<InlineeSite>,
) -> Result<(), LoadError> {
    let mut iter = module_info.symbols()?;

    // Track the RVA of the most-recently-seen enclosing procedure so we can
    // attribute inline sites to their parent.
    let mut current_proc_rva: Option<u64> = None;
    let mut current_proc_offset: Option<pdb::PdbInternalSectionOffset> = None;

    while let Some(sym) = iter.next()? {
        let Ok(data) = sym.parse() else {
            continue;
        };

        match data {
            SymbolData::Procedure(proc) => {
                current_proc_offset = Some(proc.offset);
                current_proc_rva = proc.offset.to_rva(address_map).map(rva_to_u64);
            }
            SymbolData::InlineSite(site) => {
                let name = resolve_inlinee_name(site.inlinee, id_finder);
                let Some(ref name) = name else {
                    continue;
                };

                // Compute the code offset of the first emitting annotation relative
                // to the enclosing procedure's section offset.
                let first_code_offset = first_emitting_offset(&site);
                let Some(offset) = first_code_offset else {
                    continue;
                };

                // Build the absolute RVA: parent proc section offset + annotation delta.
                let Some(proc_sec_offset) = current_proc_offset else {
                    continue;
                };
                let inline_offset = pdb::PdbInternalSectionOffset {
                    section: proc_sec_offset.section,
                    offset: proc_sec_offset.offset + offset,
                };
                let Some(rva) = inline_offset.to_rva(address_map) else {
                    continue;
                };

                out.push(InlineeSite {
                    rva: rva_to_u64(rva),
                    name: format!("_inlined_{}(...)", name),
                    parent_rva: current_proc_rva,
                });
            }
            _ => {}
        }
    }

    Ok(())
}

/// Resolve the inlinee name from the IPI stream via `IdIndex`.
///
/// Returns `None` if the index cannot be found or the Id record doesn't
/// correspond to a function or member-function.
fn resolve_inlinee_name(inlinee: IdIndex, id_finder: &pdb::IdFinder<'_>) -> Option<String> {
    let item = id_finder.find(inlinee).ok()?;
    let id_data = item.parse().ok()?;
    match id_data {
        pdb::IdData::Function(f) => Some(f.name.to_string().to_string()),
        pdb::IdData::MemberFunction(mf) => Some(mf.name.to_string().to_string()),
        _ => None,
    }
}

/// Extract the first code offset that emits a line record from the inline site's
/// binary annotations. This represents the RVA delta (from the enclosing
/// procedure's start) where the inlined code begins.
fn first_emitting_offset(site: &pdb::InlineSiteSymbol<'_>) -> Option<u32> {
    let mut code_offset: u32 = 0;
    let mut annotations_iter = site.annotations.iter();
    while let Ok(Some(ann)) = annotations_iter.next() {
        match ann {
            BinaryAnnotation::CodeOffset(o) => {
                // Absolute code offset -- this is the first emitting one.
                return Some(o);
            }
            BinaryAnnotation::ChangeCodeOffset(delta) => {
                code_offset += delta;
                return Some(code_offset);
            }
            BinaryAnnotation::ChangeCodeOffsetAndLineOffset(delta, _) => {
                code_offset += delta;
                return Some(code_offset);
            }
            BinaryAnnotation::ChangeCodeLengthAndCodeOffset(_, delta) => {
                code_offset += delta;
                return Some(code_offset);
            }
            BinaryAnnotation::ChangeCodeOffsetBase(base) => {
                code_offset = base;
            }
            _ => {}
        }
    }
    None
fn collect_inlinee_sites(
    module_info: &pdb::ModuleInfo<'_>,
    address_map: &pdb::AddressMap,
    id_finder: &pdb::IdFinder<'_>,
    out: &mut BTreeMap<u64, InlineeSite>,
) -> Result<(), LoadError> {
    let mut inlinees = module_info.inlinees()?;
    let mut inlinee_map = BTreeMap::new();
    while let Some(inlinee) = inlinees.next()? {
        inlinee_map.insert(inlinee.index(), inlinee);
    }

    if inlinee_map.is_empty() {
        return Ok(());
    }

    let line_program = module_info.line_program()?;
    let mut symbols = module_info.symbols()?;
    let mut proc_offset = None;

    while let Some(sym) = symbols.next()? {
        if let Ok(data) = sym.parse() {
            match data {
                SymbolData::Procedure(proc) => {
                    proc_offset = Some(proc.offset);
                }
                SymbolData::InlineSite(site) => {
                    let Some(parent_offset) = proc_offset else {
                        continue;
                    };
                    let Some(inlinee) = inlinee_map.get(&site.inlinee) else {
                        continue;
                    };
                    let name = resolve_inlinee_name(site.inlinee, id_finder)
                        .unwrap_or_else(|| format!("inlinee_{:#x}", u32::from(site.inlinee)));
                    let mut lines = inlinee.lines(parent_offset, &site);
                    while let Some(line) = lines.next()? {
                        let Some(rva) = line.offset.to_rva(address_map) else {
                            continue;
                        };
                        let file = line_program
                            .get_file_info(line.file_index)
                            .ok()
                            .map(|fi| fi.name.to_string().to_string());
                        let key = rva_to_u64(rva);
                        out.entry(key).or_insert_with(|| InlineeSite {
                            rva: key,
                            length: line.length,
                            name: name.clone(),
                            file,
                            line: Some(line.line_start),
                            column: line.column_start,
                        });
                    }
                }
                _ => {}
            }
        }
    }

    Ok(())
}

fn resolve_inlinee_name(index: pdb::IdIndex, id_finder: &pdb::IdFinder<'_>) -> Option<String> {
    let index = resolve_local_id_index(index);
    let item = id_finder.find(index).ok()?;
    match item.parse().ok()? {
        IdData::Function(func) => Some(func.name.to_string().to_string()),
        IdData::MemberFunction(func) => Some(func.name.to_string().to_string()),
        IdData::String(s) => Some(s.name.to_string().to_string()),
        _ => None,
    }
}

fn resolve_local_id_index(index: pdb::IdIndex) -> pdb::IdIndex {
    if index.is_cross_module() {
        pdb::IdIndex(u32::from(index) & 0x7fff_ffff)
    } else {
        index
    }
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

    // Insert synthetic symbols for PGO-inlined call sites.
    for site in &pdb_info.inlinee_sites {
        let va = site.rva + image_base;
        // Only insert if there isn't already a real symbol at this address.
        target.entry(va).or_insert_with(|| Symbol {
            name: site.name.clone(),
            addr: va,
            size: 0,
            kind: SymbolKind::Function,
        });
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
            calling_conventions: BTreeMap::new(),
            inlinee_sites: Vec::new(),
            inlinee_sites: BTreeMap::new(),
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
            calling_conventions: BTreeMap::new(),
            inlinee_sites: Vec::new(),
            inlinee_sites: BTreeMap::new(),
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
    fn maps_pdb_calling_conventions() {
        assert_eq!(
            map_pdb_calling_convention(0x00),
            Some(CallingConvention::Cdecl)
        );
        assert_eq!(
            map_pdb_calling_convention(0x07),
            Some(CallingConvention::Stdcall)
        );
        assert_eq!(
            map_pdb_calling_convention(0x04),
            Some(CallingConvention::MicrosoftX64)
        );
        assert_eq!(
            map_pdb_calling_convention(0x0b),
            Some(CallingConvention::Thiscall)
        );
        assert_eq!(map_pdb_calling_convention(0x00), Some(CallingConvention::Cdecl));
        assert_eq!(map_pdb_calling_convention(0x07), Some(CallingConvention::Stdcall));
        assert_eq!(map_pdb_calling_convention(0x04), Some(CallingConvention::MicrosoftX64));
        assert_eq!(map_pdb_calling_convention(0x0b), Some(CallingConvention::Thiscall));
        assert_eq!(map_pdb_calling_convention(0xff), None);
    fn resolve_local_id_index_masks_cross_module_bit() {
        let cross = pdb::IdIndex(0x8000_1234);
        assert_eq!(resolve_local_id_index(cross), pdb::IdIndex(0x1234));
        let local = pdb::IdIndex(0x1234);
        assert_eq!(resolve_local_id_index(local), local);
    }

    #[test]
    #[ignore = "requires a real PDB fixture file"]
    fn import_real_pdb() {
        let info = import_pdb(Path::new("fixtures/test.pdb")).unwrap();
        assert!(!info.symbols.is_empty(), "should extract symbols from PDB");
    }

    #[test]
    fn merge_inlinee_sites_produces_synthetic_symbols() {
        let mut target = BTreeMap::new();
        // Insert a real procedure symbol that the inline site lives inside.
        target.insert(
            0x0040_1000,
            Symbol {
                name: "parent_func".into(),
                addr: 0x0040_1000,
                size: 200,
                kind: SymbolKind::Function,
            },
        );

        let pdb_info = PdbInfo {
            symbols: BTreeMap::new(),
            lines: BTreeMap::new(),
            calling_conventions: BTreeMap::new(),
            inlinee_sites: vec![
                InlineeSite {
                    rva: 0x1010,
                    name: "_inlined_memcpy(...)".into(),
                    parent_rva: Some(0x1000),
                },
                InlineeSite {
                    rva: 0x1040,
                    name: "_inlined_strlen(...)".into(),
                    parent_rva: Some(0x1000),
                },
            ],
        };

        merge_pdb_symbols(&mut target, &pdb_info, 0x0040_0000);

        // Inlined memcpy site should appear as a synthetic symbol.
        let memcpy_sym = target.get(&0x0040_1010).expect("inlined memcpy symbol");
        assert_eq!(memcpy_sym.name, "_inlined_memcpy(...)");
        assert_eq!(memcpy_sym.kind, SymbolKind::Function);

        // Inlined strlen site should appear.
        let strlen_sym = target.get(&0x0040_1040).expect("inlined strlen symbol");
        assert_eq!(strlen_sym.name, "_inlined_strlen(...)");

        // The parent procedure should not be overwritten.
        let parent = target.get(&0x0040_1000).expect("parent symbol");
        assert_eq!(parent.name, "parent_func");
    }

    #[test]
    fn merge_inlinee_does_not_overwrite_existing() {
        let mut target = BTreeMap::new();
        // Pre-existing symbol at the same address as an inline site.
        target.insert(
            0x0040_1010,
            Symbol {
                name: "real_symbol".into(),
                addr: 0x0040_1010,
                size: 50,
                kind: SymbolKind::Function,
            },
        );

        let pdb_info = PdbInfo {
            symbols: BTreeMap::new(),
            lines: BTreeMap::new(),
            calling_conventions: BTreeMap::new(),
            inlinee_sites: vec![InlineeSite {
                rva: 0x1010,
                name: "_inlined_foo(...)".into(),
                parent_rva: Some(0x1000),
            }],
        };

        merge_pdb_symbols(&mut target, &pdb_info, 0x0040_0000);

        // The existing symbol should NOT be replaced.
        let sym = &target[&0x0040_1010];
        assert_eq!(sym.name, "real_symbol");
        assert_eq!(sym.size, 50);
    }

    #[test]
    fn inlinee_site_formatting() {
        let site = InlineeSite {
            rva: 0x2000,
            name: "_inlined_memset(...)".into(),
            parent_rva: Some(0x1000),
        };
        assert_eq!(site.name, "_inlined_memset(...)");
        assert_eq!(site.rva, 0x2000);
        assert_eq!(site.parent_rva, Some(0x1000));
    }
}
