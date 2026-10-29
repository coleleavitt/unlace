//! Byte offset to member path inside a synthesised object type.
//!
//! Hex-Rays prints an access to a typed object by walking the object's type
//! from the outside in (hexx64 `sub_273A40` / `sub_272C50`, the same walk the
//! pointer case in [`cpa`](super::super::cpa) uses): an array consumes the
//! index terms and the whole elements of the offset, a struct consumes the
//! member that contains what is left, until a scalar of the accessed width
//! remains. The walk here runs over [`Type`], the shape `ObjectWidenPass`
//! synthesises, rather than over a DWARF layout.

use unlace_ir::data_layout::DataLayout;
use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::Type;

/// One step from an object to the accessed member.
#[derive(Debug, Clone, PartialEq, Eq)]
pub(in crate::c_printer) enum Step {
    /// `[Σ coefsᵢ·termᵢ + constant]`. `coefs` pairs with the caller's index
    /// terms and counts elements, not bytes.
    Index { coefs: Vec<i64>, constant: i64 },
    /// `.name`.
    Field(String),
}

/// How the access relates to the member the path ends at.
///
/// Only an integer member is read directly. The printer types the loaded or
/// stored value itself, as an integer of the access width, so a pointer or
/// floating-point member is read through its address: assigning a `void *`
/// member to an integer does not compile, and converting a `float` member
/// to one changes its bits.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(in crate::c_printer) enum Fit {
    /// An integer member of exactly the accessed width: `g[i].fld_1`.
    Leaf,
    /// A member that starts at the accessed byte and is read as an integer
    /// of the access width: `*(_QWORD *)&g[i]`, `*(_DWORD *)&g.fld_2`.
    Start,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(in crate::c_printer) struct ObjectPath {
    pub(in crate::c_printer) steps: Vec<Step>,
    pub(in crate::c_printer) fit: Fit,
}

/// Resolve an access of `width` bytes at byte `offset` of an object of type
/// `ty`, moved by index terms with byte coefficients `coefs`.
///
/// Every index term must step over whole elements of the outermost array it
/// meets; a struct or scalar cannot absorb a variable index. `None` when no
/// member, not even one read as another type, starts at the access.
pub(in crate::c_printer) fn resolve(
    ty: &Type,
    layout: &DataLayout,
    offset: u64,
    coefs: &[i64],
    width: u64,
) -> Option<ObjectPath> {
    let mut steps = Vec::new();
    let mut ty = ty;
    let mut offset = offset;
    let mut pending = coefs;
    let mut start = None;
    loop {
        let size = layout.type_size(ty);
        if pending.is_empty() && offset == 0 && size.is_none_or(|size| size >= width) {
            start = Some(steps.clone());
        }
        match ty {
            Type::Array { element, size } => {
                let Some(element_size) = layout.type_size(element).filter(|&s| s > 0) else {
                    break;
                };
                let divisor = i64::try_from(element_size).ok()?;
                if pending.iter().any(|coef| coef % divisor != 0) {
                    break;
                }
                let index = offset / element_size;
                if pending.is_empty() && size.is_some_and(|count| index >= count) {
                    return None;
                }
                steps.push(Step::Index {
                    coefs: pending.iter().map(|coef| coef / divisor).collect(),
                    constant: i64::try_from(index).ok()?,
                });
                pending = &[];
                offset %= element_size;
                ty = element;
            }
            Type::Struct { fields, .. } if pending.is_empty() => {
                let Some(field) = fields.iter().find(|field| {
                    field.offset <= offset
                        && layout
                            .type_size(&field.ty)
                            .is_some_and(|size| offset - field.offset < size)
                }) else {
                    break;
                };
                steps.push(Step::Field(field.name.clone()));
                offset -= field.offset;
                ty = &field.ty;
            }
            Type::Primitive(p)
                if pending.is_empty()
                    && offset == 0
                    && size == Some(width)
                    && matches!(
                        p,
                        PrimitiveType::Int(_) | PrimitiveType::UnsignedInt(_) | PrimitiveType::Bool
                    ) =>
            {
                return Some(ObjectPath {
                    steps,
                    fit: Fit::Leaf,
                });
            }
            _ => break,
        }
    }
    start.map(|steps| ObjectPath {
        steps,
        fit: Fit::Start,
    })
}

#[cfg(test)]
mod tests {
    use unlace_ir::ArchId;
    use unlace_ir::types::StructFieldType;

    use super::*;

    fn field(name: &str, offset: u64, ty: Type) -> StructFieldType {
        StructFieldType {
            name: name.to_string(),
            ty,
            offset,
        }
    }

    fn array(element: Type, size: Option<u64>) -> Type {
        Type::Array {
            element: Box::new(element),
            size,
        }
    }

    /// `struct { int fld_0; _WORD fld_1; _BYTE fld_2[2]; _QWORD fld_3; }[8]`
    fn records() -> Type {
        let element = Type::Struct {
            name: "obj".to_string(),
            fields: vec![
                field("fld_0", 0, Type::int(4)),
                field("fld_1", 4, Type::uint(2)),
                field("fld_2", 6, array(Type::uint(1), Some(2))),
                field("fld_3", 8, Type::uint(8)),
            ],
        };
        array(element, Some(8))
    }

    fn resolve64(ty: &Type, offset: u64, coefs: &[i64], width: u64) -> Option<ObjectPath> {
        resolve(
            ty,
            &DataLayout::for_arch(ArchId::X86_64),
            offset,
            coefs,
            width,
        )
    }

    fn index(coefs: &[i64], constant: i64) -> Step {
        Step::Index {
            coefs: coefs.to_vec(),
            constant,
        }
    }

    fn leaf(steps: Vec<Step>) -> Option<ObjectPath> {
        Some(ObjectPath {
            steps,
            fit: Fit::Leaf,
        })
    }

    #[test]
    fn indexed_member_of_an_array_of_structs() {
        // g + 16*i + 8
        assert_eq!(
            resolve64(&records(), 8, &[16], 8),
            leaf(vec![index(&[1], 0), Step::Field("fld_3".into())])
        );
        // g + 32*i + 20: two elements per step, one element in.
        assert_eq!(
            resolve64(&records(), 20, &[32], 2),
            leaf(vec![index(&[2], 1), Step::Field("fld_1".into())])
        );
    }

    #[test]
    fn constant_access_walks_into_a_gap_array() {
        assert_eq!(
            resolve64(&records(), 0x17, &[], 1),
            leaf(vec![
                index(&[], 1),
                Step::Field("fld_2".into()),
                index(&[], 1),
            ])
        );
    }

    #[test]
    fn scalar_array_counts_elements() {
        let ints = array(Type::int(4), Some(16));
        assert_eq!(resolve64(&ints, 12, &[4], 4), leaf(vec![index(&[1], 3)]));
        // A 16-byte stride steps four elements.
        assert_eq!(resolve64(&ints, 0, &[16], 4), leaf(vec![index(&[4], 0)]));
    }

    #[test]
    fn other_widths_read_the_member_that_starts_there() {
        // 8 bytes at an element start cover more than `fld_0`: the element.
        assert_eq!(
            resolve64(&records(), 0, &[16], 8),
            Some(ObjectPath {
                steps: vec![index(&[1], 0)],
                fit: Fit::Start,
            })
        );
        // 2 bytes at `fld_0` read the start of it.
        assert_eq!(
            resolve64(&records(), 16, &[], 2),
            Some(ObjectPath {
                steps: vec![index(&[], 1), Step::Field("fld_0".into())],
                fit: Fit::Start,
            })
        );
        assert_eq!(
            resolve64(&records(), 16, &[], 16),
            Some(ObjectPath {
                steps: vec![index(&[], 1)],
                fit: Fit::Start,
            })
        );
    }

    #[test]
    fn unresolvable_accesses() {
        // Mid-member, a byte stride over a struct array, and past the end.
        assert_eq!(resolve64(&records(), 2, &[], 2), None);
        assert_eq!(resolve64(&records(), 0, &[1], 4), None);
        assert_eq!(resolve64(&records(), 128, &[], 4), None);
    }

    #[test]
    fn plain_struct_takes_no_index() {
        let st = Type::Struct {
            name: "obj".to_string(),
            fields: vec![
                field("fld_0", 0, Type::uint(8)),
                field("fld_1", 8, Type::int(4)),
            ],
        };
        assert_eq!(
            resolve64(&st, 8, &[], 4),
            leaf(vec![Step::Field("fld_1".into())])
        );
        assert_eq!(resolve64(&st, 8, &[4], 4), None);
    }

    #[test]
    fn pointer_and_float_members_are_read_through_their_address() {
        let st = Type::Struct {
            name: "obj".to_string(),
            fields: vec![
                field("fld_0", 0, Type::Primitive(PrimitiveType::Ptr)),
                field("fld_1", 8, Type::Primitive(PrimitiveType::Float)),
            ],
        };
        for (offset, width, name) in [(0, 8, "fld_0"), (8, 4, "fld_1")] {
            assert_eq!(
                resolve64(&st, offset, &[], width),
                Some(ObjectPath {
                    steps: vec![Step::Field(name.into())],
                    fit: Fit::Start,
                })
            );
        }
    }

    #[test]
    fn open_array_indexes_without_bound() {
        let open = array(Type::uint(8), None);
        assert_eq!(resolve64(&open, 0, &[8], 8), leaf(vec![index(&[1], 0)]));
    }
}
