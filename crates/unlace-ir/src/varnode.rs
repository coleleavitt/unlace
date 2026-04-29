//! The Varnode type — the fundamental operand of every IR instruction.

use crate::SpaceId;

/// A Varnode is the formal triple `(space, offset, size)` that identifies
/// an operand in the IR. Every instruction reads and writes Varnodes.
///
/// Two Varnodes are equal iff all three fields match. Overlapping Varnodes
/// (e.g., `EAX` at `(Register, 0, 4)` and `RAX` at `(Register, 0, 8)`)
/// alias and must be resolved via `SUBPIECE`/`PIECE`/`INDIRECT`.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Varnode {
    pub space: SpaceId,
    pub offset: u64,
    /// Number of contiguous bytes this Varnode covers (1..=16 typical).
    pub size: u8,
}

impl Varnode {
    /// Construct a new Varnode.
    #[inline]
    pub const fn new(space: SpaceId, offset: u64, size: u8) -> Self {
        Self { space, offset, size }
    }

    /// Shorthand for a register-space Varnode.
    #[inline]
    pub const fn reg(offset: u64, size: u8) -> Self {
        Self::new(SpaceId::Register, offset, size)
    }

    /// Shorthand for a constant-space Varnode.
    #[inline]
    pub const fn constant(value: u64, size: u8) -> Self {
        Self::new(SpaceId::Const, value, size)
    }

    /// Shorthand for a unique-space Varnode.
    #[inline]
    pub const fn unique(offset: u64, size: u8) -> Self {
        Self::new(SpaceId::Unique, offset, size)
    }

    /// Shorthand for a stack-space Varnode.
    #[inline]
    pub const fn stack(offset: u64, size: u8) -> Self {
        Self::new(SpaceId::Stack, offset, size)
    }

    /// Shorthand for a RAM-space Varnode.
    #[inline]
    pub const fn ram(offset: u64, size: u8) -> Self {
        Self::new(SpaceId::Ram, offset, size)
    }

    /// Returns the bit-width (`size * 8`).
    #[inline]
    pub const fn bit_width(self) -> u32 {
        (self.size as u32) * 8
    }
}
