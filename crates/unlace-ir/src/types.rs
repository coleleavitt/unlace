//! Composite type wrapper layered on top of [`PrimitiveType`].
//!
//! [`PrimitiveType`](crate::ssa::PrimitiveType) is intentionally kept primitive
//! (no recursion, `Copy`) so it stays cheap inside SSA varnode maps. For
//! emitting C output we frequently need richer information — pointers to
//! pointers, struct field layouts, function pointer signatures — so the
//! [`Type`] enum wraps `PrimitiveType` and adds composite variants without
//! disturbing the existing pass infrastructure.
//!
//! This module is foundation only: existing passes continue to operate on
//! `PrimitiveType`. The wrapper is consumed by code paths (e.g. the C
//! printer, DWARF integration) that need to express richer shapes.
//!
//! # Examples
//!
//! ```
//! use unlace_ir::types::{StructFieldType, Type};
//! use unlace_ir::ssa::PrimitiveType;
//!
//! let int_ptr = Type::ptr_to(Type::int(4));
//! assert!(int_ptr.is_pointer());
//! assert_eq!(int_ptr.to_string(), "int *");
//!
//! let s = Type::Struct {
//!     name: "Point".into(),
//!     fields: vec![
//!         StructFieldType { name: "x".into(), ty: Type::int(4), offset: 0 },
//!         StructFieldType { name: "y".into(), ty: Type::int(4), offset: 4 },
//!     ],
//! };
//! assert!(s.is_composite());
//! ```
//!
//! [`PrimitiveType`]: crate::ssa::PrimitiveType

use std::fmt;

use crate::ssa::PrimitiveType;

/// Rich type encoding suitable for C-style output.
///
/// Wraps [`PrimitiveType`] for the scalar cases and adds composite variants
/// (pointers, arrays, structs, function pointers).
#[derive(Clone, Debug, PartialEq, Eq, Hash)]
pub enum Type {
    /// A scalar primitive type carried over from the SSA pipeline.
    Primitive(PrimitiveType),
    /// Pointer to another type (e.g. `int *`).
    Ptr(Box<Type>),
    /// Array with element type and optional length (`size = None` ⇒ `T[]`).
    Array {
        element: Box<Type>,
        size: Option<u64>,
    },
    /// Named struct with field layout.
    Struct {
        name: String,
        fields: Vec<StructFieldType>,
    },
    /// Function pointer with parameter list, return type and varargs flag.
    FuncPtr {
        params: Vec<Type>,
        return_type: Box<Type>,
        variadic: bool,
    },
    /// C bitfield: a sub-byte field carved out of `underlying`. `offset` is
    /// the bit position within the storage unit and `width` the number of
    /// bits the field occupies. Recovered from shift/mask read patterns and
    /// shift-or-mask write patterns.
    Bitfield {
        underlying: Box<Type>,
        offset: u32,
        width: u32,
    },
}

/// A single field within a [`Type::Struct`].
#[derive(Clone, Debug, PartialEq, Eq, Hash)]
pub struct StructFieldType {
    pub name: String,
    pub ty: Type,
    pub offset: u64,
}

impl Type {
    /// Construct a signed integer type of `width` bytes.
    pub fn int(width: u8) -> Self {
        Type::Primitive(PrimitiveType::Int(width))
    }

    /// Construct an unsigned integer type of `width` bytes.
    pub fn uint(width: u8) -> Self {
        Type::Primitive(PrimitiveType::UnsignedInt(width))
    }

    /// Construct a pointer to `inner`.
    pub fn ptr_to(inner: Type) -> Self {
        Type::Ptr(Box::new(inner))
    }

    /// Construct a `void *` (untyped pointer using the primitive `Ptr`).
    pub fn void_ptr() -> Self {
        Type::Primitive(PrimitiveType::Ptr)
    }

    /// `true` when this type represents a pointer (typed or untyped).
    pub fn is_pointer(&self) -> bool {
        matches!(self, Type::Ptr(_) | Type::Primitive(PrimitiveType::Ptr))
    }

    /// `true` when this type contains nested fields (struct or array).
    pub fn is_composite(&self) -> bool {
        matches!(self, Type::Struct { .. } | Type::Array { .. })
    }

    /// Storage size in bytes, when statically known.
    ///
    /// Returns `None` for unsized arrays, unknown primitives, or function
    /// pointer "values" (which aren't stored as values).
    pub fn size(&self) -> Option<u8> {
        match self {
            Type::Primitive(p) => primitive_size(*p),
            // Pointer width is target-dependent; assume 64-bit (8 bytes) since
            // every architecture this crate targets is 64-bit.
            Type::Ptr(_) | Type::FuncPtr { .. } => Some(8),
            Type::Array {
                element,
                size: Some(n),
            } => {
                let elem = element.size()? as u64;
                let total = elem.checked_mul(*n)?;
                u8::try_from(total).ok()
            }
            Type::Array { size: None, .. } => None,
            Type::Struct { fields, .. } => {
                // Use the highest field-end as the struct size; this is a
                // conservative estimate that ignores trailing padding but is
                // sufficient for most consumers.
                let mut end: u64 = 0;
                for f in fields {
                    let fsize = f.ty.size()? as u64;
                    end = end.max(f.offset.checked_add(fsize)?);
                }
                u8::try_from(end).ok()
            }
            Type::Bitfield { underlying, .. } => underlying.size(),
        }
    }

    /// Format as a C type declaration.
    ///
    /// Identical to the `Display` implementation; provided for symmetry with
    /// other backends that may want different framings later.
    pub fn to_c_string(&self) -> String {
        self.to_string()
    }

    /// Lattice join for composite types.
    ///
    /// `Type::Primitive(Unknown)` is the bottom element (joins with anything
    /// → that thing). Structs join only with themselves (same name) — DWARF
    /// gives us nominal typing, not structural. Two arrays join when their
    /// element types join cleanly. Mismatched composites collapse back to
    /// `Type::Primitive(PrimitiveType::Unknown)`.
    pub fn join(self, other: Self) -> Self {
        let unknown = Type::Primitive(PrimitiveType::Unknown);
        match (self, other) {
            (a, b) if a == b => a,
            (Type::Primitive(PrimitiveType::Unknown), t)
            | (t, Type::Primitive(PrimitiveType::Unknown)) => t,
            (Type::Primitive(p1), Type::Primitive(p2)) => Type::Primitive(p1.join(p2)),
            (
                Type::Struct {
                    name: n1,
                    fields: f1,
                },
                Type::Struct {
                    name: n2,
                    fields: f2,
                },
            ) if n1 == n2 && f1 == f2 => Type::Struct {
                name: n1,
                fields: f1,
            },
            (Type::Ptr(a), Type::Ptr(b)) => {
                let joined = a.join(*b);
                if joined == unknown {
                    unknown
                } else {
                    Type::Ptr(Box::new(joined))
                }
            }
            (
                Type::Array {
                    element: e1,
                    size: s1,
                },
                Type::Array {
                    element: e2,
                    size: s2,
                },
            ) if s1 == s2 => {
                let joined = e1.join(*e2);
                if joined == unknown {
                    unknown
                } else {
                    Type::Array {
                        element: Box::new(joined),
                        size: s1,
                    }
                }
            }
            _ => unknown,
        }
    }
}

fn primitive_size(p: PrimitiveType) -> Option<u8> {
    match p {
        PrimitiveType::Unknown => None,
        PrimitiveType::Bool => Some(1),
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => Some(w),
        PrimitiveType::Float => Some(4),
        PrimitiveType::Double => Some(8),
        PrimitiveType::Ptr => Some(8),
    }
}

fn primitive_c_name(p: PrimitiveType) -> &'static str {
    match p {
        PrimitiveType::Unknown => "int",
        PrimitiveType::Bool => "_Bool",
        PrimitiveType::Int(1) => "__int8",
        PrimitiveType::Int(2) => "__int16",
        PrimitiveType::Int(4) => "__int32",
        PrimitiveType::Int(8) => "__int64",
        PrimitiveType::Int(_) => "__int64",
        PrimitiveType::UnsignedInt(1) => "unsigned __int8",
        PrimitiveType::UnsignedInt(2) => "unsigned __int16",
        PrimitiveType::UnsignedInt(4) => "unsigned __int32",
        PrimitiveType::UnsignedInt(8) => "unsigned __int64",
        PrimitiveType::UnsignedInt(_) => "unsigned __int64",
        PrimitiveType::Float => "float",
        PrimitiveType::Double => "double",
        PrimitiveType::Ptr => "void *",
    }
}

impl fmt::Display for Type {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Type::Primitive(p) => f.write_str(primitive_c_name(*p)),
            Type::Ptr(inner) => match &**inner {
                // Print typed pointers compactly, e.g. `int *`, `int **`.
                Type::Primitive(p) if !matches!(p, PrimitiveType::Ptr) => {
                    let base = match p {
                        PrimitiveType::Bool => "_Bool",
                        PrimitiveType::Int(1) => "char",
                        PrimitiveType::Int(2) => "short",
                        PrimitiveType::Int(4) => "int",
                        PrimitiveType::Int(8) => "long long",
                        PrimitiveType::UnsignedInt(1) => "unsigned char",
                        PrimitiveType::UnsignedInt(2) => "unsigned short",
                        PrimitiveType::UnsignedInt(4) => "unsigned int",
                        PrimitiveType::UnsignedInt(8) => "unsigned long long",
                        PrimitiveType::Float => "float",
                        PrimitiveType::Double => "double",
                        PrimitiveType::Unknown => "void",
                        PrimitiveType::Int(_) | PrimitiveType::UnsignedInt(_) => "long long",
                        PrimitiveType::Ptr => unreachable!(),
                    };
                    write!(f, "{base} *")
                }
                Type::Ptr(_) => {
                    write!(f, "{inner} *")
                }
                _ => write!(f, "{inner} *"),
            },
            Type::Array { element, size } => match size {
                Some(n) => write!(f, "{element}[{n}]"),
                None => write!(f, "{element}[]"),
            },
            Type::Struct { name, .. } => write!(f, "struct {name}"),
            Type::Bitfield {
                underlying, width, ..
            } => write!(f, "{underlying} : {width}"),
            Type::FuncPtr {
                params,
                return_type,
                variadic,
            } => {
                write!(f, "{return_type} (*)(")?;
                for (i, p) in params.iter().enumerate() {
                    if i > 0 {
                        f.write_str(", ")?;
                    }
                    write!(f, "{p}")?;
                }
                if *variadic {
                    if !params.is_empty() {
                        f.write_str(", ")?;
                    }
                    f.write_str("...")?;
                }
                f.write_str(")")
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn construct_int_uint() {
        assert_eq!(Type::int(4), Type::Primitive(PrimitiveType::Int(4)));
        assert_eq!(
            Type::uint(8),
            Type::Primitive(PrimitiveType::UnsignedInt(8))
        );
    }

    #[test]
    fn ptr_to_wraps_inner() {
        let p = Type::ptr_to(Type::int(8));
        assert!(p.is_pointer());
        assert!(!p.is_composite());
    }

    #[test]
    fn primitive_ptr_is_pointer() {
        let vp = Type::void_ptr();
        assert!(vp.is_pointer());
    }

    #[test]
    fn struct_and_array_are_composite() {
        let s = Type::Struct {
            name: "Foo".into(),
            fields: vec![StructFieldType {
                name: "x".into(),
                ty: Type::int(4),
                offset: 0,
            }],
        };
        assert!(s.is_composite());

        let a = Type::Array {
            element: Box::new(Type::int(4)),
            size: Some(8),
        };
        assert!(a.is_composite());
    }

    #[test]
    fn display_int_pointer() {
        let p = Type::ptr_to(Type::int(8));
        assert_eq!(p.to_string(), "long long *");
    }

    #[test]
    fn display_void_pointer() {
        assert_eq!(Type::void_ptr().to_string(), "void *");
    }

    #[test]
    fn display_int_int_pointer() {
        // pointer to pointer
        let pp = Type::ptr_to(Type::ptr_to(Type::int(4)));
        assert_eq!(pp.to_string(), "int * *");
    }

    #[test]
    fn display_func_ptr() {
        let fp = Type::FuncPtr {
            params: vec![Type::int(4), Type::int(4)],
            return_type: Box::new(Type::int(4)),
            variadic: false,
        };
        assert_eq!(fp.to_string(), "__int32 (*)(__int32, __int32)");
    }

    #[test]
    fn display_variadic_func_ptr() {
        let fp = Type::FuncPtr {
            params: vec![Type::ptr_to(Type::int(1))],
            return_type: Box::new(Type::int(4)),
            variadic: true,
        };
        assert_eq!(fp.to_string(), "__int32 (*)(char *, ...)");
    }

    #[test]
    fn display_array() {
        let a = Type::Array {
            element: Box::new(Type::int(4)),
            size: Some(8),
        };
        assert_eq!(a.to_string(), "__int32[8]");

        let a_unsized = Type::Array {
            element: Box::new(Type::int(4)),
            size: None,
        };
        assert_eq!(a_unsized.to_string(), "__int32[]");
    }

    #[test]
    fn display_struct() {
        let s = Type::Struct {
            name: "Point".into(),
            fields: vec![],
        };
        assert_eq!(s.to_string(), "struct Point");
    }

    #[test]
    fn size_primitive() {
        assert_eq!(Type::int(4).size(), Some(4));
        assert_eq!(Type::uint(8).size(), Some(8));
        assert_eq!(Type::Primitive(PrimitiveType::Bool).size(), Some(1));
        assert_eq!(Type::Primitive(PrimitiveType::Float).size(), Some(4));
        assert_eq!(Type::Primitive(PrimitiveType::Double).size(), Some(8));
        assert_eq!(Type::Primitive(PrimitiveType::Unknown).size(), None);
    }

    #[test]
    fn size_pointer_is_64bit() {
        assert_eq!(Type::ptr_to(Type::int(4)).size(), Some(8));
        assert_eq!(Type::void_ptr().size(), Some(8));
    }

    #[test]
    fn size_sized_array() {
        let a = Type::Array {
            element: Box::new(Type::int(4)),
            size: Some(8),
        };
        assert_eq!(a.size(), Some(32));
    }

    #[test]
    fn size_unsized_array_is_none() {
        let a = Type::Array {
            element: Box::new(Type::int(4)),
            size: None,
        };
        assert_eq!(a.size(), None);
    }

    #[test]
    fn size_struct_max_field_end() {
        let s = Type::Struct {
            name: "S".into(),
            fields: vec![
                StructFieldType {
                    name: "x".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "y".into(),
                    ty: Type::int(4),
                    offset: 4,
                },
            ],
        };
        assert_eq!(s.size(), Some(8));
    }

    #[test]
    fn to_c_string_matches_display() {
        let t = Type::ptr_to(Type::int(4));
        assert_eq!(t.to_c_string(), t.to_string());
    }
}
