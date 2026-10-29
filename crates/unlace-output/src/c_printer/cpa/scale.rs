//! Scale normalisation: which units the offset of an address is counted in.
//!
//! C scales pointer arithmetic by the pointee size, so a byte offset can only
//! be written on the root pointer once it is divided by the element size.
//! Hex-Rays (hexx64 `sub_26E0C0`) counts the offset in:
//!
//! 1. the access width, when the access is narrower than the element, the
//!    element size does not divide the offset and the width does:
//!    `*((_DWORD *)p + 1)` for a 4-byte read at byte 4 of `__int64 *p`;
//! 2. the element size: `p[2]`, or `*(_QWORD *)(p + 2)` for a wider read;
//! 3. bytes, through `(char *)p`, marking the access partial (`EXFL_PARTIAL`):
//!    `*(_DWORD *)((char *)p + 6)`.
//!
//! Before falling back to bytes, `sub_26E0C0` halves a power-of-two element
//! size until it divides the offset, but it only keeps the result when the
//! access width divides that size, which rule 1 already covers.

/// The units an address's offset is counted in.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(super) enum Unit {
    /// Elements of the root's pointee: `p[i]`.
    Element,
    /// `n`-byte integers, through a cast of the root: `(_DWORD *)p + i`.
    Narrowed(u64),
    /// Bytes, through `(char *)p`.
    Bytes,
}

impl Unit {
    /// Byte size of one unit.
    pub(super) fn size(self, element_size: u64) -> u64 {
        match self {
            Unit::Element => element_size,
            Unit::Narrowed(n) => n,
            Unit::Bytes => 1,
        }
    }
}

/// The unit for an offset `Σ coefs + constant` (in bytes) through a pointer to
/// `element_size`-byte elements, read `access_width` bytes wide when the
/// address is dereferenced. A pointer value has no access width and is never
/// narrowed.
pub(super) fn choose_unit(
    element_size: u64,
    access_width: Option<u64>,
    coefs: &[i64],
    constant: i64,
) -> Unit {
    let divides = |unit: u64| {
        let Ok(unit) = i64::try_from(unit) else {
            return false;
        };
        unit > 0 && constant % unit == 0 && coefs.iter().all(|coef| coef % unit == 0)
    };
    if divides(element_size) {
        Unit::Element
    } else if let Some(width) = access_width.filter(|&w| w < element_size && divides(w)) {
        Unit::Narrowed(width)
    } else {
        Unit::Bytes
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn element_size_divides() {
        assert_eq!(choose_unit(4, Some(4), &[4], 8), Unit::Element);
        assert_eq!(choose_unit(4, Some(4), &[], -4), Unit::Element);
        // Wider and narrower reads still count elements when they can.
        assert_eq!(choose_unit(4, Some(8), &[], 8), Unit::Element);
        assert_eq!(choose_unit(8, Some(4), &[], 16), Unit::Element);
    }

    #[test]
    fn narrower_access_counts_in_its_own_width() {
        assert_eq!(choose_unit(8, Some(4), &[], 4), Unit::Narrowed(4));
        assert_eq!(choose_unit(8, Some(1), &[], 9), Unit::Narrowed(1));
        assert_eq!(choose_unit(8, Some(2), &[6], -2), Unit::Narrowed(2));
    }

    #[test]
    fn everything_else_counts_bytes() {
        // A smaller power of two divides 6, but not in the access width.
        assert_eq!(choose_unit(8, Some(4), &[], 6), Unit::Bytes);
        assert_eq!(choose_unit(4, Some(8), &[], 6), Unit::Bytes);
        assert_eq!(choose_unit(8, Some(4), &[1], 0), Unit::Bytes);
        assert_eq!(choose_unit(12, Some(4), &[], 6), Unit::Bytes);
    }

    #[test]
    fn pointer_values_are_never_narrowed() {
        assert_eq!(choose_unit(8, None, &[], 16), Unit::Element);
        assert_eq!(choose_unit(8, None, &[], 4), Unit::Bytes);
    }

    #[test]
    fn unit_sizes() {
        assert_eq!(Unit::Element.size(12), 12);
        assert_eq!(Unit::Narrowed(2).size(12), 2);
        assert_eq!(Unit::Bytes.size(12), 1);
    }
}
