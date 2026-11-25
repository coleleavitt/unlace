//! Synopsys ARC language selection. The `object` crate has no ARC architecture,
//! so the ELF machine is read from the header: `EM_ARC_COMPACT2` (ARC EM / HS)
//! takes the ARCv2 language of the image's byte order. ARCompact
//! (`EM_ARC_COMPACT`) has a different 16-bit encoding and no language yet.
use object::Object;
use object::read::elf::FileHeader;

const EM_ARC_COMPACT2: u16 = 195;

pub(crate) fn language_ids() -> impl Iterator<Item = String> {
    ["LE", "BE"].into_iter().map(id)
}

fn id(endian: &str) -> String {
    format!("ARC:{endian}:32:ARCv2:default")
}

pub(crate) fn language_id(file: &object::File<'_>) -> Option<String> {
    let object::File::Elf32(elf) = file else {
        return None;
    };
    (elf.elf_header().e_machine(elf.endian()) == EM_ARC_COMPACT2)
        .then(|| id(if file.is_little_endian() { "LE" } else { "BE" }))
}

#[cfg(test)]
mod tests;
