//! CodeView TPI/IPI → unlace `Type` conversion.
//!
//! Walks the type information stream of a Microsoft PDB and lowers
//! `LF_STRUCTURE`, `LF_UNION`, `LF_ENUM`, `LF_POINTER`, `LF_PROCEDURE`,
//! `LF_ARRAY` records into the unlace `Type` model. Forward references are
//! resolved via a fixpoint pass.

use std::collections::BTreeMap;
use std::path::Path;

use pdb::{FallibleIterator, PDB, TypeData, TypeIndex};

use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::{StructFieldType, Type};

use crate::error::LoadError;

/// Aggregated CodeView types lowered from a PDB's TPI stream.
#[derive(Debug, Clone, Default)]
pub struct PdbTypes {
    /// CodeView type index → resolved unlace `Type`.
    pub by_index: BTreeMap<u32, Type>,
    /// Named structs/classes for top-level lookup (non-forward-ref entries).
    pub structs: BTreeMap<String, Type>,
    /// Named enums (variant name → integer value).
    pub enums: BTreeMap<String, Vec<(String, i64)>>,
    /// Function signatures keyed by ProcedureType type-index.
    pub procedures: BTreeMap<u32, ProcSig>,
}

/// A function signature lowered from `LF_PROCEDURE`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProcSig {
    pub return_type: Type,
    pub params: Vec<Type>,
}

/// Internal simplified representation suitable for unit testing without
/// needing to construct real `pdb::TypeData` (which carries borrowed
/// `RawString` and is awkward to fabricate).
#[derive(Debug, Clone)]
#[allow(dead_code)]
pub(crate) enum CvType {
    Primitive(Type),
    Pointer {
        underlying: u32,
    },
    Array {
        element: u32,
        len_bytes: u32,
    },
    Struct {
        name: String,
        size: u64,
        fields: Vec<CvField>,
        forward_ref: bool,
    },
    Union {
        name: String,
        size: u64,
        fields: Vec<CvField>,
        forward_ref: bool,
    },
    Enum {
        name: String,
        underlying: u32,
        variants: Vec<(String, i64)>,
        forward_ref: bool,
    },
    Procedure {
        return_type: Option<u32>,
        argument_list: u32,
    },
    ArgList {
        args: Vec<u32>,
    },
    Bitfield {
        underlying: u32,
        length: u8,
        position: u8,
    },
    /// Unresolvable / unsupported placeholder.
    Unknown,
}

#[derive(Debug, Clone)]
#[allow(dead_code)]
pub(crate) struct CvField {
    pub name: String,
    pub offset: u64,
    pub field_type: u32,
}

/// Convert a `CvType` table to a [`PdbTypes`] resolving forward references
/// up to a fixed point.
pub(crate) fn lower_cv_table(table: &BTreeMap<u32, CvType>) -> PdbTypes {
    let mut out = PdbTypes::default();

    // Iterate until no more changes — forward refs initially lower to empty
    // shells, then on subsequent passes get patched once their real
    // definition has populated `out.by_index`.
    for _ in 0..8 {
        let mut changed = false;
        for (&idx, cv) in table {
            let ty = lower_one(cv, table, &out);
            match out.by_index.get(&idx) {
                Some(prev) if prev == &ty => {}
                _ => {
                    out.by_index.insert(idx, ty);
                    changed = true;
                }
            }
        }
        if !changed {
            break;
        }
    }

    // Populate top-level lookups.
    for (idx, cv) in table {
        match cv {
            CvType::Struct {
                name, forward_ref, ..
            }
            | CvType::Union {
                name, forward_ref, ..
            } if !forward_ref => {
                if let Some(t) = out.by_index.get(idx) {
                    out.structs.insert(name.clone(), t.clone());
                }
            }
            CvType::Enum {
                name,
                variants,
                forward_ref,
                ..
            } if !forward_ref => {
                out.enums.insert(name.clone(), variants.clone());
            }
            CvType::Procedure {
                return_type,
                argument_list,
            } => {
                let ret = return_type
                    .and_then(|r| out.by_index.get(&r).cloned())
                    .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
                let params = match table.get(argument_list) {
                    Some(CvType::ArgList { args }) => args
                        .iter()
                        .map(|a| {
                            out.by_index
                                .get(a)
                                .cloned()
                                .unwrap_or(Type::Primitive(PrimitiveType::Unknown))
                        })
                        .collect(),
                    _ => Vec::new(),
                };
                out.procedures.insert(
                    *idx,
                    ProcSig {
                        return_type: ret,
                        params,
                    },
                );
            }
            _ => {}
        }
    }

    out
}

fn lower_one(cv: &CvType, table: &BTreeMap<u32, CvType>, out: &PdbTypes) -> Type {
    match cv {
        CvType::Primitive(t) => t.clone(),
        CvType::Pointer { underlying } => {
            let inner = resolve(*underlying, table, out);
            Type::Ptr(Box::new(inner))
        }
        CvType::Array {
            element,
            len_bytes,
        } => {
            let elem = resolve(*element, table, out);
            let elem_size = elem.size().map(|s| s as u32).unwrap_or(0);
            let count = if elem_size > 0 {
                Some((*len_bytes / elem_size) as u64)
            } else {
                None
            };
            Type::Array {
                element: Box::new(elem),
                size: count,
            }
        }
        CvType::Struct {
            name,
            fields,
            forward_ref,
            ..
        } => {
            if *forward_ref {
                // Try to find a non-forward variant elsewhere with same name.
                if let Some(real) = find_named_struct(name, table, out) {
                    real
                } else {
                    Type::Struct {
                        name: name.clone(),
                        fields: Vec::new(),
                    }
                }
            } else {
                let fs = fields
                    .iter()
                    .map(|f| StructFieldType {
                        name: f.name.clone(),
                        ty: resolve(f.field_type, table, out),
                        offset: f.offset,
                    })
                    .collect();
                Type::Struct {
                    name: name.clone(),
                    fields: fs,
                }
            }
        }
        CvType::Union { name, fields, .. } => {
            // Lower as a struct with all-zero offsets — sufficient for
            // downstream consumers that just need name + member types.
            let fs = fields
                .iter()
                .map(|f| StructFieldType {
                    name: f.name.clone(),
                    ty: resolve(f.field_type, table, out),
                    offset: 0,
                })
                .collect();
            Type::Struct {
                name: name.clone(),
                fields: fs,
            }
        }
        CvType::Enum {
            name, underlying, ..
        } => {
            // Represent as the underlying integer type, named for clarity by
            // the C printer via separate lookup.
            let _ = name;
            resolve(*underlying, table, out)
        }
        CvType::Procedure {
            return_type,
            argument_list,
        } => {
            let ret = return_type
                .map(|r| resolve(r, table, out))
                .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
            let params = match table.get(argument_list) {
                Some(CvType::ArgList { args }) => {
                    args.iter().map(|a| resolve(*a, table, out)).collect()
                }
                _ => Vec::new(),
            };
            Type::FuncPtr {
                params,
                return_type: Box::new(ret),
                variadic: false,
            }
        }
        CvType::ArgList { .. } => Type::Primitive(PrimitiveType::Unknown),
        CvType::Bitfield { underlying, .. } => resolve(*underlying, table, out),
        CvType::Unknown => Type::Primitive(PrimitiveType::Unknown),
    }
}

fn resolve(idx: u32, table: &BTreeMap<u32, CvType>, out: &PdbTypes) -> Type {
    if let Some(t) = out.by_index.get(&idx) {
        return t.clone();
    }
    if let Some(cv) = table.get(&idx) {
        return lower_one(cv, table, out);
    }
    Type::Primitive(PrimitiveType::Unknown)
}

fn find_named_struct(
    name: &str,
    table: &BTreeMap<u32, CvType>,
    out: &PdbTypes,
) -> Option<Type> {
    for (idx, cv) in table {
        if let CvType::Struct {
            name: n,
            forward_ref: false,
            ..
        } = cv
        {
            if n == name {
                return out.by_index.get(idx).cloned();
            }
        }
    }
    None
}

/// Map a CodeView primitive kind to an unlace `Type`.
fn primitive_to_type(kind: pdb::PrimitiveKind, indirection: Option<pdb::Indirection>) -> Type {
    let base = match kind {
        pdb::PrimitiveKind::Void => Type::Primitive(PrimitiveType::Unknown),
        pdb::PrimitiveKind::Char | pdb::PrimitiveKind::I8 | pdb::PrimitiveKind::RChar => {
            Type::int(1)
        }
        pdb::PrimitiveKind::UChar | pdb::PrimitiveKind::U8 => Type::uint(1),
        pdb::PrimitiveKind::I16 | pdb::PrimitiveKind::Short => Type::int(2),
        pdb::PrimitiveKind::U16 | pdb::PrimitiveKind::UShort => Type::uint(2),
        pdb::PrimitiveKind::I32 | pdb::PrimitiveKind::Long => Type::int(4),
        pdb::PrimitiveKind::U32 | pdb::PrimitiveKind::ULong => Type::uint(4),
        pdb::PrimitiveKind::I64 | pdb::PrimitiveKind::Quad => Type::int(8),
        pdb::PrimitiveKind::U64 | pdb::PrimitiveKind::UQuad => Type::uint(8),
        pdb::PrimitiveKind::F32 => Type::Primitive(PrimitiveType::Float),
        pdb::PrimitiveKind::F64 => Type::Primitive(PrimitiveType::Double),
        pdb::PrimitiveKind::Bool8 => Type::Primitive(PrimitiveType::Bool),
        _ => Type::Primitive(PrimitiveType::Unknown),
    };
    match indirection {
        Some(_) => Type::Ptr(Box::new(base)),
        None => base,
    }
}

/// Walk a real PDB and lower its TPI stream to a [`PdbTypes`] map.
pub fn import_pdb_types(pdb_path: &Path) -> Result<PdbTypes, LoadError> {
    let file = std::fs::File::open(pdb_path)?;
    let mut pdb = PDB::open(file)?;
    let type_info = pdb.type_information()?;

    let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
    let mut iter = type_info.iter();
    while let Some(typ) = iter.next()? {
        let idx_raw: u32 = u32::from(typ.index());
        let parsed = match typ.parse() {
            Ok(p) => p,
            Err(_) => continue,
        };
        if let Some(cv) = lower_typedata(&parsed) {
            table.insert(idx_raw, cv);
        }
    }

    Ok(lower_cv_table(&table))
}

fn lower_typedata(td: &TypeData<'_>) -> Option<CvType> {
    Some(match td {
        TypeData::Primitive(p) => CvType::Primitive(primitive_to_type(p.kind, p.indirection)),
        TypeData::Pointer(p) => CvType::Pointer {
            underlying: ti_to_u32(p.underlying_type),
        },
        TypeData::Array(a) => CvType::Array {
            element: ti_to_u32(a.element_type),
            len_bytes: a.dimensions.last().copied().unwrap_or(0),
        },
        TypeData::Class(c) => CvType::Struct {
            name: c.name.to_string().to_string(),
            size: c.size,
            fields: Vec::new(),
            forward_ref: c.properties.forward_reference(),
        },
        TypeData::Union(u) => CvType::Union {
            name: u.name.to_string().to_string(),
            size: u.size,
            fields: Vec::new(),
            forward_ref: u.properties.forward_reference(),
        },
        TypeData::Enumeration(e) => CvType::Enum {
            name: e.name.to_string().to_string(),
            underlying: ti_to_u32(e.underlying_type),
            variants: Vec::new(),
            forward_ref: e.properties.forward_reference(),
        },
        TypeData::Procedure(p) => CvType::Procedure {
            return_type: p.return_type.map(ti_to_u32),
            argument_list: ti_to_u32(p.argument_list),
        },
        TypeData::ArgumentList(al) => CvType::ArgList {
            args: al.arguments.iter().copied().map(ti_to_u32).collect(),
        },
        TypeData::Bitfield(b) => CvType::Bitfield {
            underlying: ti_to_u32(b.underlying_type),
            length: b.length,
            position: b.position,
        },
        _ => return None,
    })
}

fn ti_to_u32(t: TypeIndex) -> u32 {
    u32::from(t)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn primitive_int(width: u8) -> CvType {
        CvType::Primitive(Type::int(width))
    }

    #[test]
    fn lowers_lf_structure() {
        let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
        table.insert(0x1000, primitive_int(4));
        table.insert(
            0x1001,
            CvType::Struct {
                name: "Point".into(),
                size: 8,
                fields: vec![
                    CvField {
                        name: "x".into(),
                        offset: 0,
                        field_type: 0x1000,
                    },
                    CvField {
                        name: "y".into(),
                        offset: 4,
                        field_type: 0x1000,
                    },
                ],
                forward_ref: false,
            },
        );

        let out = lower_cv_table(&table);
        let s = out.structs.get("Point").expect("Point struct present");
        match s {
            Type::Struct { name, fields } => {
                assert_eq!(name, "Point");
                assert_eq!(fields.len(), 2);
                assert_eq!(fields[0].name, "x");
                assert_eq!(fields[0].offset, 0);
                assert_eq!(fields[1].name, "y");
                assert_eq!(fields[1].offset, 4);
            }
            _ => panic!("expected struct"),
        }
    }

    #[test]
    fn lowers_lf_enum() {
        let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
        table.insert(0x2000, primitive_int(4));
        table.insert(
            0x2001,
            CvType::Enum {
                name: "Color".into(),
                underlying: 0x2000,
                variants: vec![("RED".into(), 0), ("GREEN".into(), 1), ("BLUE".into(), 2)],
                forward_ref: false,
            },
        );

        let out = lower_cv_table(&table);
        let v = out.enums.get("Color").expect("Color enum");
        assert_eq!(v.len(), 3);
        assert_eq!(v[0], ("RED".into(), 0));
        assert_eq!(v[2], ("BLUE".into(), 2));
        // The lowered Type for the enum is its underlying integer.
        assert_eq!(out.by_index[&0x2001], Type::int(4));
    }

    #[test]
    fn resolves_forward_reference() {
        let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
        table.insert(0x3000, primitive_int(4));

        // Forward-ref struct first.
        table.insert(
            0x3001,
            CvType::Struct {
                name: "Node".into(),
                size: 0,
                fields: Vec::new(),
                forward_ref: true,
            },
        );
        // Real struct definition later.
        table.insert(
            0x3002,
            CvType::Struct {
                name: "Node".into(),
                size: 8,
                fields: vec![CvField {
                    name: "value".into(),
                    offset: 0,
                    field_type: 0x3000,
                }],
                forward_ref: false,
            },
        );

        let out = lower_cv_table(&table);
        // The forward-ref entry should be patched to the real definition.
        let fwd = &out.by_index[&0x3001];
        match fwd {
            Type::Struct { name, fields } => {
                assert_eq!(name, "Node");
                assert_eq!(fields.len(), 1, "forward ref resolved to full def");
                assert_eq!(fields[0].name, "value");
            }
            _ => panic!("expected struct"),
        }
    }

    #[test]
    fn lowers_procedure_signature() {
        let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
        table.insert(0x4000, primitive_int(4));
        table.insert(0x4001, primitive_int(8));
        table.insert(
            0x4002,
            CvType::ArgList {
                args: vec![0x4000, 0x4001],
            },
        );
        table.insert(
            0x4003,
            CvType::Procedure {
                return_type: Some(0x4000),
                argument_list: 0x4002,
            },
        );

        let out = lower_cv_table(&table);
        let sig = out.procedures.get(&0x4003).expect("procedure lowered");
        assert_eq!(sig.return_type, Type::int(4));
        assert_eq!(sig.params, vec![Type::int(4), Type::int(8)]);
    }

    #[test]
    fn lowers_pointer_and_array() {
        let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
        table.insert(0x5000, primitive_int(4));
        table.insert(0x5001, CvType::Pointer { underlying: 0x5000 });
        table.insert(
            0x5002,
            CvType::Array {
                element: 0x5000,
                len_bytes: 16,
            },
        );

        let out = lower_cv_table(&table);
        assert!(matches!(out.by_index[&0x5001], Type::Ptr(_)));
        match &out.by_index[&0x5002] {
            Type::Array {
                element,
                size: Some(4),
            } => assert_eq!(**element, Type::int(4)),
            other => panic!("expected sized array, got {other:?}"),
        }
    }

    #[test]
    fn primitive_kind_conversion() {
        assert_eq!(primitive_to_type(pdb::PrimitiveKind::I32, None), Type::int(4));
        assert_eq!(
            primitive_to_type(pdb::PrimitiveKind::U64, None),
            Type::uint(8)
        );
        // Pointer-to-i32 via indirection.
        let p = primitive_to_type(pdb::PrimitiveKind::I32, Some(pdb::Indirection::Near32));
        assert!(p.is_pointer());
    }
}
