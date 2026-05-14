//! WebAssembly component-model / WASI metadata extraction.
//!
//! This module is intentionally a lightweight "unwrapper": it does not try to
//! validate or lower the full component model.  Instead it walks wasmparser's
//! streaming payloads and records the host-facing names analysts care about:
//! WASI imports, component imports/exports, canonical ABI lift/lower adapters,
//! nested core modules/components, and core function imports/exports.

use std::collections::BTreeMap;
use std::fmt;
use std::ops::Range;

use wasmparser::{
    CanonicalFunction, CanonicalOption, ComponentExternalKind, ComponentTypeRef, Encoding,
    ExternalKind, Parser, Payload, TypeRef,
};

use crate::Loader;
use crate::error::LoadError;
use crate::image::{ArchId, BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind};

/// WebAssembly binary magic (`\0asm`).
pub const WASM_MAGIC: [u8; 4] = [0x00, b'a', b's', b'm'];

/// Loader for raw WebAssembly modules and WebAssembly component-model files.
pub struct WasmLoader;

/// Summary of WebAssembly component-model and WASI-facing metadata.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct WasmComponentInfo {
    /// Encoding of the top-level wasm binary.
    pub encoding: WasmEncoding,
    /// Core-module imports, including imports from nested modules inside a component.
    pub core_imports: Vec<WasmCoreImport>,
    /// Core-module exports, including exports from nested modules inside a component.
    pub core_exports: Vec<WasmCoreExport>,
    /// Component-model imports.
    pub component_imports: Vec<WasmComponentImport>,
    /// Component-model exports.
    pub component_exports: Vec<WasmComponentExport>,
    /// Canonical ABI adapters (`canon lift`, `canon lower`, resources, async helpers, …).
    pub canonical_functions: Vec<WasmCanonicalFunction>,
    /// Nested core-module byte ranges found inside components.
    pub nested_modules: Vec<WasmNestedModule>,
    /// Nested component byte ranges found inside components.
    pub nested_components: Vec<WasmNestedComponent>,
    /// Function index specified by a core module start section, if any.
    pub start_functions: Vec<WasmStartFunction>,
    /// Component start functions.
    pub component_starts: Vec<WasmComponentStart>,
}

/// Top-level wasm encoding kind.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum WasmEncoding {
    /// Core WebAssembly module.
    #[default]
    Module,
    /// WebAssembly component-model component.
    Component,
}

impl fmt::Display for WasmEncoding {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Module => f.write_str("module"),
            Self::Component => f.write_str("component"),
        }
    }
}

/// Imported core wasm item.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmCoreImport {
    /// Nesting path such as `component/module[0]`.
    pub scope: String,
    /// Import module namespace, e.g. `wasi_snapshot_preview1` or `wasi:filesystem/preopens`.
    pub module: String,
    /// Imported item name.
    pub name: String,
    /// Import kind (`func`, `memory`, …).
    pub kind: String,
    /// Type index or textual type summary, where available.
    pub ty: String,
    /// True for WASI Preview 1 and Preview 2/interface-style imports.
    pub wasi: bool,
}

/// Exported core wasm item.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmCoreExport {
    /// Nesting path such as `module` or `component/module[0]`.
    pub scope: String,
    pub name: String,
    pub kind: String,
    pub index: u32,
    /// True for WASI-visible ABI exports (`_start`, `wasi:*`, `cabi_*`).
    pub wasi: bool,
}

/// Component-model import.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmComponentImport {
    pub scope: String,
    pub name: String,
    pub kind: String,
    pub ty: String,
    /// True for WASI Preview 2/interface imports (`wasi:*`).
    pub wasi: bool,
}

/// Component-model export.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmComponentExport {
    pub scope: String,
    pub name: String,
    pub kind: String,
    pub index: u32,
    pub ty: Option<String>,
    /// True for WASI Preview 2/interface exports (`wasi:*`) and canonical ABI helpers.
    pub wasi: bool,
}

/// Canonical ABI operation recorded from a component canonical section.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmCanonicalFunction {
    pub scope: String,
    /// Stable, human-readable operation summary.
    pub operation: String,
    /// Canonical ABI options (`utf8`, `memory=N`, `realloc=N`, …).
    pub options: Vec<String>,
}

/// Nested core module in a component.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmNestedModule {
    pub scope: String,
    pub range: Range<usize>,
}

/// Nested component in a component.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmNestedComponent {
    pub scope: String,
    pub range: Range<usize>,
}

/// Core module start-function record.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmStartFunction {
    pub scope: String,
    pub func_index: u32,
}

/// Component start-function record.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WasmComponentStart {
    pub scope: String,
    pub func_index: u32,
    pub args: Vec<u32>,
    pub results: u32,
}

impl WasmComponentInfo {
    /// Parse a wasm module/component and return unwrapped WASI/component metadata.
    pub fn parse(data: &[u8]) -> Result<Self, LoadError> {
        if !WasmLoader::can_load(data) {
            return Err(LoadError::InvalidMagic);
        }

        let mut info = Self::default();
        parse_payloads(data, Parser::new(0), "module".to_string(), true, &mut info)?;
        Ok(info)
    }

    /// Returns true when any recorded item is WASI-facing.
    pub fn has_wasi(&self) -> bool {
        self.core_imports.iter().any(|i| i.wasi)
            || self.core_exports.iter().any(|e| e.wasi)
            || self.component_imports.iter().any(|i| i.wasi)
            || self.component_exports.iter().any(|e| e.wasi)
    }
}

impl Loader for WasmLoader {
    fn can_load(data: &[u8]) -> bool {
        data.len() >= 8 && data[..4] == WASM_MAGIC
    }

    fn load(data: &[u8]) -> Result<BinaryImage, LoadError> {
        if !Self::can_load(data) {
            return Err(LoadError::InvalidMagic);
        }

        let component_info = WasmComponentInfo::parse(data)?;
        let symbols = symbols_from_wasm_info(&component_info);

        Ok(BinaryImage {
            arch: ArchId::Wasm,
            endian: Endian::Little,
            entry: component_info
                .start_functions
                .first()
                .map(|s| s.func_index as u64)
                .unwrap_or(0),
            sections: vec![Section {
                name: match component_info.encoding {
                    WasmEncoding::Module => ".wasm".to_string(),
                    WasmEncoding::Component => ".wasm.component".to_string(),
                },
                vaddr: 0,
                size: data.len() as u64,
                data: data.to_vec(),
                flags: SectionFlags::READ | SectionFlags::EXEC,
            }],
            symbols,
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
            wasm_component: Some(component_info),
        })
    }
}

fn parse_payloads(
    data: &[u8],
    parser: Parser,
    scope: String,
    top_level: bool,
    info: &mut WasmComponentInfo,
) -> Result<(), LoadError> {
    let mut module_index = 0usize;
    let mut component_index = 0usize;

    for payload in parser.parse_all(data) {
        match payload.map_err(|e| LoadError::Wasm(e.to_string()))? {
            Payload::Version { encoding, .. } => {
                if top_level {
                    info.encoding = match encoding {
                        Encoding::Module => WasmEncoding::Module,
                        Encoding::Component => WasmEncoding::Component,
                    };
                }
            }
            Payload::ImportSection(reader) => {
                for import in reader {
                    let import = import.map_err(|e| LoadError::Wasm(e.to_string()))?;
                    let module = import.module.to_string();
                    let name = import.name.to_string();
                    let kind = core_type_ref_kind(import.ty).to_string();
                    let ty = core_type_ref_summary(import.ty);
                    let wasi = is_wasi_name(&module) || is_wasi_name(&name);
                    info.core_imports.push(WasmCoreImport {
                        scope: scope.clone(),
                        module,
                        name,
                        kind,
                        ty,
                        wasi,
                    });
                }
            }
            Payload::ExportSection(reader) => {
                for export in reader {
                    let export = export.map_err(|e| LoadError::Wasm(e.to_string()))?;
                    let name = export.name.to_string();
                    info.core_exports.push(WasmCoreExport {
                        scope: scope.clone(),
                        name: name.clone(),
                        kind: external_kind(export.kind).to_string(),
                        index: export.index,
                        wasi: is_wasi_abi_export(&name),
                    });
                }
            }
            Payload::StartSection { func, .. } => {
                info.start_functions.push(WasmStartFunction {
                    scope: scope.clone(),
                    func_index: func,
                });
            }
            Payload::ComponentImportSection(reader) => {
                for import in reader {
                    let import = import.map_err(|e| LoadError::Wasm(e.to_string()))?;
                    let name = import.name.0.to_string();
                    let kind = component_type_ref_kind(&import.ty).to_string();
                    info.component_imports.push(WasmComponentImport {
                        scope: scope.clone(),
                        name: name.clone(),
                        kind,
                        ty: component_type_ref_summary(&import.ty),
                        wasi: is_wasi_name(&name),
                    });
                }
            }
            Payload::ComponentExportSection(reader) => {
                for export in reader {
                    let export = export.map_err(|e| LoadError::Wasm(e.to_string()))?;
                    let name = export.name.0.to_string();
                    info.component_exports.push(WasmComponentExport {
                        scope: scope.clone(),
                        name: name.clone(),
                        kind: component_external_kind(export.kind).to_string(),
                        index: export.index,
                        ty: export.ty.map(|ty| component_type_ref_summary(&ty)),
                        wasi: is_wasi_name(&name) || is_wasi_abi_export(&name),
                    });
                }
            }
            Payload::ComponentCanonicalSection(reader) => {
                for canonical in reader {
                    let canonical = canonical.map_err(|e| LoadError::Wasm(e.to_string()))?;
                    let (operation, options) = canonical_summary(&canonical);
                    info.canonical_functions.push(WasmCanonicalFunction {
                        scope: scope.clone(),
                        operation,
                        options,
                    });
                }
            }
            Payload::ComponentStartSection { start, .. } => {
                info.component_starts.push(WasmComponentStart {
                    scope: scope.clone(),
                    func_index: start.func_index,
                    args: start.arguments.to_vec(),
                    results: start.results,
                });
            }
            Payload::ModuleSection {
                parser,
                unchecked_range,
            } => {
                let child_scope = format!("{scope}/module[{module_index}]");
                module_index += 1;
                info.nested_modules.push(WasmNestedModule {
                    scope: child_scope.clone(),
                    range: unchecked_range.clone(),
                });
                let child = data
                    .get(unchecked_range.clone())
                    .ok_or_else(|| LoadError::Wasm("nested module range out of bounds".into()))?;
                parse_payloads(child, parser, child_scope, false, info)?;
            }
            Payload::ComponentSection {
                parser,
                unchecked_range,
            } => {
                let child_scope = format!("{scope}/component[{component_index}]");
                component_index += 1;
                info.nested_components.push(WasmNestedComponent {
                    scope: child_scope.clone(),
                    range: unchecked_range.clone(),
                });
                let child = data.get(unchecked_range.clone()).ok_or_else(|| {
                    LoadError::Wasm("nested component range out of bounds".into())
                })?;
                parse_payloads(child, parser, child_scope, false, info)?;
            }
            Payload::End(_) => {}
            _ => {}
        }
    }

    Ok(())
}

fn core_type_ref_kind(ty: TypeRef) -> &'static str {
    match ty {
        TypeRef::Func(_) => "func",
        TypeRef::Table(_) => "table",
        TypeRef::Memory(_) => "memory",
        TypeRef::Global(_) => "global",
        TypeRef::Tag(_) => "tag",
    }
}

fn core_type_ref_summary(ty: TypeRef) -> String {
    match ty {
        TypeRef::Func(idx) => format!("type[{idx}]"),
        TypeRef::Table(_) => "table".to_string(),
        TypeRef::Memory(mem) => format!("memory min={} max={:?}", mem.initial, mem.maximum),
        TypeRef::Global(g) => format!("global {:?} mutable={}", g.content_type, g.mutable),
        TypeRef::Tag(tag) => format!("tag kind={:?} type[{}]", tag.kind, tag.func_type_idx),
    }
}

fn external_kind(kind: ExternalKind) -> &'static str {
    match kind {
        ExternalKind::Func => "func",
        ExternalKind::Table => "table",
        ExternalKind::Memory => "memory",
        ExternalKind::Global => "global",
        ExternalKind::Tag => "tag",
    }
}

fn component_external_kind(kind: ComponentExternalKind) -> &'static str {
    kind.desc()
}

fn component_type_ref_kind(ty: &ComponentTypeRef) -> &'static str {
    component_external_kind(ty.kind())
}

fn component_type_ref_summary(ty: &ComponentTypeRef) -> String {
    match ty {
        ComponentTypeRef::Module(idx) => format!("module type[{idx}]"),
        ComponentTypeRef::Func(idx) => format!("func type[{idx}]"),
        ComponentTypeRef::Value(v) => format!("value {v:?}"),
        ComponentTypeRef::Type(bounds) => format!("type {bounds:?}"),
        ComponentTypeRef::Instance(idx) => format!("instance type[{idx}]"),
        ComponentTypeRef::Component(idx) => format!("component type[{idx}]"),
    }
}

fn canonical_summary(func: &CanonicalFunction) -> (String, Vec<String>) {
    match func {
        CanonicalFunction::Lift {
            core_func_index,
            type_index,
            options,
        } => (
            format!("canon lift core_func[{core_func_index}] type[{type_index}]"),
            canonical_options(options),
        ),
        CanonicalFunction::Lower {
            func_index,
            options,
        } => (
            format!("canon lower func[{func_index}]"),
            canonical_options(options),
        ),
        CanonicalFunction::ResourceNew { resource } => {
            (format!("resource.new type[{resource}]"), Vec::new())
        }
        CanonicalFunction::ResourceDrop { resource } => {
            (format!("resource.drop type[{resource}]"), Vec::new())
        }
        CanonicalFunction::ResourceRep { resource } => {
            (format!("resource.rep type[{resource}]"), Vec::new())
        }
        other => (format!("{other:?}"), Vec::new()),
    }
}

fn canonical_options(options: &[CanonicalOption]) -> Vec<String> {
    options
        .iter()
        .map(|opt| match opt {
            CanonicalOption::UTF8 => "utf8".to_string(),
            CanonicalOption::UTF16 => "utf16".to_string(),
            CanonicalOption::CompactUTF16 => "compact-utf16".to_string(),
            CanonicalOption::Memory(idx) => format!("memory={idx}"),
            CanonicalOption::Realloc(idx) => format!("realloc={idx}"),
            CanonicalOption::PostReturn(idx) => format!("post-return={idx}"),
            CanonicalOption::Async => "async".to_string(),
            CanonicalOption::Callback(idx) => format!("callback={idx}"),
        })
        .collect()
}

fn is_wasi_name(name: &str) -> bool {
    name == "wasi_snapshot_preview1"
        || name.starts_with("wasi_")
        || name.starts_with("wasi:")
        || name.contains("/wasi-")
}

fn is_wasi_abi_export(name: &str) -> bool {
    name == "_start" || name.starts_with("cabi_") || is_wasi_name(name)
}

fn symbols_from_wasm_info(info: &WasmComponentInfo) -> BTreeMap<u64, Symbol> {
    let mut symbols = BTreeMap::new();
    let mut addr = 1u64;

    for export in &info.core_exports {
        if export.kind == "func" {
            symbols.insert(
                addr,
                Symbol {
                    name: format!("{}::{}", export.scope, export.name),
                    addr,
                    size: 0,
                    kind: SymbolKind::Function,
                },
            );
            addr += 1;
        }
    }

    for export in &info.component_exports {
        if export.kind == "func" {
            symbols.insert(
                addr,
                Symbol {
                    name: format!("{}::{}", export.scope, export.name),
                    addr,
                    size: 0,
                    kind: SymbolKind::Function,
                },
            );
            addr += 1;
        }
    }

    symbols
}

#[cfg(test)]
mod tests {
    use super::*;

    fn enc_u32(mut value: u32, out: &mut Vec<u8>) {
        loop {
            let mut byte = (value & 0x7f) as u8;
            value >>= 7;
            if value != 0 {
                byte |= 0x80;
            }
            out.push(byte);
            if value == 0 {
                break;
            }
        }
    }

    fn str_bytes(s: &str, out: &mut Vec<u8>) {
        enc_u32(s.len() as u32, out);
        out.extend_from_slice(s.as_bytes());
    }

    fn section(id: u8, payload: &[u8], out: &mut Vec<u8>) {
        out.push(id);
        enc_u32(payload.len() as u32, out);
        out.extend_from_slice(payload);
    }

    fn module_with_wasi_import_export() -> Vec<u8> {
        let mut wasm = vec![0x00, b'a', b's', b'm', 0x01, 0x00, 0x00, 0x00];

        let mut imports = Vec::new();
        enc_u32(1, &mut imports);
        str_bytes("wasi_snapshot_preview1", &mut imports);
        str_bytes("fd_write", &mut imports);
        imports.push(0x00); // func
        enc_u32(0, &mut imports); // type index
        section(2, &imports, &mut wasm);

        let mut exports = Vec::new();
        enc_u32(1, &mut exports);
        str_bytes("_start", &mut exports);
        exports.push(0x00); // func
        enc_u32(0, &mut exports);
        section(7, &exports, &mut wasm);

        wasm
    }

    #[test]
    fn unwraps_core_wasi_imports_and_exports() {
        let info = WasmComponentInfo::parse(&module_with_wasi_import_export()).unwrap();
        assert_eq!(info.encoding, WasmEncoding::Module);
        assert!(info.has_wasi());
        assert_eq!(info.core_imports.len(), 1);
        assert_eq!(info.core_imports[0].module, "wasi_snapshot_preview1");
        assert_eq!(info.core_imports[0].name, "fd_write");
        assert!(info.core_imports[0].wasi);
        assert_eq!(info.core_exports[0].name, "_start");
        assert!(info.core_exports[0].wasi);
    }

    #[test]
    fn loader_builds_wasm_image() {
        let image = WasmLoader::load(&module_with_wasi_import_export()).unwrap();
        assert_eq!(image.arch, ArchId::Wasm);
        assert_eq!(image.sections[0].name, ".wasm");
        let info = image.wasm_component.as_ref().unwrap();
        assert!(info.has_wasi());
    }

    #[test]
    fn unwraps_minimal_component_import_export() {
        let mut bytes = vec![0x00, b'a', b's', b'm', 0x0d, 0x00, 0x01, 0x00];

        let mut imports = Vec::new();
        enc_u32(1, &mut imports);
        imports.push(0x00); // component import-name discriminator
        str_bytes("wasi:cli/run", &mut imports);
        imports.push(0x01); // component func
        enc_u32(0, &mut imports); // type index
        section(10, &imports, &mut bytes);

        let mut exports = Vec::new();
        enc_u32(1, &mut exports);
        exports.push(0x00); // component export-name discriminator
        str_bytes("run", &mut exports);
        exports.push(0x01); // component func
        enc_u32(0, &mut exports); // index
        exports.push(0x00); // no ascribed type
        section(11, &exports, &mut bytes);

        let info = WasmComponentInfo::parse(&bytes).unwrap();
        assert_eq!(info.encoding, WasmEncoding::Component);
        assert_eq!(info.component_imports.len(), 1);
        assert_eq!(info.component_imports[0].name, "wasi:cli/run");
        assert!(info.component_imports[0].wasi);
        assert_eq!(info.component_exports[0].name, "run");
        assert_eq!(info.component_exports[0].kind, "func");
    }

    #[test]
    fn rejects_non_wasm_magic() {
        assert!(matches!(
            WasmComponentInfo::parse(b"not wasm"),
            Err(LoadError::InvalidMagic)
        ));
    }
}
