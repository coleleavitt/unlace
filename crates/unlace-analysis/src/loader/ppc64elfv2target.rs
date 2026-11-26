//! A PowerPC64 ELF whose `e_flags` declare ABI version 2 (ELFv2).
//!
//! - Big-endian (musl, `-mabi=elfv2`) takes the `elfv2` compiler spec: its frame header is
//!   32 bytes, not ELFv1's 48, so stack parameters start at SP+96.
//! - Little-endian is ELFv2 throughout, and the ELFv2 ABI requires a POWER8 processor, so it takes
//!   the Power ISA language `PowerPC:LE:64:A2ALT` (`popcntd`, `isel`, `ldbrx`, VSX, ...), whose
//!   default spec is the same ELFv2 `ppc_64_le.cspec`. A little-endian image that declares ELFv1
//!   keeps the generic language.
use object::{Architecture, FileFlags, Object};

const BE_ID: &str = "PowerPC:BE:64:default:elfv2";
const LE_ID: &str = "PowerPC:LE:64:A2ALT:default";

pub(crate) fn language_ids() -> impl Iterator<Item = String> {
    [BE_ID, LE_ID].into_iter().map(str::to_string)
}

pub(crate) fn language_id(file: &object::File<'_>) -> Option<String> {
    if file.format() != object::BinaryFormat::Elf || file.architecture() != Architecture::PowerPc64
    {
        return None;
    }
    let abi = match file.flags() {
        FileFlags::Elf { e_flags, .. } => e_flags & 3,
        _ => return None,
    };
    if file.is_little_endian() {
        (abi != 1).then(|| LE_ID.to_string())
    } else {
        (abi == 2).then(|| BE_ID.to_string())
    }
}

#[cfg(test)]
mod tests;
