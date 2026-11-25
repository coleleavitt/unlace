//! (unlace) A language's processor, address size and instruction byte order, as
//! its `.ldefs` entry states them.
//!
//! Ghidra's FID decides whether a fingerprint database built for one language
//! applies to a program in another by exactly these three facts
//! (`FidFile.ProcessorSizeComparator`): the variant and the compiler spec do not
//! take part. They come from the `.ldefs` attributes, not from the language id's
//! fields, which differ for some languages (`MIPS:BE:64:64-32addr` has a 32-bit
//! address size; `ARM:LEBE:32:v8LEInstruction` has little-endian instructions;
//! `z80` and `z8401x` are both processor `Z80`).

use std::sync::Arc;

use crate::sleigh_arch::LanguageDatabase;

/// What FID compares between two languages.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LanguageFamily {
    pub processor: String,
    pub size: i32,
    pub instruction_big_endian: bool,
}

/// Every language in `db`, by id, in `.ldefs` order.
pub fn families(db: &LanguageDatabase) -> Arc<[(String, LanguageFamily)]> {
    db.descriptions()
        .iter()
        .map(|d| {
            (
                d.get_id().to_string(),
                LanguageFamily {
                    processor: d.get_processor().to_string(),
                    size: d.get_size(),
                    instruction_big_endian: d.is_instruction_big_endian(),
                },
            )
        })
        .collect()
}

/// The language id part of an architecture id (`x86:LE:64:default:gcc` ->
/// `x86:LE:64:default`): its first four `:`-separated fields.
pub fn language_id(archid: &str) -> &str {
    match archid.match_indices(':').nth(3) {
        Some((at, _)) => &archid[..at],
        None => archid,
    }
}

/// (unlace) Every language the bootstrap's `.ldefs` scan found, by id: what decides whether a FID
/// database built for another language applies here; an
/// [`ArchTable`](crate::archstate::ArchTable) on the architecture, empty for one that was not
/// bootstrapped from `.ldefs`.
pub struct LanguageFamilies(pub std::sync::Arc<[(String, LanguageFamily)]>);

impl Default for LanguageFamilies {
    fn default() -> Self {
        LanguageFamilies(std::sync::Arc::from(Vec::new()))
    }
}

crate::unlace_arch_table!(LanguageFamilies);

/// (unlace) Record the `.ldefs` languages the bootstrap scanned.
pub fn set_language_families(
    arch: &mut crate::architecture::Architecture,
    families: std::sync::Arc<[(String, LanguageFamily)]>,
) {
    arch.unlace_tables.get_mut::<LanguageFamilies>().0 = families;
}

/// (unlace) The scanned `.ldefs` facts for language `id`, `None` when no scanned `.ldefs`
/// defines it.
pub fn language_family<'a>(
    arch: &'a crate::architecture::Architecture,
    id: &str,
) -> Option<&'a LanguageFamily> {
    arch.unlace_tables
        .get::<LanguageFamilies>()
        .0
        .iter()
        .find(|(known, _)| known == id)
        .map(|(_, family)| family)
}

/// (unlace) Whether the bootstrap recorded any `.ldefs` languages.
pub fn has_language_families(arch: &crate::architecture::Architecture) -> bool {
    !arch.unlace_tables.get::<LanguageFamilies>().0.is_empty()
}

#[cfg(test)]
mod tests;
