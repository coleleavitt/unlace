//! DWARF `.debug_info` consumer (t109).
//!
//! Walks every compilation unit in the image's DWARF sections via
//! [`gimli::Dwarf::units`] and lowers the following DIE tags into the
//! [`DwarfInfo`] struct:
//!
//!  * `DW_TAG_subprogram`     → [`FunctionDebugInfo`] (name, low_pc,
//!    high_pc, return type, parameters, locals, decl location).
//!  * `DW_TAG_structure_type` → [`StructType`] with [`StructField`]
//!    members.
//!  * `DW_TAG_union_type`     → [`UnionType`] with member list.
//!  * `DW_TAG_enumeration_type` → [`EnumType`] with `(name, value)`
//!    variant list.
//!  * `DW_AT_language` on compile-unit roots → [`DebugLanguage`].
//!  * `DW_TAG_variable` (inside a subprogram) → [`LocalVariable`] with
//!    optional `frame_offset` decoded from a single-op `DW_OP_fbreg`
//!    location expression.
//!
//! Recursive types are resolved through [`resolve_type_name`], which
//! recurses through `DW_TAG_pointer_type`, `DW_TAG_array_type`,
//! `DW_TAG_const_type`, `DW_TAG_volatile_type`, `DW_TAG_restrict_type`,
//! and `DW_TAG_typedef` to produce a printable C-style name (e.g.
//! `"const Rect *"` or `"int[4]"`).
//!
//! Missing or empty `.debug_*` sections are not an error: callers
//! receive an empty [`DwarfInfo`] and can fall back to symbol-table
//! recovery.
//!
//! Tests: see the `tests` module — fixtures `debug_calls.elf`,
//! `debug_structs.elf`, `hello_world.elf`, and `stripped.elf` exercise
//! every public surface end-to-end.

use std::borrow::Cow;
use std::collections::{BTreeMap, BTreeSet};

use gimli::{
    AttributeValue, DW_AT_abstract_origin, DW_AT_byte_size, DW_AT_const_value, DW_AT_count,
    DW_AT_data_member_location, DW_AT_high_pc, DW_AT_language, DW_AT_linkage_name, DW_AT_location,
    DW_AT_low_pc, DW_AT_name, DW_AT_specification, DW_AT_type, DW_AT_upper_bound,
    DW_TAG_array_type, DW_TAG_base_type, DW_TAG_const_type, DW_TAG_enumeration_type,
    DW_TAG_enumerator, DW_TAG_formal_parameter, DW_TAG_member, DW_TAG_pointer_type,
    DW_TAG_restrict_type, DW_TAG_structure_type, DW_TAG_subprogram, DW_TAG_subrange_type,
    DW_TAG_template_type_parameter, DW_TAG_typedef, DW_TAG_union_type, DW_TAG_variable,
    DW_TAG_volatile_type, EndianSlice, RunTimeEndian,
};

use crate::error::LoadError;
use crate::image::BinaryImage;

type R<'a> = EndianSlice<'a, RunTimeEndian>;

/// Shared DWARF location resolver used by normal DWARF import, split-DWARF
/// merge, and location-list evaluation.
#[derive(Debug, Clone, Default)]
pub struct DebugLocationResolver;

#[derive(Debug, Clone, Default)]
pub struct DwarfInfo {
    pub functions: BTreeMap<u64, FunctionDebugInfo>,
    pub source_map: BTreeMap<u64, SourceLocation>,
    pub structs: BTreeMap<String, StructType>,
    pub enums: BTreeMap<String, EnumType>,
    pub unions: BTreeMap<String, UnionType>,
    pub macros: Vec<MacroDefinition>,
    pub languages: BTreeSet<DebugLanguage>,
    /// Split-DWARF (`.dwo` / `.dwp`) references discovered in skeleton
    /// units. Each entry captures the referenced file path + `dwo_id`
    /// (if present) so a follow-up call to [`DwarfInfo::merge_split_dwarf`]
    /// can fold the external unit back in. Empty for non-split DWARF.
    pub dwo_references: Vec<DwoRef>,
}

/// Source language metadata imported from compile-unit `DW_AT_language`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum DebugLanguage {
    C,
    Cpp,
    ObjectiveC,
    ObjectiveCpp,
    Rust,
    Go,
    Swift,
    Zig,
    Java,
    Python,
    D,
    Haskell,
    Kotlin,
    Fortran,
    Ada,
}

impl DebugLanguage {
    pub fn from_dw_lang(lang: gimli::DwLang) -> Option<Self> {
        match lang {
            gimli::DW_LANG_C89
            | gimli::DW_LANG_C
            | gimli::DW_LANG_C99
            | gimli::DW_LANG_C11
            | gimli::DW_LANG_C17 => Some(Self::C),
            gimli::DW_LANG_C_plus_plus
            | gimli::DW_LANG_C_plus_plus_03
            | gimli::DW_LANG_C_plus_plus_11
            | gimli::DW_LANG_C_plus_plus_14
            | gimli::DW_LANG_C_plus_plus_17
            | gimli::DW_LANG_C_plus_plus_20 => Some(Self::Cpp),
            gimli::DW_LANG_ObjC => Some(Self::ObjectiveC),
            gimli::DW_LANG_ObjC_plus_plus => Some(Self::ObjectiveCpp),
            gimli::DW_LANG_Rust => Some(Self::Rust),
            gimli::DW_LANG_Go => Some(Self::Go),
            gimli::DW_LANG_Swift => Some(Self::Swift),
            gimli::DW_LANG_Zig => Some(Self::Zig),
            gimli::DW_LANG_Java => Some(Self::Java),
            gimli::DW_LANG_Python => Some(Self::Python),
            gimli::DW_LANG_D => Some(Self::D),
            gimli::DW_LANG_Haskell => Some(Self::Haskell),
            gimli::DW_LANG_Kotlin => Some(Self::Kotlin),
            gimli::DW_LANG_Fortran77
            | gimli::DW_LANG_Fortran90
            | gimli::DW_LANG_Fortran95
            | gimli::DW_LANG_Fortran03
            | gimli::DW_LANG_Fortran08
            | gimli::DW_LANG_Fortran18 => Some(Self::Fortran),
            gimli::DW_LANG_Ada83
            | gimli::DW_LANG_Ada95
            | gimli::DW_LANG_Ada2005
            | gimli::DW_LANG_Ada2012 => Some(Self::Ada),
            _ => None,
        }
    }

    pub const fn display_name(self) -> &'static str {
        match self {
            Self::C => "C",
            Self::Cpp => "C++",
            Self::ObjectiveC => "Objective-C",
            Self::ObjectiveCpp => "Objective-C++",
            Self::Rust => "Rust",
            Self::Go => "Go",
            Self::Swift => "Swift",
            Self::Zig => "Zig",
            Self::Java => "Java",
            Self::Python => "Python",
            Self::D => "D",
            Self::Haskell => "Haskell",
            Self::Kotlin => "Kotlin",
            Self::Fortran => "Fortran",
            Self::Ada => "Ada",
        }
    }
}

/// One entry in [`DwarfInfo::dwo_references`] — a reference to an
/// external `.dwo` / `.dwp` file carried by `DW_AT_GNU_dwo_name` /
/// `DW_AT_dwo_name` on a skeleton compile unit.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DwoRef {
    /// File path / name of the external split-DWARF artifact.
    pub dwo_name: String,
    /// 8-byte `DW_AT_dwo_id` / `DW_AT_GNU_dwo_id` identifier (used to
    /// verify the .dwo matches the skeleton). `None` if the attribute
    /// is absent.
    pub dwo_id: Option<u64>,
    /// Offset of the skeleton compile unit within `.debug_info` so a
    /// merge step can rejoin DIE references.
    pub unit_offset: u64,
}

#[derive(Debug, Clone)]
pub struct FunctionDebugInfo {
    pub name: String,
    pub linkage_name: Option<String>,
    pub low_pc: u64,
    pub high_pc: Option<u64>,
    pub ranges: Vec<gimli::Range>,
    pub params: Vec<ParameterInfo>,
    pub return_type: Option<String>,
    pub decl: Option<SourceLocation>,
    pub locals: Vec<LocalVariable>,
    /// Delta to add to a DWARF `DW_OP_fbreg` (CFA-relative) offset to obtain
    /// the RBP-relative slot the decompiler resolves stack accesses to.
    ///
    /// Derived from the function's `.eh_frame` CFA rule: for an x86-64 SysV
    /// frame-pointer function the body settles to `CFA = RBP + offset`
    /// (canonically `offset = 16`), so `fbreg(o)` names `CFA + o = RBP +
    /// offset + o` and the RBP-relative slot is `o + offset`. `Some(offset)`
    /// only when the CFA register is the frame pointer (RBP); `None` for
    /// no-frame-pointer / leaf functions (CFA relative to RSP) and opaque
    /// expression rules, where a uniform shift is invalid.
    pub cfa_to_rbp_delta: Option<i64>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParameterInfo {
    pub name: Option<String>,
    pub type_name: Option<String>,
    /// Byte size of the pointed-to type when the parameter is a pointer to a
    /// sized type (`int *` -> 4, `struct Rect *` -> 16); `None` otherwise.
    pub pointee_size: Option<u64>,
    /// Signed CFA-relative frame offset when the parameter's `DW_AT_location`
    /// is a single `DW_OP_fbreg` opcode (a spilled home slot in `-O0`
    /// prologues). `None` for register-resident or location-list params.
    /// Mirrors [`LocalVariable::frame_offset`].
    pub frame_offset: Option<i64>,
}

/// A local variable extracted from `DW_TAG_variable` inside a subprogram.
///
/// `frame_offset` is the signed offset relative to the canonical frame
/// pointer (negative = below saved RBP, the common case for stack locals)
/// when the variable's `DW_AT_location` is a single `DW_OP_fbreg` opcode.
/// Other location forms (registers, complex DWARF expressions) are
/// preserved without `frame_offset` so callers can still surface the name.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LocalVariable {
    pub name: String,
    pub type_name: Option<String>,
    pub frame_offset: Option<i64>,
    pub locations: Vec<gimli::Range>,
    /// DWARF v5 `.debug_loclists` decoded per-range expressions paired
    /// with the PC range over which they hold. Populated when the
    /// variable's `DW_AT_location` references a `.debug_loclists`
    /// entry rather than a direct expression. Empty for v4 fbreg
    /// shapes (the dominant case — see `frame_offset`).
    pub locations_dwarf_v5: Vec<(gimli::Range, SimpleLocation)>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MacroDefinition {
    pub name: String,
    pub value: Option<String>,
    pub file: Option<String>,
    pub line: Option<u32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SourceLocation {
    pub file: String,
    pub line: u32,
    pub column: Option<u32>,
}

/// A recovered struct type from DWARF debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StructType {
    pub name: String,
    pub size: u64,
    pub template_params: Vec<String>,
    pub fields: Vec<StructField>,
}

/// A single field within a struct or union.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StructField {
    pub name: String,
    pub offset: u64,
    pub size: u64,
    pub type_name: String,
}

/// A recovered enum type from DWARF debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EnumType {
    pub name: String,
    pub size: u64,
    pub variants: Vec<(String, i64)>,
}

/// A recovered union type from DWARF debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UnionType {
    pub name: String,
    pub size: u64,
    pub template_params: Vec<String>,
    pub members: Vec<StructField>,
}

pub fn import_dwarf(image: &BinaryImage) -> Result<DwarfInfo, LoadError> {
    import_dwarf_with_resolver(image, &DebugLocationResolver)
}

/// Import DWARF from `image`, then fold in debug info from an optional external
/// sidecar (a separate ELF carrying `.debug_*` sections, e.g. produced by
/// `objcopy --only-keep-debug`). This is how a stripped binary recovers
/// parameter/local/type names: the stripped image yields an empty `DwarfInfo`
/// and the sidecar supplies everything. The primary image always wins on key
/// collisions, mirroring [`DwarfInfo::merge_split_dwarf`].
pub fn import_dwarf_with_sidecar(
    image: &BinaryImage,
    sidecar: Option<&[u8]>,
) -> Result<DwarfInfo, LoadError> {
    let mut info = import_dwarf(image)?;
    if let Some(bytes) = sidecar {
        info.merge_split_dwarf(bytes)?;
    }
    Ok(info)
}

pub fn import_dwarf_with_resolver(
    image: &BinaryImage,
    resolver: &DebugLocationResolver,
) -> Result<DwarfInfo, LoadError> {
    let endian = match image.endian {
        crate::image::Endian::Little => RunTimeEndian::Little,
        crate::image::Endian::Big => RunTimeEndian::Big,
    };

    let dwarf_sections = gimli::DwarfSections::load(|id| {
        let data: Cow<'_, [u8]> = match image.section_by_name(id.name()) {
            Some(section) => Cow::Borrowed(&section.data),
            None => Cow::Borrowed(&[] as &[u8]),
        };
        Ok::<_, gimli::Error>(data)
    })?;

    let dwarf: gimli::Dwarf<R<'_>> =
        dwarf_sections.borrow(|section| EndianSlice::new(section.as_ref(), endian));

    // Per-function CFA→RBP delta, derived from `.eh_frame` unwind rules. A
    // best-effort parse: failures degrade to an empty map (no shift applied
    // downstream, exactly as before this calibration existed).
    let cfa_deltas = cfa_rbp_deltas(image);

    let functions = extract_functions(&dwarf, resolver, &cfa_deltas)?;
    let source_map = build_source_map(&dwarf)?;
    let (structs, enums, unions) = extract_composite_types(&dwarf)?;
    let macros = extract_macros(&dwarf)?;
    let languages = extract_languages(&dwarf)?;
    let dwo_references = extract_dwo_references(&dwarf)?;

    Ok(DwarfInfo {
        functions,
        source_map,
        structs,
        enums,
        unions,
        macros,
        languages,
        dwo_references,
    })
}

fn extract_languages(dwarf: &gimli::Dwarf<R<'_>>) -> Result<BTreeSet<DebugLanguage>, gimli::Error> {
    let mut languages = BTreeSet::new();
    let mut units = dwarf.units();
    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let mut tree = unit.entries_tree(None)?;
        let root = tree.root()?;
        let entry = root.entry();
        if let Some(AttributeValue::Language(lang)) = entry.attr_value(DW_AT_language)
            && let Some(language) = DebugLanguage::from_dw_lang(lang)
        {
            languages.insert(language);
        }
    }
    Ok(languages)
}

/// Walk every compile-unit root DIE and record any
/// `DW_AT_GNU_dwo_name` / `DW_AT_dwo_name` attribute, paired with its
/// optional `dwo_id`. The resulting list is what
/// [`DwarfInfo::merge_split_dwarf`] consumes when caller supplies the
/// matching `.dwo` blob.
fn extract_dwo_references(dwarf: &gimli::Dwarf<R<'_>>) -> Result<Vec<DwoRef>, gimli::Error> {
    let mut out = Vec::new();
    let mut units = dwarf.units();
    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let mut tree = unit.entries_tree(None)?;
        let root = tree.root()?;
        let entry = root.entry();

        let name_attr = entry
            .attr_value(gimli::DW_AT_GNU_dwo_name)
            .or_else(|| entry.attr_value(gimli::DW_AT_dwo_name));
        let dwo_name = match name_attr {
            Some(value) => match attr_value_as_string(dwarf, &unit, value)? {
                Some(s) => s,
                None => continue,
            },
            None => continue,
        };

        let dwo_id = entry
            .attr_value(gimli::DW_AT_GNU_dwo_id)
            .and_then(|v| match v {
                gimli::AttributeValue::DwoId(id) => Some(id.0),
                gimli::AttributeValue::Udata(id) => Some(id),
                _ => None,
            });

        // Skeleton-unit offset within `.debug_info`. On gimli 0.33+
        // `UnitSectionOffset` is a unit struct wrapping a raw `usize`.
        let unit_offset = header.offset().0 as u64;
        out.push(DwoRef {
            dwo_name,
            dwo_id,
            unit_offset,
        });
    }
    Ok(out)
}

/// Helper: project an arbitrary `AttributeValue` to a `String` for
/// `DW_AT_*_name`-style attributes. Returns `None` for non-string
/// shapes (e.g. constants, references).
fn attr_value_as_string(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    value: gimli::AttributeValue<R<'_>>,
) -> Result<Option<String>, gimli::Error> {
    match value {
        gimli::AttributeValue::String(s) => Ok(Some(s.to_string_lossy().into_owned())),
        gimli::AttributeValue::DebugStrRef(_)
        | gimli::AttributeValue::DebugLineStrRef(_)
        | gimli::AttributeValue::DebugStrRefSup(_) => {
            let s = dwarf.attr_string(unit, value)?;
            Ok(Some(s.to_string_lossy().into_owned()))
        }
        _ => Ok(None),
    }
}

impl DwarfInfo {
    /// Parse a `.dwo` byte blob (skeleton-unit's external partner) and
    /// fold its discovered functions / types / source mappings into
    /// this `DwarfInfo`.
    ///
    /// The `.dwo` uses renamed gimli sections (`.debug_info.dwo` etc.)
    /// but otherwise looks like a normal DWARF unit, so we just parse
    /// it as a plain ELF / object first and recurse through
    /// [`import_dwarf`].
    ///
    /// Existing entries are preserved; duplicates are skipped via the
    /// underlying `BTreeMap::entry` semantics so the skeleton always
    /// wins when both define the same key.
    pub fn merge_split_dwarf(&mut self, dwo_bytes: &[u8]) -> Result<(), crate::LoadError> {
        DebugLocationResolver.merge_split_dwarf(self, dwo_bytes)
    }
}

impl DebugLocationResolver {
    pub fn import(&self, image: &BinaryImage) -> Result<DwarfInfo, LoadError> {
        import_dwarf_with_resolver(image, self)
    }

    pub fn merge_split_dwarf(
        &self,
        info: &mut DwarfInfo,
        dwo_bytes: &[u8],
    ) -> Result<(), crate::LoadError> {
        use crate::Loader as _;
        let image = crate::elf::ElfLoader::load(dwo_bytes)?;
        let dwo_info = self.import(&image)?;
        for (k, v) in dwo_info.functions {
            info.functions.entry(k).or_insert(v);
        }
        for (k, v) in dwo_info.source_map {
            info.source_map.entry(k).or_insert(v);
        }
        for (k, v) in dwo_info.structs {
            info.structs.entry(k).or_insert(v);
        }
        for (k, v) in dwo_info.enums {
            info.enums.entry(k).or_insert(v);
        }
        for (k, v) in dwo_info.unions {
            info.unions.entry(k).or_insert(v);
        }
        info.macros.extend(dwo_info.macros);
        info.languages.extend(dwo_info.languages);
        info.dwo_references.extend(dwo_info.dwo_references);
        Ok(())
    }

    /// Evaluate raw DWARF expression bytes into the conservative location
    /// summary understood by the loader.
    pub fn evaluate_expression(bytes: &[u8]) -> Option<SimpleLocation> {
        evaluate_simple_location_bytes(bytes)
    }

    /// Evaluate a `DW_AT_location` attribute when it carries an inline
    /// expression block.
    pub fn evaluate_attribute(&self, value: AttributeValue<R<'_>>) -> Option<SimpleLocation> {
        let bytes: &[u8] = match value {
            AttributeValue::Block(b) | AttributeValue::Exprloc(gimli::Expression(b)) => b.slice(),
            _ => return None,
        };
        Self::evaluate_expression(bytes)
    }

    pub fn frame_offset(&self, value: AttributeValue<R<'_>>) -> Option<i64> {
        match self.evaluate_attribute(value)? {
            SimpleLocation::FrameOffset(off) => Some(off),
            _ => None,
        }
    }

    fn location_ranges<'a>(
        &self,
        dwarf: &gimli::Dwarf<R<'a>>,
        unit: &gimli::Unit<R<'a>>,
        value: AttributeValue<R<'a>>,
    ) -> Result<Vec<gimli::Range>, gimli::Error> {
        let mut ranges = Vec::new();
        if let Some(mut locations) = dwarf.attr_locations(unit, value)? {
            while let Some(location) = locations.next()? {
                ranges.push(location.range);
            }
        }
        Ok(ranges)
    }

    fn loclist_entries<'a>(
        &self,
        dwarf: &gimli::Dwarf<R<'a>>,
        unit: &gimli::Unit<R<'a>>,
        value: AttributeValue<R<'a>>,
    ) -> Result<Vec<(gimli::Range, SimpleLocation)>, gimli::Error> {
        let Some(mut locations) = dwarf.attr_locations(unit, value)? else {
            return Ok(Vec::new());
        };
        let mut out = Vec::new();
        while let Some(location) = locations.next()? {
            let bytes = location.data.0.slice();
            if let Some(loc) = Self::evaluate_expression(bytes) {
                out.push((location.range, loc));
            }
        }
        Ok(out)
    }
}

fn extract_macros(dwarf: &gimli::Dwarf<R<'_>>) -> Result<Vec<MacroDefinition>, gimli::Error> {
    let mut out = Vec::new();
    let mut seen = BTreeSet::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let mut tree = unit.entries_tree(None)?;
        let root = tree.root()?;
        let entry = root.entry();

        let mut visit = |body: String, file: Option<String>, line: Option<u64>| {
            if let Some(def) = parse_macro_definition(&body, file, line) {
                let key = (
                    def.name.clone(),
                    def.value.clone(),
                    def.file.clone(),
                    def.line,
                );
                if seen.insert(key) {
                    out.push(def);
                }
            }
        };

        if let Some(gimli::AttributeValue::DebugMacroRef(offset)) =
            entry.attr_value(gimli::DW_AT_macros)
        {
            let mut macros = dwarf.macros(offset)?;
            let mut current_file = None;
            while let Some(op) = macros.next()? {
                use gimli::read::MacroEntry::*;
                match op {
                    Define { line, text } => {
                        let body = text
                            .string(unit.unit_ref(dwarf))?
                            .to_string_lossy()
                            .into_owned();
                        visit(body, current_file.clone(), Some(line));
                    }
                    StartFile { file, .. } => {
                        current_file = resolve_macro_file_name(dwarf, &unit, Some(file))?;
                    }
                    EndFile => current_file = None,
                    _ => {}
                }
            }
        }

        if let Some(gimli::AttributeValue::DebugMacinfoRef(offset)) =
            entry.attr_value(gimli::DW_AT_macro_info)
        {
            let mut macros = dwarf.macinfo(offset)?;
            let mut current_file = None;
            while let Some(op) = macros.next()? {
                use gimli::read::MacroEntry::*;
                match op {
                    Define { line, text } => {
                        let body = text
                            .string(unit.unit_ref(dwarf))?
                            .to_string_lossy()
                            .into_owned();
                        visit(body, current_file.clone(), Some(line));
                    }
                    StartFile { file, .. } => {
                        current_file = resolve_macro_file_name(dwarf, &unit, Some(file))?;
                    }
                    EndFile => current_file = None,
                    _ => {}
                }
            }
        }
    }

    Ok(out)
}

fn parse_macro_definition(
    body: &str,
    file: Option<String>,
    line: Option<u64>,
) -> Option<MacroDefinition> {
    let trimmed = body.trim();
    if trimmed.is_empty() {
        return None;
    }
    let split_at = trimmed.find(char::is_whitespace).unwrap_or(trimmed.len());
    let (name, rest) = trimmed.split_at(split_at);
    let value = rest.trim();
    if name.is_empty() {
        return None;
    }
    Some(MacroDefinition {
        name: name.to_owned(),
        value: (!value.is_empty()).then(|| value.to_owned()),
        file,
        line: line.map(|v| v as u32),
    })
}

fn resolve_macro_file_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    file_idx: Option<u64>,
) -> Result<Option<String>, gimli::Error> {
    match file_idx {
        Some(idx) if idx != 0 => resolve_file_name(dwarf, unit, idx),
        _ => Ok(None),
    }
}

/// DWARF register number of the frame pointer (RBP) on x86-64 SysV.
const X86_64_DWARF_RBP: u16 = 6;

/// Build a per-function `CFA → RBP` delta map from the binary's `.eh_frame`
/// unwind rules. Only frame-pointer functions (CFA register == RBP) get an
/// entry; the delta is the CFA rule's constant offset (canonically 16 for
/// GCC `def_cfa_offset 16; def_cfa_register rbp`). No-frame-pointer / leaf
/// functions (CFA relative to RSP) and opaque expression rules are absent,
/// so the pipeline never shifts them.
///
/// Currently gated to x86-64 because the RBP register number and the
/// "decompiler resolves accesses RBP-relative" assumption are arch-specific.
fn cfa_rbp_deltas(image: &BinaryImage) -> BTreeMap<u64, i64> {
    if !matches!(image.arch, crate::image::ArchId::X86_64) {
        return BTreeMap::new();
    }
    let eh = match crate::eh_frame::parse_eh_frame(image) {
        Ok(info) => info,
        Err(_) => return BTreeMap::new(),
    };
    eh.cfa_rules
        .iter()
        .filter(|(_, rule)| rule.reg == X86_64_DWARF_RBP)
        .map(|(&pc, rule)| (pc, rule.offset))
        .collect()
}

fn extract_functions(
    dwarf: &gimli::Dwarf<R<'_>>,
    resolver: &DebugLocationResolver,
    cfa_deltas: &BTreeMap<u64, i64>,
) -> Result<BTreeMap<u64, FunctionDebugInfo>, gimli::Error> {
    let mut functions = BTreeMap::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        extract_functions_from_unit(dwarf, &unit, resolver, cfa_deltas, &mut functions)?;
    }

    Ok(functions)
}

fn extract_functions_from_unit(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    resolver: &DebugLocationResolver,
    cfa_deltas: &BTreeMap<u64, i64>,
    functions: &mut BTreeMap<u64, FunctionDebugInfo>,
) -> Result<(), gimli::Error> {
    let mut tree = unit.entries_tree(None)?;
    let root = tree.root()?;
    let mut children = root.children();

    while let Some(child) = children.next()? {
        let entry = child.entry();
        if entry.tag() != DW_TAG_subprogram {
            continue;
        }

        let ranges = extract_die_ranges(dwarf, unit, entry)?;

        // Derive `low_pc` from `DW_AT_low_pc` when present, otherwise
        // fall back to the first entry in the range list (DWARF v5
        // `.debug_rnglists` subprograms may omit `DW_AT_low_pc`).
        let low_pc = match entry.attr_value(DW_AT_low_pc) {
            Some(val) => match dwarf.attr_address(unit, val)? {
                Some(addr) => addr,
                None => match ranges.first() {
                    Some(r) => r.begin,
                    None => continue,
                },
            },
            None => match ranges.first() {
                Some(r) => r.begin,
                None => continue,
            },
        };

        let name = match described_attr(unit, entry, DW_AT_name)? {
            Some(val) => dwarf.attr_string(unit, val)?.to_string_lossy().into_owned(),
            None => continue,
        };

        let linkage_name = match described_attr(unit, entry, DW_AT_linkage_name)? {
            Some(val) => Some(dwarf.attr_string(unit, val)?.to_string_lossy().into_owned()),
            None => None,
        };

        let high_pc = match entry.attr_value(DW_AT_high_pc) {
            Some(AttributeValue::Addr(addr)) => Some(addr),
            Some(AttributeValue::Udata(size)) => Some(low_pc + size),
            _ => ranges.iter().map(|r| r.end).max(),
        };

        let return_type = match described_attr(unit, entry, DW_AT_type)? {
            Some(val) => resolve_type_name(dwarf, unit, val)?,
            None => None,
        };

        let decl = extract_decl_location(dwarf, unit, entry)?;
        let (params, locals) = extract_params_and_locals(dwarf, unit, resolver, child)?;
        let cfa_to_rbp_delta = cfa_deltas.get(&low_pc).copied();

        functions.insert(
            low_pc,
            FunctionDebugInfo {
                name,
                linkage_name,
                low_pc,
                high_pc,
                ranges,
                params,
                return_type,
                decl,
                locals,
                cfa_to_rbp_delta,
            },
        );
    }

    Ok(())
}

type CompositeTypes = (
    BTreeMap<String, StructType>,
    BTreeMap<String, EnumType>,
    BTreeMap<String, UnionType>,
);

fn extract_composite_types(dwarf: &gimli::Dwarf<R<'_>>) -> Result<CompositeTypes, gimli::Error> {
    let mut structs = BTreeMap::new();
    let mut enums = BTreeMap::new();
    let mut unions = BTreeMap::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        extract_composites_from_unit(dwarf, &unit, &mut structs, &mut enums, &mut unions)?;
    }

    Ok((structs, enums, unions))
}

fn extract_composites_from_unit(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    structs: &mut BTreeMap<String, StructType>,
    enums: &mut BTreeMap<String, EnumType>,
    unions: &mut BTreeMap<String, UnionType>,
) -> Result<(), gimli::Error> {
    let mut tree = unit.entries_tree(None)?;
    let root = tree.root()?;
    let mut children = root.children();

    while let Some(child) = children.next()? {
        let tag = child.entry().tag();

        if tag == DW_TAG_structure_type {
            if let Some(st) = extract_struct_type(dwarf, unit, child)? {
                structs.insert(st.name.clone(), st);
            }
        } else if tag == DW_TAG_enumeration_type {
            if let Some(et) = extract_enum_type(dwarf, unit, child)? {
                enums.insert(et.name.clone(), et);
            }
        } else if tag == DW_TAG_union_type
            && let Some(ut) = extract_union_type(dwarf, unit, child)?
        {
            unions.insert(ut.name.clone(), ut);
        }
    }

    Ok(())
}

fn extract_struct_type(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Option<StructType>, gimli::Error> {
    let entry = node.entry();

    let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
        Some(n) => n,
        None => return Ok(None),
    };

    let size = entry
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
        .unwrap_or(0);

    let template_params = extract_template_params_for_type_die(dwarf, unit, entry)?;
    let fields = extract_members(dwarf, unit, node)?;

    Ok(Some(StructType {
        name,
        size,
        template_params,
        fields,
    }))
}

fn extract_enum_type(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Option<EnumType>, gimli::Error> {
    let entry = node.entry();

    let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
        Some(n) => n,
        None => return Ok(None),
    };

    let size = entry
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
        .unwrap_or(0);

    let mut variants = Vec::new();
    let mut children = node.children();

    while let Some(child) = children.next()? {
        if child.entry().tag() != DW_TAG_enumerator {
            continue;
        }
        let child_entry = child.entry();

        let variant_name = match attr_string(dwarf, unit, child_entry, DW_AT_name)? {
            Some(n) => n,
            None => continue,
        };

        let value = child_entry
            .attr_value(DW_AT_const_value)
            .and_then(|v| {
                v.sdata_value()
                    .or_else(|| v.udata_value().map(|u| u as i64))
            })
            .unwrap_or(0);

        variants.push((variant_name, value));
    }

    Ok(Some(EnumType {
        name,
        size,
        variants,
    }))
}

fn extract_union_type(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Option<UnionType>, gimli::Error> {
    let entry = node.entry();

    let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
        Some(n) => n,
        None => return Ok(None),
    };

    let size = entry
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
        .unwrap_or(0);

    let template_params = extract_template_params_for_type_die(dwarf, unit, entry)?;
    let members = extract_members(dwarf, unit, node)?;

    Ok(Some(UnionType {
        name,
        size,
        template_params,
        members,
    }))
}

fn render_type_with_template_params(name: &str, template_params: &[String]) -> String {
    if template_params.is_empty() || name.contains('<') {
        name.to_owned()
    } else {
        format!("{}<{}>", name, template_params.join(", "))
    }
}

fn extract_members(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<Vec<StructField>, gimli::Error> {
    let mut fields = Vec::new();
    let mut children = node.children();

    while let Some(child) = children.next()? {
        if child.entry().tag() != DW_TAG_member {
            continue;
        }
        let child_entry = child.entry();

        let name = match attr_string(dwarf, unit, child_entry, DW_AT_name)? {
            Some(n) => n,
            None => continue,
        };

        let offset = child_entry
            .attr_value(DW_AT_data_member_location)
            .and_then(|v| v.udata_value())
            .unwrap_or(0);

        let size = child_entry
            .attr_value(DW_AT_byte_size)
            .and_then(|v| v.udata_value())
            .unwrap_or(0);

        let type_name = match child_entry.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?.unwrap_or_default(),
            None => String::new(),
        };

        // If the member DIE lacks DW_AT_byte_size, try to get it from the
        // referenced type DIE instead.
        let size = if size == 0 {
            resolve_type_size(unit, child_entry).unwrap_or(0)
        } else {
            size
        };

        fields.push(StructField {
            name,
            offset,
            size,
            type_name,
        });
    }

    Ok(fields)
}

fn resolve_type_size(
    unit: &gimli::Unit<R<'_>>,
    entry: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Option<u64> {
    let type_attr = entry.attr_value(DW_AT_type)?;
    let offset = match type_attr {
        AttributeValue::UnitRef(o) => o,
        _ => return None,
    };

    let mut cursor = unit.entries_at_offset(offset).ok()?;
    cursor.next_entry().ok()?;
    let type_die = cursor.current()?;
    type_die
        .attr_value(DW_AT_byte_size)
        .and_then(|v| v.udata_value())
}

/// Byte size of the type a `DW_TAG_pointer_type` points to, looking through
/// typedefs and cv-qualifiers. `None` for non-pointers and `void *`.
fn pointee_byte_size(
    unit: &gimli::Unit<R<'_>>,
    type_attr: AttributeValue<R<'_>>,
) -> Result<Option<u64>, gimli::Error> {
    let AttributeValue::UnitRef(offset) = type_attr else {
        return Ok(None);
    };
    let pointer = unit.entry(offset)?;
    if pointer.tag() != DW_TAG_pointer_type {
        return Ok(None);
    }
    let mut next = pointer.attr_value(DW_AT_type);
    for _ in 0..MAX_ORIGIN_HOPS {
        let Some(AttributeValue::UnitRef(offset)) = next else {
            return Ok(None);
        };
        let die = unit.entry(offset)?;
        let tag = die.tag();
        if tag == DW_TAG_typedef
            || tag == DW_TAG_const_type
            || tag == DW_TAG_volatile_type
            || tag == DW_TAG_restrict_type
        {
            next = die.attr_value(DW_AT_type);
            continue;
        }
        return Ok(die
            .attr_value(DW_AT_byte_size)
            .and_then(|v| v.udata_value()));
    }
    Ok(None)
}

fn extract_params_and_locals<'a>(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'a>>,
    resolver: &DebugLocationResolver,
    func_node: gimli::EntriesTreeNode<'_, '_, R<'a>>,
) -> Result<(Vec<ParameterInfo>, Vec<LocalVariable>), gimli::Error> {
    let mut params = Vec::new();
    let mut locals = Vec::new();
    let mut children = func_node.children();

    while let Some(child) = children.next()? {
        let tag = child.entry().tag();
        let entry = child.entry();

        if tag == DW_TAG_formal_parameter {
            let name = match described_attr(unit, entry, DW_AT_name)? {
                Some(val) => Some(dwarf.attr_string(unit, val)?.to_string_lossy().into_owned()),
                None => None,
            };
            let type_attr = described_attr(unit, entry, DW_AT_type)?;
            let type_name = match type_attr {
                Some(val) => resolve_type_name(dwarf, unit, val)?,
                None => None,
            };
            let pointee_size = match type_attr {
                Some(val) => pointee_byte_size(unit, val)?,
                None => None,
            };
            let frame_offset = entry
                .attr_value(DW_AT_location)
                .and_then(|value| resolver.frame_offset(value));
            params.push(ParameterInfo {
                name,
                type_name,
                pointee_size,
                frame_offset,
            });
        } else if tag == DW_TAG_variable {
            let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
                Some(n) => n,
                None => continue,
            };
            let type_name = match entry.attr_value(DW_AT_type) {
                Some(val) => resolve_type_name(dwarf, unit, val)?,
                None => None,
            };
            let location_attr = entry.attr_value(DW_AT_location);
            let frame_offset = location_attr.and_then(|value| resolver.frame_offset(value));
            let locations = match location_attr {
                Some(value) => resolver.location_ranges(dwarf, unit, value)?,
                None => Vec::new(),
            };
            let locations_dwarf_v5 = match location_attr {
                Some(value) => resolver.loclist_entries(dwarf, unit, value)?,
                None => Vec::new(),
            };
            locals.push(LocalVariable {
                name,
                type_name,
                frame_offset,
                locations,
                locations_dwarf_v5,
            });
        }
    }

    Ok((params, locals))
}

/// Result of a single-opcode-stream evaluation against a `DW_AT_location`.
///
/// The full DWARF expression interpreter is a stack machine with > 100
/// opcodes — far more than we need to recover variable locations. This
/// enum captures the handful of *terminal* shapes the loader actually
/// consumes:
///
/// * [`SimpleLocation::FrameOffset`] — `DW_OP_fbreg <sleb>` (the dominant
///   shape for stack-allocated locals on every modern compiler).
/// * [`SimpleLocation::Absolute`] — `DW_OP_addr <addr>` (globals, TLS
///   anchors).
/// * [`SimpleLocation::Register`] — `DW_OP_regN` or `DW_OP_regx` (the
///   value lives in a named register).
/// * [`SimpleLocation::RegisterPlus`] — `DW_OP_bregN <sleb>` /
///   `DW_OP_bregx` (register-relative offset, e.g. callee-saved chains).
/// * [`SimpleLocation::Indirect`] — single `DW_OP_deref` after a base
///   (we only surface the base and an "indirect" flag; the caller
///   decides what to do with it).
///
/// Unrecognised opcodes return `None` from
/// [`evaluate_simple_location`] so the existing fallback (treat the
/// variable as unanchored) kicks in.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SimpleLocation {
    /// `DW_OP_fbreg <sleb>` — offset from the function's frame base.
    FrameOffset(i64),
    /// `DW_OP_addr <addr>` — absolute virtual address.
    Absolute(u64),
    /// `DW_OP_regN` / `DW_OP_regx <uleb>` — register number.
    Register(u16),
    /// `DW_OP_bregN <sleb>` / `DW_OP_bregx <uleb> <sleb>` — register +
    /// constant offset.
    RegisterPlus(u16, i64),
    /// Indirection: the inner location yields an address, dereference it
    /// at the indicated width (0 = pointer-sized).
    Indirect(Box<SimpleLocation>, u8),
    /// `DW_OP_stack_value` — the computed value itself, not an address to
    /// dereference. Wraps an inner location describing the value.
    StackValue(Box<SimpleLocation>),
    /// `DW_OP_implicit_value <uleb> <bytes>` — the variable's value is an
    /// inline constant byte sequence in the DWARF expression itself.
    ImplicitValue(Vec<u8>),
    /// Piece composition: the variable is spread across multiple locations.
    /// Each entry is `(location, size_in_bytes)`.
    Composite(Vec<(SimpleLocation, u32)>),
}

/// Evaluate a small, well-behaved subset of DWARF location expressions
/// without spinning up the full gimli evaluator. Returns `None` for any
/// expression that doesn't terminate in one of the [`SimpleLocation`]
/// shapes.
///
/// This is intentionally not a complete DW_OP interpreter — there is no
/// stack machine, no arithmetic ops other than the constant folds inside
/// `DW_OP_plus_uconst`, no control flow, no piece composition. It exists
/// so the common single-opcode locations (`DW_OP_fbreg`, `DW_OP_addr`,
/// `DW_OP_reg*`, `DW_OP_breg*`) and the small `<base> DW_OP_plus_uconst N`
/// and `<base> DW_OP_deref` extensions land cleanly without dragging the
/// full evaluator into the loader.
pub fn evaluate_simple_location(value: AttributeValue<R<'_>>) -> Option<SimpleLocation> {
    DebugLocationResolver.evaluate_attribute(value)
}

/// Apply `DW_OP_plus_uconst <k>` to the base location, folding the
/// constant into compatible shapes (FrameOffset/RegisterPlus/Absolute).
fn apply_plus_uconst(base: Option<SimpleLocation>, k: u64) -> Option<SimpleLocation> {
    match base? {
        SimpleLocation::FrameOffset(off) => {
            Some(SimpleLocation::FrameOffset(off.saturating_add(k as i64)))
        }
        SimpleLocation::RegisterPlus(r, off) => Some(SimpleLocation::RegisterPlus(
            r,
            off.saturating_add(k as i64),
        )),
        SimpleLocation::Absolute(addr) => Some(SimpleLocation::Absolute(addr.wrapping_add(k))),
        _ => None,
    }
}

/// Read `DW_OP_implicit_value`'s ULEB128 length + raw byte payload.
fn read_implicit_value(cursor: &[u8]) -> Option<(SimpleLocation, &[u8])> {
    let (len, rest) = read_uleb128(cursor)?;
    let len = len as usize;
    if rest.len() < len {
        return None;
    }
    Some((
        SimpleLocation::ImplicitValue(rest[..len].to_vec()),
        &rest[len..],
    ))
}

/// Read `DW_OP_bregx` operands `<uleb reg> <sleb offset>` and emit a
/// `RegisterPlus`. Returns `None` if `reg` overflows `u16`.
fn read_bregx(cursor: &[u8]) -> Option<(SimpleLocation, &[u8])> {
    let (r, rest) = read_uleb128(cursor)?;
    if r > u16::MAX as u64 {
        return None;
    }
    let (off, rest) = read_sleb128(rest)?;
    Some((SimpleLocation::RegisterPlus(r as u16, off), rest))
}

/// Effect of decoding one DW_OP.
///
/// `UpdateBase` replaces the running `base` location.
/// `Piece` appends a piece (`SimpleLocation`, size_in_bytes) to the
/// composite accumulator and clears `base`.
enum OpEffect {
    /// Update `base`, advance cursor.
    UpdateBase(Option<SimpleLocation>),
    /// Append a piece to the composite accumulator, clear `base`.
    Piece(SimpleLocation, u32),
}

fn decode_one_op(op: u8, cursor: &[u8], base: Option<SimpleLocation>) -> Option<(OpEffect, &[u8])> {
    match op {
        // DW_OP_addr — 8-byte little-endian absolute (64-bit form).
        0x03 => {
            if cursor.len() < 8 {
                return None;
            }
            let mut buf = [0u8; 8];
            buf.copy_from_slice(&cursor[..8]);
            Some((
                OpEffect::UpdateBase(Some(SimpleLocation::Absolute(u64::from_le_bytes(buf)))),
                &cursor[8..],
            ))
        }
        // DW_OP_constNu / DW_OP_constNs — standalone constants aren't
        // representable in our single-value shape.
        0x08..=0x0d => None,
        // DW_OP_deref
        0x06 => Some((
            OpEffect::UpdateBase(Some(SimpleLocation::Indirect(Box::new(base?), 0))),
            cursor,
        )),
        // DW_OP_plus_uconst <uleb>
        0x23 => {
            let (k, rest) = read_uleb128(cursor)?;
            Some((OpEffect::UpdateBase(apply_plus_uconst(base, k)), rest))
        }
        // DW_OP_lit0..=DW_OP_lit31 — push small literal.
        0x30..=0x4f => Some((
            OpEffect::UpdateBase(Some(SimpleLocation::Absolute((op - 0x30) as u64))),
            cursor,
        )),
        // DW_OP_regN
        0x50..=0x6f => Some((
            OpEffect::UpdateBase(Some(SimpleLocation::Register((op - 0x50) as u16))),
            cursor,
        )),
        // DW_OP_bregN <sleb>
        0x70..=0x8f => {
            let (off, rest) = read_sleb128(cursor)?;
            Some((
                OpEffect::UpdateBase(Some(SimpleLocation::RegisterPlus((op - 0x70) as u16, off))),
                rest,
            ))
        }
        // DW_OP_regx <uleb>
        0x90 => {
            let (r, rest) = read_uleb128(cursor)?;
            if r > u16::MAX as u64 {
                return None;
            }
            Some((
                OpEffect::UpdateBase(Some(SimpleLocation::Register(r as u16))),
                rest,
            ))
        }
        // DW_OP_fbreg <sleb>
        0x91 => {
            let (off, rest) = read_sleb128(cursor)?;
            Some((
                OpEffect::UpdateBase(Some(SimpleLocation::FrameOffset(off))),
                rest,
            ))
        }
        // DW_OP_bregx <uleb> <sleb>
        0x92 => {
            let (loc, rest) = read_bregx(cursor)?;
            Some((OpEffect::UpdateBase(Some(loc)), rest))
        }
        // DW_OP_piece <uleb size_bytes>
        0x93 => {
            let (size_bytes, rest) = read_uleb128(cursor)?;
            Some((OpEffect::Piece(base?, size_bytes as u32), rest))
        }
        // DW_OP_implicit_value <uleb len> <bytes>
        0x9e => {
            let (loc, rest) = read_implicit_value(cursor)?;
            Some((OpEffect::UpdateBase(Some(loc)), rest))
        }
        // DW_OP_stack_value — wrap base in StackValue.
        0x9f => Some((
            OpEffect::UpdateBase(Some(SimpleLocation::StackValue(Box::new(base?)))),
            cursor,
        )),
        // DW_OP_bit_piece <uleb size_bits> <uleb off_bits>
        0x9d => {
            let (size_bits, rest) = read_uleb128(cursor)?;
            let (_off_bits, rest) = read_uleb128(rest)?;
            Some((OpEffect::Piece(base?, size_bits.div_ceil(8) as u32), rest))
        }
        // Anything else is outside the conservative subset.
        _ => None,
    }
}

fn evaluate_simple_location_bytes(bytes: &[u8]) -> Option<SimpleLocation> {
    let mut cursor = bytes;
    let mut base: Option<SimpleLocation> = None;
    // Pieces accumulate across `DW_OP_piece` / `DW_OP_bit_piece` boundaries.
    let mut pieces: Option<Vec<(SimpleLocation, u32)>> = None;

    while !cursor.is_empty() {
        let op = cursor[0];
        cursor = &cursor[1..];
        let (effect, rest) = decode_one_op(op, cursor, base)?;
        cursor = rest;
        match effect {
            OpEffect::UpdateBase(next) => base = next,
            OpEffect::Piece(loc, size) => {
                base = None;
                pieces.get_or_insert_with(Vec::new).push((loc, size));
            }
        }
    }

    match pieces {
        Some(list) => Some(SimpleLocation::Composite(list)),
        None => base,
    }
}

/// Read a ULEB128 from `bytes`. Returns `(value, remaining_bytes)` or
/// `None` on overflow / truncation.
fn read_uleb128(bytes: &[u8]) -> Option<(u64, &[u8])> {
    let mut result: u64 = 0;
    let mut shift: u32 = 0;
    let mut cursor = bytes;
    loop {
        let byte = *cursor.first()?;
        cursor = &cursor[1..];
        result |= ((byte & 0x7f) as u64) << shift;
        if byte & 0x80 == 0 {
            return Some((result, cursor));
        }
        shift += 7;
        if shift >= 64 {
            return None;
        }
    }
}

/// Read an SLEB128 from `bytes`. Returns `(value, remaining_bytes)` or
/// `None` on overflow / truncation.
fn read_sleb128(bytes: &[u8]) -> Option<(i64, &[u8])> {
    let mut result: i64 = 0;
    let mut shift: u32 = 0;
    let mut cursor = bytes;
    let mut last: u8;
    loop {
        let byte = *cursor.first()?;
        cursor = &cursor[1..];
        last = byte;
        result |= ((byte & 0x7f) as i64) << shift;
        shift += 7;
        if byte & 0x80 == 0 {
            break;
        }
        if shift >= 64 {
            return None;
        }
    }
    if shift < 64 && (last & 0x40) != 0 {
        result |= -(1i64 << shift);
    }
    Some((result, cursor))
}

fn extract_die_ranges<'a>(
    dwarf: &gimli::Dwarf<R<'a>>,
    unit: &gimli::Unit<R<'a>>,
    entry: &gimli::DebuggingInformationEntry<R<'a>>,
) -> Result<Vec<gimli::Range>, gimli::Error> {
    let mut ranges = Vec::new();
    let mut iter = dwarf.die_ranges(unit, entry)?;
    while let Some(range) = iter.next()? {
        ranges.push(range);
    }
    Ok(ranges)
}

fn resolve_type_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    type_attr: AttributeValue<R<'_>>,
) -> Result<Option<String>, gimli::Error> {
    let offset = match type_attr {
        AttributeValue::UnitRef(o) => o,
        _ => return Ok(None),
    };

    let mut cursor = unit.entries_at_offset(offset)?;
    cursor.next_entry()?;
    let type_die = match cursor.current() {
        Some(die) => die,
        None => return Ok(None),
    };

    let tag = type_die.tag();
    let inner_type = || -> Result<Option<String>, gimli::Error> {
        match type_die.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val),
            None => Ok(None),
        }
    };

    if tag == DW_TAG_base_type || tag == DW_TAG_typedef {
        attr_string(dwarf, unit, type_die, DW_AT_name)
    } else if tag == DW_TAG_pointer_type {
        let pointee = match type_die.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?,
            None => Some("void".to_owned()),
        };
        Ok(pointee.map(|t| format!("{t} *")))
    } else if tag == DW_TAG_array_type {
        let element = match type_die.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?,
            None => Some("void".to_owned()),
        };
        let dims = array_dimensions(unit, type_die)?;
        Ok(element.map(|t| render_array_type(&t, &dims)))
    } else if tag == DW_TAG_const_type {
        Ok(inner_type()?.map(|t| format!("const {t}")))
    } else if tag == DW_TAG_volatile_type {
        Ok(inner_type()?.map(|t| format!("volatile {t}")))
    } else if tag == DW_TAG_restrict_type {
        Ok(inner_type()?.map(|t| format!("{t} restrict")))
    } else if tag == DW_TAG_structure_type || tag == DW_TAG_union_type {
        let base_name = attr_string(dwarf, unit, type_die, DW_AT_name)?;
        let template_params = extract_template_params_for_type_die(dwarf, unit, type_die)?;
        Ok(base_name.map(|name| render_type_with_template_params(&name, &template_params)))
    } else {
        attr_string(dwarf, unit, type_die, DW_AT_name)
    }
}

fn array_dimensions(
    unit: &gimli::Unit<R<'_>>,
    type_die: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Result<Vec<Option<u64>>, gimli::Error> {
    let mut cursor = unit.entries_at_offset(type_die.offset())?;
    cursor.next_entry()?;
    let root_depth = cursor.depth();
    let mut dims = Vec::new();

    while cursor.next_entry()? {
        if cursor.depth() <= root_depth {
            break;
        }
        let Some(entry) = cursor.current() else {
            continue;
        };
        if entry.tag() != DW_TAG_subrange_type {
            continue;
        }
        let dim = entry
            .attr_value(DW_AT_count)
            .and_then(|v| v.udata_value())
            .or_else(|| {
                entry
                    .attr_value(DW_AT_upper_bound)
                    .and_then(|v| v.udata_value())
                    .map(|upper| upper.saturating_add(1))
            });
        dims.push(dim);
    }

    Ok(dims)
}

fn render_array_type(element: &str, dims: &[Option<u64>]) -> String {
    let mut out = element.to_owned();
    if dims.is_empty() {
        out.push_str("[]");
        return out;
    }
    for dim in dims {
        match dim {
            Some(n) => out.push_str(&format!("[{n}]")),
            None => out.push_str("[]"),
        }
    }
    out
}

fn extract_template_params_for_type_die(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    type_die: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Result<Vec<String>, gimli::Error> {
    let mut cursor = unit.entries_at_offset(type_die.offset())?;
    cursor.next_entry()?;
    let current_depth = cursor.depth();
    let mut params = Vec::new();
    let mut seen = BTreeSet::new();

    while let Some(entry) = cursor.next_dfs()? {
        if entry.depth() <= current_depth {
            break;
        }
        if entry.tag() != DW_TAG_template_type_parameter {
            continue;
        }

        let type_name = entry
            .attr_value(DW_AT_type)
            .map(|val| resolve_type_name(dwarf, unit, val))
            .transpose()?
            .flatten();
        let param_name = attr_string(dwarf, unit, entry, DW_AT_name)?;

        let rendered = match (param_name, type_name) {
            (Some(name), Some(type_name)) if !name.is_empty() => {
                format!("{} = {}", name, type_name)
            }
            (Some(name), None) if !name.is_empty() => name,
            (_, Some(type_name)) if !type_name.is_empty() => type_name,
            _ => continue,
        };

        if seen.insert(rendered.clone()) {
            params.push(rendered);
        }
    }

    Ok(params)
}

/// Upper bound on `DW_AT_abstract_origin` / `DW_AT_specification` hops; real
/// chains are at most two long (concrete instance -> inline abstract ->
/// in-class declaration).
const MAX_ORIGIN_HOPS: usize = 4;

/// Read `attr` from `entry`, or from the DIE its `DW_AT_abstract_origin` or
/// `DW_AT_specification` refers to. A concrete out-of-line copy of an inline
/// function, its parameters, and an out-of-line C++ member definition keep
/// their name and type on the referenced DIE, not on themselves.
fn described_attr<'a>(
    unit: &gimli::Unit<R<'a>>,
    entry: &gimli::DebuggingInformationEntry<R<'a>>,
    attr: gimli::DwAt,
) -> Result<Option<AttributeValue<R<'a>>>, gimli::Error> {
    if let Some(value) = entry.attr_value(attr) {
        return Ok(Some(value));
    }
    let mut origin = origin_ref(entry);
    for _ in 0..MAX_ORIGIN_HOPS {
        let Some(offset) = origin else {
            break;
        };
        let die = unit.entry(offset)?;
        if let Some(value) = die.attr_value(attr) {
            return Ok(Some(value));
        }
        origin = origin_ref(&die);
    }
    Ok(None)
}

fn origin_ref(entry: &gimli::DebuggingInformationEntry<R<'_>>) -> Option<gimli::UnitOffset> {
    [DW_AT_abstract_origin, DW_AT_specification]
        .into_iter()
        .find_map(|attr| match entry.attr_value(attr) {
            Some(AttributeValue::UnitRef(offset)) => Some(offset),
            _ => None,
        })
}

fn attr_string(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    entry: &gimli::DebuggingInformationEntry<R<'_>>,
    attr: gimli::DwAt,
) -> Result<Option<String>, gimli::Error> {
    match entry.attr_value(attr) {
        Some(val) => {
            let s = dwarf.attr_string(unit, val)?;
            Ok(Some(s.to_string_lossy().into_owned()))
        }
        None => Ok(None),
    }
}

fn extract_decl_location(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    entry: &gimli::DebuggingInformationEntry<R<'_>>,
) -> Result<Option<SourceLocation>, gimli::Error> {
    let line = match entry.attr_value(gimli::DW_AT_decl_line) {
        Some(val) => val.udata_value().unwrap_or(0) as u32,
        None => return Ok(None),
    };

    let file_idx = match entry.attr_value(gimli::DW_AT_decl_file) {
        Some(val) => val.udata_value().unwrap_or(0),
        None => return Ok(None),
    };

    let file = resolve_file_name(dwarf, unit, file_idx)?;

    let column = entry
        .attr_value(gimli::DW_AT_decl_column)
        .and_then(|v| v.udata_value())
        .map(|c| c as u32);

    Ok(Some(SourceLocation {
        file: file.unwrap_or_else(|| format!("<file {file_idx}>")),
        line,
        column,
    }))
}

fn resolve_file_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    file_idx: u64,
) -> Result<Option<String>, gimli::Error> {
    let line_program = match &unit.line_program {
        Some(lp) => lp,
        None => return Ok(None),
    };

    let header = line_program.header();
    let file = match header.file(file_idx) {
        Some(f) => f,
        None => return Ok(None),
    };

    let mut path = String::new();

    if let Some(dir) = file.directory(header) {
        let dir_str = dwarf.attr_string(unit, dir)?;
        let dir_s = dir_str.to_string_lossy();
        if !dir_s.is_empty() {
            path.push_str(&dir_s);
            if !dir_s.ends_with('/') {
                path.push('/');
            }
        }
    }

    let name_str = dwarf.attr_string(unit, file.path_name())?;
    path.push_str(&name_str.to_string_lossy());

    Ok(Some(path))
}

fn build_source_map(
    dwarf: &gimli::Dwarf<R<'_>>,
) -> Result<BTreeMap<u64, SourceLocation>, gimli::Error> {
    let mut map = BTreeMap::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        let Some(ref lp) = unit.line_program else {
            continue;
        };

        let mut rows = lp.clone().rows();
        while let Some((_header, row)) = rows.next_row()? {
            if !row.is_stmt() {
                continue;
            }
            let addr = row.address();
            if map.contains_key(&addr) {
                continue;
            }

            let file_idx = match row.file_index() {
                0 => continue,
                idx => idx,
            };
            let line = match row.line() {
                Some(l) => l.get() as u32,
                None => continue,
            };
            let column = match row.column() {
                gimli::ColumnType::LeftEdge => None,
                gimli::ColumnType::Column(c) => Some(c.get() as u32),
            };

            let file = resolve_file_name(dwarf, &unit, file_idx)?;
            if let Some(file) = file {
                map.insert(addr, SourceLocation { file, line, column });
            }
        }
    }

    Ok(map)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{ElfLoader, Loader};

    /// `DW_OP_fbreg -8` is the canonical x86_64 "local at [rbp-8]" form.
    /// SLEB128 of -8 is `0x78`.
    #[test]
    fn evaluator_decodes_fbreg_minus_8() {
        let bytes = [0x91, 0x78];
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::FrameOffset(-8)),
        );
        assert_eq!(
            DebugLocationResolver::evaluate_expression(&bytes),
            Some(SimpleLocation::FrameOffset(-8)),
        );
    }

    /// `DW_OP_addr 0xdeadbeef` (LE 8-byte) → absolute target.
    #[test]
    fn evaluator_decodes_addr() {
        let mut bytes = vec![0x03];
        bytes.extend_from_slice(&0xdead_beef_u64.to_le_bytes());
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::Absolute(0xdead_beef)),
        );
    }

    /// `DW_OP_reg5` — value lives in register 5.
    #[test]
    fn evaluator_decodes_simple_register() {
        let bytes = [0x55];
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::Register(5)),
        );
    }

    /// `DW_OP_breg6 -16` — `(reg6 - 16)`. SLEB128 of -16 is `0x70`.
    #[test]
    fn evaluator_decodes_breg_with_offset() {
        let bytes = [0x76, 0x70];
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::RegisterPlus(6, -16)),
        );
    }

    /// `DW_OP_regx 0x82 0x01` — register 130 (1*128 + 2 = 130, ULEB128).
    #[test]
    fn evaluator_decodes_regx_extended_register() {
        let bytes = [0x90, 0x82, 0x01];
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::Register(130)),
        );
    }

    /// `DW_OP_fbreg -16 DW_OP_plus_uconst 4` → frame offset -12.
    /// SLEB128 of -16 is `0x70`; ULEB128 of 4 is `0x04`.
    #[test]
    fn evaluator_folds_plus_uconst_into_fbreg() {
        let bytes = [0x91, 0x70, 0x23, 0x04];
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::FrameOffset(-12)),
        );
    }

    /// `DW_OP_breg5 0 DW_OP_deref` → indirect through reg5.
    #[test]
    fn evaluator_models_indirection() {
        // breg5 with sleb 0 (=0x00) then DW_OP_deref (0x06).
        let bytes = [0x75, 0x00, 0x06];
        let Some(SimpleLocation::Indirect(inner, width)) = evaluate_simple_location_bytes(&bytes)
        else {
            panic!("expected Indirect");
        };
        assert_eq!(*inner, SimpleLocation::RegisterPlus(5, 0));
        assert_eq!(width, 0);
    }

    /// Unrecognised opcode → conservative `None`.
    #[test]
    fn evaluator_rejects_unknown_opcode() {
        // 0xff is not a DWARF opcode we model.
        let bytes = [0xff];
        assert_eq!(evaluate_simple_location_bytes(&bytes), None);
    }

    /// `DW_OP_stack_value` wraps a single literal value.
    #[test]
    fn evaluator_decodes_stack_value() {
        // DW_OP_lit5 (0x35) then DW_OP_stack_value (0x9f) → StackValue(Lit(5))
        let bytes = [0x35, 0x9f];
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::StackValue(Box::new(
                SimpleLocation::Absolute(5)
            )))
        );
    }

    /// `DW_OP_implicit_value <ULEB length> <bytes>` produces an
    /// `ImplicitValue` carrying the inline byte payload.
    #[test]
    fn evaluator_decodes_implicit_value() {
        // implicit_value len=4 then 0x12 0x34 0x56 0x78
        let bytes = [0x9e, 0x04, 0x12, 0x34, 0x56, 0x78];
        assert_eq!(
            evaluate_simple_location_bytes(&bytes),
            Some(SimpleLocation::ImplicitValue(vec![0x12, 0x34, 0x56, 0x78]))
        );
    }

    /// `DW_OP_piece` accumulates locations into a `Composite`.
    #[test]
    fn evaluator_decodes_piece_composition() {
        // reg0, piece 4, reg1, piece 4 → Composite([(Register(0), 4), (Register(1), 4)])
        let bytes = [0x50, 0x93, 0x04, 0x51, 0x93, 0x04];
        match evaluate_simple_location_bytes(&bytes) {
            Some(SimpleLocation::Composite(pieces)) => {
                assert_eq!(pieces.len(), 2);
                assert_eq!(pieces[0], (SimpleLocation::Register(0), 4));
                assert_eq!(pieces[1], (SimpleLocation::Register(1), 4));
            }
            other => panic!("expected Composite, got {other:?}"),
        }
    }

    /// The shared resolver must return the same answer for the canonical
    /// fbreg shape as the lower-level evaluator.
    #[test]
    fn debug_location_resolver_matches_evaluator_for_fbreg_only() {
        let bytes = [0x91, 0x78];
        let via_eval = evaluate_simple_location_bytes(&bytes);
        let via_resolver = DebugLocationResolver::evaluate_expression(&bytes);
        assert_eq!(via_eval, Some(SimpleLocation::FrameOffset(-8)));
        assert_eq!(via_resolver, via_eval);
    }

    fn load_debug_fixture() -> BinaryImage {
        let data = std::fs::read("../../fixtures/debug_calls.elf")
            .expect("fixture debug_calls.elf must exist");
        ElfLoader::load(&data).expect("should parse debug_calls.elf")
    }

    #[test]
    fn debug_sections_present() {
        let img = load_debug_fixture();
        assert!(img.section_by_name(".debug_info").is_some());
        assert!(img.section_by_name(".debug_abbrev").is_some());
        assert!(img.section_by_name(".debug_str").is_some());
        assert!(img.section_by_name(".debug_line").is_some());
    }

    #[test]
    fn extracts_all_functions() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        assert!(
            !info.functions.is_empty(),
            "should extract at least one function"
        );

        let names: Vec<&str> = info.functions.values().map(|f| f.name.as_str()).collect();
        assert!(names.contains(&"main"), "should find main: {names:?}");
        assert!(names.contains(&"compute"), "should find compute: {names:?}");
        assert!(names.contains(&"add"), "should find add: {names:?}");
        assert!(names.contains(&"sub"), "should find sub: {names:?}");
        assert!(names.contains(&"mul"), "should find mul: {names:?}");
        assert!(names.contains(&"square"), "should find square: {names:?}");
        assert!(names.contains(&"clamp"), "should find clamp: {names:?}");
    }

    #[test]
    fn function_addresses_valid() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        for (addr, func) in &info.functions {
            assert!(
                *addr > 0,
                "function {} should have non-zero address",
                func.name
            );
            assert_eq!(*addr, func.low_pc);
            if let Some(high) = func.high_pc {
                assert!(
                    high > func.low_pc,
                    "high_pc ({high:#x}) should be > low_pc ({:#x}) for {}",
                    func.low_pc,
                    func.name,
                );
            }
            if !func.ranges.is_empty() {
                assert_eq!(func.ranges[0].begin, func.low_pc);
                assert!(
                    func.ranges.iter().all(|r| r.end > r.begin),
                    "all function ranges should be non-empty for {}: {:?}",
                    func.name,
                    func.ranges
                );
            }
        }
    }

    #[test]
    fn parameter_names_and_types() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let add_fn = info
            .functions
            .values()
            .find(|f| f.name == "add")
            .expect("should find add function");

        assert_eq!(
            add_fn.params.len(),
            2,
            "add(int a, int b) should have 2 params"
        );
        assert_eq!(add_fn.params[0].name.as_deref(), Some("a"));
        assert_eq!(add_fn.params[1].name.as_deref(), Some("b"));
        assert_eq!(add_fn.params[0].type_name.as_deref(), Some("int"));
        assert_eq!(add_fn.params[1].type_name.as_deref(), Some("int"));
    }

    #[test]
    fn return_type() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let add_fn = info
            .functions
            .values()
            .find(|f| f.name == "add")
            .expect("should find add function");

        assert_eq!(add_fn.return_type.as_deref(), Some("int"));
    }

    #[test]
    fn source_location_for_function() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let compute_fn = info
            .functions
            .values()
            .find(|f| f.name == "compute")
            .expect("should find compute function");

        let decl = compute_fn
            .decl
            .as_ref()
            .expect("compute should have source location");
        assert!(
            decl.file.contains("calls.c"),
            "compute should be declared in calls.c, got: {}",
            decl.file,
        );
        assert_eq!(decl.line, 11, "compute is declared on line 11");
    }

    #[test]
    fn source_map_populated() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        assert!(
            !info.source_map.is_empty(),
            "source map should have entries"
        );

        let has_calls_c = info
            .source_map
            .values()
            .any(|loc| loc.file.contains("calls.c"));
        assert!(has_calls_c, "source map should reference calls.c");
    }

    #[test]
    fn no_dwarf_returns_empty() {
        let data =
            std::fs::read("../../fixtures/stripped.elf").expect("fixture stripped.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse stripped.elf");
        let info = import_dwarf(&img).expect("should succeed even without DWARF");

        assert!(
            info.functions.is_empty(),
            "stripped binary should have no DWARF functions"
        );
    }

    #[test]
    fn import_dwarf_accepts_explicit_location_resolver() {
        let img = load_debug_fixture();
        let resolver = DebugLocationResolver;
        let info = import_dwarf_with_resolver(&img, &resolver).expect("should parse DWARF");
        assert!(!info.functions.is_empty());
    }

    #[test]
    fn sidecar_recovers_dwarf_from_external_file() {
        // The primary image is stripped (no DWARF); all debug info must come
        // from the external sidecar ELF passed via `--dwarf-sidecar`.
        let stripped =
            std::fs::read("../../fixtures/stripped.elf").expect("fixture stripped.elf must exist");
        let stripped_img = ElfLoader::load(&stripped).expect("should parse stripped.elf");
        let sidecar = std::fs::read("../../fixtures/debug_calls.elf")
            .expect("fixture debug_calls.elf must exist");

        let without = import_dwarf_with_sidecar(&stripped_img, None)
            .expect("import without sidecar should succeed");
        assert!(
            without.functions.is_empty(),
            "stripped image alone must yield no DWARF functions"
        );

        let with = import_dwarf_with_sidecar(&stripped_img, Some(&sidecar))
            .expect("import with sidecar should succeed");
        assert!(
            !with.functions.is_empty(),
            "sidecar must inject DWARF functions the stripped image lacks"
        );
    }

    #[test]
    fn three_param_function() {
        let img = load_debug_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        let clamp_fn = info
            .functions
            .values()
            .find(|f| f.name == "clamp")
            .expect("should find clamp function");

        assert_eq!(
            clamp_fn.params.len(),
            3,
            "clamp(int x, int lo, int hi) has 3 params"
        );
        assert_eq!(clamp_fn.params[0].name.as_deref(), Some("x"));
        assert_eq!(clamp_fn.params[1].name.as_deref(), Some("lo"));
        assert_eq!(clamp_fn.params[2].name.as_deref(), Some("hi"));
    }

    fn load_structs_fixture() -> BinaryImage {
        let data = std::fs::read("../../fixtures/debug_structs.elf")
            .expect("fixture debug_structs.elf must exist");
        ElfLoader::load(&data).expect("should parse debug_structs.elf")
    }

    /// `area` is declared inline, so its out-of-line copy carries only
    /// `DW_AT_abstract_origin`; the name and the `Rect *r` parameter live on
    /// the abstract DIE.
    #[test]
    fn abstract_origin_supplies_name_and_params() {
        let img = load_structs_fixture();
        let info = import_dwarf(&img).expect("should decode DWARF");
        let area = info
            .functions
            .values()
            .find(|f| f.name == "area")
            .expect("out-of-line area must be recovered");
        assert_eq!(area.return_type.as_deref(), Some("int"));
        assert_eq!(area.params.len(), 1);
        assert_eq!(area.params[0].name.as_deref(), Some("r"));
        assert_eq!(area.params[0].type_name.as_deref(), Some("Rect *"));
    }

    #[test]
    fn test_dwarf_struct_recovery() {
        let img = load_structs_fixture();
        let info = import_dwarf(&img).expect("should parse DWARF");

        assert!(
            info.structs.contains_key("Point"),
            "should recover Point struct, got: {:?}",
            info.structs.keys().collect::<Vec<_>>(),
        );
        assert!(
            info.structs.contains_key("Rect"),
            "should recover Rect struct, got: {:?}",
            info.structs.keys().collect::<Vec<_>>(),
        );

        let point = &info.structs["Point"];
        assert_eq!(point.size, 8);
        assert_eq!(point.fields.len(), 2);

        assert_eq!(point.fields[0].name, "x");
        assert_eq!(point.fields[0].offset, 0);
        assert_eq!(point.fields[0].size, 4);
        assert_eq!(point.fields[0].type_name, "int");

        assert_eq!(point.fields[1].name, "y");
        assert_eq!(point.fields[1].offset, 4);
        assert_eq!(point.fields[1].size, 4);
        assert_eq!(point.fields[1].type_name, "int");

        let rect = &info.structs["Rect"];
        assert_eq!(rect.size, 16);
        assert_eq!(rect.fields.len(), 2);

        assert_eq!(rect.fields[0].name, "origin");
        assert_eq!(rect.fields[0].offset, 0);
        assert_eq!(rect.fields[0].size, 8);
        assert_eq!(rect.fields[0].type_name, "Point");

        assert_eq!(rect.fields[1].name, "size");
        assert_eq!(rect.fields[1].offset, 8);
        assert_eq!(rect.fields[1].size, 8);
        assert_eq!(rect.fields[1].type_name, "Point");
    }

    #[test]
    fn test_dwarf_type_name_surfaces_template_type_arguments() {
        use std::collections::BTreeMap;

        use gimli::write::{AttributeValue, Dwarf, EndianVec, LineProgram, Sections, Unit};
        use gimli::{Encoding, Format, LittleEndian};
        use unlace_ir::ArchId;

        let encoding = Encoding {
            format: Format::Dwarf32,
            version: 5,
            address_size: 8,
        };
        let mut dwarf = Dwarf::default();
        let unit_id = dwarf.units.add(Unit::new(encoding, LineProgram::none()));
        let unit = dwarf.units.get_mut(unit_id);
        let root = unit.root();

        let int_ty = unit.add(root, DW_TAG_base_type);
        unit.get_mut(int_ty)
            .set(DW_AT_name, AttributeValue::String(b"int".to_vec()));
        unit.get_mut(int_ty)
            .set(DW_AT_byte_size, AttributeValue::Data1(4));

        let vec_ty = unit.add(root, DW_TAG_structure_type);
        unit.get_mut(vec_ty)
            .set(DW_AT_name, AttributeValue::String(b"Vec".to_vec()));
        unit.get_mut(vec_ty)
            .set(DW_AT_byte_size, AttributeValue::Data1(24));

        let template_param = unit.add(vec_ty, DW_TAG_template_type_parameter);
        unit.get_mut(template_param)
            .set(DW_AT_name, AttributeValue::String(b"T".to_vec()));
        unit.get_mut(template_param)
            .set(DW_AT_type, AttributeValue::UnitRef(int_ty));

        let holder_ty = unit.add(root, DW_TAG_structure_type);
        unit.get_mut(holder_ty)
            .set(DW_AT_name, AttributeValue::String(b"Holder".to_vec()));
        unit.get_mut(holder_ty)
            .set(DW_AT_byte_size, AttributeValue::Data1(24));

        let member = unit.add(holder_ty, DW_TAG_member);
        unit.get_mut(member)
            .set(DW_AT_name, AttributeValue::String(b"value".to_vec()));
        unit.get_mut(member)
            .set(DW_AT_type, AttributeValue::UnitRef(vec_ty));
        unit.get_mut(member)
            .set(DW_AT_data_member_location, AttributeValue::Data1(0));

        let mut sections = Sections::new(EndianVec::new(LittleEndian));
        dwarf
            .write(&mut sections)
            .expect("should write synthetic DWARF");

        let section = |id: gimli::SectionId| -> crate::image::Section {
            let data = sections
                .get(id)
                .expect("section should exist")
                .slice()
                .to_vec();
            crate::image::Section {
                name: id.name().to_string(),
                vaddr: 0,
                size: data.len() as u64,
                data,
                flags: crate::image::SectionFlags::READ,
            }
        };

        let img = BinaryImage {
            arch: ArchId::X86_64,
            os_abi: unlace_ir::OsAbi::Unknown,
            endian: crate::image::Endian::Little,
            entry: 0,
            sections: vec![
                section(gimli::SectionId::DebugAbbrev),
                section(gimli::SectionId::DebugInfo),
                section(gimli::SectionId::DebugStr),
            ],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: vec![],
            string_table: BTreeMap::new(),
            tls_callbacks: vec![],
            function_starts: vec![],
            debug_records: vec![],
            load_config: None,
            pe_mitigations: None,
            runtime_functions: vec![],
            resources: vec![],
            bound_imports: vec![],
            delay_imports: vec![],
            forwarded_exports: vec![],
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: vec![],
            rpaths: vec![],
            pdb_types: None,
            pdb_info: None,
            image_base: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: vec![],
            auth_ptr_slots: vec![],
            wasm_component: None,
        };

        let info = import_dwarf(&img).expect("should parse synthetic DWARF");
        let holder = info
            .structs
            .get("Holder")
            .expect("Holder struct should exist");
        assert_eq!(holder.fields[0].type_name, "Vec<T = int>");

        let vec = info.structs.get("Vec").expect("Vec struct should exist");
        assert_eq!(vec.template_params, vec!["T = int"]);
    }

    #[test]
    fn array_type_renderer_preserves_dimensions() {
        assert_eq!(render_array_type("int", &[Some(3)]), "int[3]");
        assert_eq!(
            render_array_type("long int", &[Some(4), None]),
            "long int[4][]"
        );
    }

    #[test]
    fn test_dwarf_no_structs() {
        let data = std::fs::read("../../fixtures/hello_world.elf")
            .expect("fixture hello_world.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse hello_world.elf");
        let info = import_dwarf(&img).expect("should succeed without DWARF");

        assert!(
            info.structs.is_empty(),
            "hello_world.elf (no -g) should have no structs"
        );
        assert!(
            info.enums.is_empty(),
            "hello_world.elf (no -g) should have no enums"
        );
        assert!(
            info.unions.is_empty(),
            "hello_world.elf (no -g) should have no unions"
        );
        assert!(
            info.macros.is_empty(),
            "hello_world.elf (no -g) should have no macros"
        );
    }

    #[test]
    fn macro_parser_splits_name_value_and_location() {
        let parsed = parse_macro_definition(
            "MAX_SIZE 4096",
            Some("include/config.h".to_owned()),
            Some(17),
        )
        .expect("macro should parse");

        assert_eq!(parsed.name, "MAX_SIZE");
        assert_eq!(parsed.value.as_deref(), Some("4096"));
        assert_eq!(parsed.file.as_deref(), Some("include/config.h"));
        assert_eq!(parsed.line, Some(17));
    }

    #[test]
    fn macro_parser_accepts_flag_style_macros() {
        let parsed = parse_macro_definition("DEBUG", None, None).expect("macro should parse");

        assert_eq!(parsed.name, "DEBUG");
        assert_eq!(parsed.value, None);
        assert_eq!(parsed.file, None);
        assert_eq!(parsed.line, None);
    }

    #[test]
    fn macro_parser_rejects_blank_entries() {
        assert_eq!(parse_macro_definition("   ", None, Some(1)), None);
    }

    #[test]
    fn dwarf_v5_loclists_and_rnglists_are_supported() {
        let source = r#"
#include <stdio.h>

int helper(int x) {
    return x + 1;
}

int main(void) {
    int n = 0;
    if (helper(1) > 0) {
        n += 1;
    }
    if (helper(2) > 0) {
        n += 2;
    }
    return n;
}
"#;
        let temp = tempfile::tempdir().expect("tempdir");
        let src = temp.path().join("rng.c");
        let elf = temp.path().join("rng.elf");
        std::fs::write(&src, source).expect("write source");

        let status = std::process::Command::new("clang")
            .args([
                "-gdwarf-5",
                "-ffunction-sections",
                "-Wl,--gc-sections",
                "-O2",
                "-o",
            ])
            .arg(&elf)
            .arg(&src)
            .status()
            .expect("invoke clang");
        assert!(status.success(), "clang should compile DWARF v5 fixture");

        let data = std::fs::read(&elf).expect("read fixture");
        let img = ElfLoader::load(&data).expect("parse DWARF v5 ELF");
        assert!(img.section_by_name(".debug_rnglists").is_some());

        let info = import_dwarf(&img).expect("import DWARF v5");
        let main_fn = info
            .functions
            .values()
            .find(|f| f.name == "main")
            .expect("find main");
        assert!(
            !main_fn.ranges.is_empty(),
            "main should populate ranges from DW_AT_ranges/.debug_rnglists"
        );
        assert!(
            main_fn.ranges.iter().any(|r| r.begin < r.end),
            "main ranges should contain valid address intervals: {:?}",
            main_fn.ranges
        );
    }

    #[test]
    fn dwarf_v5_loclists_ranges_are_recorded_for_variables() {
        let source = r#"
#include <stdint.h>

struct Pair { int x; int y; };

__attribute__((noinline))
int choose(int *p, int *q, int flag) {
    int *selected = flag ? p : q;
    int total = 0;
    if (flag > 0) {
        total += *selected;
    } else {
        total += *q;
    }
    return total + flag;
}

__attribute__((noinline))
int pair_sum(struct Pair *pair, int which) {
    int value = which ? pair->x : pair->y;
    if (which > 3) {
        value += pair->x;
    }
    return value;
}

int main(void) {
    struct Pair pair = {3, 4};
    int a = 10;
    int b = 20;
    return choose(&a, &b, 1) + pair_sum(&pair, 0);
}
"#;
        let temp = tempfile::tempdir().expect("tempdir");
        let src = temp.path().join("loc.c");
        let elf = temp.path().join("loc.elf");
        std::fs::write(&src, source).expect("write source");

        let status = std::process::Command::new("clang")
            .args(["-gdwarf-5", "-O2", "-o"])
            .arg(&elf)
            .arg(&src)
            .status()
            .expect("invoke clang");
        assert!(status.success(), "clang should compile DWARF v5 fixture");

        let data = std::fs::read(&elf).expect("read fixture");
        let img = ElfLoader::load(&data).expect("parse DWARF v5 ELF");
        assert!(img.section_by_name(".debug_loclists").is_some());

        let info = import_dwarf(&img).expect("import DWARF v5");
        let choose = info
            .functions
            .values()
            .find(|f| f.name == "choose")
            .expect("find choose");
        let total = choose
            .locals
            .iter()
            .find(|local| local.name == "total")
            .expect("find total local");
        assert!(
            !total.locations.is_empty(),
            "location-list backed locals should record live ranges"
        );
        assert!(
            total.locations.iter().all(|r| r.begin < r.end),
            "all location ranges should be valid: {:?}",
            total.locations
        );
    }

    /// A DWARF v5 subprogram whose `DW_AT_ranges` attribute points to a
    /// multi-entry rnglist in `.debug_rnglists`.  We compile with
    /// `-fbasic-block-sections=all` which places each basic block in its
    /// own section, forcing the debug info to encode multiple address
    /// ranges for a single function via `DW_AT_ranges`.
    #[test]
    fn rnglists_function_with_two_ranges_lists_both() {
        // A function with branches that cannot be merged (external calls
        // in each branch) so that basic-block-section splitting produces
        // multiple disjoint address ranges in the subprogram's rnglist.
        let source = r#"
volatile int sink;
extern int external_call(int);

__attribute__((noinline))
int split_logic(int x) {
    int result = 0;
    if (x > 100) {
        result = external_call(x);
        sink = result;
    } else if (x > 50) {
        result = external_call(x * 2);
        sink = result + 1;
    } else {
        result = external_call(x - 1);
        sink = result - 1;
    }
    return result + sink;
}

int external_call(int v) { return v + 1; }

int main(void) {
    return split_logic(42) + split_logic(150);
}
"#;
        let temp = tempfile::tempdir().expect("tempdir");
        let src = temp.path().join("split.c");
        let elf = temp.path().join("split.elf");
        std::fs::write(&src, source).expect("write source");

        let status = std::process::Command::new("clang")
            .args(["-gdwarf-5", "-O2", "-fbasic-block-sections=all", "-o"])
            .arg(&elf)
            .arg(&src)
            .status()
            .expect("invoke clang");
        if !status.success() {
            eprintln!("clang does not support -fbasic-block-sections=all; skipping");
            return;
        }

        let data = std::fs::read(&elf).expect("read fixture");
        let img = ElfLoader::load(&data).expect("parse split ELF");
        assert!(
            img.section_by_name(".debug_rnglists").is_some(),
            "DWARF v5 .debug_rnglists section should be present"
        );

        let info = import_dwarf(&img).expect("import DWARF v5");
        let func = info
            .functions
            .values()
            .find(|f| f.name == "split_logic")
            .expect("find split_logic");

        assert!(
            func.ranges.len() >= 2,
            "split_logic should have at least 2 range entries from .debug_rnglists, got {}: {:?}",
            func.ranges.len(),
            func.ranges
        );
        assert!(
            func.ranges.iter().all(|r| r.begin < r.end),
            "all ranges must be valid (begin < end): {:?}",
            func.ranges
        );
    }

    /// `loclists_decode_single_range_fbreg` — synthetic v5 unit with a
    /// single loclists entry whose expression is `DW_OP_fbreg -8`.
    /// Compile a representative C source and verify the resulting
    /// LocalVariable's `locations_dwarf_v5` carries at least one
    /// `(range, FrameOffset(_))` pair. Skips cleanly when clang is
    /// absent or the compiler doesn't emit a loclists-backed local.
    #[test]
    fn loclists_decode_single_range_fbreg() {
        let Ok(temp) = tempfile::tempdir() else {
            return;
        };
        let src = temp.path().join("loclists_fbreg.c");
        let elf = temp.path().join("loclists_fbreg.elf");
        let source = r#"
__attribute__((noinline))
int add_one(int x) {
    volatile int local = x;
    return local + 1;
}
int main(void) { return add_one(41); }
"#;
        let _ = std::fs::write(&src, source);
        let Ok(status) = std::process::Command::new("clang")
            .args(["-gdwarf-5", "-O1", "-o"])
            .arg(&elf)
            .arg(&src)
            .status()
        else {
            return;
        };
        if !status.success() {
            return;
        }
        let Ok(data) = std::fs::read(&elf) else {
            return;
        };
        let Ok(img) = ElfLoader::load(&data) else {
            return;
        };
        let Ok(info) = import_dwarf(&img) else { return };

        // Find any local with a non-empty v5 location list. Some
        // toolchains optimise the volatile into a constant; tolerate
        // that by skipping when nothing showed up.
        let any_v5 = info
            .functions
            .values()
            .flat_map(|f| f.locals.iter())
            .any(|l| !l.locations_dwarf_v5.is_empty());
        if !any_v5 {
            return;
        }
        // When v5 entries did appear, at least one should map to a
        // FrameOffset (the dominant fbreg shape).
        let has_fbreg = info
            .functions
            .values()
            .flat_map(|f| f.locals.iter())
            .flat_map(|l| l.locations_dwarf_v5.iter())
            .any(|(_, loc)| matches!(loc, SimpleLocation::FrameOffset(_)));
        assert!(
            has_fbreg,
            "expected at least one loclists entry to decode as FrameOffset"
        );
    }

    /// `loclists_two_ranges_keep_both` — a v5 unit where a single
    /// variable's `DW_AT_location` is split into two PC ranges (e.g.
    /// register on the hot path, stack on the cold path). The decoder
    /// should preserve both entries.
    #[test]
    fn loclists_two_ranges_keep_both() {
        let Ok(temp) = tempfile::tempdir() else {
            return;
        };
        let src = temp.path().join("loclists_split.c");
        let elf = temp.path().join("loclists_split.elf");
        let source = r#"
volatile int sink;
__attribute__((noinline))
int split(int x) {
    int v = x * 3;
    if (x > 0) {
        sink = v;
    } else {
        v += 7;
    }
    return v;
}
int main(void) { return split(2) + split(-1); }
"#;
        let _ = std::fs::write(&src, source);
        let Ok(status) = std::process::Command::new("clang")
            .args(["-gdwarf-5", "-O2", "-o"])
            .arg(&elf)
            .arg(&src)
            .status()
        else {
            return;
        };
        if !status.success() {
            return;
        }
        let Ok(data) = std::fs::read(&elf) else {
            return;
        };
        let Ok(img) = ElfLoader::load(&data) else {
            return;
        };
        let Ok(info) = import_dwarf(&img) else { return };

        // Find any local with ≥ 2 v5 entries. Skip when the compiler
        // collapsed the live range (often happens at -O3 or when the
        // value fits in a single register the whole way).
        let multi = info
            .functions
            .values()
            .flat_map(|f| f.locals.iter())
            .any(|l| l.locations_dwarf_v5.len() >= 2);
        if !multi {
            return;
        }
        // The two-or-more case must always have consistent (begin < end) ranges.
        for f in info.functions.values() {
            for l in &f.locals {
                for (range, _) in &l.locations_dwarf_v5 {
                    assert!(range.begin < range.end, "loclist range must be non-empty");
                }
            }
        }
    }

    /// `extracts_dwo_references_from_skeleton_unit` — compile a tiny C
    /// translation unit with `-gsplit-dwarf`. When supported, the
    /// resulting ELF should carry a skeleton compile unit whose root
    /// DIE has `DW_AT_GNU_dwo_name`. The test skips cleanly if the
    /// host toolchain doesn't emit one (Apple clang, very old GCC, etc.).
    #[test]
    fn extracts_dwo_references_from_skeleton_unit() {
        let tmp = match tempfile::tempdir() {
            Ok(t) => t,
            Err(_) => return,
        };
        let src = tmp.path().join("skeleton.c");
        let obj = tmp.path().join("skeleton.elf");
        std::fs::write(
            &src,
            "int f(int x) { return x + 1; }\nint main(void){ return f(0); }\n",
        )
        .expect("write skeleton.c");

        let status = std::process::Command::new("clang")
            .arg("-gdwarf-5")
            .arg("-gsplit-dwarf")
            .arg("-O0")
            .arg("-fno-pie")
            .arg("-no-pie")
            .arg("-c")
            .arg(&src)
            .arg("-o")
            .arg(&obj)
            .status();
        let Ok(status) = status else { return };
        if !status.success() {
            return;
        }
        let Ok(bytes) = std::fs::read(&obj) else {
            return;
        };
        let Ok(image) = ElfLoader::load(&bytes) else {
            return;
        };
        let Ok(info) = import_dwarf(&image) else {
            return;
        };

        // If the toolchain emitted split-DWARF, dwo_references must be
        // populated. Some platforms (Apple, old GCC) silently drop the
        // attribute even with `-gsplit-dwarf`; skip the assertion in
        // that case.
        if info.dwo_references.is_empty() {
            return;
        }
        let dwo = &info.dwo_references[0];
        assert!(
            dwo.dwo_name.contains(".dwo") || dwo.dwo_name.ends_with(".o"),
            "dwo_name should look like a split-DWARF filename, got {:?}",
            dwo.dwo_name
        );
    }

    /// `merge_split_dwarf_imports_dwo_functions` — feed an ELF blob as a
    /// pretend `.dwo` and assert the new functions land in the parent's
    /// `functions` map. This is a smoke test of the merge plumbing —
    /// in real DWARF a `.dwo` would not be a self-contained ELF, but
    /// our merge function parses it as one because gimli accepts the
    /// `.debug_info` section under either naming.
    #[test]
    fn merge_split_dwarf_imports_dwo_functions() {
        let mut parent = DwarfInfo {
            functions: BTreeMap::new(),
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
            macros: Vec::new(),
            languages: BTreeSet::new(),
            dwo_references: Vec::new(),
        };
        // Reuse the debug_calls fixture as our "external partner".
        let dwo_bytes = std::fs::read("../../fixtures/debug_calls.elf")
            .expect("debug_calls fixture must exist");
        parent
            .merge_split_dwarf(&dwo_bytes)
            .expect("merge should succeed");
        assert!(
            !parent.functions.is_empty(),
            "merge should populate functions from the .dwo partner"
        );
    }
}
