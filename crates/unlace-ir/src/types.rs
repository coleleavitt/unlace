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
#[derive(Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
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
    /// Anonymous/named union recovered when the same byte offset is observed
    /// through multiple incompatible access types.
    Union {
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
    /// Go interface type — a method-set descriptor. Recovered from
    /// `runtime.interfacetype` records loaded by `unlace-loader` (t181).
    ///
    /// `name` is the demangled interface name when available (e.g.
    /// `io.Reader`) or an empty string when only the method list is known.
    /// `methods` lists each `imethod` slot — at this point we only have the
    /// method's name; full per-method signatures live in the Go type table
    /// and aren't required for the printer's Go-style comment rendering.
    Interface {
        name: String,
        methods: Vec<InterfaceMethod>,
    },
    /// Go slice header `{ ptr *T; len int; cap int }`. Recovered from
    /// `runtime.slicetype` records (t191). `elem` is the slice's element
    /// type; the printer renders this as Go-style `[]elem` in
    /// recovered-type preamble comments.
    ///
    /// Storage layout is three words on 64-bit targets (24 bytes), but
    /// the variant itself encodes only the element shape — the loader
    /// keeps the `*runtime._type` shape opaque so consumers can decide
    /// whether to surface it as a C struct or a Go-source comment.
    Slice { elem: Box<Type> },
    /// Go map type `map[K]V`. Recovered from `runtime.maptype` records
    /// (t191). The map is referenced as a single pointer at the value
    /// level (`*hmap`), but the *type* variant carries both the key and
    /// value shapes so the printer can render Go-style `map[K]V`
    /// comments.
    Map { key: Box<Type>, value: Box<Type> },
    /// Go generic type parameter surfaced from post-1.18 metadata
    /// (`runtime.dictabi`, t297). `name` is the source-style identifier
    /// when known (e.g. `T`); `constraint` is the rendered Go syntax for
    /// the bound (usually `any` for dictionary-only recovery).
    TypeParam { name: String, constraint: String },
}

/// A single field within a [`Type::Struct`] or [`Type::Union`].
#[derive(Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub struct StructFieldType {
    pub name: String,
    pub ty: Type,
    pub offset: u64,
}

/// A struct layout recovered from array-of-structs access patterns in a
/// natural loop — see
/// [`unlace_passes::struct_field_recovery`](https://docs.rs/unlace-passes).
///
/// `size` is the per-element stride in bytes (constant multiplier applied
/// to the loop induction variable when computing the per-element base).
/// `fields` lists every distinct `(offset, access_width)` observed across
/// LOAD/STORE instructions whose address is `arr_ptr + stride*iv + offset`,
/// sorted ascending by offset.
#[derive(Clone, Debug, Default, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub struct InferredStruct {
    pub size: u64,
    pub fields: Vec<StructField>,
}

/// One field within an [`InferredStruct`].
///
/// `offset` is the byte offset from the per-element base.
/// `size` is the access width in bytes (1/2/4/8/16) — the dominant
/// (maximum) width observed at this offset.
#[derive(
    Clone,
    Copy,
    Debug,
    Default,
    PartialEq,
    Eq,
    Hash,
    PartialOrd,
    Ord,
    serde::Serialize,
    serde::Deserialize,
)]
pub struct StructField {
    pub offset: u64,
    pub size: u8,
}

/// A single method entry inside a [`Type::Interface`] method set.
///
/// `name` is the bare method identifier as it would appear in a Go source
/// `interface { … }` block. `signature` is an optional Go-syntax parameter
/// list (e.g. `() error`); when `None` the printer renders just `name()`.
#[derive(Clone, Debug, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub struct InterfaceMethod {
    pub name: String,
    pub signature: Option<String>,
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

    /// `true` when this type contains nested fields (struct or array,
    /// or Go-recovered slice/map shapes).
    pub fn is_composite(&self) -> bool {
        matches!(
            self,
            Type::Struct { .. }
                | Type::Array { .. }
                | Type::Slice { .. }
                | Type::Map { .. }
                | Type::Union { .. }
        )
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
            Type::Union { fields, .. } => {
                // Union storage is the maximum member size.
                let mut max_size: u8 = 0;
                for f in fields {
                    max_size = max_size.max(f.ty.size()?);
                }
                Some(max_size)
            }
            Type::Bitfield { underlying, .. } => underlying.size(),
            // A Go interface value is `{ *itab, *data }` — two pointers,
            // 16 bytes on 64-bit targets. The interface *type* (this
            // variant) describes the method set, not the value layout.
            Type::Interface { .. } => Some(16),
            // A Go slice header is three machine words on 64-bit
            // targets — `{ ptr, len, cap }` — so the value-level
            // footprint is 24 bytes regardless of element shape.
            Type::Slice { .. } => Some(24),
            // A Go map value is a single `*hmap` pointer (8 bytes on
            // 64-bit targets); the map *type* variant only records the
            // K/V shapes used by the printer.
            Type::Map { .. } => Some(8),
            // Type parameters are compile-time-only surface syntax; when
            // materialised as values in recovered metadata they flow through
            // dictionaries / interface words. Model them as pointer-sized.
            Type::TypeParam { .. } => Some(8),
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
            (
                Type::Union {
                    name: n1,
                    fields: f1,
                },
                Type::Union {
                    name: n2,
                    fields: f2,
                },
            ) if n1 == n2 && f1 == f2 => Type::Union {
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
        PrimitiveType::Bool => "_BOOL",
        PrimitiveType::Int(1) => "char",
        PrimitiveType::Int(2) => "__int16",
        PrimitiveType::Int(4) => "int",
        PrimitiveType::Int(8) => "__int64",
        PrimitiveType::Int(_) => "__int64",
        PrimitiveType::UnsignedInt(1) => "_BYTE",
        PrimitiveType::UnsignedInt(2) => "_WORD",
        PrimitiveType::UnsignedInt(4) => "_DWORD",
        PrimitiveType::UnsignedInt(8) => "_QWORD",
        PrimitiveType::UnsignedInt(_) => "_QWORD",
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
                        PrimitiveType::Bool => "_BOOL",
                        PrimitiveType::Int(1) => "char",
                        PrimitiveType::Int(2) => "__int16",
                        PrimitiveType::Int(4) => "int",
                        PrimitiveType::Int(8) => "__int64",
                        PrimitiveType::UnsignedInt(1) => "_BYTE",
                        PrimitiveType::UnsignedInt(2) => "_WORD",
                        PrimitiveType::UnsignedInt(4) => "_DWORD",
                        PrimitiveType::UnsignedInt(8) => "_QWORD",
                        PrimitiveType::Float => "float",
                        PrimitiveType::Double => "double",
                        PrimitiveType::Unknown => "void",
                        PrimitiveType::Int(_) | PrimitiveType::UnsignedInt(_) => "__int64",
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
            Type::Union { name, .. } => write!(f, "union {name}"),
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
            // C has no first-class interface — render as a `void *` so the
            // type still typechecks; the Go-style `interface { … }` text is
            // emitted as a comment by the printer (see `render_go_interface`).
            Type::Interface { .. } => f.write_str("void *"),
            // Go-style slice and map renderings — the printer surfaces
            // these directly in recovered-type preamble comments
            // (`// type_0x…: []int` / `// type_0x…: map[K]V`).
            Type::Slice { elem } => write!(f, "[]{elem}"),
            Type::Map { key, value } => write!(f, "map[{key}]{value}"),
            Type::TypeParam { name, constraint } => {
                if constraint.is_empty() {
                    f.write_str(name)
                } else {
                    write!(f, "{name} {constraint}")
                }
            }
        }
    }
}

impl Type {
    /// Format the method set of a [`Type::Interface`] as a Go-style
    /// `interface { Method(); … }` block. Returns `None` for any non-
    /// interface type so callers can chain `if let Some(s) = …`.
    ///
    /// Embedded interface entries (any method whose name starts with an
    /// uppercase letter and whose `signature` is `None`) are rendered
    /// verbatim — Go-source convention for first-level embedding.
    pub fn render_go_interface(&self) -> Option<String> {
        let Type::Interface { methods, .. } = self else {
            return None;
        };
        if methods.is_empty() {
            return Some("interface {}".to_string());
        }
        let mut out = String::with_capacity(16 + methods.len() * 16);
        out.push_str("interface { ");
        for (i, m) in methods.iter().enumerate() {
            if i > 0 {
                out.push_str("; ");
            }
            out.push_str(&m.name);
            match &m.signature {
                Some(sig) => out.push_str(sig),
                None => out.push_str("()"),
            }
        }
        out.push_str(" }");
        Some(out)
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
        assert_eq!(p.to_string(), "__int64 *");
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
        assert_eq!(fp.to_string(), "int (*)(int, int)");
    }

    #[test]
    fn display_variadic_func_ptr() {
        let fp = Type::FuncPtr {
            params: vec![Type::ptr_to(Type::int(1))],
            return_type: Box::new(Type::int(4)),
            variadic: true,
        };
        assert_eq!(fp.to_string(), "int (*)(char *, ...)");
    }

    #[test]
    fn display_array() {
        let a = Type::Array {
            element: Box::new(Type::int(4)),
            size: Some(8),
        };
        assert_eq!(a.to_string(), "int[8]");

        let a_unsized = Type::Array {
            element: Box::new(Type::int(4)),
            size: None,
        };
        assert_eq!(a_unsized.to_string(), "int[]");
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

    // ── t191: Go slice / map rendering ─────────────────────────────

    #[test]
    fn t191_slice_display_go_style() {
        let s = Type::Slice {
            elem: Box::new(Type::int(4)),
        };
        // The `int(4)` primitive renders as `__int32` in C; the slice
        // wrapper inherits that rendering and prefixes `[]` Go-style.
        assert_eq!(s.to_string(), "[]int");
        assert!(s.is_composite());
        // Slice header is three 64-bit words.
        assert_eq!(s.size(), Some(24));
    }

    #[test]
    fn t191_map_display_go_style() {
        let m = Type::Map {
            key: Box::new(Type::Primitive(PrimitiveType::Ptr)),
            value: Box::new(Type::int(4)),
        };
        assert_eq!(m.to_string(), "map[void *]int");
        assert!(m.is_composite());
        // Map is a single `*hmap` pointer at the value level.
        assert_eq!(m.size(), Some(8));
    }

    #[test]
    fn t191_nested_map_of_slices() {
        // map[int]map[int8][]int — exercises both nested-map and
        // slice-as-value rendering.
        let inner = Type::Map {
            key: Box::new(Type::int(1)),
            value: Box::new(Type::Slice {
                elem: Box::new(Type::int(4)),
            }),
        };
        let outer = Type::Map {
            key: Box::new(Type::int(4)),
            value: Box::new(inner),
        };
        assert_eq!(outer.to_string(), "map[int]map[char][]int",);
    }

    #[test]
    fn t297_type_param_display_and_size() {
        let t = Type::TypeParam {
            name: "T".into(),
            constraint: "any".into(),
        };
        assert_eq!(t.to_string(), "T any");
        assert_eq!(t.size(), Some(8));
    }

    }
