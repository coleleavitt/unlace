//! Bounded, explicit C scalar contracts for callwide's complete-image preflight.

use std::collections::{BTreeMap, BTreeSet};

use object::{Object, ObjectSection};

use unlace_base::types::uint4;
use unlace_decomp::architecture::Architecture;
use unlace_decomp::dtype::{Datatype, TypeFactory, type_metatype};
use unlace_decomp::fspec::PrototypePieces;

use super::{DieSnap, Reader, build_pieces, dwarfbyref, snapshot_unit_for_abi};

const MAX_BYTES: usize = 8 * 1024 * 1024;
const MAX_ABBREV_BYTES: usize = 128 * 1024;
const MAX_UNIT_BYTES: usize = 1024 * 1024;
const MAX_PARSE_BYTES: usize = 32 * 1024 * 1024;
const MAX_UNITS: usize = 256;
const MAX_RECORDS: usize = 16_384;
const MAX_ATTRIBUTES: usize = 262_144;
const MAX_NAME_BYTES: usize = 1024 * 1024;
const MAX_NAME: usize = 1024;
const MAX_DEPTH: isize = 64;
const MAX_FORMALS: usize = 32;
const MAX_TYPE_CHAIN: usize = 32;

type Names<'a> = BTreeMap<&'a str, (u64, &'a str)>;

fn names(entries: &[(u64, String, Vec<String>)]) -> Option<Names<'_>> {
    if entries.len() > MAX_RECORDS {
        return None;
    }
    let mut result = BTreeMap::new();
    let mut addresses = BTreeSet::new();
    let mut bytes = 0usize;
    let mut count = 0usize;
    for (address, name, aliases) in entries {
        if !addresses.insert(*address) {
            return None;
        }
        for alias in std::iter::once(name).chain(aliases) {
            count = count.checked_add(1)?;
            bytes = bytes.checked_add(alias.len())?;
            if count > MAX_RECORDS
                || bytes > MAX_NAME_BYTES
                || alias.is_empty()
                || alias.len() > MAX_NAME
            {
                return None;
            }
            if let Some((previous, _)) = result.insert(alias.as_str(), (*address, name.as_str())) {
                if previous != *address {
                    return None;
                }
            }
        }
    }
    Some(result)
}

/// Read only complete, unambiguous scalar contracts against established entries.
/// Definitions must match their low PC; declarations need one exact name/alias.
/// Unsupported contracts supply no fact. Invalid input or any exhausted budget
/// refuses the whole extraction. Ordinary DwarfPass recovery is unchanged.
pub fn declarations(
    file: &object::File<'_>,
    arch: &Architecture,
    entries: &[(u64, String, Vec<String>)],
) -> Option<Vec<(u64, PrototypePieces)>> {
    let names = names(entries)?;
    if names.is_empty() {
        return Some(Vec::new());
    }
    let mut total = 0usize;
    let sections = gimli::DwarfSections::load(|id| -> Result<Vec<u8>, ()> {
        let Some(section) = file.section_by_name(id.name()) else {
            return Ok(Vec::new());
        };
        let data = section.compressed_data().map_err(|_| ())?;
        if data.format != object::CompressionFormat::None {
            return Err(());
        }
        total = total.checked_add(data.data.len()).ok_or(())?;
        if total > MAX_BYTES
            || (id == gimli::SectionId::DebugAbbrev && data.data.len() > MAX_ABBREV_BYTES)
        {
            return Err(());
        }
        Ok(data.data.to_vec())
    })
    .ok()?;
    let endian = if file.is_little_endian() {
        gimli::RunTimeEndian::Little
    } else {
        gimli::RunTimeEndian::Big
    };
    let dwarf = sections.borrow(|bytes| gimli::EndianSlice::new(bytes, endian));
    let (_, word_size) = arch.data_org();
    collect(
        &dwarf,
        &names,
        arch.types(),
        word_size,
        dwarfbyref::argument_abi(file.format(), file.architecture()),
        total,
    )
}

struct Selected {
    offset: usize,
    entry: u64,
    name: String,
}

#[derive(Default)]
struct UnitPlan {
    records: usize,
    c_language: bool,
    selected: Vec<Selected>,
    unsupported: BTreeSet<usize>,
}

fn unsupported(entry: &gimli::DebuggingInformationEntry<Reader<'_>>) -> bool {
    if entry
        .attr_value(gimli::DW_AT_calling_convention)
        .is_some_and(|value| {
            !matches!(
                value,
                gimli::AttributeValue::CallingConvention(gimli::DW_CC_normal)
            )
        })
    {
        return true;
    }
    if [
        gimli::DW_AT_specification,
        gimli::DW_AT_abstract_origin,
        gimli::DW_AT_object_pointer,
        gimli::DW_AT_linkage_name,
        gimli::DW_AT_trampoline,
        gimli::DW_AT_virtuality,
        gimli::DW_AT_inline,
        gimli::DW_AT_ranges,
        gimli::DW_AT_default_value,
        gimli::DW_AT_address_class,
        gimli::DW_AT_endianity,
        gimli::DW_AT_alignment,
        gimli::DW_AT_bit_size,
        gimli::DW_AT_bit_offset,
        gimli::DW_AT_data_bit_offset,
    ]
    .iter()
    .any(|attribute| entry.attr_value(*attribute).is_some())
    {
        return true;
    }
    if matches!(
        entry.attr_value(gimli::DW_AT_artificial),
        Some(gimli::AttributeValue::Flag(true))
    ) {
        return true;
    }
    entry
        .attr_value(gimli::DW_AT_type)
        .is_some_and(|value| !matches!(value, gimli::AttributeValue::UnitRef(_)))
}

fn prewalk(
    dwarf: &gimli::Dwarf<Reader<'_>>,
    names: &Names<'_>,
    section_bytes: usize,
) -> Option<Vec<UnitPlan>> {
    let mut units = dwarf.units();
    let mut plans = Vec::new();
    let mut seen_entries = BTreeSet::new();
    let mut records = 0usize;
    let mut attributes = 0usize;
    let mut name_bytes = 0usize;
    while let Some(header) = units.next().ok()? {
        if plans.len() >= MAX_UNITS
            || header.unit_length() > MAX_UNIT_BYTES
            || section_bytes.checked_mul(plans.len() + 1)? > MAX_PARSE_BYTES
        {
            return None;
        }
        let unit = dwarf.unit(header).ok()?;
        let mut plan = UnitPlan::default();
        let mut cursor = unit.entries();
        while let Some(entry) = cursor.next_dfs().ok()? {
            records += 1;
            plan.records += 1;
            attributes = attributes.checked_add(entry.attrs().len())?;
            if records > MAX_RECORDS
                || entry.attrs().len() > 64
                || attributes > MAX_ATTRIBUTES
                || !(0..=MAX_DEPTH).contains(&entry.depth())
            {
                return None;
            }
            if plan.records == 1 {
                if entry.depth() != 0 || entry.tag() != gimli::DW_TAG_compile_unit {
                    return None;
                }
                plan.c_language = matches!(
                    entry.attr_value(gimli::DW_AT_language),
                    Some(gimli::AttributeValue::Language(
                        gimli::DW_LANG_C
                            | gimli::DW_LANG_C89
                            | gimli::DW_LANG_C99
                            | gimli::DW_LANG_C11
                    ))
                );
            } else if entry.depth() == 0 {
                return None;
            }
            let mut attribute_names = BTreeSet::new();
            for attribute in entry.attrs() {
                if !attribute_names.insert(attribute.name().0) {
                    return None;
                }
            }
            if unsupported(entry) {
                plan.unsupported.insert(entry.offset().0);
            }
            if matches!(
                entry.tag(),
                gimli::DW_TAG_subprogram | gimli::DW_TAG_formal_parameter
            ) {
                for attribute in [gimli::DW_AT_specification, gimli::DW_AT_abstract_origin] {
                    if let Some(value) = entry.attr_value(attribute) {
                        let gimli::AttributeValue::UnitRef(offset) = value else {
                            return None;
                        };
                        plan.unsupported.insert(offset.0);
                    }
                }
            }
            let Some(value) = entry.attr_value(gimli::DW_AT_name) else {
                continue;
            };
            let value = dwarf.attr_string(&unit, value).ok()?;
            let name = std::str::from_utf8(value.slice()).ok()?;
            name_bytes = name_bytes.checked_add(name.len())?;
            if name.len() > MAX_NAME || name_bytes > MAX_NAME_BYTES {
                return None;
            }
            if entry.tag() != gimli::DW_TAG_subprogram {
                continue;
            }
            let Some(&(address, canonical)) = names.get(name) else {
                continue;
            };
            if !seen_entries.insert(address) {
                return None;
            }
            if let Some(value) = entry.attr_value(gimli::DW_AT_low_pc) {
                if dwarf.attr_address(&unit, value).ok()?? != address {
                    return None;
                }
            }
            plan.selected.push(Selected {
                offset: entry.offset().0,
                entry: address,
                name: canonical.to_owned(),
            });
        }
        if plan.records == 0 {
            return None;
        }
        plans.push(plan);
    }
    Some(plans)
}

#[derive(Default)]
struct TypeBudget {
    steps: usize,
    exhausted: bool,
}

#[derive(Clone, Copy)]
struct Scalar {
    size: i32,
    meta: type_metatype,
}

fn scalar(
    mut offset: usize,
    dies: &BTreeMap<usize, DieSnap>,
    unsupported: &BTreeSet<usize>,
    budget: &mut TypeBudget,
) -> Option<Scalar> {
    let mut seen = BTreeSet::new();
    for _ in 0..MAX_TYPE_CHAIN {
        budget.steps += 1;
        if budget.steps > MAX_RECORDS {
            budget.exhausted = true;
            return None;
        }
        if unsupported.contains(&offset) || !seen.insert(offset) {
            return None;
        }
        let die = dies.get(&offset)?;
        match die.tag {
            gimli::DW_TAG_typedef
            | gimli::DW_TAG_const_type
            | gimli::DW_TAG_volatile_type
            | gimli::DW_TAG_restrict_type => {
                offset = die.type_ref?;
            }
            gimli::DW_TAG_base_type => {
                let size = i32::try_from(die.byte_size?).ok()?;
                if !matches!(size, 1 | 2 | 4 | 8) {
                    return None;
                }
                let meta = match die.encoding? {
                    gimli::DW_ATE_signed | gimli::DW_ATE_signed_char => type_metatype::TYPE_INT,
                    gimli::DW_ATE_unsigned | gimli::DW_ATE_unsigned_char | gimli::DW_ATE_UTF => {
                        type_metatype::TYPE_UINT
                    }
                    gimli::DW_ATE_boolean if size == 1 => type_metatype::TYPE_BOOL,
                    _ => return None,
                };
                return Some(Scalar { size, meta });
            }
            _ => return None,
        }
    }
    budget.exhausted = true;
    None
}

fn matches_scalar(actual: &Datatype, expected: Option<Scalar>) -> bool {
    match expected {
        Some(expected) => {
            actual.get_size() == expected.size && actual.get_metatype() == expected.meta
        }
        None => actual.get_size() == 0 && actual.get_metatype() == type_metatype::TYPE_VOID,
    }
}

fn pieces(
    selected: &Selected,
    plan: &UnitPlan,
    dies: &BTreeMap<usize, DieSnap>,
    types: &dyn TypeFactory,
    word_size: uint4,
    budget: &mut TypeBudget,
) -> Option<PrototypePieces> {
    let sub = dies.get(&selected.offset)?;
    if !plan.c_language
        || !sub.prototyped
        || sub.depth != 1
        || plan.unsupported.contains(&selected.offset)
        || (sub.declaration && sub.low_pc.is_some())
        || (!sub.declaration && sub.low_pc.is_none())
    {
        return None;
    }
    let expected_output = match sub.type_ref {
        Some(offset) => Some(scalar(offset, dies, &plan.unsupported, budget)?),
        None => None,
    };
    let mut expected_inputs = Vec::new();
    for offset in &sub.children {
        let child = dies.get(offset)?;
        if child.tag == gimli::DW_TAG_unspecified_parameters {
            return None;
        }
        if child.tag != gimli::DW_TAG_formal_parameter {
            continue;
        }
        if expected_inputs.len() >= MAX_FORMALS {
            budget.exhausted = true;
            return None;
        }
        if plan.unsupported.contains(offset)
            || (sub.declaration && child.has_location)
            || child.indirect_parameter
            || child.register_indirect_parameter.is_some()
        {
            return None;
        }
        expected_inputs.push(scalar(child.type_ref?, dies, &plan.unsupported, budget)?);
    }
    let pieces = build_pieces(&selected.name, sub, dies, types, word_size)?;
    if !matches_scalar(pieces.outtype.as_ref()?, expected_output)
        || pieces.intypes.len() != expected_inputs.len()
        || !pieces
            .intypes
            .iter()
            .zip(expected_inputs)
            .all(|(actual, expected)| matches_scalar(actual, Some(expected)))
    {
        return None;
    }
    Some(pieces)
}

fn collect(
    dwarf: &gimli::Dwarf<Reader<'_>>,
    names: &Names<'_>,
    types: &dyn TypeFactory,
    word_size: uint4,
    abi: dwarfbyref::ArgumentAbi,
    section_bytes: usize,
) -> Option<Vec<(u64, PrototypePieces)>> {
    let plans = prewalk(dwarf, names, section_bytes)?;
    let mut units = dwarf.units();
    let mut result = Vec::new();
    let mut budget = TypeBudget::default();
    for plan in plans {
        let header = units.next().ok()??;
        if plan.selected.is_empty() || !plan.c_language {
            continue;
        }
        let unit = dwarf.unit(header).ok()?;
        let dies = snapshot_unit_for_abi(dwarf, &unit, abi);
        if dies.len() != plan.records {
            return None;
        }
        for selected in &plan.selected {
            if let Some(pieces) = pieces(selected, &plan, &dies, types, word_size, &mut budget) {
                result.push((selected.entry, pieces));
            }
            if budget.exhausted {
                return None;
            }
        }
    }
    result.sort_by_key(|(entry, _)| *entry);
    Some(result)
}

#[cfg(test)]
mod tests;
