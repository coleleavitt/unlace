//! Address space identifiers for the unlace IR.
//!
//! A [`Varnode`](crate::Varnode) lives in exactly one address space. Five spaces
//! are defined, with stable discriminants matching the IR spec (v1.0 frozen).

/// Identifies the address space a [`Varnode`](crate::Varnode) belongs to.
///
/// Discriminants are part of the stable ABI and must not be reordered
/// (see IR spec v1.0, SS1.1 and SS6).
///
/// | Variant    | Short prefix | Purpose                                  |
/// |------------|--------------|------------------------------------------|
/// | `Register` | `r`          | Architectural registers at fixed offsets. |
/// | `Ram`      | `m`          | Process memory; offset is a VA.          |
/// | `Const`    | `c`          | Immediate constants in the offset field. |
/// | `Unique`   | `u`          | Lifter-private temporaries.              |
/// | `Stack`    | `s`          | Stack-frame slots (signed displacement). |
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
#[non_exhaustive]
#[repr(u8)]
pub enum SpaceId {
    /// Architectural registers (RAX, X0, $a0, ...) at fixed offsets.
    Register = 0,
    /// Process memory; offset is a virtual address.
    Ram = 1,
    /// Immediate constants. The `offset` field holds the constant value.
    Const = 2,
    /// Lifter-private temporaries. Never aliased across instructions.
    Unique = 3,
    /// Stack-frame slots; offset is a signed displacement from frame pointer.
    Stack = 4,
}

impl SpaceId {
    /// Returns the single-character prefix used in the canonical text form.
    #[inline]
    pub const fn prefix(self) -> char {
        match self {
            Self::Register => 'r',
            Self::Ram => 'm',
            Self::Const => 'c',
            Self::Unique => 'u',
            Self::Stack => 's',
        }
    }

    /// Returns the full space name (lowercase).
    #[inline]
    pub const fn name(self) -> &'static str {
        match self {
            Self::Register => "register",
            Self::Ram => "ram",
            Self::Const => "const",
            Self::Unique => "unique",
            Self::Stack => "stack",
        }
    }
}

impl std::fmt::Display for SpaceId {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(self.name())
    }
}
