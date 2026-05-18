//! Bitfield recovery from shift/mask access patterns.
//!
//! Reconstructs C bitfield syntax (`unsigned x : N;`) from the canonical
//! shift+mask read pattern and shift+or-with-clearing-mask write pattern
//! that compilers emit for sub-byte fields.
//!
//! # Read pattern
//!
//! ```text
//! IntAnd(IntRight(field, shift), mask)
//! ```
//!
//! Decoded as: bitfield at offset `shift` with width `popcount(mask)`.
//!
//! # Write pattern
//!
//! ```text
//! IntOr(IntAnd(field, !mask), IntLeft(value, shift))
//! ```
//!
//! Decoded as: bitfield write at the same offset/width as the corresponding
//! read.
//!
//! Adjacent bitfields covering disjoint bit ranges of one underlying field
//! are grouped into a single struct field per range; the C printer emits
//! `unsigned int field_name : 3;` syntax via the `Type::Bitfield` variant.

use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{IrInsn, IrOp, SpaceId};

/// One recovered bitfield read/write pattern, expressed in bit space.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BitfieldAccess {
    /// Bit position of the LSB of the field within the storage unit.
    pub offset: u32,
    /// Width of the field in bits.
    pub width: u32,
    /// Whether this access was a write (`true`) or a read (`false`).
    pub is_write: bool,
}

/// Decode the read shape `IntAnd(IntRight(_, shift), mask)`.
///
/// Returns `None` when:
///   - `outer` is not `IntAnd`, or
///   - the shift / mask operand is not a constant, or
///   - the mask is the full storage-width all-ones value (which is not a
///     bitfield — that's just a normal load), per
///     `is_full_byte_mask`.
pub fn decode_read(outer: &IrInsn, inner: &IrInsn) -> Option<BitfieldAccess> {
    if outer.op != IrOp::IntAnd || inner.op != IrOp::IntRight {
        return None;
    }
    let mask = const_input(outer)?;
    let shift = const_input(inner)?;
    if is_full_byte_mask(mask, outer) {
        return None;
    }
    let width = mask.count_ones();
    if width == 0 || !is_consecutive_low_bits(mask) {
        return None;
    }
    Some(BitfieldAccess {
        offset: shift as u32,
        width,
        is_write: false,
    })
}

/// Decode the write shape `IntOr(IntAnd(field, !mask), IntLeft(value, shift))`.
///
/// `clear` is the `IntAnd(field, !mask)` instruction; `set` is the
/// `IntLeft(value, shift)` shifting the new field value into place.
pub fn decode_write(_outer_or: &IrInsn, clear: &IrInsn, set: &IrInsn) -> Option<BitfieldAccess> {
    if clear.op != IrOp::IntAnd || set.op != IrOp::IntLeft {
        return None;
    }
    let inv_mask = const_input(clear)?;
    let shift = const_input(set)?;
    let mask = !inv_mask;
    let width = mask.count_ones();
    if width == 0 || !is_consecutive_low_bits(mask >> shift) {
        return None;
    }
    Some(BitfieldAccess {
        offset: shift as u32,
        width,
        is_write: true,
    })
}

/// Find the constant operand of a binary insn.
fn const_input(insn: &IrInsn) -> Option<u64> {
    insn.inputs
        .iter()
        .find(|v| v.space == SpaceId::Const)
        .map(|v| v.offset)
}

/// `true` when `mask` is `(1 << (size*8)) - 1` for the storage size of
/// `outer`'s output (i.e. covers the entire storage unit). A whole-byte mask
/// is no bitfield — it's a plain load. `0xFF`, `0xFFFF`, `0xFFFFFFFF`,
/// `0xFFFF_FFFF_FFFF_FFFF` are recognised.
fn is_full_byte_mask(mask: u64, outer: &IrInsn) -> bool {
    matches!(mask, 0xFF | 0xFFFF | 0xFFFF_FFFF | 0xFFFF_FFFF_FFFF_FFFF) && outer.op == IrOp::IntAnd
}

/// `true` when `mask` is a contiguous run of 1-bits anchored at bit 0
/// (e.g. `0b111`, `0b11111`). Bitfield masks always have this shape after
/// the right-shift in the read pattern aligns the field to bit 0.
fn is_consecutive_low_bits(mask: u64) -> bool {
    if mask == 0 {
        return false;
    }
    (mask + 1).is_power_of_two()
}

/// Group accesses by their disjoint bit ranges, producing one struct field
/// per range. Adjacent (touching or overlapping by no more than one bit)
/// accesses with the same width are kept distinct — bitfields don't merge,
/// they sit side by side in the storage unit.
pub fn group_into_fields(
    underlying: &Type,
    accesses: &[BitfieldAccess],
    base_name: &str,
) -> Vec<StructFieldType> {
    use std::collections::BTreeMap;

    // Deduplicate by (offset, width).
    let mut by_range: BTreeMap<(u32, u32), ()> = BTreeMap::new();
    for a in accesses {
        by_range.insert((a.offset, a.width), ());
    }

    by_range
        .into_iter()
        .enumerate()
        .map(|(i, ((offset, width), _))| StructFieldType {
            name: format!("{base_name}_{i}"),
            offset: 0,
            ty: Type::Bitfield {
                underlying: Box::new(underlying.clone()),
                offset,
                width,
            },
        })
        .collect()
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::PrimitiveType;
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;

    fn reg(off: u64) -> Varnode {
        Varnode::reg(off, 4)
    }

    fn cnst(v: u64) -> Varnode {
        Varnode::constant(v, 4)
    }

    #[test]
    fn detects_read_pattern() {
        // out = IntAnd(IntRight(field, 5), 0x7)  → bitfield at +5, width 3.
        let inner = IrInsn::with_output(IrOp::IntRight, reg(0), smallvec![reg(8), cnst(5)], 0x1000);
        let outer =
            IrInsn::with_output(IrOp::IntAnd, reg(16), smallvec![reg(0), cnst(0x7)], 0x1004);

        let bf = decode_read(&outer, &inner).expect("recognised");
        assert_eq!(bf.offset, 5);
        assert_eq!(bf.width, 3);
        assert!(!bf.is_write);
    }

    #[test]
    fn detects_write_pattern() {
        // clear = IntAnd(field, !0x70)        ! 0x70 = 0xFF...FF8F
        // set   = IntLeft(value, 4)
        // outer = IntOr(clear, set)
        let inv_mask: u64 = !0x70u64;
        let clear = IrInsn::with_output(
            IrOp::IntAnd,
            reg(0),
            smallvec![reg(8), cnst(inv_mask)],
            0x2000,
        );
        let set = IrInsn::with_output(IrOp::IntLeft, reg(16), smallvec![reg(24), cnst(4)], 0x2004);
        let or = IrInsn::with_output(IrOp::IntOr, reg(32), smallvec![reg(0), reg(16)], 0x2008);

        let bf = decode_write(&or, &clear, &set).expect("recognised");
        assert_eq!(bf.offset, 4);
        // 0x70 = 0b01110000 → 3 set bits.
        assert_eq!(bf.width, 3);
        assert!(bf.is_write);
    }

    #[test]
    fn groups_adjacent_bitfields_into_fields() {
        // Three adjacent fields in one storage unit:
        //   bits 0..3   → 3-bit field
        //   bits 3..7   → 4-bit field
        //   bits 7..10  → 3-bit field
        let accesses = vec![
            BitfieldAccess {
                offset: 0,
                width: 3,
                is_write: false,
            },
            BitfieldAccess {
                offset: 3,
                width: 4,
                is_write: false,
            },
            BitfieldAccess {
                offset: 7,
                width: 3,
                is_write: false,
            },
        ];
        let underlying = Type::Primitive(PrimitiveType::UnsignedInt(4));
        let fields = group_into_fields(&underlying, &accesses, "f");
        assert_eq!(fields.len(), 3);
        for (i, f) in fields.iter().enumerate() {
            match &f.ty {
                Type::Bitfield {
                    width: w, offset, ..
                } => {
                    assert_eq!(*w, accesses[i].width);
                    assert_eq!(*offset, accesses[i].offset);
                }
                other => panic!("expected Bitfield, got {other:?}"),
            }
            assert_eq!(f.name, format!("f_{i}"));
        }
    }

    #[test]
    fn printer_emits_bitfield_width_syntax() {
        // Display impl on Type::Bitfield emits the underlying IDA-style alias.
        let bf = Type::Bitfield {
            underlying: Box::new(Type::uint(4)),
            offset: 0,
            width: 3,
        };
        assert_eq!(bf.to_string(), "_DWORD : 3");
    }

    #[test]
    fn ignores_full_byte_mask() {
        // out = IntAnd(IntRight(field, 0), 0xFFFFFFFF) is a plain load,
        // not a bitfield read.
        let inner = IrInsn::with_output(IrOp::IntRight, reg(0), smallvec![reg(8), cnst(0)], 0x3000);
        let outer = IrInsn::with_output(
            IrOp::IntAnd,
            reg(16),
            smallvec![reg(0), cnst(0xFFFF_FFFF)],
            0x3004,
        );
        assert!(decode_read(&outer, &inner).is_none());
    }
}
