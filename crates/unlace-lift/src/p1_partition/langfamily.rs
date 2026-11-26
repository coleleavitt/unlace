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

use std::borrow::Cow;
use std::cell::RefCell;
use std::sync::Arc;

use crate::sleigh_arch::{LanguageDatabase, LanguageDescription, ldefs_registry};

/// What FID compares between two languages.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LanguageFamily {
    pub processor: String,
    pub size: i32,
    pub instruction_big_endian: bool,
}

impl LanguageFamily {
    fn of(d: &LanguageDescription) -> LanguageFamily {
        LanguageFamily {
            processor: d.get_processor().to_string(),
            size: d.get_size(),
            instruction_big_endian: d.is_instruction_big_endian(),
        }
    }
}

/// Every language `db` has read, by id, in `.ldefs` order.
pub fn families(db: &LanguageDatabase) -> Arc<[(String, LanguageFamily)]> {
    db.descriptions()
        .iter()
        .map(|d| (d.get_id().to_string(), LanguageFamily::of(d)))
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

/// (unlace) The `.ldefs` languages a bootstrap can see, by id: what decides whether a FID
/// database built for another language applies here; an
/// [`ArchTable`](crate::archstate::ArchTable) on the architecture, empty for one that was not
/// bootstrapped from `.ldefs`.
pub enum LanguageFamilies {
    /// Every language of a database that has read all its `.ldefs`.
    Table(Arc<[(String, LanguageFamily)]>),
    /// A database that reads `.ldefs` one language at a time
    /// ([`LanguageDatabase::load_language`]): the bootstrap read only the loaded language's
    /// file, and another language's is read when FID asks for it.
    Database(RefCell<LanguageDatabase>),
}

impl Default for LanguageFamilies {
    fn default() -> Self {
        LanguageFamilies::Table(Arc::from(Vec::new()))
    }
}

crate::unlace_arch_table!(LanguageFamilies);

impl LanguageFamilies {
    /// The languages `db` can name: all of them when it has read every `.ldefs`, else the
    /// database itself, kept to read the rest on demand.
    pub fn new(db: Cow<'_, LanguageDatabase>) -> LanguageFamilies {
        if db.is_complete() {
            LanguageFamilies::Table(families(&db))
        } else {
            LanguageFamilies::Database(RefCell::new(db.into_owned()))
        }
    }

    /// The `.ldefs` facts of language `id`, `None` when no `.ldefs` defines it.
    pub fn get(&self, id: &str) -> Option<LanguageFamily> {
        match self {
            LanguageFamilies::Table(all) => all
                .iter()
                .find(|(known, _)| known == id)
                .map(|(_, family)| family.clone()),
            LanguageFamilies::Database(db) => {
                let mut db = db.borrow_mut();
                db.load_language(id, &ldefs_registry()).ok()?;
                db.descriptions()
                    .iter()
                    .find(|d| d.get_id() == id)
                    .map(LanguageFamily::of)
            }
        }
    }

    fn is_empty(&self) -> bool {
        match self {
            LanguageFamilies::Table(all) => all.is_empty(),
            LanguageFamilies::Database(_) => false,
        }
    }
}

/// (unlace) Record the `.ldefs` languages the bootstrap can see.
pub fn set_language_families(
    arch: &mut crate::architecture::Architecture,
    families: LanguageFamilies,
) {
    *arch.unlace_tables.get_mut::<LanguageFamilies>() = families;
}

/// (unlace) The `.ldefs` facts for language `id`, `None` when no `.ldefs` the bootstrap can see
/// defines it.
pub fn language_family(
    arch: &crate::architecture::Architecture,
    id: &str,
) -> Option<LanguageFamily> {
    arch.unlace_tables.get::<LanguageFamilies>().get(id)
}

/// (unlace) Whether the bootstrap recorded any `.ldefs` languages.
pub fn has_language_families(arch: &crate::architecture::Architecture) -> bool {
    !arch.unlace_tables.get::<LanguageFamilies>().is_empty()
}

#[cfg(test)]
mod tests;
