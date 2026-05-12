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
use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use gimli::{
    AttributeValue, DW_AT_byte_size, DW_AT_const_value, DW_AT_data_member_location, DW_AT_high_pc,
    DW_AT_linkage_name, DW_AT_location, DW_AT_low_pc, DW_AT_name, DW_AT_type, DW_TAG_base_type,
    DW_TAG_const_type, DW_TAG_enumeration_type, DW_TAG_enumerator, DW_TAG_formal_parameter,
    DW_TAG_member, DW_TAG_pointer_type, DW_TAG_restrict_type, DW_TAG_structure_type,
    DW_TAG_subprogram, DW_TAG_typedef, DW_TAG_union_type, DW_TAG_variable, DW_TAG_volatile_type,
    DwarfFileType, EndianSlice, RunTimeEndian,
};

use object::{Object, ObjectSection};

use crate::error::LoadError;
use crate::image::{BinaryImage, Section};

type R<'a> = EndianSlice<'a, RunTimeEndian>;

#[derive(Debug, Clone)]
pub struct DwarfInfo {
    pub functions: BTreeMap<u64, FunctionDebugInfo>,
    pub source_map: BTreeMap<u64, SourceLocation>,
    pub structs: BTreeMap<String, StructType>,
    pub enums: BTreeMap<String, EnumType>,
    pub unions: BTreeMap<String, UnionType>,
    /// Split-DWARF object files (`.dwo`/`.dwp`) followed while expanding
    /// skeleton compilation units. Paths are best-effort and informational.
    pub split_dwarf_files: Vec<String>,
}

#[derive(Debug, Clone)]
pub struct FunctionDebugInfo {
    pub name: String,
    pub linkage_name: Option<String>,
    pub low_pc: u64,
    pub high_pc: Option<u64>,
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
    pub members: Vec<StructField>,
}

pub fn import_dwarf(image: &BinaryImage) -> Result<DwarfInfo, LoadError> {
    let endian = match image.endian {
        crate::image::Endian::Little => RunTimeEndian::Little,
        crate::image::Endian::Big => RunTimeEndian::Big,
    };

    let dwarf_sections = load_dwarf_sections_from_image(image, false)?;
    let dwarf: gimli::Dwarf<R<'_>> =
        dwarf_sections.borrow(|section| EndianSlice::new(section.as_ref(), endian));

    let split_units = load_split_dwarf_units(image, endian)?;

    let mut functions = extract_functions(&dwarf)?;
    let mut source_map = build_source_map(&dwarf)?;
    let (mut structs, mut enums, mut unions) = extract_composite_types(&dwarf)?;

    for split in &split_units {
        merge_functions(&mut functions, extract_functions(&split.dwarf)?);
        source_map.extend(build_source_map(&split.dwarf)?);
        let (split_structs, split_enums, split_unions) = extract_composite_types(&split.dwarf)?;
        structs.extend(split_structs);
        enums.extend(split_enums);
        unions.extend(split_unions);
    }

    Ok(DwarfInfo {
        functions,
        source_map,
        structs,
        enums,
        unions,
        split_dwarf_files: split_units
            .into_iter()
            .map(|unit| unit.display_name)
            .collect(),
    })
}

struct SplitDwarfUnit {
    dwarf: gimli::Dwarf<R<'static>>,
    display_name: String,
}

fn load_dwarf_sections_from_image(
    image: &BinaryImage,
    dwo_names: bool,
) -> Result<gimli::DwarfSections<Cow<'_, [u8]>>, gimli::Error> {
    gimli::DwarfSections::load(|id| {
        let data: Cow<'_, [u8]> = section_data_by_dwarf_id(&image.sections, id, dwo_names)
            .map(Cow::Borrowed)
            .unwrap_or_else(|| Cow::Borrowed(&[]));
        Ok::<_, gimli::Error>(data)
    })
}

fn load_dwarf_sections_from_image_static(
    image: &BinaryImage,
    dwo_names: bool,
    endian: RunTimeEndian,
) -> Result<gimli::DwarfSections<R<'static>>, gimli::Error> {
    gimli::DwarfSections::load(|id| {
        Ok::<_, gimli::Error>(EndianSlice::new(
            section_data_by_dwarf_id(&image.sections, id, dwo_names)
                .map(leak_bytes)
                .unwrap_or(&[]),
            endian,
        ))
    })
}

fn section_data_by_dwarf_id<'a>(
    sections: &'a [Section],
    id: gimli::SectionId,
    dwo_names: bool,
) -> Option<&'a [u8]> {
    let wanted = if dwo_names {
        id.dwo_name().unwrap_or(id.name())
    } else {
        id.name()
    };
    sections
        .iter()
        .find(|section| section.name == wanted)
        .map(|section| section.data.as_slice())
}

fn load_split_dwarf_units(
    image: &BinaryImage,
    endian: RunTimeEndian,
) -> Result<Vec<SplitDwarfUnit>, gimli::Error> {
    let parent_sections = load_dwarf_sections_from_image_static(image, false, endian)?;
    let parent = parent_sections.borrow(|section| *section);
    let mut out = Vec::new();
    let mut units = parent.units();

    while let Some(header) = units.next()? {
        let skeleton = parent.unit(header)?;
        let Some(dwo_id) = skeleton.dwo_id else {
            continue;
        };

        let dwo_name = unit_dwo_name(&parent, &skeleton)?;
        if let Some(package) = load_embedded_dwp_unit(image, &parent, dwo_id, endian)? {
            out.push(package);
            continue;
        }

        let Some(name) = dwo_name else {
            continue;
        };

        if let Some(unit) = load_external_dwo_unit(image, &parent, &skeleton, &name, endian)? {
            out.push(unit);
        }
    }

    Ok(out)
}

fn load_embedded_dwp_unit(
    image: &BinaryImage,
    parent: &gimli::Dwarf<R<'static>>,
    dwo_id: gimli::DwoId,
    endian: RunTimeEndian,
) -> Result<Option<SplitDwarfUnit>, gimli::Error> {
    if section_data_by_dwarf_id(&image.sections, gimli::SectionId::DebugCuIndex, true).is_none() {
        return Ok(None);
    }

    let package = gimli::DwarfPackage::load(
        |id| {
            Ok::<_, gimli::Error>(EndianSlice::new(
                section_data_by_dwarf_id(&image.sections, id, true)
                    .map(leak_bytes)
                    .unwrap_or(&[]),
                endian,
            ))
        },
        EndianSlice::new(&[], endian),
    )?;

    Ok(package
        .find_cu(dwo_id, parent)?
        .map(|dwarf| SplitDwarfUnit {
            dwarf,
            display_name: format!("<embedded .dwp:{:#x}>", dwo_id.0),
        }))
}

fn load_external_dwo_unit(
    image: &BinaryImage,
    parent: &gimli::Dwarf<R<'static>>,
    skeleton: &gimli::Unit<R<'static>>,
    dwo_name: &str,
    endian: RunTimeEndian,
) -> Result<Option<SplitDwarfUnit>, gimli::Error> {
    let Some(bytes) = resolve_split_dwarf_bytes(image, skeleton, dwo_name) else {
        return Ok(None);
    };

    let file = match object::File::parse(bytes) {
        Ok(file) => file,
        Err(_) => return Ok(None),
    };

    if file.section_by_name(".debug_cu_index").is_some() {
        let package = gimli::DwarfPackage::load(
            |id| Ok::<_, gimli::Error>(object_dwarf_section_static(&file, id, true, endian)),
            EndianSlice::new(&[], endian),
        )?;
        return Ok(package
            .find_cu(skeleton.dwo_id.expect("checked by caller"), parent)?
            .map(|dwarf| SplitDwarfUnit {
                dwarf,
                display_name: dwo_name.to_owned(),
            }));
    }

    let sections = gimli::DwarfSections::load(|id| {
        Ok::<_, gimli::Error>(object_dwarf_section_static(&file, id, true, endian))
    })?;
    let mut dwo = sections.borrow(|section| *section);
    dwo.make_dwo(parent);
    dwo.file_type = DwarfFileType::Dwo;

    if dwo.units().next()?.is_none() {
        return Ok(None);
    }

    Ok(Some(SplitDwarfUnit {
        dwarf: dwo,
        display_name: dwo_name.to_owned(),
    }))
}

fn object_dwarf_section_static(
    file: &object::File<'_>,
    id: gimli::SectionId,
    dwo_names: bool,
    endian: RunTimeEndian,
) -> R<'static> {
    let name = if dwo_names {
        id.dwo_name().unwrap_or(id.name())
    } else {
        id.name()
    };
    let bytes = file
        .section_by_name(name)
        .and_then(|section| section.uncompressed_data().ok())
        .map(|data| leak_bytes(data.as_ref()))
        .unwrap_or(&[]);
    EndianSlice::new(bytes, endian)
}

fn resolve_split_dwarf_bytes(
    image: &BinaryImage,
    skeleton: &gimli::Unit<R<'_>>,
    dwo_name: &str,
) -> Option<&'static [u8]> {
    let mut candidates = Vec::new();
    let dwo_path = PathBuf::from(dwo_name);
    if dwo_path.is_absolute() {
        candidates.push(dwo_path);
    } else {
        if let Some(comp_dir) = unit_comp_dir(skeleton) {
            candidates.push(Path::new(&comp_dir).join(dwo_name));
        }
        candidates.push(PathBuf::from(dwo_name));
    }

    for candidate in candidates {
        if let Ok(bytes) = std::fs::read(&candidate) {
            return Some(leak_bytes(&bytes));
        }
    }

    for section in &image.sections {
        if section.name == format!(".debug_dwo/{dwo_name}") || section.name == dwo_name {
            return Some(leak_bytes(&section.data));
        }
    }

    None
}

fn leak_bytes(bytes: &[u8]) -> &'static [u8] {
    if bytes.is_empty() {
        &[]
    } else {
        Box::leak(bytes.to_vec().into_boxed_slice())
    }
}

fn unit_dwo_name(
    dwarf: &gimli::Dwarf<R<'_>>,
    unit: &gimli::Unit<R<'_>>,
) -> Result<Option<String>, gimli::Error> {
    match unit.dwo_name()? {
        Some(attr) => dwarf
            .attr_string(unit, attr)
            .map(|s| Some(s.to_string_lossy().into_owned())),
        None => Ok(None),
    }
}

fn unit_comp_dir(unit: &gimli::Unit<R<'_>>) -> Option<String> {
    unit.comp_dir
        .as_ref()
        .map(|dir| dir.to_string_lossy().into_owned())
}

fn merge_functions(
    base: &mut BTreeMap<u64, FunctionDebugInfo>,
    split: BTreeMap<u64, FunctionDebugInfo>,
) {
    for (addr, info) in split {
        if addr != 0 {
            base.insert(addr, info);
        }
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

        let high_pc = match entry.attr_value(DW_AT_high_pc) {
            Some(AttributeValue::Addr(addr)) => Some(addr),
            Some(AttributeValue::Udata(size)) => Some(low_pc + size),
            _ => None,
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

    let fields = extract_members(dwarf, unit, node)?;

    Ok(Some(StructType { name, size, fields }))
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

    let members = extract_members(dwarf, unit, node)?;

    Ok(Some(UnionType {
        name,
        size,
        members,
    }))
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
            let frame_offset = entry
                .attr_value(DW_AT_location)
                .and_then(decode_fbreg_offset);
            locals.push(LocalVariable {
                name,
                type_name,
                frame_offset,
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
    } else {
        attr_string(dwarf, unit, type_die, DW_AT_name)
    }
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
    fn follows_split_dwarf_dwo_file() {
        let gcc = match std::process::Command::new("gcc").arg("--version").output() {
            Ok(output) if output.status.success() => "gcc",
            _ => return,
        };
        let tmp = tempfile::tempdir().expect("tempdir");
        let src = tmp.path().join("split.c");
        std::fs::write(
            &src,
            "int add_split(int a, int b) { return a + b; }\nint main(void) { return add_split(1, 2); }\n",
        )
        .expect("write source");
        let exe = tmp.path().join("split");
        let status = std::process::Command::new(gcc)
            .args(["-g", "-gsplit-dwarf"])
            .arg(&src)
            .arg("-o")
            .arg(&exe)
            .status()
            .expect("run gcc");
        if !status.success() {
            return;
        }

        let data = std::fs::read(&exe).expect("read split dwarf exe");
        let img = ElfLoader::load(&data).expect("load split dwarf exe");
        let info = import_dwarf(&img).expect("parse split dwarf");
        let names: Vec<&str> = info
            .functions
            .values()
            .map(|func| func.name.as_str())
            .collect();

        assert!(
            !info.split_dwarf_files.is_empty(),
            "expected split-DWARF side file to be followed"
        );
        assert!(
            names.contains(&"add_split"),
            "split .dwo should contribute add_split, got {names:?}"
        );
        assert!(
            names.contains(&"main"),
            "split .dwo should contribute main: {names:?}"
        );
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
    }
}
