//! Binary image types produced by loaders.

use std::collections::BTreeMap;
use std::fmt;

pub use unlace_ir::ArchId;

/// Byte order of the loaded binary.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum Endian {
    Little,
    Big,
}

impl fmt::Display for Endian {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Little => f.write_str("little"),
            Self::Big => f.write_str("big"),
        }
    }
}

/// Flags describing section permissions / attributes.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SectionFlags {
    bits: u8,
}

impl SectionFlags {
    pub const READ: Self = Self { bits: 0b001 };
    pub const WRITE: Self = Self { bits: 0b010 };
    pub const EXEC: Self = Self { bits: 0b100 };

    pub const fn empty() -> Self {
        Self { bits: 0 }
    }

    pub const fn from_bits(bits: u8) -> Self {
        Self { bits: bits & 0b111 }
    }

    pub const fn bits(self) -> u8 {
        self.bits
    }

    pub const fn contains(self, other: Self) -> bool {
        (self.bits & other.bits) == other.bits
    }

    pub const fn union(self, other: Self) -> Self {
        Self {
            bits: self.bits | other.bits,
        }
    }

    pub const fn is_empty(self) -> bool {
        self.bits == 0
    }
}

impl std::ops::BitOr for SectionFlags {
    type Output = Self;

    fn bitor(self, rhs: Self) -> Self {
        self.union(rhs)
    }
}

/// A loaded section from the binary.
#[derive(Debug, Clone)]
pub struct Section {
    /// Section name (e.g. `.text`, `.data`).
    pub name: String,
    /// Virtual address of the section start.
    pub vaddr: u64,
    /// Size in bytes (may differ from `data.len()` for BSS-like sections).
    pub size: u64,
    /// Raw section bytes. Empty for BSS / NOBITS sections.
    pub data: Vec<u8>,
    /// Permission flags.
    pub flags: SectionFlags,
}

/// Classification of a symbol.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum SymbolKind {
    Function,
    Object,
    Section,
    File,
    Unknown,
}

impl fmt::Display for SymbolKind {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Function => f.write_str("function"),
            Self::Object => f.write_str("object"),
            Self::Section => f.write_str("section"),
            Self::File => f.write_str("file"),
            Self::Unknown => f.write_str("unknown"),
        }
    }
}

/// A symbol from the binary's symbol table.
#[derive(Debug, Clone)]
pub struct Symbol {
    pub name: String,
    pub addr: u64,
    pub size: u64,
    pub kind: SymbolKind,
}

/// A fully-parsed binary image ready for analysis, produced by a [`Loader`](crate::Loader).
#[derive(Debug, Clone)]
pub struct BinaryImage {
    /// Target architecture.
    pub arch: ArchId,
    /// Byte order.
    pub endian: Endian,
    /// Entry point virtual address.
    pub entry: u64,
    /// Loaded sections.
    pub sections: Vec<Section>,
    /// Symbols indexed by address (merged from all symbol tables).
    pub symbols: BTreeMap<u64, Symbol>,
}

impl BinaryImage {
    /// Look up a section by name.
    pub fn section_by_name(&self, name: &str) -> Option<&Section> {
        self.sections.iter().find(|s| s.name == name)
    }

    /// Look up the symbol at (or nearest before) `addr`.
    pub fn symbol_at(&self, addr: u64) -> Option<&Symbol> {
        self.symbols
            .range(..=addr)
            .next_back()
            .map(|(_, sym)| sym)
    }
}
