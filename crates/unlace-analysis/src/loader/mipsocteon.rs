//! Octeon ELF identity from standard machine, ABI and floating-point evidence.
use super::mipsabi::{AbiFlags, abi_flags, fp_abi};
use object::{Architecture, BinaryFormat, FileFlags, Object};
use unlace_decomp::octeonid::language_id as id;

const MACH_MASK: u32 = 0x00ff_0000;
const ABI2: u32 = 0x20;
const ABI_MASK: u32 = 0xf000;

fn machine_variant(machine: u32) -> Option<&'static str> {
    match machine {
        0x008b_0000 => Some("octeon"),
        0x008d_0000 => Some("octeon2"),
        0x008e_0000 => Some("octeon3"),
        _ => None,
    }
}

fn extension_variant(extension: u32) -> Option<&'static str> {
    match extension {
        5 => Some("octeon"),
        3 => Some("octeonplus"),
        2 => Some("octeon2"),
        19 => Some("octeon3"),
        _ => None,
    }
}

/// `None` leaves non-Octeon selection alone. Identified but unqualified or
/// contradictory profiles require an explicit target, never an inferred ABI.
pub fn language_id(file: &object::File<'_>) -> Result<Option<String>, &'static str> {
    if file.format() != BinaryFormat::Elf
        || !matches!(
            file.architecture(),
            Architecture::Mips64 | Architecture::Mips64_N32
        )
    {
        return Ok(None);
    }
    let FileFlags::Elf { e_flags, .. } = file.flags() else {
        return Ok(None);
    };
    let machine = e_flags & MACH_MASK;
    let from_machine = machine_variant(machine);
    let record = match abi_flags(file) {
        Ok(record) => record,
        Err(error) if from_machine.is_some() => return Err(error),
        Err(_) => return Ok(None),
    };
    let extension = record
        .map(|a| a.extension(file.is_little_endian()))
        .unwrap_or(0);
    let from_extension = extension_variant(extension);
    if from_machine.is_none() && from_extension.is_none() {
        return Ok(None);
    }
    let variant = match (from_machine, from_extension) {
        (Some("octeon"), Some("octeonplus")) => "octeonplus",
        (Some(a), Some(b)) if a == b => a,
        (Some(a), None) if extension == 0 => a,
        (None, Some(b)) if machine == 0 => b,
        _ => return Err("conflicting Octeon machine and ISA-extension declarations"),
    };
    if file.is_little_endian() {
        return Err("little-endian Octeon requires an explicit target");
    }
    let n32 = !file.is_64();
    if e_flags & ABI_MASK != 0 || (e_flags & ABI2 != 0) != n32 {
        return Err("Octeon ELF class and N32/N64 ABI flags disagree or name an unsupported ABI");
    }
    if e_flags & 0xf000_0000 != 0x8000_0000 {
        return Err("Octeon automatic selection requires MIPS64r2 ISA evidence");
    }
    if e_flags & 0x0f00_0000 != 0 {
        return Err("Octeon image declares an unqualified MIPS ISA extension");
    }
    let hard = match fp_abi(file, record)? {
        Some(1) => true,
        Some(3) => false,
        _ => return Err("Octeon floating-point ABI is missing or unsupported; specify a target"),
    };
    if let Some(AbiFlags(raw)) = record {
        let revision = raw[3] == 2 || (variant == "octeon3" && raw[3] == 5);
        if raw[2] != 64
            || !revision
            || raw[4] != 2
            || raw[5] != if hard { 2 } else { 0 }
            || raw[6] != 0
        {
            return Err(
                "Octeon ABI-flags ISA or register widths disagree with its calling convention",
            );
        }
        let ases = u32::from_be_bytes(raw[12..16].try_into().unwrap());
        let generation_ases = if variant == "octeon3" { 0x100 } else { 0 };
        if ases & !generation_ases != 0
            || u32::from_be_bytes(raw[16..20].try_into().unwrap()) & !1 != 0
            || raw[20..24] != [0; 4]
        {
            return Err("Octeon ABI-flags declare unqualified ISA extensions or flags");
        }
    }
    if hard && variant != "octeon3" {
        return Err("hard-float automatic selection is qualified only for Octeon III");
    }
    Ok(Some(id(variant, n32, hard)))
}

pub fn language_ids() -> Vec<String> {
    let mut ids = Vec::new();
    for variant in unlace_decomp::octeonid::VARIANTS {
        for n32 in [false, true] {
            ids.push(id(variant, n32, false));
            if variant == "octeon3" {
                ids.push(id(variant, n32, true));
            }
        }
    }
    ids
}

#[cfg(test)]
mod tests;
