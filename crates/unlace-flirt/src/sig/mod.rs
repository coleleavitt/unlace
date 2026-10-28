//! IDA FLIRT `.sig` (IDASGN) signature files.
//!
//! The layout and the matching rules here follow the IDA kernel, not
//! third-party readers. The libida functions they were read from are named
//! next to each step (`research/decompiled-references/ida/idalib/all/`).
//!
//! # File layout
//!
//! A file is a fixed header, the library name, and a body. The body is
//! deflated when [`SigFeatures::COMPRESSED`] is set: zlib-wrapped for
//! version 7 and later, raw deflate for versions 5 and 6 (`zip_inflate`
//! clears the zlib `wrap` flag for the old versions).
//!
//! The header is read as 45 bytes and then rewound to the size of the
//! on-disk version (`sub_815960`, `sub_814C60`):
//!
//! ```text
//! off size field                      present in
//!   0   6  magic "IDASGN"             all
//!   6   1  version                    all (4..=10)
//!   7   1  processor id (PLFM_*)      all
//!   8   4  file types                 all
//!  12   2  OS types                   all
//!  14   2  application types          all
//!  16   2  features                   all
//!  18   2  function count (old)       all
//!  20   2  ctype table CRC16          all
//!  22  12  ctype table name           all
//!  34   1  library name length        all
//!  35   2  alternate ctype CRC16      v5+
//!  37   4  function count             v6+   (v5: copied from offset 18)
//!  41   2  pattern size               v8+   (older: 32)
//!  43   2  second alternate ctype CRC v10
//! ```
//!
//! Header sizes are therefore 35 (v4), 37 (v5), 41 (v6, v7), 43 (v8, v9)
//! and 45 (v10) bytes.
//!
//! # Body
//!
//! The body is a prefix tree over the first `pattern_size` bytes of each
//! library function (`sub_815C80`). Every node starts with a child count.
//! A count of zero marks a leaf. Each child then carries:
//!
//! - its pattern length (one byte before v10, a short varint in v10);
//! - a variant mask, one bit per pattern byte with the most significant
//!   bit for the first byte. A set bit means "any byte" (relocations,
//!   immediates). The mask is a short varint for lengths below 16, a long
//!   varint up to 32, two long varints up to 64, and raw bytes beyond that
//!   (`sub_8155C0`);
//! - one literal byte for each non-variant position;
//! - the child's own subtree.
//!
//! A leaf lists modules grouped by CRC (`crc_len` byte and big-endian
//! CRC16), and within a CRC group lists modules that share it. A module
//! holds:
//!
//! - its total length;
//! - its public names. Each is an offset delta, an optional flag byte
//!   below 0x20, and the name text up to the next byte below 0x20. That
//!   terminating byte carries the parse flags of [`decode`];
//! - optional tail bytes: fixed bytes past the CRC range;
//! - an optional referenced name: the module only applies when the
//!   operand at a given offset refers to that name.
//!
//! Integers are big-endian. The short varint is one or two bytes
//! (`sub_815180`); the long varint is one to five bytes (`sub_815220`).
//! Offsets use the short form up to v8 and the long form from v9
//! (`sub_815370`).
//!
//! # Matching
//!
//! See [`matching`]: walk the tree over the bytes at the candidate
//! address, then pick the first module of the reached leaf whose CRC16
//! over `crc_len` bytes after the pattern, tail bytes and referenced name
//! all agree (`sub_8148B0`, `sub_813F40`).

mod crc;
mod decode;
mod header;
pub mod matching;
#[cfg(test)]
pub(crate) mod tests;

use std::path::Path;

pub use crc::crc16;
pub use header::{SigArch, SigFeatures, SigHeader};

use crate::FlirtError;

/// A decoded `.sig` file.
#[derive(Clone, Debug)]
pub struct SigFile {
    pub header: SigHeader,
    root: Node,
    modules: Vec<Module>,
}

impl SigFile {
    /// Read and decode a `.sig` file from disk.
    pub fn load(path: impl AsRef<Path>) -> Result<Self, FlirtError> {
        let bytes = std::fs::read(path.as_ref())?;
        Self::parse(&bytes)
    }

    /// Decode a `.sig` file from memory.
    pub fn parse(bytes: &[u8]) -> Result<Self, FlirtError> {
        decode::decode(bytes)
    }

    /// All modules in file order.
    pub fn modules(&self) -> &[Module] {
        &self.modules
    }
}

/// One prefix-tree node. The root has an empty pattern.
#[derive(Clone, Debug)]
struct Node {
    /// `None` marks a variant ("any byte") position.
    pattern: Vec<Option<u8>>,
    children: NodeChildren,
}

#[derive(Clone, Debug)]
enum NodeChildren {
    Inner(Vec<Node>),
    Leaf(Vec<ModuleId>),
}

/// Index of a module in [`SigFile::modules`].
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct ModuleId(u32);

impl ModuleId {
    pub fn index(self) -> usize {
        self.0 as usize
    }
}

/// One library module: a function (or a group of adjacent functions)
/// recognised by its leading pattern plus the checks below.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Module {
    /// Module length in bytes, counted from the matched address.
    pub length: u32,
    /// Number of bytes after the pattern covered by [`Module::crc16`].
    pub crc_len: u8,
    pub crc16: u16,
    pub names: Vec<PublicName>,
    pub tail_bytes: Vec<TailByte>,
    pub reference: Option<ModuleRef>,
}

impl Module {
    /// The name to give the function that starts at the matched address,
    /// if the module provides a usable one.
    pub fn function_name(&self) -> Option<&PublicName> {
        self.names.iter().find(|name| {
            name.offset == 0
                && !name.is_unnamed()
                && !name.flags.contains(NameFlags::NON_FUNCTION)
                && !name.flags.contains(NameFlags::DOUBTFUL)
        })
    }
}

/// A name the module defines at `offset` from its start.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct PublicName {
    pub offset: i32,
    pub name: String,
    pub flags: NameFlags,
}

impl PublicName {
    /// `?` is the placeholder for modules without a public name.
    pub fn is_unnamed(&self) -> bool {
        self.name == "?" || self.flags.contains(NameFlags::UNNAMED)
    }
}

/// Per-name flags (the byte before the name text).
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub struct NameFlags(u8);

impl NameFlags {
    /// A data or code label, not a function start: IDA names the address
    /// but does not create a function there (`sub_68A440`).
    pub const NON_FUNCTION: Self = Self(0x01);
    /// A file-local (static) function.
    pub const STATIC: Self = Self(0x02);
    /// IDA records the name only as a comment ("doubtful name").
    pub const DOUBTFUL: Self = Self(0x04);
    /// Set on the `?` placeholder names.
    pub const UNNAMED: Self = Self(0x08);

    pub const fn from_bits(bits: u8) -> Self {
        Self(bits)
    }

    pub const fn bits(self) -> u8 {
        self.0
    }

    pub const fn contains(self, other: Self) -> bool {
        self.0 & other.0 == other.0
    }
}

/// A fixed byte at `pattern_size + crc_len + offset` from the module start.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct TailByte {
    pub offset: u32,
    pub value: u8,
}

/// The operand at `offset` from the module start must refer to `name`.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ModuleRef {
    pub offset: i32,
    pub name: String,
}

impl ModuleRef {
    /// `.` refers to the C ctype table described by the file header.
    pub fn is_ctype_table(&self) -> bool {
        self.name == "."
    }
}
