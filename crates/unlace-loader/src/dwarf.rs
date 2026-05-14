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
//!  * `DW_TAG_variable` (inside a subprogram) → [`LocalVariable`] with
//!    optional `frame_offset` decoded from a single-op `DW_OP_fbreg`
//!    location expression.
//!
//! Recursive types are resolved through [`resolve_type_name`], which
//! recurses through `DW_TAG_pointer_type`, `DW_TAG_const_type`,
//! `DW_TAG_volatile_type`, `DW_TAG_restrict_type`, and `DW_TAG_typedef`
//! to produce a printable C-style name (e.g. `"const Rect *"`).
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
    AttributeValue, DW_AT_byte_size, DW_AT_const_value, DW_AT_data_member_location, DW_AT_high_pc,
    DW_AT_linkage_name, DW_AT_location, DW_AT_low_pc, DW_AT_name, DW_AT_type, DW_TAG_base_type,
    DW_TAG_const_type, DW_TAG_enumeration_type, DW_TAG_enumerator, DW_TAG_formal_parameter,
    DW_TAG_member, DW_TAG_pointer_type, DW_TAG_restrict_type, DW_TAG_structure_type,
    DW_TAG_subprogram, DW_TAG_template_type_parameter, DW_TAG_typedef, DW_TAG_union_type,
    DW_TAG_variable, DW_TAG_volatile_type, EndianSlice, RunTimeEndian,
};

use crate::error::LoadError;
use crate::image::BinaryImage;

type R<'a> = EndianSlice<'a, RunTimeEndian>;

#[derive(Debug, Clone)]
pub struct DwarfInfo {
    pub functions: BTreeMap<u64, FunctionDebugInfo>,
    pub source_map: BTreeMap<u64, SourceLocation>,
    pub structs: BTreeMap<String, StructType>,
    pub enums: BTreeMap<String, EnumType>,
    pub unions: BTreeMap<String, UnionType>,
    pub macros: Vec<MacroDefinition>,
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
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParameterInfo {
    pub name: Option<String>,
    pub type_name: Option<String>,
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

    let functions = extract_functions(&dwarf)?;
    let source_map = build_source_map(&dwarf)?;
    let (structs, enums, unions) = extract_composite_types(&dwarf)?;
    let macros = extract_macros(&dwarf)?;

    Ok(DwarfInfo {
        functions,
        source_map,
        structs,
        enums,
        unions,
        macros,
    })
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

fn extract_functions(
    dwarf: &gimli::Dwarf<R<'_>>,
) -> Result<BTreeMap<u64, FunctionDebugInfo>, gimli::Error> {
    let mut functions = BTreeMap::new();
    let mut units = dwarf.units();

    while let Some(header) = units.next()? {
        let unit = dwarf.unit(header)?;
        extract_functions_from_unit(dwarf, &unit, &mut functions)?;
    }

    Ok(functions)
}

fn extract_functions_from_unit(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
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

        let low_pc = match entry.attr_value(DW_AT_low_pc) {
            Some(val) => match dwarf.attr_address(unit, val)? {
                Some(addr) => addr,
                None => continue,
            },
            None => continue,
        };

        let name = match attr_string(dwarf, unit, entry, DW_AT_name)? {
            Some(n) => n,
            None => continue,
        };

        let linkage_name = attr_string(dwarf, unit, entry, DW_AT_linkage_name)?;

        let ranges = extract_die_ranges(dwarf, unit, entry)?;
        let high_pc = match entry.attr_value(DW_AT_high_pc) {
            Some(AttributeValue::Addr(addr)) => Some(addr),
            Some(AttributeValue::Udata(size)) => Some(low_pc + size),
            _ => ranges.iter().map(|r| r.end).max(),
        };

        let return_type = match entry.attr_value(DW_AT_type) {
            Some(val) => resolve_type_name(dwarf, unit, val)?,
            None => None,
        };

        let decl = extract_decl_location(dwarf, unit, entry)?;
        let (params, locals) = extract_params_and_locals(dwarf, unit, child)?;

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
        } else if tag == DW_TAG_union_type {
            if let Some(ut) = extract_union_type(dwarf, unit, child)? {
                unions.insert(ut.name.clone(), ut);
            }
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

fn extract_params_and_locals(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
    func_node: gimli::EntriesTreeNode<'_, '_, R<'_>>,
) -> Result<(Vec<ParameterInfo>, Vec<LocalVariable>), gimli::Error> {
    let mut params = Vec::new();
    let mut locals = Vec::new();
    let mut children = func_node.children();

    while let Some(child) = children.next()? {
        let tag = child.entry().tag();
        let entry = child.entry();

        if tag == DW_TAG_formal_parameter {
            let name = attr_string(dwarf, unit, entry, DW_AT_name)?;
            let type_name = match entry.attr_value(DW_AT_type) {
                Some(val) => resolve_type_name(dwarf, unit, val)?,
                None => None,
            };
            params.push(ParameterInfo { name, type_name });
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
            let frame_offset = location_attr.and_then(decode_fbreg_offset);
            let locations = match location_attr {
                Some(value) => extract_location_ranges(dwarf, unit, value)?,
                None => Vec::new(),
            };
            locals.push(LocalVariable {
                name,
                type_name,
                frame_offset,
                locations,
            });
        }
    }

    Ok((params, locals))
}

/// Decode a `DW_AT_location` value as a single `DW_OP_fbreg <sleb>` opcode.
///
/// Returns `Some(offset)` when the location is exactly a `DW_OP_fbreg`
/// expression and `None` otherwise. The opcode constant is `0x91` and the
/// operand is an SLEB128. Compilers commonly emit this single-opcode form
/// for stack-allocated locals.
fn decode_fbreg_offset(value: AttributeValue<R<'_>>) -> Option<i64> {
    let bytes: &[u8] = match value {
        AttributeValue::Block(b) | AttributeValue::Exprloc(gimli::Expression(b)) => b.slice(),
        _ => return None,
    };
    if bytes.first().copied() != Some(0x91) {
        return None;
    }
    let mut cursor = &bytes[1..];
    let mut result: i64 = 0;
    let mut shift: u32 = 0;
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
    if !cursor.is_empty() {
        return None;
    }
    Some(result)
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

fn extract_location_ranges<'a>(
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


/// Split-DWARF (DWO/DWP) skeleton → full-DWARF resolution support.
///
/// When a binary is compiled with `-gsplit-dwarf`, the `.debug_info` in the
/// executable contains only skeleton compilation units (DW_TAG_skeleton_unit)
/// with a DW_AT_dwo_id. The full type/line/macro info lives in companion
/// `.dwo` files or a merged `.dwp` package.
#[derive(Debug, Clone)]
pub struct SplitDwarfResolver {
    /// Map from DWO-ID (hash) to the path of the `.dwo` / `.dwp` file.
    pub dwo_map: std::collections::BTreeMap<u64, String>,
    /// If a `.dwp` package is present, its path.
    pub dwp_path: Option<String>,
}

/// A split-DWARF skeleton reference found in the main binary.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SkeletonUnit {
    /// DW_AT_dwo_id hash identifying the companion unit.
    pub dwo_id: u64,
    /// DW_AT_comp_dir (compilation directory).
    pub comp_dir: Option<String>,
    /// DW_AT_dwo_name or DW_AT_GNU_dwo_name file path.
    pub dwo_name: Option<String>,
    /// Offset of this skeleton CU in `.debug_info`.
    pub offset: u64,
}

impl SplitDwarfResolver {
    pub fn new() -> Self {
        Self {
            dwo_map: std::collections::BTreeMap::new(),
            dwp_path: None,
        }
    }

    /// Register a DWO file for a given DWO-ID.
    pub fn register_dwo(&mut self, dwo_id: u64, path: String) {
        self.dwo_map.insert(dwo_id, path);
    }

    /// Resolve a skeleton unit to its companion DWO path.
    pub fn resolve(&self, skeleton: &SkeletonUnit) -> Option<&str> {
        self.dwo_map.get(&skeleton.dwo_id).map(|s| s.as_str())
    }

    /// Check if we have a DWP package that might contain all split units.
    pub fn has_dwp(&self) -> bool {
        self.dwp_path.is_some()
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{ElfLoader, Loader};

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
}

#[cfg(test)]
mod split_dwarf_tests {
    use super::*;

    #[test]
    fn resolver_finds_registered_dwo() {
        let mut resolver = SplitDwarfResolver::new();
        resolver.register_dwo(0xDEAD_BEEF, "/tmp/foo.dwo".into());
        let skel = SkeletonUnit {
            dwo_id: 0xDEAD_BEEF,
            comp_dir: Some("/src".into()),
            dwo_name: Some("foo.dwo".into()),
            offset: 0,
        };
        assert_eq!(resolver.resolve(&skel), Some("/tmp/foo.dwo"));
    }

    #[test]
    fn resolver_returns_none_for_unknown_id() {
        let resolver = SplitDwarfResolver::new();
        let skel = SkeletonUnit { dwo_id: 0x1234, comp_dir: None, dwo_name: None, offset: 0 };
        assert_eq!(resolver.resolve(&skel), None);
    }

    #[test]
    fn dwp_path_detection() {
        let mut resolver = SplitDwarfResolver::new();
        assert!(!resolver.has_dwp());
        resolver.dwp_path = Some("/tmp/all.dwp".into());
        assert!(resolver.has_dwp());
    }
}
