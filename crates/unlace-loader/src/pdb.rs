//! PDB (Program Database) debug info import.
//!
//! Parses Microsoft PDB files to extract function symbols with addresses,
//! line number mappings, and source file information. Uses the `pdb` crate.

use std::collections::BTreeMap;
use std::path::Path;

use fallible_iterator::FallibleIterator;
use pdb::{PDB, Register, Rva, SymbolData, TypeData, TypeIndex};
use unlace_ir::ssa::CallingConvention;

use crate::error::LoadError;
use crate::image::{Symbol, SymbolKind};

/// Source location for a given RVA.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SourceLocation {
    pub file: String,
    pub line: u32,
    pub column: Option<u32>,
}

/// §5.8: one local variable extracted from a PDB function's symbol
/// stream. `frame_offset` is RBP-relative when known (negative for
/// locals below the saved frame pointer).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PdbLocal {
    /// Source-visible variable name.
    pub name: String,
    /// Frame-pointer-relative offset (or `None` if PDB only carries a
    /// register location).
    pub frame_offset: Option<i64>,
    /// CodeView type index of the variable's declared type. Resolve
    /// against `PdbTypes::by_index` to recover a structured `Type`.
    pub type_index: u32,
}

/// Aggregated debug info extracted from a PDB file.
#[derive(Debug, Clone, Default)]
pub struct PdbInfo {
    pub symbols: BTreeMap<u64, Symbol>,
    pub lines: BTreeMap<u64, SourceLocation>,
    /// Procedure/member-function type index → calling convention metadata.
    pub calling_conventions: BTreeMap<u32, CallingConvention>,
    /// §5.8: per-function locals keyed by function RVA. Empty when the
    /// PDB carries no `S_LDATA32`/`S_LOCAL`/`S_REGREL32` records inside
    /// the function scope.
    pub function_locals: BTreeMap<u64, Vec<PdbLocal>>,
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
    let mut function_locals = BTreeMap::new();
    let calling_conventions = collect_type_calling_conventions(&mut pdb)?;

    collect_global_symbols(&mut pdb, &address_map, &mut symbols)?;

    let mut modules = dbi.modules()?;
    while let Some(module) = modules.next()? {
        let module_info = match pdb.module_info(&module)? {
            Some(info) => info,
            None => continue,
        };

        collect_module_symbols(
            &module_info,
            &address_map,
            &mut symbols,
            &mut function_locals,
        )?;
        collect_line_info(&module_info, &address_map, &mut lines)?;
    }

    tracing::debug!(
        functions = symbols.len(),
        line_records = lines.len(),
        local_functions = function_locals.len(),
        "PDB import complete"
    );

    Ok(PdbInfo {
        symbols,
        lines,
        calling_conventions,
        function_locals,
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
    function_locals: &mut BTreeMap<u64, Vec<PdbLocal>>,
) -> Result<(), LoadError> {
    let mut iter = module_info.symbols()?;
    let mut current_function = None;
    let mut current_function_end = None;
    let mut pending_local = None;

    while let Some(sym) = iter.next()? {
        if let Ok(data) = sym.parse() {
            match data {
                SymbolData::Procedure(proc) => {
                    flush_pending_local(current_function, &mut pending_local, function_locals);
                    if let Some(rva) = proc.offset.to_rva(address_map) {
                        let addr = rva_to_u64(rva);
                        insert_symbol(out, rva, proc.name.to_string().to_string(), proc.len as u64);
                        current_function = Some(addr);
                        current_function_end = Some(proc.end);
                        pending_local = None;
                    }
                }
                SymbolData::ScopeEnd | SymbolData::ProcedureEnd => {
                    flush_pending_local(current_function, &mut pending_local, function_locals);
                    if current_function_end == Some(sym.index())
                        || matches!(data, SymbolData::ProcedureEnd)
                    {
                        current_function = None;
                        current_function_end = None;
                    }
                }
                SymbolData::Local(local) => {
                    flush_pending_local(current_function, &mut pending_local, function_locals);
                    pending_local = current_function.map(|_| PdbLocal {
                        name: local.name.to_string().to_string(),
                        frame_offset: None,
                        type_index: ti_to_u32(local.type_index),
                    });
                }
                SymbolData::RegisterRelative(regrel) => {
                    if let Some(func_rva) = current_function {
                        let local = pending_local.take().unwrap_or_else(|| PdbLocal {
                            name: regrel.name.to_string().to_string(),
                            frame_offset: None,
                            type_index: ti_to_u32(regrel.type_index),
                        });
                        let mut local = local;
                        local.frame_offset =
                            frame_offset_for_register(regrel.register, regrel.offset);
                        function_locals.entry(func_rva).or_default().push(local);
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

fn flush_pending_local(
    current_function: Option<u64>,
    pending_local: &mut Option<PdbLocal>,
    function_locals: &mut BTreeMap<u64, Vec<PdbLocal>>,
) {
    if let (Some(func_rva), Some(local)) = (current_function, pending_local.take()) {
        function_locals.entry(func_rva).or_default().push(local);
    }
}

fn frame_offset_for_register(register: Register, offset: i32) -> Option<i64> {
    matches!(register.0, 22 | 334).then_some(i64::from(offset))
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
            calling_conventions: BTreeMap::new(),
            function_locals: BTreeMap::new(),
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
            function_locals: BTreeMap::new(),
        };

        merge_pdb_symbols(&mut target, &pdb_info, 0x0040_0000);

        let sym = &target[&0x0040_1000];
        assert_eq!(sym.name, "main");
        assert_eq!(sym.size, 200);
        assert_eq!(sym.kind, SymbolKind::Function);
    }

    /// §5.8: the new `function_locals` field on `PdbInfo` is public,
    /// non-`Option`, and round-trips through manual construction.
    #[test]
    fn pdb_info_function_locals_is_publicly_writable() {
        let mut info = PdbInfo {
            symbols: BTreeMap::new(),
            lines: BTreeMap::new(),
            calling_conventions: BTreeMap::new(),
            function_locals: BTreeMap::new(),
        };
        info.function_locals.insert(
            0x1000,
            vec![PdbLocal {
                name: "x".into(),
                frame_offset: Some(-16),
                type_index: 0x0074, // T_INT4
            }],
        );
        let locals = info.function_locals.get(&0x1000).unwrap();
        assert_eq!(locals.len(), 1);
        assert_eq!(locals[0].name, "x");
        assert_eq!(locals[0].frame_offset, Some(-16));
        assert_eq!(locals[0].type_index, 0x0074);
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
        assert_eq!(map_pdb_calling_convention(0xff), None);
    }

    #[test]
    fn frame_offset_only_for_frame_pointer_registers() {
        assert_eq!(frame_offset_for_register(Register(22), -16), Some(-16));
        assert_eq!(frame_offset_for_register(Register(334), -32), Some(-32));
        assert_eq!(frame_offset_for_register(Register(18), -16), None);
    }

    #[test]
    #[ignore = "requires a real PDB fixture file"]
    fn import_real_pdb() {
        let info = import_pdb(Path::new("fixtures/test.pdb")).unwrap();
        assert!(!info.symbols.is_empty(), "should extract symbols from PDB");
    }
}
