//! GNU Fortran reference arguments retain their entry-time address storage.

use std::rc::Rc;

use unlace_base::types::uint4;
use unlace_decomp::dtype::{Datatype, TypeFactory};

use super::{DieSnap, Reader, read_sleb128};

pub(super) fn is_fortran(language: Option<gimli::DwLang>) -> bool {
    matches!(
        language,
        Some(
            gimli::DW_LANG_Fortran77
                | gimli::DW_LANG_Fortran90
                | gimli::DW_LANG_Fortran95
                | gimli::DW_LANG_Fortran03
                | gimli::DW_LANG_Fortran08
                | gimli::DW_LANG_Fortran18
        )
    )
}

pub(super) fn indirect_location(loc: &gimli::AttributeValue<Reader<'_>>) -> bool {
    let bytes = match loc {
        gimli::AttributeValue::Exprloc(expr) => expr.0.slice(),
        gimli::AttributeValue::Block(block) => block.slice(),
        _ => return false,
    };
    if bytes.first() != Some(&gimli::DW_OP_fbreg.0) {
        return false;
    }
    let Some((_, consumed)) = read_sleb128(&bytes[1..]) else {
        return false;
    };
    bytes.get(1 + consumed..) == Some(&[gimli::DW_OP_deref.0][..])
}

/// By-value argument sizes an ABI passes through a hidden address in an argument register.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub(super) enum HiddenValues {
    #[default]
    Never,
    Above(i32),
    UnlessRegisterSized,
}

impl HiddenValues {
    fn may_hide(self, size: i32) -> bool {
        match self {
            HiddenValues::Never => false,
            HiddenValues::Above(limit) => size > limit,
            HiddenValues::UnlessRegisterSized => !matches!(size, 1 | 2 | 4 | 8),
        }
    }
}

/// Incoming integer argument registers (DWARF numbers) of an image's ABI.
#[derive(Clone, Copy, Default)]
pub(super) struct ArgumentAbi {
    pub(super) registers: &'static [u16],
    pub(super) hidden: HiddenValues,
}

pub(super) fn argument_abi(
    format: object::BinaryFormat,
    architecture: object::Architecture,
) -> ArgumentAbi {
    use object::{Architecture::*, BinaryFormat::*};
    const RISCV: &[u16] = &[10, 11, 12, 13, 14, 15, 16, 17];
    let (registers, hidden): (&'static [u16], _) = match (format, architecture) {
        (Pe | Coff, X86_64) => (&[2, 1, 8, 9], HiddenValues::UnlessRegisterSized),
        (Elf | MachO, X86_64) => (&[5, 4, 1, 2, 8, 9], HiddenValues::Never),
        (Elf, Arm) => (&[0, 1, 2, 3], HiddenValues::Never),
        (Elf, Aarch64) => (&[0, 1, 2, 3, 4, 5, 6, 7], HiddenValues::Above(16)),
        (Elf, Riscv32) => (RISCV, HiddenValues::Above(8)),
        (Elf, Riscv64) => (RISCV, HiddenValues::Above(16)),
        _ => (&[], HiddenValues::Never),
    };
    ArgumentAbi { registers, hidden }
}

pub(super) fn location_at_entry<'a>(
    dwarf: &gimli::Dwarf<Reader<'a>>,
    unit: &gimli::Unit<Reader<'a>>,
    location: &gimli::AttributeValue<Reader<'a>>,
    entry: Option<u64>,
) -> Option<gimli::Expression<Reader<'a>>> {
    match location {
        gimli::AttributeValue::Exprloc(expression) => return Some(expression.clone()),
        gimli::AttributeValue::Block(bytes) => return Some(gimli::Expression(bytes.clone())),
        _ => {}
    }
    let entry = entry?;
    let mut locations = dwarf.attr_locations(unit, location.clone()).ok()??;
    let mut found = None;
    for _ in 0..4096 {
        let Some(location) = locations.next().ok()? else {
            return found;
        };
        if location.range.begin <= entry && entry < location.range.end {
            if found.is_some() {
                return None;
            }
            found = Some(location.data);
        }
    }
    None
}

pub(super) fn memory_argument_register(
    expression: &gimli::Expression<Reader<'_>>,
    encoding: gimli::Encoding,
    argument_registers: &[u16],
) -> bool {
    let mut operations = expression.operations(encoding);
    matches!(operations.next(), Ok(Some(gimli::Operation::RegisterOffset { register, offset: 0, base_type }))
        if base_type.0 == 0 && argument_registers.contains(&register.0))
        && matches!(operations.next(), Ok(None))
}

pub(super) fn parameter_type(
    parameter: &DieSnap,
    value: Rc<Datatype>,
    types: &dyn TypeFactory,
    word_size: uint4,
) -> Option<Rc<Datatype>> {
    use unlace_decomp::dtype::type_metatype::{TYPE_CODE, TYPE_VOID};
    let register_reference = parameter.register_indirect_parameter.is_some_and(|hidden| {
        value.get_size() > 0
            && !matches!(value.get_metatype(), TYPE_VOID | TYPE_CODE)
            && !hidden.may_hide(value.get_size())
    });
    if parameter.indirect_parameter || register_reference {
        types
            .get_type_pointer(types.get_size_of_pointer(), value, word_size)
            .ok()
    } else {
        Some(value)
    }
}

#[cfg(test)]
mod tests;
