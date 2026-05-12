//! CodeView TPI/IPI → unlace `Type` conversion.
//!
//! Walks the type information stream of a Microsoft PDB and lowers
//! `LF_STRUCTURE`, `LF_UNION`, `LF_ENUM`, `LF_POINTER`, `LF_PROCEDURE`,
//! `LF_ARRAY` records into the unlace `Type` model. Forward references are
//! resolved via a fixpoint pass.

use std::collections::BTreeMap;
use std::path::Path;

use pdb::{FallibleIterator, IdData, PDB, TypeData, TypeIndex};

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
    /// Function/member-function IDs from the PDB IPI stream keyed by IPI item id.
    pub functions: BTreeMap<u32, PdbFunctionId>,
    /// BuildInfo records from the PDB IPI stream keyed by IPI item id.
    pub build_infos: BTreeMap<u32, PdbBuildInfo>,
    /// String IDs from the PDB IPI stream keyed by IPI item id.
    pub strings: BTreeMap<u32, String>,
}

/// A function signature lowered from `LF_PROCEDURE`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProcSig {
    pub return_type: Type,
    pub params: Vec<Type>,
}

/// Per-function identifier lowered from the PDB IPI stream.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PdbFunctionId {
    /// IPI item id (0x1000-based).
    pub id: u32,
    /// Function name carried by LF_FUNC_ID/LF_MFUNC_ID.
    pub name: String,
    /// Procedure/member-function type index in the TPI stream.
    pub function_type: u32,
    /// Optional enclosing scope id for LF_FUNC_ID.
    pub scope: Option<u32>,
    /// Optional parent class/type index for LF_MFUNC_ID.
    pub parent: Option<u32>,
    /// Resolved signature when `function_type` points at an LF_PROCEDURE lowered from TPI.
    pub signature: Option<ProcSig>,
}

/// BuildInfo record lowered from the PDB IPI stream.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PdbBuildInfo {
    /// IPI item id (0x1000-based).
    pub id: u32,
    /// Raw argument ids carried by LF_BUILDINFO.
    pub arguments: Vec<u32>,
    /// Arguments resolved through LF_STRING_ID records when possible.
    pub resolved_arguments: Vec<String>,
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
        CvType::Array { element, len_bytes } => {
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

fn find_named_struct(name: &str, table: &BTreeMap<u32, CvType>, out: &PdbTypes) -> Option<Type> {
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

    let mut out = lower_cv_table(&table);
    import_pdb_ipi(&mut pdb, &mut out)?;
    Ok(out)
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
fn id_to_u32(id: pdb::IdIndex) -> u32 {
    u32::from(id)
}

fn import_pdb_ipi<'s, R: pdb::Source<'s> + 's>(
    pdb: &mut PDB<'s, R>,
    out: &mut PdbTypes,
) -> Result<(), LoadError> {
    let id_info = match pdb.id_information() {
        Ok(info) => info,
        // Some stripped/old PDBs omit IPI entirely; TPI import should still work.
        Err(pdb::Error::StreamNotFound(_)) => return Ok(()),
        Err(e) => return Err(e.into()),
    };

    let mut function_ids: BTreeMap<u32, (String, u32, Option<u32>, Option<u32>)> = BTreeMap::new();
    let mut build_infos: BTreeMap<u32, Vec<u32>> = BTreeMap::new();
    let mut strings: BTreeMap<u32, String> = BTreeMap::new();

    let mut iter = id_info.iter();
    while let Some(item) = iter.next()? {
        let id = id_to_u32(item.index());
        let parsed = match item.parse() {
            Ok(p) => p,
            Err(_) => continue,
        };
        match parsed {
            IdData::Function(f) => {
                function_ids.insert(
                    id,
                    (
                        f.name.to_string().to_string(),
                        ti_to_u32(f.function_type),
                        f.scope.map(id_to_u32),
                        None,
                    ),
                );
            }
            IdData::MemberFunction(f) => {
                function_ids.insert(
                    id,
                    (
                        f.name.to_string().to_string(),
                        ti_to_u32(f.function_type),
                        None,
                        Some(ti_to_u32(f.parent)),
                    ),
                );
            }
            IdData::BuildInfo(b) => {
                build_infos.insert(id, b.arguments.into_iter().map(id_to_u32).collect());
            }
            IdData::String(s) => {
                strings.insert(id, s.name.to_string().to_string());
            }
            _ => {}
        }
    }

    out.strings = strings;
    attach_ipi_function_ids(out, function_ids);
    attach_ipi_build_infos(out, build_infos);

    Ok(())
}

fn attach_ipi_function_ids(
    out: &mut PdbTypes,
    function_ids: BTreeMap<u32, (String, u32, Option<u32>, Option<u32>)>,
) {
    out.functions = function_ids
        .into_iter()
        .map(|(id, (name, function_type, scope, parent))| {
            let signature = out.procedures.get(&function_type).cloned();
            (
                id,
                PdbFunctionId {
                    id,
                    name,
                    function_type,
                    scope,
                    parent,
                    signature,
                },
            )
        })
        .collect();
}

fn attach_ipi_build_infos(out: &mut PdbTypes, build_infos: BTreeMap<u32, Vec<u32>>) {
    out.build_infos = build_infos
        .into_iter()
        .map(|(id, arguments)| {
            let resolved_arguments = arguments
                .iter()
                .filter_map(|arg| out.strings.get(arg).cloned())
                .collect();
            (
                id,
                PdbBuildInfo {
                    id,
                    arguments,
                    resolved_arguments,
                },
            )
        })
        .collect();
}

// ---------------------------------------------------------------------------
// Low-level TPI stream walker.
//
// Decodes CodeView leaf records directly from a byte slice, without going
// through the `pdb` crate. Useful when the host has the raw TPI stream
// data (e.g. extracted from a `.pdb` MSF stream) and just wants the
// aggregate record shapes for analysis or tooling.
//
// Layout of one record (PE/COFF CodeView):
//   +0  u16  length     // bytes that follow (does NOT include the length
//                       // field itself); kind is the first two of those.
//   +2  u16  leaf_kind  // e.g. LF_STRUCTURE
//   +4  ...             // payload of (length - 2) bytes
//
// Numeric leaves: a u16 prefix decides how to read the value. Values
// < 0x8000 are the value itself; otherwise the prefix encodes the width
// (LF_CHAR=0x8000, LF_SHORT=0x8001, LF_USHORT=0x8002, LF_LONG=0x8003,
// LF_ULONG=0x8004, LF_QUADWORD=0x8009, LF_UQUADWORD=0x800A) of the
// following little-endian integer.
// ---------------------------------------------------------------------------

/// Errors returned by the raw TPI walker.
#[derive(Debug, thiserror::Error, PartialEq, Eq)]
pub enum PdbError {
    /// Reader hit end-of-stream mid-record.
    #[error("unexpected end of stream at offset {0}")]
    UnexpectedEof(usize),

    /// A `length` field encoded a record extending beyond the stream.
    #[error("record length {len} at offset {at} exceeds remaining stream")]
    BadLength { at: usize, len: usize },

    /// A numeric leaf used a tag the walker doesn't understand.
    #[error("unsupported numeric leaf tag {0:#06x}")]
    UnsupportedNumericLeaf(u16),

    /// A null-terminated string ran past the record's payload boundary.
    #[error("unterminated string in record at offset {0}")]
    UnterminatedString(usize),
}

/// High-level kind of a top-level [`PdbType`] decoded by [`walk_tpi`].
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PdbTypeKind {
    /// `LF_STRUCTURE` (0x1505).
    Structure,
    /// `LF_CLASS` (0x1504).
    Class,
    /// `LF_UNION` (0x1506).
    Union,
    /// `LF_ENUM` (0x1507).
    Enum,
}

/// One member decoded from an `LF_FIELDLIST` referenced by an aggregate.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PdbField {
    /// Member name (UTF-8; raw PDB bytes are reinterpreted lossily).
    pub name: String,
    /// Byte offset from the start of the parent aggregate. Always 0 for
    /// union members.
    pub offset: u64,
    /// Type index (CodeView TI) of the member's type.
    pub field_type: u32,
}

/// Top-level aggregate type decoded from a TPI stream by [`walk_tpi`].
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PdbType {
    /// Aggregate name as it appears in the leaf.
    pub name: String,
    /// Reported size in bytes from the leaf's numeric leaf field. For
    /// `Enum` this is 0 (the leaf has no size; the underlying type
    /// supplies width).
    pub size: u32,
    /// Discriminant identifying which CodeView leaf produced this record.
    pub kind: PdbTypeKind,
    /// Members extracted from the aggregate's `LF_FIELDLIST`. Empty for
    /// forward references or aggregates pointing at a missing field list.
    pub fields: Vec<PdbField>,
}

// CodeView leaf kinds we recognize.
const LF_CLASS: u16 = 0x1504;
const LF_STRUCTURE: u16 = 0x1505;
const LF_UNION: u16 = 0x1506;
const LF_ENUM: u16 = 0x1507;
const LF_FIELDLIST: u16 = 0x1203;
const LF_MEMBER: u16 = 0x150D;

// Numeric-leaf tag space.
const LF_NUMERIC_CHAR: u16 = 0x8000;
const LF_NUMERIC_SHORT: u16 = 0x8001;
const LF_NUMERIC_USHORT: u16 = 0x8002;
const LF_NUMERIC_LONG: u16 = 0x8003;
const LF_NUMERIC_ULONG: u16 = 0x8004;
const LF_NUMERIC_QUAD: u16 = 0x8009;
const LF_NUMERIC_UQUAD: u16 = 0x800A;

/// Walk a raw TPI stream of CodeView leaf records and return every
/// `LF_STRUCTURE` / `LF_CLASS` / `LF_UNION` / `LF_ENUM` aggregate, with
/// fields resolved via the referenced `LF_FIELDLIST`.
///
/// The input is interpreted as a contiguous sequence of records starting at
/// offset 0; pass the bytes *after* the TPI header. Unknown leaf kinds are
/// skipped over using their `length` prefix.
pub fn walk_tpi(stream_data: &[u8]) -> Result<Vec<PdbType>, PdbError> {
    // First pass: collect every record's bounds + kind. Under the
    // CodeView convention the first record is TI 0x1000 and each
    // subsequent record gets the next TI; we use that for field-list
    // resolution.
    let mut records: Vec<RawRecord> = Vec::new();
    let mut cursor = 0usize;
    while cursor < stream_data.len() {
        let rec = read_record(stream_data, cursor)?;
        cursor = rec.next;
        records.push(rec);
    }

    let mut ti_to_idx: BTreeMap<u32, usize> = BTreeMap::new();
    for (i, _) in records.iter().enumerate() {
        ti_to_idx.insert(0x1000 + i as u32, i);
    }

    // Second pass: decode aggregates.
    let mut out = Vec::new();
    for rec in &records {
        let payload = &stream_data[rec.payload_start..rec.payload_end];
        match rec.kind {
            LF_STRUCTURE | LF_CLASS => {
                let agg = decode_struct_or_class(payload, rec.payload_start)?;
                let fields = resolve_fields(agg.field_list_ti, &records, &ti_to_idx, stream_data)?;
                out.push(PdbType {
                    name: agg.name,
                    size: agg.size,
                    kind: if rec.kind == LF_CLASS {
                        PdbTypeKind::Class
                    } else {
                        PdbTypeKind::Structure
                    },
                    fields,
                });
            }
            LF_UNION => {
                let u = decode_union(payload, rec.payload_start)?;
                let fields = resolve_fields(u.field_list_ti, &records, &ti_to_idx, stream_data)?;
                out.push(PdbType {
                    name: u.name,
                    size: u.size,
                    kind: PdbTypeKind::Union,
                    fields,
                });
            }
            LF_ENUM => {
                let e = decode_enum(payload, rec.payload_start)?;
                let fields = resolve_fields(e.field_list_ti, &records, &ti_to_idx, stream_data)?;
                out.push(PdbType {
                    name: e.name,
                    size: 0,
                    kind: PdbTypeKind::Enum,
                    fields,
                });
            }
            _ => {}
        }
    }
    Ok(out)
}

#[derive(Debug, Clone, Copy)]
struct RawRecord {
    kind: u16,
    payload_start: usize,
    payload_end: usize,
    next: usize,
}

fn read_record(buf: &[u8], at: usize) -> Result<RawRecord, PdbError> {
    let len = read_u16(buf, at)? as usize;
    // length covers kind + payload, so total record size = 2 + len.
    let total_end = at
        .checked_add(2 + len)
        .ok_or(PdbError::BadLength { at, len })?;
    if total_end > buf.len() {
        return Err(PdbError::BadLength { at, len });
    }
    let kind = read_u16(buf, at + 2)?;
    Ok(RawRecord {
        kind,
        payload_start: at + 4,
        payload_end: total_end,
        next: total_end,
    })
}

struct AggregateHeader {
    size: u32,
    field_list_ti: u32,
    name: String,
}

fn decode_struct_or_class(payload: &[u8], abs_off: usize) -> Result<AggregateHeader, PdbError> {
    // count u16, property u16, field_list u32, derived u32, vshape u32,
    // numeric size, name.
    let _count = read_u16(payload, 0)?;
    let _property = read_u16(payload, 2)?;
    let field_list_ti = read_u32(payload, 4)?;
    let _derived = read_u32(payload, 8)?;
    let _vshape = read_u32(payload, 12)?;
    let (size, after_size) = read_numeric_leaf(payload, 16)?;
    let name = read_cstr(payload, after_size, abs_off)?;
    Ok(AggregateHeader {
        size: size as u32,
        field_list_ti,
        name,
    })
}

fn decode_union(payload: &[u8], abs_off: usize) -> Result<AggregateHeader, PdbError> {
    // count u16, property u16, field_list u32, numeric size, name.
    let _count = read_u16(payload, 0)?;
    let _property = read_u16(payload, 2)?;
    let field_list_ti = read_u32(payload, 4)?;
    let (size, after_size) = read_numeric_leaf(payload, 8)?;
    let name = read_cstr(payload, after_size, abs_off)?;
    Ok(AggregateHeader {
        size: size as u32,
        field_list_ti,
        name,
    })
}

struct EnumHeader {
    field_list_ti: u32,
    name: String,
}

fn decode_enum(payload: &[u8], abs_off: usize) -> Result<EnumHeader, PdbError> {
    // count u16, property u16, underlying_type u32, field_list u32, name.
    let _count = read_u16(payload, 0)?;
    let _property = read_u16(payload, 2)?;
    let _underlying = read_u32(payload, 4)?;
    let field_list_ti = read_u32(payload, 8)?;
    let name = read_cstr(payload, 12, abs_off)?;
    Ok(EnumHeader {
        field_list_ti,
        name,
    })
}

fn resolve_fields(
    field_list_ti: u32,
    records: &[RawRecord],
    ti_to_idx: &BTreeMap<u32, usize>,
    stream: &[u8],
) -> Result<Vec<PdbField>, PdbError> {
    // 0 is the "no field list" sentinel; some forward refs use this.
    if field_list_ti == 0 {
        return Ok(Vec::new());
    }
    let Some(&idx) = ti_to_idx.get(&field_list_ti) else {
        return Ok(Vec::new());
    };
    let rec = &records[idx];
    if rec.kind != LF_FIELDLIST {
        return Ok(Vec::new());
    }
    let payload = &stream[rec.payload_start..rec.payload_end];
    decode_field_list(payload, rec.payload_start)
}

fn decode_field_list(payload: &[u8], abs_off: usize) -> Result<Vec<PdbField>, PdbError> {
    let mut out = Vec::new();
    let mut i = 0usize;
    while i < payload.len() {
        // Skip pad bytes (0xF0 | n where n is bytes-to-skip including
        // this one).
        let b = payload[i];
        if b >= 0xF0 {
            let pad = (b & 0x0F) as usize;
            if pad == 0 || i + pad > payload.len() {
                break;
            }
            i += pad;
            continue;
        }
        // Each subrecord starts with a u16 leaf kind (no length prefix).
        if i + 2 > payload.len() {
            return Err(PdbError::UnexpectedEof(abs_off + i));
        }
        let leaf = read_u16(payload, i)?;
        i += 2;
        match leaf {
            LF_MEMBER => {
                // attribute u16, field_type u32 (TI), numeric offset, name.
                if i + 6 > payload.len() {
                    return Err(PdbError::UnexpectedEof(abs_off + i));
                }
                let _attribute = read_u16(payload, i)?;
                let field_type = read_u32(payload, i + 2)?;
                let (offset, after_off) = read_numeric_leaf(payload, i + 6)?;
                let name = read_cstr(payload, after_off, abs_off)?;
                let next = name_end(payload, after_off);
                out.push(PdbField {
                    name,
                    offset: offset as u64,
                    field_type,
                });
                i = next;
            }
            _ => {
                // We don't model other subrecord kinds here; without a
                // length prefix, we can't safely skip. Stop parsing this
                // field list rather than mis-aligning.
                break;
            }
        }
    }
    Ok(out)
}

fn read_u16(buf: &[u8], at: usize) -> Result<u16, PdbError> {
    if at + 2 > buf.len() {
        return Err(PdbError::UnexpectedEof(at));
    }
    Ok(u16::from_le_bytes([buf[at], buf[at + 1]]))
}

fn read_u32(buf: &[u8], at: usize) -> Result<u32, PdbError> {
    if at + 4 > buf.len() {
        return Err(PdbError::UnexpectedEof(at));
    }
    Ok(u32::from_le_bytes([
        buf[at],
        buf[at + 1],
        buf[at + 2],
        buf[at + 3],
    ]))
}

/// Decode a CodeView "numeric leaf" at `at`. Returns `(value_as_i64, next_offset)`.
fn read_numeric_leaf(buf: &[u8], at: usize) -> Result<(i64, usize), PdbError> {
    let tag = read_u16(buf, at)?;
    if tag < 0x8000 {
        // The tag IS the value (u16, zero-extended).
        return Ok((tag as i64, at + 2));
    }
    let body = at + 2;
    let (val, end) = match tag {
        LF_NUMERIC_CHAR => {
            if body + 1 > buf.len() {
                return Err(PdbError::UnexpectedEof(body));
            }
            ((buf[body] as i8) as i64, body + 1)
        }
        LF_NUMERIC_SHORT => {
            let v = read_u16(buf, body)? as i16;
            (v as i64, body + 2)
        }
        LF_NUMERIC_USHORT => {
            let v = read_u16(buf, body)?;
            (v as i64, body + 2)
        }
        LF_NUMERIC_LONG => {
            let v = read_u32(buf, body)? as i32;
            (v as i64, body + 4)
        }
        LF_NUMERIC_ULONG => {
            let v = read_u32(buf, body)?;
            (v as i64, body + 4)
        }
        LF_NUMERIC_QUAD | LF_NUMERIC_UQUAD => {
            if body + 8 > buf.len() {
                return Err(PdbError::UnexpectedEof(body));
            }
            let mut bs = [0u8; 8];
            bs.copy_from_slice(&buf[body..body + 8]);
            (i64::from_le_bytes(bs), body + 8)
        }
        other => return Err(PdbError::UnsupportedNumericLeaf(other)),
    };
    Ok((val, end))
}

/// Read a NUL-terminated UTF-8(-ish) string starting at `at` within `buf`.
fn read_cstr(buf: &[u8], at: usize, abs_off: usize) -> Result<String, PdbError> {
    if at > buf.len() {
        return Err(PdbError::UnexpectedEof(abs_off + at));
    }
    let tail = &buf[at..];
    let nul = tail
        .iter()
        .position(|&b| b == 0)
        .ok_or(PdbError::UnterminatedString(abs_off + at))?;
    Ok(String::from_utf8_lossy(&tail[..nul]).into_owned())
}

/// Offset of the byte *after* the NUL terminator of the string starting at `at`.
fn name_end(buf: &[u8], at: usize) -> usize {
    match buf[at..].iter().position(|&b| b == 0) {
        Some(p) => at + p + 1,
        None => buf.len(),
    }
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
    fn attaches_ipi_function_ids_to_procedure_signatures() {
        let mut out = PdbTypes::default();
        out.procedures.insert(
            0x4003,
            ProcSig {
                return_type: Type::int(4),
                params: vec![Type::int(4), Type::int(8)],
            },
        );

        let function_ids = BTreeMap::from([(0x1000, ("main".to_string(), 0x4003, None, None))]);
        attach_ipi_function_ids(&mut out, function_ids);

        let func = out.functions.get(&0x1000).expect("function id present");
        assert_eq!(func.name, "main");
        assert_eq!(func.function_type, 0x4003);
        assert_eq!(
            func.signature.as_ref().unwrap().params,
            vec![Type::int(4), Type::int(8)]
        );
    }

    #[test]
    fn resolves_buildinfo_arguments_through_string_ids() {
        let mut out = PdbTypes::default();
        out.strings.insert(0x1000, "cl.exe".into());
        out.strings.insert(0x1001, "/O2".into());

        attach_ipi_build_infos(
            &mut out,
            BTreeMap::from([(0x1002, vec![0x1000, 0x1001, 0xDEAD])]),
        );

        let build = out.build_infos.get(&0x1002).expect("build info present");
        assert_eq!(build.arguments, vec![0x1000, 0x1001, 0xDEAD]);
        assert_eq!(
            build.resolved_arguments,
            vec!["cl.exe".to_string(), "/O2".to_string()]
        );
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

    // -------------------------------------------------------------------
    // Raw TPI walker tests — synthesize byte streams matching the on-disk
    // CodeView leaf format and assert that `walk_tpi` produces the
    // expected aggregate / member shapes.
    // -------------------------------------------------------------------

    /// Build one record: emits the `length` u16 (= 2 + payload.len()),
    /// the leaf kind u16, then the payload.
    fn record(kind: u16, payload: &[u8]) -> Vec<u8> {
        let len = (2 + payload.len()) as u16;
        let mut v = Vec::with_capacity(2 + 2 + payload.len());
        v.extend_from_slice(&len.to_le_bytes());
        v.extend_from_slice(&kind.to_le_bytes());
        v.extend_from_slice(payload);
        v
    }

    /// Build an LF_MEMBER subrecord (leaf kind included, no outer length
    /// prefix — field-list subrecords don't have one).
    fn member_subrecord(name: &str, offset: u16, field_type: u32) -> Vec<u8> {
        let mut p = Vec::new();
        p.extend_from_slice(&LF_MEMBER.to_le_bytes());
        p.extend_from_slice(&0u16.to_le_bytes()); // attribute
        p.extend_from_slice(&field_type.to_le_bytes());
        // numeric leaf: small offset fits in u16 tag space (< 0x8000).
        p.extend_from_slice(&offset.to_le_bytes());
        p.extend_from_slice(name.as_bytes());
        p.push(0);
        p
    }

    fn struct_payload(field_list_ti: u32, size: u16, name: &str) -> Vec<u8> {
        let mut p = Vec::new();
        p.extend_from_slice(&0u16.to_le_bytes()); // count
        p.extend_from_slice(&0u16.to_le_bytes()); // property
        p.extend_from_slice(&field_list_ti.to_le_bytes());
        p.extend_from_slice(&0u32.to_le_bytes()); // derived
        p.extend_from_slice(&0u32.to_le_bytes()); // vshape
        p.extend_from_slice(&size.to_le_bytes()); // numeric leaf (<0x8000)
        p.extend_from_slice(name.as_bytes());
        p.push(0);
        p
    }

    fn union_payload(field_list_ti: u32, size: u16, name: &str) -> Vec<u8> {
        let mut p = Vec::new();
        p.extend_from_slice(&0u16.to_le_bytes()); // count
        p.extend_from_slice(&0u16.to_le_bytes()); // property
        p.extend_from_slice(&field_list_ti.to_le_bytes());
        p.extend_from_slice(&size.to_le_bytes()); // numeric leaf
        p.extend_from_slice(name.as_bytes());
        p.push(0);
        p
    }

    fn enum_payload(underlying_ti: u32, field_list_ti: u32, name: &str) -> Vec<u8> {
        let mut p = Vec::new();
        p.extend_from_slice(&0u16.to_le_bytes()); // count
        p.extend_from_slice(&0u16.to_le_bytes()); // property
        p.extend_from_slice(&underlying_ti.to_le_bytes());
        p.extend_from_slice(&field_list_ti.to_le_bytes());
        p.extend_from_slice(name.as_bytes());
        p.push(0);
        p
    }

    #[test]
    fn walk_tpi_decodes_struct() {
        // TI 0x1000: LF_FIELDLIST with two LF_MEMBER subrecords.
        // TI 0x1001: LF_STRUCTURE referencing 0x1000.
        let fl_payload = {
            let mut p = Vec::new();
            p.extend_from_slice(&member_subrecord("x", 0, 0x0074)); // T_INT4
            p.extend_from_slice(&member_subrecord("y", 4, 0x0074));
            p
        };
        let mut stream = record(LF_FIELDLIST, &fl_payload);
        stream.extend(record(LF_STRUCTURE, &struct_payload(0x1000, 8, "Point")));

        let types = walk_tpi(&stream).expect("walk succeeds");
        assert_eq!(types.len(), 1);
        let t = &types[0];
        assert_eq!(t.name, "Point");
        assert_eq!(t.size, 8);
        assert_eq!(t.kind, PdbTypeKind::Structure);
        assert_eq!(t.fields.len(), 2);
        assert_eq!(t.fields[0].name, "x");
        assert_eq!(t.fields[0].offset, 0);
        assert_eq!(t.fields[0].field_type, 0x0074);
        assert_eq!(t.fields[1].name, "y");
        assert_eq!(t.fields[1].offset, 4);
    }

    #[test]
    fn walk_tpi_decodes_class() {
        // Same shape as struct test but tagged LF_CLASS.
        let fl_payload = {
            let mut p = Vec::new();
            p.extend_from_slice(&member_subrecord("vptr", 0, 0x0603)); // T_PVOID
            p.extend_from_slice(&member_subrecord("count", 8, 0x0074));
            p
        };
        let mut stream = record(LF_FIELDLIST, &fl_payload);
        stream.extend(record(LF_CLASS, &struct_payload(0x1000, 16, "Widget")));

        let types = walk_tpi(&stream).expect("walk succeeds");
        assert_eq!(types.len(), 1);
        let t = &types[0];
        assert_eq!(t.name, "Widget");
        assert_eq!(t.size, 16);
        assert_eq!(t.kind, PdbTypeKind::Class);
        assert_eq!(t.fields.len(), 2);
        assert_eq!(t.fields[0].name, "vptr");
        assert_eq!(t.fields[1].name, "count");
        assert_eq!(t.fields[1].offset, 8);
    }

    #[test]
    fn walk_tpi_decodes_union() {
        let fl_payload = {
            let mut p = Vec::new();
            p.extend_from_slice(&member_subrecord("i", 0, 0x0074));
            p.extend_from_slice(&member_subrecord("f", 0, 0x0040)); // T_REAL32
            p
        };
        let mut stream = record(LF_FIELDLIST, &fl_payload);
        stream.extend(record(LF_UNION, &union_payload(0x1000, 4, "Variant")));

        let types = walk_tpi(&stream).expect("walk succeeds");
        assert_eq!(types.len(), 1);
        let t = &types[0];
        assert_eq!(t.name, "Variant");
        assert_eq!(t.size, 4);
        assert_eq!(t.kind, PdbTypeKind::Union);
        assert_eq!(t.fields.len(), 2);
        assert_eq!(t.fields[0].name, "i");
        assert_eq!(t.fields[0].offset, 0);
        assert_eq!(t.fields[1].name, "f");
        assert_eq!(t.fields[1].offset, 0);
        assert_eq!(t.fields[1].field_type, 0x0040);
    }

    #[test]
    fn walk_tpi_decodes_enum() {
        // LF_FIELDLIST with no recognized subrecords (we don't model
        // LF_ENUMERATE here) — walker should still produce the enum with
        // empty fields. We pass an empty field list to exercise that
        // path while still giving the enum's `field_list_ti` a valid
        // target.
        let mut stream = record(LF_FIELDLIST, &[]);
        stream.extend(record(LF_ENUM, &enum_payload(0x0074, 0x1000, "Color")));

        let types = walk_tpi(&stream).expect("walk succeeds");
        assert_eq!(types.len(), 1);
        let t = &types[0];
        assert_eq!(t.name, "Color");
        assert_eq!(t.kind, PdbTypeKind::Enum);
        assert_eq!(t.size, 0);
        assert!(t.fields.is_empty());
    }

    #[test]
    fn primitive_kind_conversion() {
        assert_eq!(
            primitive_to_type(pdb::PrimitiveKind::I32, None),
            Type::int(4)
        );
        assert_eq!(
            primitive_to_type(pdb::PrimitiveKind::U64, None),
            Type::uint(8)
        );
        // Pointer-to-i32 via indirection.
        let p = primitive_to_type(pdb::PrimitiveKind::I32, Some(pdb::Indirection::Near32));
        assert!(p.is_pointer());
    }
}
