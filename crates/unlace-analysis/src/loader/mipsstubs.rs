//! Loader-proven lazy-binding transfers preserve the caller's return in t7.
use object::{Object, ObjectSection, SectionFlags};

/// Bytes of the one stub form validated: `lw/ld t9,-0x7ff0(gp)`, `move t7,ra`,
/// `jalr t9` and the dynamic-symbol index in the delay slot.
const STUB_BYTES: u64 = 16;

/// Offset of the resolver call (`jalr t9`) within a validated stub.
const RESOLVER_CALL: u64 = 8;

/// Whether `bytes` begin with a complete lazy-binding stub for dynamic symbol
/// `index`, in the image's byte order.
fn is_resolver_stub(bytes: &[u8], little: bool, index: u64) -> bool {
    let Some(raw) = bytes.get(..STUB_BYTES as usize) else {
        return false;
    };
    let words: Vec<u32> = super::mipsabi::words(raw, little).collect();
    matches!(words[0], 0x8f998010 | 0xdf998010)
        && matches!(words[1], 0x03e07825 | 0x03e0782d | 0x03e07821)
        && words[2] == 0x0320f809
        && matches!(words[3] & 0xffff0000, 0x24180000 | 0x64180000 | 0x34180000)
        && u64::from(words[3] & 0xffff) == index
        && (words[3] >> 26 == 13 || index < 0x8000)
}

/// The MIPS ELF linkage facts a loader proves once per image.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct MipsLinkage {
    /// The ELF32 class: its pointers sign-extend in a 64-bit register.
    pub elf32: bool,
    pub little: bool,
    /// Resolver call site and end of each complete, symbol/GOT-backed
    /// lazy-binding stub.
    pub transfers: Vec<(u64, u64)>,
}

/// The class and byte order of a MIPS ELF, with no stubs: what a relocatable
/// object, which has none, contributes. `None` off MIPS ELF.
pub fn class_linkage(file: &object::File<'_>) -> Option<MipsLinkage> {
    (file.format() == object::BinaryFormat::Elf && super::mipsabi::is_mips(file.architecture()))
        .then(|| MipsLinkage {
            elf32: !file.is_64(),
            little: file.is_little_endian(),
            ..MipsLinkage::default()
        })
}

/// The linkage of a linked MIPS ELF; `None` off MIPS ELF.
pub fn linkage(file: &object::File<'_>) -> Option<MipsLinkage> {
    let mut linkage = class_linkage(file)?;
    linkage.transfers = scan_transfers(file);
    Some(linkage)
}

/// Resolver instruction and end of each complete, symbol/GOT-backed import stub.
fn scan_transfers(file: &object::File<'_>) -> Vec<(u64, u64)> {
    let Some(section) = file.section_by_name(".MIPS.stubs") else {
        return Vec::new();
    };
    if !matches!(section.flags(), SectionFlags::Elf { sh_flags } if sh_flags & u64::from(object::elf::SHF_EXECINSTR) != 0)
    {
        return Vec::new();
    }
    let Ok(bytes) = section.data() else {
        return Vec::new();
    };
    super::elf_plt::mips_stub_identities(file)
        .into_iter()
        .filter_map(|(entry, index)| {
            if entry & 3 != 0 {
                return None;
            }
            let offset = usize::try_from(entry.checked_sub(section.address())?).ok()?;
            if !is_resolver_stub(bytes.get(offset..)?, file.is_little_endian(), index) {
                return None;
            }
            Some((
                entry.checked_add(RESOLVER_CALL)?,
                entry.checked_add(STUB_BYTES)?,
            ))
        })
        .collect()
}

#[cfg(test)]
mod tests;
