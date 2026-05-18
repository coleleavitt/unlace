//! Canonical type-information representation for unlace-ir.
//!
//! [`TInfo`] is the rich, recursive type used by DWARF integration, the C
//! printer, and library-signature databases.  It is intentionally separate
//! from [`crate::ssa::PrimitiveType`] (which is `Copy` and stays cheap
//! inside SSA varnode maps) and from [`crate::types::Type`] (which carries
//! `String`-keyed struct names but lacks qualifiers, calling conventions,
//! enum variants, etc.).
//!
//! # Design constraints
//! * No `bitflags` dependency — [`TQualifiers`] is a plain `u8` newtype.
//! * Fully `serde`-serializable (the workspace `serde` dep already enables
//!   the `derive` feature).
//! * Bridges to [`crate::types::TypeKind`] via `From` / `TryFrom`.

use std::fmt;

use serde::{Deserialize, Serialize};

use crate::types::TypeKind;

// ── Qualifiers ────────────────────────────────────────────────────────────────

/// C type qualifiers encoded as a plain bit-field (`u8` newtype).
///
/// No `bitflags` crate is used — constants and a manual `contains` method
/// provide the same ergonomics.
///
/// ```
/// use unlace_ir::TQualifiers;
/// let cv = TQualifiers(TQualifiers::CONST.0 | TQualifiers::VOLATILE.0);
/// assert!(cv.contains(TQualifiers::CONST));
/// assert!(cv.contains(TQualifiers::VOLATILE));
/// assert!(!cv.contains(TQualifiers::RESTRICT));
/// ```
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, Serialize, Deserialize, Default)]
pub struct TQualifiers(pub u8);

impl TQualifiers {
    pub const CONST: Self = Self(1);
    pub const VOLATILE: Self = Self(2);
    pub const RESTRICT: Self = Self(4);

    /// Returns `true` if every bit set in `other` is also set in `self`.
    #[inline]
    pub fn contains(self, other: Self) -> bool {
        self.0 & other.0 != 0
    }
}

// ── Calling convention ────────────────────────────────────────────────────────

/// Calling convention used by a function type.
#[derive(Debug, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub enum CallingConv {
    Default,
    Cdecl,
    Stdcall,
    Fastcall,
    Thiscall,
    SysV,
    Win64,
    Aarch64,
    Riscv,
    Mips,
    Unknown,
}

// ── Struct / union field ──────────────────────────────────────────────────────

/// A single field within a [`TInfo::Struct`] or [`TInfo::Union`].
#[derive(Debug, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub struct TField {
    /// Field name, `None` for anonymous / padding fields.
    pub name: Option<String>,
    /// Byte offset from the start of the enclosing aggregate.
    pub offset: u64,
    /// Field type.
    pub ty: TInfo,
}

// ── Enum variant ─────────────────────────────────────────────────────────────

/// One discriminant entry within a [`TInfo::Enum`].
#[derive(Debug, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub struct TEnumVariant {
    pub name: String,
    pub value: i64,
}

// ── TInfo ─────────────────────────────────────────────────────────────────────

/// Canonical, recursive type representation.
///
/// Covers every C / C++ type shape that the decompiler needs to express in
/// generated output.  Compound variants (`Struct`, `Union`, `Enum`,
/// `Qualified`) carry their payload inline (boxed where recursion requires
/// it) rather than referring to an external type table, so a `TInfo` value
/// is fully self-contained.
#[derive(Debug, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub enum TInfo {
    /// `void`.
    Void,
    /// C `_Bool` / C++ `bool`.
    Bool,
    /// Signed or unsigned integer of `width` bytes.
    Int { width: u8, signed: bool },
    /// IEEE-754 floating-point of `width` bytes (4 = float, 8 = double, …).
    Float { width: u8 },
    /// Pointer to another type.
    Ptr(Box<TInfo>),
    /// Array with optional static length.
    Array { elem: Box<TInfo>, len: Option<u64> },
    /// Named or anonymous struct.
    Struct {
        name: Option<String>,
        fields: Vec<TField>,
    },
    /// Named or anonymous union.
    Union {
        name: Option<String>,
        fields: Vec<TField>,
    },
    /// C enum.
    Enum {
        name: Option<String>,
        variants: Vec<TEnumVariant>,
        /// Storage type (usually `int` or `unsigned int`).
        underlying: Box<TInfo>,
    },
    /// Function type (not a pointer — use `Ptr(Box::new(Func { … }))` for
    /// function pointers).
    Func {
        ret: Box<TInfo>,
        args: Vec<TInfo>,
        varargs: bool,
        cc: CallingConv,
    },
    /// A type with C qualifiers (`const`, `volatile`, `restrict`) applied.
    Qualified {
        inner: Box<TInfo>,
        qualifiers: TQualifiers,
    },
    /// Type information not available / not yet recovered.
    Unknown,
}

impl TInfo {
    // ── Predicates ───────────────────────────────────────────────────────────

    /// `true` when this type is or wraps a pointer.
    pub fn is_pointer(&self) -> bool {
        match self {
            TInfo::Ptr(_) => true,
            TInfo::Qualified { inner, .. } => inner.is_pointer(),
            _ => false,
        }
    }

    /// `true` when this type is an integer (signed or unsigned).
    pub fn is_integer(&self) -> bool {
        match self {
            TInfo::Int { .. } | TInfo::Bool => true,
            TInfo::Qualified { inner, .. } => inner.is_integer(),
            _ => false,
        }
    }

    /// `true` when this type is a struct, union, or enum.
    pub fn is_aggregate(&self) -> bool {
        match self {
            TInfo::Struct { .. } | TInfo::Union { .. } | TInfo::Enum { .. } => true,
            TInfo::Qualified { inner, .. } => inner.is_aggregate(),
            _ => false,
        }
    }

    // ── Size ─────────────────────────────────────────────────────────────────

    /// Storage size in bytes, when statically known.
    ///
    /// Returns `None` for unsized arrays, function types, or [`TInfo::Unknown`].
    pub fn size(&self) -> Option<u64> {
        match self {
            TInfo::Void => Some(0),
            TInfo::Bool => Some(1),
            TInfo::Int { width, .. } => Some(*width as u64),
            TInfo::Float { width } => Some(*width as u64),
            // Assume 64-bit target (8-byte pointers).
            TInfo::Ptr(_) => Some(8),
            TInfo::Array { elem, len: Some(n) } => {
                let elem_sz = elem.size()?;
                elem_sz.checked_mul(*n)
            }
            TInfo::Array { len: None, .. } => None,
            TInfo::Struct { fields, .. } => {
                let mut end: u64 = 0;
                for f in fields {
                    let fsz = f.ty.size()?;
                    end = end.max(f.offset.checked_add(fsz)?);
                }
                Some(end)
            }
            TInfo::Union { fields, .. } => {
                let mut max: u64 = 0;
                for f in fields {
                    max = max.max(f.ty.size()?);
                }
                Some(max)
            }
            TInfo::Enum { underlying, .. } => underlying.size(),
            TInfo::Func { .. } => None,
            TInfo::Qualified { inner, .. } => inner.size(),
            TInfo::Unknown => None,
        }
    }

    // ── Best-fit member resolution (models IDA udt_type_data_t__get_best_fit_member) ──

    /// Resolve a byte offset into a struct/union to the innermost field
    /// that contains that offset.
    ///
    /// For nested structs, this recurses: if offset 12 lands inside a
    /// sub-struct at offset 8 whose first field is at relative offset 0,
    /// the result chain is `[outer_field, inner_field]`.
    ///
    /// Returns `None` if `self` is not a struct/union or if the offset
    /// falls into padding (a "gap").
    pub fn get_best_fit_member(&self, offset: u64) -> Option<ResolvedMember> {
        match self {
            TInfo::Struct { fields, .. } => {
                // Find the field whose range [field.offset, field.offset + field.ty.size())
                // contains `offset`. Among candidates, pick the one with the
                // highest offset (most specific / tightest fit).
                let mut best: Option<&TField> = None;
                for f in fields {
                    if f.offset > offset {
                        continue;
                    }
                    let f_end = f.offset.saturating_add(f.ty.size().unwrap_or(1));
                    if offset < f_end {
                        match best {
                            None => best = Some(f),
                            Some(prev) if f.offset > prev.offset => best = Some(f),
                            _ => {}
                        }
                    }
                }
                let field = best?;
                let relative_offset = offset - field.offset;
                // If the field is itself a struct/union, recurse.
                if relative_offset > 0 {
                    if let Some(inner) = field.ty.get_best_fit_member(relative_offset) {
                        return Some(ResolvedMember {
                            path: std::iter::once(MemberPathEntry {
                                name: field.name.clone(),
                                offset: field.offset,
                            })
                            .chain(inner.path)
                            .collect(),
                            ty: inner.ty,
                            remainder_offset: inner.remainder_offset,
                        });
                    }
                }
                Some(ResolvedMember {
                    path: vec![MemberPathEntry {
                        name: field.name.clone(),
                        offset: field.offset,
                    }],
                    ty: field.ty.clone(),
                    remainder_offset: relative_offset,
                })
            }
            TInfo::Union { fields, .. } => {
                // For unions, every field starts at offset 0. Pick the
                // field whose size is large enough to contain `offset`.
                for f in fields {
                    let f_size = f.ty.size().unwrap_or(0);
                    if offset < f_size {
                        if let Some(inner) = f.ty.get_best_fit_member(offset) {
                            return Some(ResolvedMember {
                                path: std::iter::once(MemberPathEntry {
                                    name: f.name.clone(),
                                    offset: 0,
                                })
                                .chain(inner.path)
                                .collect(),
                                ty: inner.ty,
                                remainder_offset: inner.remainder_offset,
                            });
                        }
                        return Some(ResolvedMember {
                            path: vec![MemberPathEntry {
                                name: f.name.clone(),
                                offset: 0,
                            }],
                            ty: f.ty.clone(),
                            remainder_offset: offset,
                        });
                    }
                }
                None
            }
            TInfo::Array { elem, len } => {
                let elem_size = elem.size()?;
                if elem_size == 0 {
                    return None;
                }
                let index = offset / elem_size;
                if let Some(n) = len {
                    if index >= *n {
                        return None;
                    }
                }
                let inner_offset = offset % elem_size;
                if let Some(inner) = elem.get_best_fit_member(inner_offset) {
                    Some(ResolvedMember {
                        path: std::iter::once(MemberPathEntry {
                            name: Some(format!("[{}]", index)),
                            offset: index * elem_size,
                        })
                        .chain(inner.path)
                        .collect(),
                        ty: inner.ty,
                        remainder_offset: inner.remainder_offset,
                    })
                } else {
                    Some(ResolvedMember {
                        path: vec![MemberPathEntry {
                            name: Some(format!("[{}]", index)),
                            offset: index * elem_size,
                        }],
                        ty: *elem.clone(),
                        remainder_offset: inner_offset,
                    })
                }
            }
            TInfo::Qualified { inner, .. } => inner.get_best_fit_member(offset),
            _ => None,
        }
    }

    /// Compute structural gaps (padding bytes) in a struct layout.
    ///
    /// Models IDA's `calc_tinfo_gaps`: returns byte ranges `[start, end)`
    /// within the struct that are not covered by any declared field.
    /// Useful for detecting implicit padding, bitfield storage units, and
    /// union candidates (when the same offset is accessed through
    /// incompatible types).
    pub fn calc_gaps(&self) -> Vec<(u64, u64)> {
        let TInfo::Struct { fields, .. } = self else {
            return Vec::new();
        };
        let struct_size = match self.size() {
            Some(s) => s,
            None => return Vec::new(),
        };

        // Build a sorted list of covered ranges.
        let mut covered: Vec<(u64, u64)> = Vec::new();
        for f in fields {
            let f_size = f.ty.size().unwrap_or(0);
            if f_size > 0 {
                covered.push((f.offset, f.offset + f_size));
            }
        }
        covered.sort_unstable();

        // Merge overlapping/adjacent ranges and collect gaps.
        let mut gaps = Vec::new();
        let mut cursor: u64 = 0;
        for (start, end) in &covered {
            if *start > cursor {
                gaps.push((cursor, *start));
            }
            cursor = cursor.max(*end);
        }
        if cursor < struct_size {
            gaps.push((cursor, struct_size));
        }
        gaps
    }
}

/// Result of [`TInfo::get_best_fit_member`] — the resolved member path
/// from a byte offset into a struct.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ResolvedMember {
    /// Chain of field accesses from outermost struct to the resolved leaf.
    pub path: Vec<MemberPathEntry>,
    /// Type of the resolved leaf field.
    pub ty: TInfo,
    /// Remaining byte offset within the leaf field (0 if exact match).
    pub remainder_offset: u64,
}

/// One step in a [`ResolvedMember`] access path.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MemberPathEntry {
    /// Field name (`None` for anonymous/padding fields).
    pub name: Option<String>,
    /// Byte offset of this field within its parent.
    pub offset: u64,
}

// ── Display (IDA-style) ───────────────────────────────────────────────────────

impl fmt::Display for TInfo {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            TInfo::Void => f.write_str("void"),
            TInfo::Bool => f.write_str("_BOOL"),
            TInfo::Int { width, signed } => {
                let s = match (signed, width) {
                    (true, 1) => "char",
                    (true, 2) => "_WORD",
                    (true, 4) => "_DWORD",
                    (true, 8) => "__int64",
                    (false, 1) => "_BYTE",
                    (false, 2) => "_WORD",
                    (false, 4) => "_DWORD",
                    (false, 8) => "_QWORD",
                    _ => "__int64",
                };
                f.write_str(s)
            }
            TInfo::Float { width } => match width {
                4 => f.write_str("float"),
                8 => f.write_str("double"),
                _ => write!(f, "float{}", width * 8),
            },
            TInfo::Ptr(inner) => write!(f, "{inner} *"),
            TInfo::Array { elem, len } => match len {
                Some(n) => write!(f, "{elem}[{n}]"),
                None => write!(f, "{elem}[]"),
            },
            TInfo::Struct { name, .. } => match name {
                Some(n) => write!(f, "struct {n}"),
                None => f.write_str("struct <anonymous>"),
            },
            TInfo::Union { name, .. } => match name {
                Some(n) => write!(f, "union {n}"),
                None => f.write_str("union <anonymous>"),
            },
            TInfo::Enum { name, .. } => match name {
                Some(n) => write!(f, "enum {n}"),
                None => f.write_str("enum <anonymous>"),
            },
            TInfo::Func {
                ret, args, varargs, ..
            } => {
                write!(f, "{ret} (*)(")?;
                for (i, arg) in args.iter().enumerate() {
                    if i > 0 {
                        f.write_str(", ")?;
                    }
                    write!(f, "{arg}")?;
                }
                if *varargs {
                    if !args.is_empty() {
                        f.write_str(", ")?;
                    }
                    f.write_str("...")?;
                }
                f.write_str(")")
            }
            TInfo::Qualified { inner, qualifiers } => {
                if qualifiers.contains(TQualifiers::CONST) {
                    f.write_str("const ")?;
                }
                if qualifiers.contains(TQualifiers::VOLATILE) {
                    f.write_str("volatile ")?;
                }
                if qualifiers.contains(TQualifiers::RESTRICT) {
                    f.write_str("restrict ")?;
                }
                write!(f, "{inner}")
            }
            TInfo::Unknown => f.write_str("int"),
        }
    }
}

// ── TypeSource ────────────────────────────────────────────────────────────────

/// Records how a type assignment was derived, used for confidence tracking.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub enum TypeSource {
    Inferred,
    FromDebug,
    FromSig,
    FromLibrary,
    UserAssigned,
    Unknown,
}

// ── Bridges to TypeKind ───────────────────────────────────────────────────────

impl From<TypeKind> for TInfo {
    fn from(kind: TypeKind) -> Self {
        match kind {
            TypeKind::Void => TInfo::Void,
            TypeKind::Int => TInfo::Int {
                width: 4,
                signed: true,
            },
            TypeKind::UInt => TInfo::Int {
                width: 4,
                signed: false,
            },
            TypeKind::Long => TInfo::Int {
                width: 8,
                signed: true,
            },
            TypeKind::ULong => TInfo::Int {
                width: 8,
                signed: false,
            },
            TypeKind::SizeT => TInfo::Int {
                width: 8,
                signed: false,
            },
            TypeKind::SSizeT => TInfo::Int {
                width: 8,
                signed: true,
            },
            TypeKind::OffT => TInfo::Int {
                width: 8,
                signed: true,
            },
            TypeKind::CharPtr => TInfo::Ptr(Box::new(TInfo::Int {
                width: 1,
                signed: true,
            })),
            TypeKind::ConstCharPtr => TInfo::Ptr(Box::new(TInfo::Qualified {
                inner: Box::new(TInfo::Int {
                    width: 1,
                    signed: true,
                }),
                qualifiers: TQualifiers::CONST,
            })),
            TypeKind::CharPtrPtr => TInfo::Ptr(Box::new(TInfo::Ptr(Box::new(TInfo::Int {
                width: 1,
                signed: true,
            })))),
            TypeKind::VoidPtr => TInfo::Ptr(Box::new(TInfo::Void)),
            TypeKind::ConstVoidPtr => TInfo::Ptr(Box::new(TInfo::Qualified {
                inner: Box::new(TInfo::Void),
                qualifiers: TQualifiers::CONST,
            })),
            TypeKind::FilePtr => TInfo::Ptr(Box::new(TInfo::Struct {
                name: Some("_IO_FILE".into()),
                fields: vec![],
            })),
        }
    }
}

/// Attempts to map a [`TInfo`] back to the compact [`TypeKind`] tag.
///
/// Only succeeds for shapes that have a direct [`TypeKind`] counterpart.
/// Returns `Err(tinfo)` (the value back) when no match is found.
impl TryFrom<TInfo> for TypeKind {
    type Error = TInfo;

    fn try_from(ti: TInfo) -> Result<TypeKind, TInfo> {
        match &ti {
            TInfo::Void => Ok(TypeKind::Void),
            TInfo::Int {
                width: 4,
                signed: true,
            } => Ok(TypeKind::Int),
            TInfo::Int {
                width: 4,
                signed: false,
            } => Ok(TypeKind::UInt),
            TInfo::Ptr(inner) => match inner.as_ref() {
                TInfo::Void => Ok(TypeKind::VoidPtr),
                TInfo::Int {
                    width: 1,
                    signed: true,
                } => Ok(TypeKind::CharPtr),
                TInfo::Ptr(inner2) => match inner2.as_ref() {
                    TInfo::Int {
                        width: 1,
                        signed: true,
                    } => Ok(TypeKind::CharPtrPtr),
                    _ => Err(ti),
                },
                TInfo::Qualified {
                    inner: qi,
                    qualifiers,
                } if qualifiers == &TQualifiers::CONST => match qi.as_ref() {
                    TInfo::Void => Ok(TypeKind::ConstVoidPtr),
                    TInfo::Int {
                        width: 1,
                        signed: true,
                    } => Ok(TypeKind::ConstCharPtr),
                    _ => Err(ti),
                },
                _ => Err(ti),
            },
            _ => Err(ti),
        }
    }
}

// ── Tests ─────────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    // ── TQualifiers ──────────────────────────────────────────────────────────

    #[test]
    fn tqualifiers_const_volatile() {
        let cv = TQualifiers(TQualifiers::CONST.0 | TQualifiers::VOLATILE.0);
        assert!(cv.contains(TQualifiers::CONST));
        assert!(cv.contains(TQualifiers::VOLATILE));
        assert!(!cv.contains(TQualifiers::RESTRICT));
    }

    #[test]
    fn tqualifiers_default_is_zero() {
        assert_eq!(TQualifiers::default().0, 0);
    }

    // ── Predicates ──────────────────────────────────────────────────────────

    #[test]
    fn is_pointer_ptr() {
        assert!(TInfo::Ptr(Box::new(TInfo::Void)).is_pointer());
    }

    #[test]
    fn is_pointer_qualified_ptr() {
        let qi = TInfo::Qualified {
            inner: Box::new(TInfo::Ptr(Box::new(TInfo::Void))),
            qualifiers: TQualifiers::CONST,
        };
        assert!(qi.is_pointer());
    }

    #[test]
    fn is_pointer_non_ptr() {
        assert!(
            !TInfo::Int {
                width: 4,
                signed: true
            }
            .is_pointer()
        );
    }

    #[test]
    fn is_integer_int_and_bool() {
        assert!(
            TInfo::Int {
                width: 4,
                signed: true
            }
            .is_integer()
        );
        assert!(TInfo::Bool.is_integer());
        assert!(!TInfo::Void.is_integer());
        assert!(!TInfo::Ptr(Box::new(TInfo::Void)).is_integer());
    }

    #[test]
    fn is_aggregate_struct_union_enum() {
        let s = TInfo::Struct {
            name: Some("Foo".into()),
            fields: vec![],
        };
        assert!(s.is_aggregate());

        let u = TInfo::Union {
            name: None,
            fields: vec![],
        };
        assert!(u.is_aggregate());

        let e = TInfo::Enum {
            name: Some("Color".into()),
            variants: vec![],
            underlying: Box::new(TInfo::Int {
                width: 4,
                signed: true,
            }),
        };
        assert!(e.is_aggregate());

        assert!(
            !TInfo::Int {
                width: 4,
                signed: false
            }
            .is_aggregate()
        );
    }

    // ── Size ─────────────────────────────────────────────────────────────────

    #[test]
    fn size_primitives() {
        assert_eq!(TInfo::Void.size(), Some(0));
        assert_eq!(TInfo::Bool.size(), Some(1));
        assert_eq!(
            TInfo::Int {
                width: 4,
                signed: true
            }
            .size(),
            Some(4)
        );
        assert_eq!(
            TInfo::Int {
                width: 8,
                signed: false
            }
            .size(),
            Some(8)
        );
        assert_eq!(TInfo::Float { width: 4 }.size(), Some(4));
        assert_eq!(TInfo::Float { width: 8 }.size(), Some(8));
        assert_eq!(TInfo::Ptr(Box::new(TInfo::Void)).size(), Some(8));
    }

    #[test]
    fn size_array_sized() {
        let a = TInfo::Array {
            elem: Box::new(TInfo::Int {
                width: 4,
                signed: true,
            }),
            len: Some(10),
        };
        assert_eq!(a.size(), Some(40));
    }

    #[test]
    fn size_array_unsized_none() {
        let a = TInfo::Array {
            elem: Box::new(TInfo::Int {
                width: 4,
                signed: true,
            }),
            len: None,
        };
        assert_eq!(a.size(), None);
    }

    #[test]
    fn size_struct_field_end() {
        let s = TInfo::Struct {
            name: Some("S".into()),
            fields: vec![
                TField {
                    name: Some("x".into()),
                    offset: 0,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
                TField {
                    name: Some("y".into()),
                    offset: 4,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
            ],
        };
        assert_eq!(s.size(), Some(8));
    }

    #[test]
    fn size_union_max_member() {
        let u = TInfo::Union {
            name: None,
            fields: vec![
                TField {
                    name: None,
                    offset: 0,
                    ty: TInfo::Int {
                        width: 1,
                        signed: false,
                    },
                },
                TField {
                    name: None,
                    offset: 0,
                    ty: TInfo::Int {
                        width: 8,
                        signed: false,
                    },
                },
            ],
        };
        assert_eq!(u.size(), Some(8));
    }

    #[test]
    fn size_func_is_none() {
        let func = TInfo::Func {
            ret: Box::new(TInfo::Void),
            args: vec![],
            varargs: false,
            cc: CallingConv::Default,
        };
        assert_eq!(func.size(), None);
    }

    #[test]
    fn size_unknown_is_none() {
        assert_eq!(TInfo::Unknown.size(), None);
    }

    // ── Display ──────────────────────────────────────────────────────────────

    #[test]
    fn display_ida_style_unsigned_byte() {
        assert_eq!(
            TInfo::Int {
                width: 1,
                signed: false
            }
            .to_string(),
            "_BYTE"
        );
    }

    #[test]
    fn display_ida_style_word() {
        assert_eq!(
            TInfo::Int {
                width: 2,
                signed: false
            }
            .to_string(),
            "_WORD"
        );
    }

    #[test]
    fn display_ida_style_dword() {
        assert_eq!(
            TInfo::Int {
                width: 4,
                signed: false
            }
            .to_string(),
            "_DWORD"
        );
    }

    #[test]
    fn display_ida_style_qword() {
        assert_eq!(
            TInfo::Int {
                width: 8,
                signed: false
            }
            .to_string(),
            "_QWORD"
        );
    }

    #[test]
    fn display_ida_style_int64() {
        assert_eq!(
            TInfo::Int {
                width: 8,
                signed: true
            }
            .to_string(),
            "__int64"
        );
    }

    #[test]
    fn display_void_ptr() {
        assert_eq!(TInfo::Ptr(Box::new(TInfo::Void)).to_string(), "void *");
    }

    #[test]
    fn display_struct_named() {
        let s = TInfo::Struct {
            name: Some("foo".into()),
            fields: vec![],
        };
        assert_eq!(s.to_string(), "struct foo");
    }

    #[test]
    fn display_struct_anonymous() {
        let s = TInfo::Struct {
            name: None,
            fields: vec![],
        };
        assert_eq!(s.to_string(), "struct <anonymous>");
    }

    #[test]
    fn display_const_qualifier() {
        let t = TInfo::Qualified {
            inner: Box::new(TInfo::Int {
                width: 4,
                signed: true,
            }),
            qualifiers: TQualifiers::CONST,
        };
        assert_eq!(t.to_string(), "const _DWORD");
    }

    #[test]
    fn display_func_ptr() {
        let fp = TInfo::Func {
            ret: Box::new(TInfo::Void),
            args: vec![TInfo::Int {
                width: 4,
                signed: true,
            }],
            varargs: false,
            cc: CallingConv::Cdecl,
        };
        assert_eq!(fp.to_string(), "void (*)(_DWORD)");
    }

    #[test]
    fn display_variadic_func_ptr() {
        let fp = TInfo::Func {
            ret: Box::new(TInfo::Int {
                width: 4,
                signed: true,
            }),
            args: vec![TInfo::Ptr(Box::new(TInfo::Int {
                width: 1,
                signed: true,
            }))],
            varargs: true,
            cc: CallingConv::Cdecl,
        };
        assert_eq!(fp.to_string(), "_DWORD (*)(char *, ...)");
    }

    // ── From<TypeKind> ───────────────────────────────────────────────────────

    #[test]
    fn from_typekind_void() {
        assert_eq!(TInfo::from(TypeKind::Void), TInfo::Void);
    }

    #[test]
    fn from_typekind_int() {
        assert_eq!(
            TInfo::from(TypeKind::Int),
            TInfo::Int {
                width: 4,
                signed: true
            }
        );
    }

    #[test]
    fn from_typekind_uint() {
        assert_eq!(
            TInfo::from(TypeKind::UInt),
            TInfo::Int {
                width: 4,
                signed: false
            }
        );
    }

    #[test]
    fn from_typekind_void_ptr() {
        assert_eq!(
            TInfo::from(TypeKind::VoidPtr),
            TInfo::Ptr(Box::new(TInfo::Void))
        );
    }

    #[test]
    fn from_typekind_const_char_ptr() {
        let t = TInfo::from(TypeKind::ConstCharPtr);
        assert!(t.is_pointer());
        assert_eq!(
            t,
            TInfo::Ptr(Box::new(TInfo::Qualified {
                inner: Box::new(TInfo::Int {
                    width: 1,
                    signed: true
                }),
                qualifiers: TQualifiers::CONST,
            }))
        );
    }

    #[test]
    fn from_typekind_char_ptr_ptr() {
        let t = TInfo::from(TypeKind::CharPtrPtr);
        assert!(t.is_pointer());
    }

    // ── TryFrom<TInfo> for TypeKind ──────────────────────────────────────────

    #[test]
    fn tryfrom_tinfo_void_ok() {
        assert_eq!(TypeKind::try_from(TInfo::Void), Ok(TypeKind::Void));
    }

    #[test]
    fn tryfrom_tinfo_int_ok() {
        assert_eq!(
            TypeKind::try_from(TInfo::Int {
                width: 4,
                signed: true
            }),
            Ok(TypeKind::Int)
        );
    }

    #[test]
    fn tryfrom_tinfo_void_ptr_ok() {
        assert_eq!(
            TypeKind::try_from(TInfo::Ptr(Box::new(TInfo::Void))),
            Ok(TypeKind::VoidPtr)
        );
    }

    #[test]
    fn tryfrom_tinfo_char_ptr_ok() {
        assert_eq!(
            TypeKind::try_from(TInfo::Ptr(Box::new(TInfo::Int {
                width: 1,
                signed: true
            }))),
            Ok(TypeKind::CharPtr)
        );
    }

    #[test]
    fn tryfrom_tinfo_unknown_err() {
        let result = TypeKind::try_from(TInfo::Unknown);
        assert!(result.is_err());
    }

    #[test]
    fn tryfrom_tinfo_float_err() {
        let result = TypeKind::try_from(TInfo::Float { width: 4 });
        assert!(result.is_err());
    }

    // ── Roundtrip TypeKind → TInfo → TypeKind ────────────────────────────────

    #[test]
    fn roundtrip_void() {
        let kind = TypeKind::Void;
        let ti = TInfo::from(kind);
        assert_eq!(TypeKind::try_from(ti), Ok(kind));
    }

    #[test]
    fn roundtrip_int() {
        let kind = TypeKind::Int;
        let ti = TInfo::from(kind);
        assert_eq!(TypeKind::try_from(ti), Ok(kind));
    }

    #[test]
    fn roundtrip_void_ptr() {
        let kind = TypeKind::VoidPtr;
        let ti = TInfo::from(kind);
        assert_eq!(TypeKind::try_from(ti), Ok(kind));
    }

    #[test]
    fn roundtrip_char_ptr() {
        let kind = TypeKind::CharPtr;
        let ti = TInfo::from(kind);
        assert_eq!(TypeKind::try_from(ti), Ok(kind));
    }

    // ── Best-fit member resolution ──────────────────────────────────────────

    #[test]
    fn best_fit_flat_struct() {
        let s = TInfo::Struct {
            name: Some("Point".into()),
            fields: vec![
                TField {
                    name: Some("x".into()),
                    offset: 0,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
                TField {
                    name: Some("y".into()),
                    offset: 4,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
            ],
        };
        let r = s.get_best_fit_member(0).unwrap();
        assert_eq!(r.path.len(), 1);
        assert_eq!(r.path[0].name.as_deref(), Some("x"));
        assert_eq!(r.remainder_offset, 0);

        let r = s.get_best_fit_member(4).unwrap();
        assert_eq!(r.path[0].name.as_deref(), Some("y"));
        assert_eq!(r.remainder_offset, 0);

        // Offset 8 is beyond the struct — returns None.
        assert!(s.get_best_fit_member(8).is_none());
    }

    #[test]
    fn best_fit_nested_struct() {
        let inner = TInfo::Struct {
            name: Some("Inner".into()),
            fields: vec![
                TField {
                    name: Some("a".into()),
                    offset: 0,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
                TField {
                    name: Some("b".into()),
                    offset: 4,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
            ],
        };
        let outer = TInfo::Struct {
            name: Some("Outer".into()),
            fields: vec![
                TField {
                    name: Some("hdr".into()),
                    offset: 0,
                    ty: TInfo::Int {
                        width: 8,
                        signed: false,
                    },
                },
                TField {
                    name: Some("payload".into()),
                    offset: 8,
                    ty: inner,
                },
            ],
        };
        // Offset 12 → outer.payload (at 8) → inner offset 4 → field "b"
        let r = outer.get_best_fit_member(12).unwrap();
        assert_eq!(r.path.len(), 2);
        assert_eq!(r.path[0].name.as_deref(), Some("payload"));
        assert_eq!(r.path[1].name.as_deref(), Some("b"));
        assert_eq!(r.remainder_offset, 0);
    }

    #[test]
    fn best_fit_array() {
        let arr = TInfo::Array {
            elem: Box::new(TInfo::Int {
                width: 4,
                signed: true,
            }),
            len: Some(10),
        };
        // Offset 12 → element [3]
        let r = arr.get_best_fit_member(12).unwrap();
        assert_eq!(r.path[0].name.as_deref(), Some("[3]"));
        assert_eq!(r.remainder_offset, 0);

        // Out of bounds → None
        assert!(arr.get_best_fit_member(40).is_none());
    }

    #[test]
    fn calc_gaps_detects_padding() {
        let s = TInfo::Struct {
            name: Some("Padded".into()),
            fields: vec![
                TField {
                    name: Some("a".into()),
                    offset: 0,
                    ty: TInfo::Int {
                        width: 1,
                        signed: true,
                    },
                },
                // 3 bytes of padding here
                TField {
                    name: Some("b".into()),
                    offset: 4,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
            ],
        };
        let gaps = s.calc_gaps();
        assert_eq!(gaps, vec![(1, 4)]);
    }

    #[test]
    fn calc_gaps_no_gaps() {
        let s = TInfo::Struct {
            name: Some("Packed".into()),
            fields: vec![
                TField {
                    name: Some("x".into()),
                    offset: 0,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
                TField {
                    name: Some("y".into()),
                    offset: 4,
                    ty: TInfo::Int {
                        width: 4,
                        signed: true,
                    },
                },
            ],
        };
        assert!(s.calc_gaps().is_empty());
    }
}
