//! CodeView TPI/IPI → unlace `Type` conversion.
//!
//! Walks the type information stream of a Microsoft PDB and lowers
//! `LF_STRUCTURE`, `LF_UNION`, `LF_ENUM`, `LF_POINTER`, `LF_PROCEDURE`,
//! `LF_ARRAY` records into the unlace `Type` model. Forward references are
//! resolved via a fixpoint pass.

use std::collections::{BTreeMap, BTreeSet};
use std::path::Path;

use pdb::{FallibleIterator, PDB, SymbolData, TypeData, TypeIndex, Variant};

use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::{InterfaceMethod, StructFieldType, Type};

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
    /// Deterministic CodeView/IPI-style structural hash for every lowered type index.
    pub type_hashes: BTreeMap<u32, u64>,
    /// Deterministic structural hash for each named struct/class/union.
    pub struct_hashes: BTreeMap<String, u64>,
    /// PDB `S_CONSTANT` / `S_MANCONSTANT` symbols keyed by their source name.
    pub constants: BTreeMap<String, i64>,
    /// Reverse index for [`Self::constants`]: integer value → constant names.
    pub constants_by_value: BTreeMap<i64, Vec<String>>,
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
    Modifier {
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
        field_list: Option<u32>,
        forward_ref: bool,
    },
    Union {
        name: String,
        size: u64,
        fields: Vec<CvField>,
        field_list: Option<u32>,
        forward_ref: bool,
    },
    Enum {
        name: String,
        underlying: u32,
        variants: Vec<(String, i64)>,
        field_list: Option<u32>,
        forward_ref: bool,
    },
    FieldList {
        fields: Vec<CvField>,
        variants: Vec<(String, i64)>,
        continuation: Option<u32>,
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

    out.refresh_hashes();
    out
}

fn materialize_field_lists(table: &mut BTreeMap<u32, CvType>) {
    let snapshot = table.clone();
    for cv in table.values_mut() {
        match cv {
            CvType::Struct {
                fields,
                field_list: Some(field_list),
                ..
            }
            | CvType::Union {
                fields,
                field_list: Some(field_list),
                ..
            } => {
                let (resolved_fields, _) =
                    collect_cv_field_list(&snapshot, *field_list, &mut BTreeSet::new());
                if !resolved_fields.is_empty() {
                    *fields = resolved_fields;
                }
            }
            CvType::Enum {
                variants,
                field_list: Some(field_list),
                ..
            } => {
                let (_, resolved_variants) =
                    collect_cv_field_list(&snapshot, *field_list, &mut BTreeSet::new());
                if !resolved_variants.is_empty() {
                    *variants = resolved_variants;
                }
            }
            _ => {}
        }
    }
}

fn collect_cv_field_list(
    table: &BTreeMap<u32, CvType>,
    idx: u32,
    seen: &mut BTreeSet<u32>,
) -> (Vec<CvField>, Vec<(String, i64)>) {
    if !seen.insert(idx) {
        return (Vec::new(), Vec::new());
    }
    let Some(CvType::FieldList {
        fields,
        variants,
        continuation,
    }) = table.get(&idx)
    else {
        return (Vec::new(), Vec::new());
    };

    let mut out_fields = fields.clone();
    let mut out_variants = variants.clone();
    if let Some(next) = continuation {
        let (mut next_fields, mut next_variants) = collect_cv_field_list(table, *next, seen);
        out_fields.append(&mut next_fields);
        out_variants.append(&mut next_variants);
    }
    (out_fields, out_variants)
}

impl PdbTypes {
    /// Recompute deterministic structural hashes after the type maps are built
    /// or canonicalized.
    pub fn refresh_hashes(&mut self) {
        self.type_hashes = self
            .by_index
            .iter()
            .map(|(&idx, ty)| (idx, ipi_type_hash(ty)))
            .collect();
        self.struct_hashes = self
            .structs
            .iter()
            .map(|(name, ty)| (name.clone(), ipi_type_hash(ty)))
            .collect();
    }
}

/// A canonical cross-module UDT entry selected by [`unify_pdb_type_sets`].
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CanonicalPdbType {
    /// Stable structural hash shared by all aliases of this UDT.
    pub hash: u64,
    /// Name chosen for output. The first module/name in deterministic input order wins.
    pub canonical_name: String,
    /// Index in the input slice of the module that supplied the canonical name.
    pub defining_module: usize,
    /// Every original name observed for this same structural hash.
    pub original_names: BTreeSet<String>,
}

/// A per-module alias applied while canonicalizing PDB types.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PdbTypeAlias {
    pub module_index: usize,
    pub original_name: String,
    pub canonical_name: String,
    pub hash: u64,
}

/// Summary returned by [`unify_pdb_type_sets`].
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PdbTypeUnification {
    /// Canonical UDTs keyed by deterministic structural hash.
    pub canonical_structs: BTreeMap<u64, CanonicalPdbType>,
    /// Aliases whose local name was rewritten to an already-seen canonical name.
    pub aliases: Vec<PdbTypeAlias>,
}

/// Return a deterministic CodeView/IPI-style structural hash for a lowered type.
///
/// PDB TPI/IPI indexes are module-local, so comparing raw indexes cannot identify
/// the same declaration across DLLs. This hash serializes the lowered shape
/// instead. Struct names are deliberately excluded; field names remain part of
/// the shape to avoid collapsing unrelated layout-compatible records.
pub fn ipi_type_hash(ty: &Type) -> u64 {
    let mut h = StableHasher::new();
    hash_type(ty, &mut h, 32);
    h.finish()
}

/// Canonicalize same-shape PDB UDTs across DLL/PDB modules.
///
/// The first occurrence in the input slice (and then lexicographic struct-name
/// order within a module) becomes canonical. Later UDTs with the same structural
/// hash are rewritten in-place to the canonical name in `structs`, `by_index`,
/// and procedure signatures.
pub fn unify_pdb_type_sets(modules: &mut [PdbTypes]) -> PdbTypeUnification {
    let mut summary = PdbTypeUnification::default();
    let mut hash_to_name: BTreeMap<u64, String> = BTreeMap::new();

    for (module_index, module) in modules.iter_mut().enumerate() {
        module.refresh_hashes();
        let entries: Vec<_> = module
            .struct_hashes
            .iter()
            .map(|(n, &h)| (n.clone(), h))
            .collect();
        for (name, hash) in entries {
            if let Some(canonical_name) = hash_to_name.get(&hash).cloned() {
                if let Some(canon) = summary.canonical_structs.get_mut(&hash) {
                    canon.original_names.insert(name.clone());
                }
                if canonical_name != name {
                    summary.aliases.push(PdbTypeAlias {
                        module_index,
                        original_name: name,
                        canonical_name,
                        hash,
                    });
                }
            } else {
                hash_to_name.insert(hash, name.clone());
                let mut original_names = BTreeSet::new();
                original_names.insert(name.clone());
                summary.canonical_structs.insert(
                    hash,
                    CanonicalPdbType {
                        hash,
                        canonical_name: name,
                        defining_module: module_index,
                        original_names,
                    },
                );
            }
        }
    }

    for module in modules.iter_mut() {
        rewrite_module_struct_names(module, &hash_to_name);
        module.refresh_hashes();
    }

    summary
}

fn rewrite_module_struct_names(module: &mut PdbTypes, hash_to_name: &BTreeMap<u64, String>) {
    let old_structs = std::mem::take(&mut module.structs);
    for (_old_name, mut ty) in old_structs {
        rewrite_type_struct_names(&mut ty, hash_to_name);
        if let Type::Struct { name, .. } = &ty {
            module.structs.entry(name.clone()).or_insert(ty);
        }
    }

    for ty in module.by_index.values_mut() {
        rewrite_type_struct_names(ty, hash_to_name);
    }
    for sig in module.procedures.values_mut() {
        rewrite_type_struct_names(&mut sig.return_type, hash_to_name);
        for param in &mut sig.params {
            rewrite_type_struct_names(param, hash_to_name);
        }
    }
}

fn rewrite_type_struct_names(ty: &mut Type, hash_to_name: &BTreeMap<u64, String>) {
    match ty {
        Type::Struct { name, fields } => {
            let hash = ipi_type_hash(&Type::Struct {
                name: String::new(),
                fields: fields.clone(),
            });
            if let Some(canonical) = hash_to_name.get(&hash) {
                *name = canonical.clone();
            }
            for field in fields {
                rewrite_type_struct_names(&mut field.ty, hash_to_name);
            }
        }
        Type::Ptr(inner)
        | Type::Bitfield {
            underlying: inner, ..
        }
        | Type::Slice { elem: inner } => rewrite_type_struct_names(inner, hash_to_name),
        Type::Array { element, .. } => rewrite_type_struct_names(element, hash_to_name),
        Type::FuncPtr {
            params,
            return_type,
            ..
        } => {
            rewrite_type_struct_names(return_type, hash_to_name);
            for param in params {
                rewrite_type_struct_names(param, hash_to_name);
            }
        }
        Type::Map { key, value } => {
            rewrite_type_struct_names(key, hash_to_name);
            rewrite_type_struct_names(value, hash_to_name);
        }
        Type::Primitive(_) | Type::Named(_) | Type::Interface { .. } | Type::TypeParam { .. } => {}
        Type::Union { fields, .. } => {
            for field in fields {
                rewrite_type_struct_names(&mut field.ty, hash_to_name);
            }
        }
    }
}

struct StableHasher(u64);

impl StableHasher {
    const OFFSET: u64 = 0xcbf2_9ce4_8422_2325;
    const PRIME: u64 = 0x0000_0100_0000_01b3;

    fn new() -> Self {
        Self(Self::OFFSET)
    }
    fn byte(&mut self, b: u8) {
        self.0 ^= u64::from(b);
        self.0 = self.0.wrapping_mul(Self::PRIME);
    }
    fn bytes(&mut self, bytes: &[u8]) {
        for &b in bytes {
            self.byte(b);
        }
        self.byte(0xff);
    }
    fn u8(&mut self, v: u8) {
        self.byte(v);
    }
    fn u32(&mut self, v: u32) {
        self.bytes(&v.to_le_bytes());
    }
    fn u64(&mut self, v: u64) {
        self.bytes(&v.to_le_bytes());
    }
    fn str(&mut self, s: &str) {
        self.u64(s.len() as u64);
        self.bytes(s.as_bytes());
    }
    fn finish(self) -> u64 {
        self.0
    }
}

fn hash_type(ty: &Type, h: &mut StableHasher, depth: u8) {
    if depth == 0 {
        h.u8(0xfe);
        return;
    }
    match ty {
        Type::Primitive(p) => {
            h.u8(0x01);
            h.str(&format!("{p:?}"));
        }
        Type::Named(name) => {
            h.u8(0x0c);
            h.str(name);
        }
        Type::Ptr(inner) => {
            h.u8(0x02);
            hash_type(inner, h, depth - 1);
        }
        Type::Array { element, size } => {
            h.u8(0x03);
            match size {
                Some(n) => {
                    h.u8(1);
                    h.u64(*n);
                }
                None => h.u8(0),
            }
            hash_type(element, h, depth - 1);
        }
        Type::Struct { fields, .. } => {
            h.u8(0x04);
            h.u64(fields.len() as u64);
            for field in fields {
                h.str(&field.name);
                h.u64(field.offset);
                hash_type(&field.ty, h, depth - 1);
            }
        }
        Type::FuncPtr {
            params,
            return_type,
            variadic,
        } => {
            h.u8(0x05);
            h.u8(u8::from(*variadic));
            h.u64(params.len() as u64);
            for param in params {
                hash_type(param, h, depth - 1);
            }
            hash_type(return_type, h, depth - 1);
        }
        Type::Bitfield {
            underlying,
            offset,
            width,
        } => {
            h.u8(0x06);
            h.u32(*offset);
            h.u32(*width);
            hash_type(underlying, h, depth - 1);
        }
        Type::Interface { name, methods } => {
            h.u8(0x07);
            h.str(name);
            h.u64(methods.len() as u64);
            for InterfaceMethod { name, signature } in methods {
                h.str(name);
                match signature {
                    Some(sig) => {
                        h.u8(1);
                        h.str(sig);
                    }
                    None => h.u8(0),
                }
            }
        }
        Type::Slice { elem } => {
            h.u8(0x08);
            hash_type(elem, h, depth - 1);
        }
        Type::Map { key, value } => {
            h.u8(0x09);
            hash_type(key, h, depth - 1);
            hash_type(value, h, depth - 1);
        }
        Type::TypeParam { .. } => {
            h.u8(0x0a);
        }
        Type::Union { fields, .. } => {
            h.u8(0x0b);
            h.u64(fields.len() as u64);
            for field in fields {
                h.str(&field.name);
                h.u64(field.offset);
                hash_type(&field.ty, h, depth - 1);
            }
        }
    }
}

fn lower_one(cv: &CvType, table: &BTreeMap<u32, CvType>, out: &PdbTypes) -> Type {
    match cv {
        CvType::Primitive(t) => t.clone(),
        CvType::Pointer { underlying } => {
            let inner = resolve(*underlying, table, out);
            Type::Ptr(Box::new(inner))
        }
        CvType::Modifier { underlying } => resolve(*underlying, table, out),
        CvType::Array { element, len_bytes } => {
            let elem = resolve(*element, table, out);
            let elem_size = elem.size().map(|s| s as u32).unwrap_or(0);
            let count = len_bytes.checked_div(elem_size).map(u64::from);
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
            let fs = fields
                .iter()
                .map(|f| StructFieldType {
                    name: f.name.clone(),
                    ty: resolve(f.field_type, table, out),
                    offset: f.offset,
                })
                .collect();
            Type::Union {
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
        CvType::Bitfield {
            underlying,
            length,
            position,
        } => Type::Bitfield {
            underlying: Box::new(resolve(*underlying, table, out)),
            offset: u32::from(*position),
            width: u32::from(*length),
        },
        CvType::FieldList { .. } => Type::Primitive(PrimitiveType::Unknown),
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
            && n == name
        {
            return out.by_index.get(idx).cloned();
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

    materialize_field_lists(&mut table);
    let mut out = lower_cv_table(&table);
    collect_pdb_constants(&mut pdb, &mut out)?;

    Ok(out)
}

fn collect_pdb_constants(
    pdb: &mut PDB<std::fs::File>,
    out: &mut PdbTypes,
) -> Result<(), LoadError> {
    let global_symbols = pdb.global_symbols()?;
    let mut iter = global_symbols.iter();
    while let Some(sym) = iter.next()? {
        if let Ok(SymbolData::Constant(c)) = sym.parse()
            && let Some(value) = variant_to_i64(c.value)
        {
            insert_constant(out, c.name.to_string().to_string(), value);
        }
    }

    let dbi = pdb.debug_information()?;
    let mut modules = dbi.modules()?;
    while let Some(module) = modules.next()? {
        let module_info = match pdb.module_info(&module)? {
            Some(info) => info,
            None => continue,
        };
        let mut iter = module_info.symbols()?;
        while let Some(sym) = iter.next()? {
            if let Ok(SymbolData::Constant(c)) = sym.parse()
                && let Some(value) = variant_to_i64(c.value)
            {
                insert_constant(out, c.name.to_string().to_string(), value);
            }
        }
    }

    Ok(())
}

fn insert_constant(out: &mut PdbTypes, name: String, value: i64) {
    out.constants.insert(name.clone(), value);
    let names = out.constants_by_value.entry(value).or_default();
    if !names.contains(&name) {
        names.push(name);
    }
}

fn variant_to_i64(value: Variant) -> Option<i64> {
    match value {
        Variant::U8(v) => Some(i64::from(v)),
        Variant::U16(v) => Some(i64::from(v)),
        Variant::U32(v) => Some(i64::from(v)),
        Variant::U64(v) => i64::try_from(v).ok(),
        Variant::I8(v) => Some(i64::from(v)),
        Variant::I16(v) => Some(i64::from(v)),
        Variant::I32(v) => Some(i64::from(v)),
        Variant::I64(v) => Some(v),
    }
}

fn lower_typedata(td: &TypeData<'_>) -> Option<CvType> {
    Some(match td {
        TypeData::Primitive(p) => CvType::Primitive(primitive_to_type(p.kind, p.indirection)),
        TypeData::Pointer(p) => CvType::Pointer {
            underlying: ti_to_u32(p.underlying_type),
        },
        TypeData::Modifier(m) => CvType::Modifier {
            underlying: ti_to_u32(m.underlying_type),
        },
        TypeData::Array(a) => CvType::Array {
            element: ti_to_u32(a.element_type),
            len_bytes: a.dimensions.last().copied().unwrap_or(0),
        },
        TypeData::Class(c) => CvType::Struct {
            name: c.name.to_string().to_string(),
            size: c.size,
            fields: Vec::new(),
            field_list: c.fields.map(ti_to_u32),
            forward_ref: c.properties.forward_reference(),
        },
        TypeData::Union(u) => CvType::Union {
            name: u.name.to_string().to_string(),
            size: u.size,
            fields: Vec::new(),
            field_list: Some(ti_to_u32(u.fields)),
            forward_ref: u.properties.forward_reference(),
        },
        TypeData::Enumeration(e) => CvType::Enum {
            name: e.name.to_string().to_string(),
            underlying: ti_to_u32(e.underlying_type),
            variants: Vec::new(),
            field_list: Some(ti_to_u32(e.fields)),
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
        TypeData::FieldList(fl) => {
            let mut fields = Vec::new();
            let mut variants = Vec::new();
            for item in &fl.fields {
                match item {
                    TypeData::Member(m) => fields.push(CvField {
                        name: m.name.to_string().to_string(),
                        offset: m.offset,
                        field_type: ti_to_u32(m.field_type),
                    }),
                    TypeData::Enumerate(e) => {
                        if let Some(value) = variant_to_i64(e.value) {
                            variants.push((e.name.to_string().to_string(), value));
                        }
                    }
                    _ => {}
                }
            }
            CvType::FieldList {
                fields,
                variants,
                continuation: fl.continuation.map(ti_to_u32),
            }
        }
        _ => return None,
    })
}

fn ti_to_u32(t: TypeIndex) -> u32 {
    u32::from(t)
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
const LF_MODIFIER: u16 = 0x1001;
const LF_POINTER: u16 = 0x1002;
const LF_PROCEDURE: u16 = 0x1008;
const LF_ARGLIST: u16 = 0x1201;
const LF_ARRAY: u16 = 0x1503;
const LF_BITFIELD: u16 = 0x1205;

// IPI stream leaf kinds (0x1601..=0x1606). IPI lives in a separate stream
// from TPI but shares the same record framing.
const LF_FUNC_ID: u16 = 0x1601;
const LF_MFUNC_ID: u16 = 0x1602;
const LF_BUILDINFO: u16 = 0x1603;
const LF_SUBSTR_LIST: u16 = 0x1604;
const LF_STRING_ID: u16 = 0x1605;
const LF_UDT_SRC_LINE: u16 = 0x1606;

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
    walk_tpi_with_index(stream_data).map(|(types, _)| types)
}

/// Phase 2 entrypoint: walk the TPI stream and additionally return a
/// `BTreeMap<u32, Type>` keyed by CodeView TI. Every recognised
/// aggregate lands in the map under its TI; primitive TIs are *not*
/// stored eagerly (call [`primitive_ti_to_type`] for those).
///
/// The map runs a fixpoint pass over its own entries: for each struct
/// / union, replace `Unknown` field types with the resolved Type when
/// the field's CodeView TI (`PdbField::field_type`) is known. Cap the
/// fixpoint at 16 iterations to avoid diverging on malformed cyclic
/// streams.
pub fn walk_tpi_with_index(
    stream_data: &[u8],
) -> Result<(Vec<PdbType>, BTreeMap<u32, Type>), PdbError> {
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

    // Second pass: decode aggregates. Track each decoded entry's TI so
    // we can index it in the map below.
    let mut out = Vec::new();
    let mut ti_of_out: Vec<u32> = Vec::new();
    for (rec_idx, rec) in records.iter().enumerate() {
        let payload = &stream_data[rec.payload_start..rec.payload_end];
        let ti = 0x1000u32 + rec_idx as u32;
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
                ti_of_out.push(ti);
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
                ti_of_out.push(ti);
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
                ti_of_out.push(ti);
            }
            _ => {}
        }
    }

    // Build the TI → Type registry. Phase 2 covered aggregates; Phase
    // 3 fills in `LF_POINTER` / `LF_ARRAY` / `LF_PROCEDURE` /
    // `LF_BITFIELD` / `LF_MODIFIER` from the per-record decoders.
    let mut by_index: BTreeMap<u32, Type> = BTreeMap::new();
    let mut arglist_by_ti: BTreeMap<u32, Vec<u32>> = BTreeMap::new();
    for (entry, &ti) in out.iter().zip(ti_of_out.iter()) {
        if let Some(ty) = pdb_type_to_ir_type(entry) {
            by_index.insert(ti, ty);
        }
    }
    // Pre-decode every complex record so its TI lands in the registry
    // before the fixpoint runs. We use placeholders for chained types
    // (e.g. a pointer to a not-yet-decoded struct) that the fixpoint
    // below resolves.
    for (rec_idx, rec) in records.iter().enumerate() {
        let payload = &stream_data[rec.payload_start..rec.payload_end];
        let ti = 0x1000u32 + rec_idx as u32;
        match rec.kind {
            LF_POINTER => {
                if let Ok(p) = decode_pointer(payload) {
                    // Placeholder pointee; fixpoint replaces with the
                    // resolved type when available.
                    let placeholder = primitive_ti_to_type(p.utype)
                        .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
                    by_index.insert(ti, Type::Ptr(Box::new(placeholder)));
                }
            }
            LF_ARRAY => {
                if let Ok(a) = decode_array(payload, rec.payload_start) {
                    let elem_placeholder = primitive_ti_to_type(a.elem_ti)
                        .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
                    by_index.insert(
                        ti,
                        Type::Array {
                            element: Box::new(elem_placeholder),
                            size: Some(a.size_bytes),
                        },
                    );
                }
            }
            LF_PROCEDURE => {
                if let Ok(proc) = decode_procedure(payload) {
                    let return_placeholder = primitive_ti_to_type(proc.return_ti)
                        .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
                    by_index.insert(
                        ti,
                        Type::FuncPtr {
                            params: Vec::new(),
                            return_type: Box::new(return_placeholder),
                            variadic: false,
                        },
                    );
                    // Remember which arglist TI to expand later.
                    arglist_by_ti.insert(ti, vec![proc.arglist_ti]);
                }
            }
            LF_BITFIELD => {
                if let Ok(b) = decode_bitfield(payload) {
                    let underlying = primitive_ti_to_type(b.underlying_ti)
                        .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
                    by_index.insert(
                        ti,
                        Type::Bitfield {
                            underlying: Box::new(underlying),
                            offset: b.position as u32,
                            width: b.length as u32,
                        },
                    );
                }
            }
            LF_MODIFIER => {
                if let Ok(m) = decode_modifier(payload) {
                    // Pass through: the modified type *is* the underlying
                    // (we don't model const/volatile in the IR today).
                    let underlying = primitive_ti_to_type(m.underlying_ti)
                        .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
                    by_index.insert(ti, underlying);
                }
            }
            LF_ARGLIST => {
                if let Ok(args) = decode_arglist(payload) {
                    arglist_by_ti.insert(ti, args);
                }
            }
            _ => {}
        }
    }

    // Fixpoint: resolve each struct/union's `Unknown` field types by
    // looking up the field's `field_type` TI in `by_index` (or in the
    // primitive table). Also resolves chained Ptr/Array/FuncPtr nodes
    // whose pointee/element/return type referenced a not-yet-decoded
    // user TI. Cap iterations.
    const MAX_FIXPOINT_ITERS: usize = 16;
    for _ in 0..MAX_FIXPOINT_ITERS {
        let snapshot = by_index.clone();
        let mut changed = false;
        // Aggregate field resolution.
        for (entry, &ti) in out.iter().zip(ti_of_out.iter()) {
            let Some(current) = by_index.get_mut(&ti) else {
                continue;
            };
            if resolve_field_types(current, entry, &snapshot) {
                changed = true;
            }
        }
        // Chained-type resolution: walk every Ptr/Array/FuncPtr and
        // try to replace any embedded `Unknown` with a resolved type.
        let tis: Vec<u32> = by_index.keys().copied().collect();
        for ti in tis {
            // Build the records-index → TI map so we can find the
            // *source* CodeView TI for each chained type.
            if let Some(rec_idx) = ti.checked_sub(0x1000) {
                let Some(rec) = records.get(rec_idx as usize) else {
                    continue;
                };
                let payload = &stream_data[rec.payload_start..rec.payload_end];
                let resolved_ptr_arr = match rec.kind {
                    LF_POINTER => {
                        let p = match decode_pointer(payload) {
                            Ok(p) => p,
                            Err(_) => continue,
                        };
                        snapshot
                            .get(&p.utype)
                            .cloned()
                            .or_else(|| primitive_ti_to_type(p.utype))
                            .map(|ty| Type::Ptr(Box::new(ty)))
                    }
                    LF_ARRAY => {
                        let a = match decode_array(payload, rec.payload_start) {
                            Ok(a) => a,
                            Err(_) => continue,
                        };
                        snapshot
                            .get(&a.elem_ti)
                            .cloned()
                            .or_else(|| primitive_ti_to_type(a.elem_ti))
                            .map(|elem| Type::Array {
                                element: Box::new(elem),
                                size: Some(a.size_bytes),
                            })
                    }
                    LF_PROCEDURE => {
                        let proc = match decode_procedure(payload) {
                            Ok(p) => p,
                            Err(_) => continue,
                        };
                        let return_ty = snapshot
                            .get(&proc.return_ti)
                            .cloned()
                            .or_else(|| primitive_ti_to_type(proc.return_ti))
                            .unwrap_or(Type::Primitive(PrimitiveType::Unknown));
                        // Resolve the arglist if available.
                        let params: Vec<Type> = arglist_by_ti
                            .get(&proc.arglist_ti)
                            .map(|tis| {
                                tis.iter()
                                    .map(|&arg_ti| {
                                        snapshot
                                            .get(&arg_ti)
                                            .cloned()
                                            .or_else(|| primitive_ti_to_type(arg_ti))
                                            .unwrap_or(Type::Primitive(PrimitiveType::Unknown))
                                    })
                                    .collect()
                            })
                            .unwrap_or_default();
                        Some(Type::FuncPtr {
                            params,
                            return_type: Box::new(return_ty),
                            variadic: false,
                        })
                    }
                    _ => continue,
                };
                if let Some(new_ty) = resolved_ptr_arr
                    && let Some(slot) = by_index.get_mut(&ti)
                    && *slot != new_ty
                {
                    *slot = new_ty;
                    changed = true;
                }
            }
        }
        if !changed {
            break;
        }
    }

    Ok((out, by_index))
}

/// Fill `Unknown` field types inside `current` (a `Type::Struct` or
/// `Type::Union`) using `entry.fields[i].field_type` lookups against
/// `by_index` (user TIs) or [`primitive_ti_to_type`] (primitive TIs).
/// Returns `true` when any substitution was made.
fn resolve_field_types(
    current: &mut Type,
    entry: &PdbType,
    by_index: &BTreeMap<u32, Type>,
) -> bool {
    let fields_mut = match current {
        Type::Struct { fields, .. } | Type::Union { fields, .. } => fields,
        _ => return false,
    };
    let mut changed = false;
    for (i, raw_field) in entry.fields.iter().enumerate() {
        if i >= fields_mut.len() {
            break;
        }
        if !matches!(&fields_mut[i].ty, Type::Primitive(PrimitiveType::Unknown)) {
            continue;
        }
        let ti = raw_field.field_type;
        let resolved = primitive_ti_to_type(ti).or_else(|| by_index.get(&ti).cloned());
        if let Some(r) = resolved {
            fields_mut[i].ty = r;
            changed = true;
        }
    }
    changed
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

/// Decoded LF_POINTER payload.
struct PointerRecord {
    /// Pointee CodeView TI.
    utype: u32,
}

fn decode_pointer(payload: &[u8]) -> Result<PointerRecord, PdbError> {
    // utype u32, attr u32 (flags — kind/mode/modifiers + size). We
    // ignore attr for the lowered C type since unlace's `Type::Ptr`
    // is flavour-agnostic.
    if payload.len() < 8 {
        return Err(PdbError::UnexpectedEof(0));
    }
    let utype = read_u32(payload, 0)?;
    Ok(PointerRecord { utype })
}

/// Decoded LF_ARRAY payload.
struct ArrayRecord {
    elem_ti: u32,
    /// Total byte size of the array. Element count is `size /
    /// sizeof(elem)`; we don't compute it here because the element
    /// type isn't resolved yet at decode time.
    size_bytes: u64,
}

fn decode_array(payload: &[u8], abs_off: usize) -> Result<ArrayRecord, PdbError> {
    // elemtype u32, idxtype u32, size numeric, name (often empty).
    if payload.len() < 8 {
        return Err(PdbError::UnexpectedEof(abs_off));
    }
    let elem_ti = read_u32(payload, 0)?;
    let _idx_ti = read_u32(payload, 4)?;
    let (size, _after) = read_numeric_leaf(payload, 8)?;
    Ok(ArrayRecord {
        elem_ti,
        size_bytes: size as u64,
    })
}

/// Decoded LF_PROCEDURE payload.
struct ProcedureRecord {
    return_ti: u32,
    arglist_ti: u32,
}

fn decode_procedure(payload: &[u8]) -> Result<ProcedureRecord, PdbError> {
    // return u32, call_conv u8, funcattr u8, parm_count u16, arglist u32.
    if payload.len() < 12 {
        return Err(PdbError::UnexpectedEof(0));
    }
    let return_ti = read_u32(payload, 0)?;
    // call_conv (1 byte) + funcattr (1 byte) + parm_count (2 bytes) = 4 bytes
    let arglist_ti = read_u32(payload, 8)?;
    Ok(ProcedureRecord {
        return_ti,
        arglist_ti,
    })
}

/// Decoded LF_BITFIELD payload.
struct BitfieldRecord {
    underlying_ti: u32,
    length: u8,
    position: u8,
}

fn decode_bitfield(payload: &[u8]) -> Result<BitfieldRecord, PdbError> {
    if payload.len() < 6 {
        return Err(PdbError::UnexpectedEof(0));
    }
    let underlying_ti = read_u32(payload, 0)?;
    let length = payload[4];
    let position = payload[5];
    Ok(BitfieldRecord {
        underlying_ti,
        length,
        position,
    })
}

/// Decoded LF_MODIFIER payload — `const` / `volatile` / `unaligned`
/// wrappers around an underlying TI. We pass through to the underlying
/// type (the IR has no `const` annotation today).
struct ModifierRecord {
    underlying_ti: u32,
}

fn decode_modifier(payload: &[u8]) -> Result<ModifierRecord, PdbError> {
    if payload.len() < 6 {
        return Err(PdbError::UnexpectedEof(0));
    }
    let underlying_ti = read_u32(payload, 0)?;
    Ok(ModifierRecord { underlying_ti })
}

/// Decoded LF_ARGLIST payload — a count followed by `count` TI entries.
fn decode_arglist(payload: &[u8]) -> Result<Vec<u32>, PdbError> {
    if payload.len() < 4 {
        return Err(PdbError::UnexpectedEof(0));
    }
    let count = read_u32(payload, 0)? as usize;
    let mut out = Vec::with_capacity(count);
    for i in 0..count {
        let off = 4 + i * 4;
        if off + 4 > payload.len() {
            return Err(PdbError::UnexpectedEof(off));
        }
        out.push(read_u32(payload, off)?);
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

// ---------------------------------------------------------------------------
// Low-level IPI stream walker.
//
// The IPI ("Item-Id") stream mirrors the TPI stream framing exactly (same
// `length`/`leaf_kind`/`payload` record layout, same numeric leaf encoding)
// but holds *item* identifiers — function names, build info, source-file
// strings, UDT→source-line mappings — instead of types. Leaf kinds are in
// the 0x1601..=0x1606 range. Item IDs are assigned starting at 0x1000 and
// live in a separate identifier space from TPI's type indices.
// ---------------------------------------------------------------------------

/// High-level kind of an IPI item decoded by [`walk_ipi`].
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PdbIpiKind {
    /// `LF_FUNC_ID` (0x1601): free function id (scope_id + type_index + name).
    FuncId,
    /// `LF_MFUNC_ID` (0x1602): member-function id (parent_type + type_index + name).
    MFuncId,
    /// `LF_BUILDINFO` (0x1603): build-info argument list — no name.
    BuildInfo,
    /// `LF_SUBSTR_LIST` (0x1604): substring list used by `LF_STRING_ID` — no name.
    SubStrList,
    /// `LF_STRING_ID` (0x1605): a string id; `name` is the string body.
    StringId,
    /// `LF_UDT_SRC_LINE` (0x1606): UDT → source-line mapping — no name.
    UdtSrcLine,
}

/// One IPI item decoded from a raw IPI stream by [`walk_ipi`].
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PdbIpiItem {
    /// Item identifier (0x1000-based, in the IPI id space).
    pub id: u32,
    /// Discriminant identifying which IPI leaf produced this record.
    pub kind: PdbIpiKind,
    /// Item name when the leaf carries one (`LF_FUNC_ID`, `LF_MFUNC_ID`,
    /// `LF_STRING_ID`). `None` for leaves that have no string body
    /// (`LF_BUILDINFO`, `LF_SUBSTR_LIST`, `LF_UDT_SRC_LINE`).
    pub name: Option<String>,
}

/// Walk a raw IPI stream of CodeView leaf records and return every
/// recognized IPI item (`LF_FUNC_ID`, `LF_MFUNC_ID`, `LF_BUILDINFO`,
/// `LF_SUBSTR_LIST`, `LF_STRING_ID`, `LF_UDT_SRC_LINE`).
///
/// The input is interpreted as a contiguous sequence of records starting at
/// offset 0; pass the bytes *after* the IPI header. Item IDs follow the
/// CodeView convention of starting at 0x1000 and incrementing per record.
/// Unknown leaf kinds occupy an ID slot but are skipped using their
/// `length` prefix.
pub fn walk_ipi(stream_data: &[u8]) -> Result<Vec<PdbIpiItem>, PdbError> {
    let mut out = Vec::new();
    let mut cursor = 0usize;
    let mut next_id: u32 = 0x1000;
    while cursor < stream_data.len() {
        let rec = read_record(stream_data, cursor)?;
        cursor = rec.next;
        let id = next_id;
        next_id += 1;
        let payload = &stream_data[rec.payload_start..rec.payload_end];
        let (kind, name) = match rec.kind {
            LF_FUNC_ID => {
                // scope_id u32, type u32 (TI), name (NUL-terminated).
                if payload.len() < 8 {
                    return Err(PdbError::UnexpectedEof(rec.payload_start));
                }
                let name = read_cstr(payload, 8, rec.payload_start)?;
                (PdbIpiKind::FuncId, Some(name))
            }
            LF_MFUNC_ID => {
                // parent_type u32 (TI), type u32 (TI), name.
                if payload.len() < 8 {
                    return Err(PdbError::UnexpectedEof(rec.payload_start));
                }
                let name = read_cstr(payload, 8, rec.payload_start)?;
                (PdbIpiKind::MFuncId, Some(name))
            }
            LF_STRING_ID => {
                // substr_list u32 (item_id, 0 if none), name.
                if payload.len() < 4 {
                    return Err(PdbError::UnexpectedEof(rec.payload_start));
                }
                let name = read_cstr(payload, 4, rec.payload_start)?;
                (PdbIpiKind::StringId, Some(name))
            }
            LF_BUILDINFO => (PdbIpiKind::BuildInfo, None),
            LF_SUBSTR_LIST => (PdbIpiKind::SubStrList, None),
            LF_UDT_SRC_LINE => (PdbIpiKind::UdtSrcLine, None),
            _ => continue,
        };
        out.push(PdbIpiItem { id, kind, name });
    }
    Ok(out)
}

/// Resolve a CodeView primitive type index (TI < 0x1000) into an
/// [`unlace_ir::types::Type`]. Returns `None` for non-primitive indices
/// (i.e. user-defined types in the `>= 0x1000` range).
///
/// The CodeView primitive table is described in `cvinfo.h` / Microsoft
/// CV4 docs. The most commonly seen TIs cover signed/unsigned integer
/// widths, floating-point types, `void`, `bool`, and a "pointer to
/// primitive" family in the `0x04xx` range (the low byte names the
/// pointee TI).
pub fn primitive_ti_to_type(ti: u32) -> Option<Type> {
    Some(match ti {
        0x0000 => Type::Primitive(PrimitiveType::Unknown), // T_NOTYPE
        // T_VOID — represented as `Unknown` because `PrimitiveType`
        // has no `Void` variant; the printer renders Unknown returns
        // as `void` already.
        0x0003 => Type::Primitive(PrimitiveType::Unknown),
        0x0030 => Type::Primitive(PrimitiveType::Bool),
        // Signed integers (legacy + modern aliases).
        0x0010 | 0x0068 => Type::Primitive(PrimitiveType::Int(1)),
        0x0011 | 0x0072 => Type::Primitive(PrimitiveType::Int(2)),
        0x0012 | 0x0074 => Type::Primitive(PrimitiveType::Int(4)),
        0x0013 | 0x0076 => Type::Primitive(PrimitiveType::Int(8)),
        // Unsigned integers.
        0x0020 | 0x0069 => Type::Primitive(PrimitiveType::UnsignedInt(1)),
        0x0021 | 0x0073 => Type::Primitive(PrimitiveType::UnsignedInt(2)),
        0x0022 | 0x0075 => Type::Primitive(PrimitiveType::UnsignedInt(4)),
        0x0023 | 0x0077 => Type::Primitive(PrimitiveType::UnsignedInt(8)),
        // Char family — CodeView splits signed/unsigned char from
        // generic char; we surface them all as Int(1)/UnsignedInt(1)
        // since the downstream IR has no separate "char" tag.
        0x0070 => Type::Primitive(PrimitiveType::Int(1)),
        0x0071 => Type::Primitive(PrimitiveType::UnsignedInt(1)),
        // Floats.
        0x0040 => Type::Primitive(PrimitiveType::Float),
        0x0041 => Type::Primitive(PrimitiveType::Double),
        // T_64PVOID — 64-bit pointer to void. Use the dedicated
        // helper so the printer renders `void *` correctly.
        0x0603 => Type::void_ptr(),
        // Pointer-to-primitive family: the high byte of the TI encodes
        // the pointer flavour (near/far/huge/32-bit/64-bit) and the low
        // byte names the pointee TI. We treat every flavour identically
        // because at the C-output level "Foo *" is "Foo *".
        _ if (ti & 0xFF00) == 0x0400 // T_PCHAR-family / T_32PVOID etc.
            || (ti & 0xFF00) == 0x0500
            || (ti & 0xFF00) == 0x0600 =>
        {
            let pointee_ti = ti & 0x00FF;
            return primitive_ti_to_type(pointee_ti).map(|t| Type::Ptr(Box::new(t)));
        }
        _ => return None,
    })
}

/// Lower one `PdbType` (a CodeView aggregate from [`walk_tpi`]) into a
/// concrete `unlace_ir::types::Type`.
///
/// Strategy:
///
/// * `PdbTypeKind::Structure` / `PdbTypeKind::Class` → [`Type::Struct`]
///   with one `StructFieldType` per `PdbField`. Field types default to
///   `Type::Primitive(PrimitiveType::Unknown)` because the field-list
///   leaf only carries the *type index* of each member; resolving that
///   index back to a `Type` requires the full TPI index, which is the
///   next slice. Callers that already have the index can replace the
///   `Unknown` placeholder via [`apply_field_type_map`].
/// * `PdbTypeKind::Union` → [`Type::Union`] with the same caveat.
/// * `PdbTypeKind::Enum` → currently lowered as a `Type::Primitive(Int)`
///   sized 4 bytes; the variant table lives on `PdbType::fields` for
///   future enum representation work.
///
/// Returns `None` when the aggregate has no usable name (forward-ref or
/// anonymous shell). The lowered shape is stable so future callers can
/// hash it (`ipi_type_hash`) to compare across modules.
pub fn pdb_type_to_ir_type(pty: &PdbType) -> Option<Type> {
    if pty.name.is_empty() {
        return None;
    }
    match pty.kind {
        PdbTypeKind::Structure | PdbTypeKind::Class => Some(Type::Struct {
            name: pty.name.clone(),
            fields: pty
                .fields
                .iter()
                .map(|f| StructFieldType {
                    name: f.name.clone(),
                    ty: Type::Primitive(PrimitiveType::Unknown),
                    offset: f.offset,
                })
                .collect(),
        }),
        PdbTypeKind::Union => Some(Type::Union {
            name: pty.name.clone(),
            fields: pty
                .fields
                .iter()
                .map(|f| StructFieldType {
                    name: f.name.clone(),
                    ty: Type::Primitive(PrimitiveType::Unknown),
                    offset: f.offset,
                })
                .collect(),
        }),
        PdbTypeKind::Enum => Some(Type::Primitive(PrimitiveType::Int(4))),
    }
}

/// Convenience: lower every `PdbType` in `types` and collect successful
/// entries into a `BTreeMap` keyed by name. Duplicate names keep the
/// first occurrence (TPI conventionally puts the forward-ref first;
/// callers that want the *defining* record should filter the input
/// before calling).
pub fn lower_pdb_types(types: &[PdbType]) -> BTreeMap<String, Type> {
    let mut out: BTreeMap<String, Type> = BTreeMap::new();
    for pty in types {
        if let Some(ty) = pdb_type_to_ir_type(pty) {
            out.entry(pty.name.clone()).or_insert(ty);
        }
    }
    out
}

/// Replace `Unknown` field types inside `aggregate` with the entries from
/// `field_types`, keyed by `(struct_name, field_name)`. Returns the
/// number of substitutions performed.
///
/// Use this when the caller has resolved the type-index → `Type`
/// mapping separately (e.g. via the full `pdb` crate) and just wants to
/// fold the resolved field types into the lowered aggregate.
pub fn apply_field_type_map(
    aggregate: &mut Type,
    field_types: &BTreeMap<(String, String), Type>,
) -> usize {
    let mut hits = 0;
    match aggregate {
        Type::Struct { name, fields } | Type::Union { name, fields } => {
            for field in fields {
                if matches!(&field.ty, Type::Primitive(PrimitiveType::Unknown))
                    && let Some(resolved) = field_types.get(&(name.clone(), field.name.clone()))
                {
                    field.ty = resolved.clone();
                    hits += 1;
                }
            }
        }
        _ => {}
    }
    hits
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
                field_list: None,
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
                field_list: None,
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
                field_list: None,
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
                field_list: None,
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
    fn lowers_modifier_and_bitfield_shapes() {
        let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
        table.insert(0x5100, primitive_int(4));
        table.insert(0x5101, CvType::Modifier { underlying: 0x5100 });
        table.insert(
            0x5102,
            CvType::Bitfield {
                underlying: 0x5100,
                length: 3,
                position: 5,
            },
        );

        let out = lower_cv_table(&table);
        assert_eq!(out.by_index[&0x5101], Type::int(4));
        let Type::Bitfield {
            underlying,
            offset,
            width,
        } = &out.by_index[&0x5102]
        else {
            panic!("expected bitfield");
        };
        assert_eq!(**underlying, Type::int(4));
        assert_eq!(*offset, 5);
        assert_eq!(*width, 3);
    }

    #[test]
    fn materializes_field_lists_for_udts_and_enums() {
        let mut table: BTreeMap<u32, CvType> = BTreeMap::new();
        table.insert(0x5200, primitive_int(4));
        table.insert(
            0x5201,
            CvType::FieldList {
                fields: vec![CvField {
                    name: "x".into(),
                    offset: 0,
                    field_type: 0x5200,
                }],
                variants: vec![("RED".into(), 0), ("GREEN".into(), 1)],
                continuation: None,
            },
        );
        table.insert(
            0x5202,
            CvType::Struct {
                name: "Point".into(),
                size: 4,
                fields: Vec::new(),
                field_list: Some(0x5201),
                forward_ref: false,
            },
        );
        table.insert(
            0x5203,
            CvType::Union {
                name: "Number".into(),
                size: 4,
                fields: Vec::new(),
                field_list: Some(0x5201),
                forward_ref: false,
            },
        );
        table.insert(
            0x5204,
            CvType::Enum {
                name: "Color".into(),
                underlying: 0x5200,
                variants: Vec::new(),
                field_list: Some(0x5201),
                forward_ref: false,
            },
        );

        materialize_field_lists(&mut table);
        let out = lower_cv_table(&table);

        let Type::Struct { fields, .. } = &out.by_index[&0x5202] else {
            panic!("expected struct");
        };
        assert_eq!(fields.len(), 1);
        assert_eq!(fields[0].name, "x");
        assert_eq!(fields[0].ty, Type::int(4));

        let Type::Union { fields, .. } = &out.by_index[&0x5203] else {
            panic!("expected union");
        };
        assert_eq!(fields.len(), 1);
        assert_eq!(fields[0].offset, 0);

        assert_eq!(
            out.enums.get("Color").cloned().unwrap_or_default(),
            vec![("RED".to_string(), 0), ("GREEN".to_string(), 1)]
        );
    }

    #[test]
    fn pdb_constant_insert_builds_forward_and_reverse_maps() {
        let mut out = PdbTypes::default();

        insert_constant(&mut out, "kAnswer".into(), 42);
        insert_constant(&mut out, "kAlsoAnswer".into(), 42);
        insert_constant(&mut out, "kMinusOne".into(), -1);
        insert_constant(&mut out, "kAnswer".into(), 42);

        assert_eq!(out.constants.get("kAnswer"), Some(&42));
        assert_eq!(out.constants.get("kMinusOne"), Some(&-1));
        assert_eq!(
            out.constants_by_value.get(&42).cloned().unwrap_or_default(),
            vec!["kAnswer".to_string(), "kAlsoAnswer".to_string()]
        );
        assert_eq!(
            out.constants_by_value.get(&-1).cloned().unwrap_or_default(),
            vec!["kMinusOne".to_string()]
        );
    }

    #[test]
    fn pdb_constant_variant_conversion_rejects_out_of_range_unsigned() {
        assert_eq!(variant_to_i64(Variant::U32(7)), Some(7));
        assert_eq!(variant_to_i64(Variant::I16(-3)), Some(-3));
        assert_eq!(variant_to_i64(Variant::U64(i64::MAX as u64 + 1)), None);
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

    fn point_struct(name: &str) -> Type {
        Type::Struct {
            name: name.into(),
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
        }
    }

    #[test]
    fn ipi_hash_ignores_struct_name_but_keeps_shape() {
        let a = point_struct("PointA");
        let b = point_struct("PointB");
        let mut c = point_struct("PointC");
        if let Type::Struct { fields, .. } = &mut c {
            fields[1].offset = 8;
        }

        assert_eq!(ipi_type_hash(&a), ipi_type_hash(&b));
        assert_ne!(ipi_type_hash(&a), ipi_type_hash(&c));
    }

    #[test]
    fn unifies_cross_dll_structs_by_ipi_hash() {
        let mut module_a = PdbTypes::default();
        module_a.by_index.insert(0x1000, point_struct("Point"));
        module_a
            .structs
            .insert("Point".into(), point_struct("Point"));

        let mut module_b = PdbTypes::default();
        module_b
            .by_index
            .insert(0x1000, point_struct("GeometryPoint"));
        module_b
            .structs
            .insert("GeometryPoint".into(), point_struct("GeometryPoint"));
        module_b.procedures.insert(
            0x2000,
            ProcSig {
                return_type: Type::Primitive(PrimitiveType::Unknown),
                params: vec![Type::Ptr(Box::new(point_struct("GeometryPoint")))],
            },
        );

        let mut modules = vec![module_a, module_b];
        let summary = unify_pdb_type_sets(&mut modules);

        assert_eq!(summary.canonical_structs.len(), 1);
        assert_eq!(summary.aliases.len(), 1);
        assert_eq!(summary.aliases[0].original_name, "GeometryPoint");
        assert_eq!(summary.aliases[0].canonical_name, "Point");
        assert!(modules[1].structs.contains_key("Point"));
        assert!(!modules[1].structs.contains_key("GeometryPoint"));
        match &modules[1].by_index[&0x1000] {
            Type::Struct { name, .. } => assert_eq!(name, "Point"),
            other => panic!("expected struct, got {other:?}"),
        }
        match &modules[1].procedures[&0x2000].params[0] {
            Type::Ptr(inner) => match &**inner {
                Type::Struct { name, .. } => assert_eq!(name, "Point"),
                other => panic!("expected struct ptr, got {other:?}"),
            },
            other => panic!("expected ptr, got {other:?}"),
        }
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

    // -------------------------------------------------------------------
    // Raw IPI walker tests — synthesize byte streams matching the on-disk
    // CodeView leaf format for the 0x1601..=0x1606 leaves and assert that
    // `walk_ipi` produces the expected item shapes.
    // -------------------------------------------------------------------

    fn func_id_payload(scope_id: u32, type_ti: u32, name: &str) -> Vec<u8> {
        let mut p = Vec::new();
        p.extend_from_slice(&scope_id.to_le_bytes());
        p.extend_from_slice(&type_ti.to_le_bytes());
        p.extend_from_slice(name.as_bytes());
        p.push(0);
        p
    }

    fn mfunc_id_payload(parent_ti: u32, type_ti: u32, name: &str) -> Vec<u8> {
        let mut p = Vec::new();
        p.extend_from_slice(&parent_ti.to_le_bytes());
        p.extend_from_slice(&type_ti.to_le_bytes());
        p.extend_from_slice(name.as_bytes());
        p.push(0);
        p
    }

    fn string_id_payload(substr_list_id: u32, s: &str) -> Vec<u8> {
        let mut p = Vec::new();
        p.extend_from_slice(&substr_list_id.to_le_bytes());
        p.extend_from_slice(s.as_bytes());
        p.push(0);
        p
    }

    #[test]
    fn walk_ipi_decodes_func_id() {
        // Single LF_FUNC_ID record: scope=0 (file/global), type=0x1234.
        let stream = record(LF_FUNC_ID, &func_id_payload(0, 0x1234, "main"));
        let items = walk_ipi(&stream).expect("walk succeeds");
        assert_eq!(items.len(), 1);
        assert_eq!(items[0].id, 0x1000);
        assert_eq!(items[0].kind, PdbIpiKind::FuncId);
        assert_eq!(items[0].name.as_deref(), Some("main"));
    }

    #[test]
    fn walk_ipi_decodes_mfunc_and_string_id() {
        // Two records, IDs 0x1000 and 0x1001.
        let mut stream = record(
            LF_MFUNC_ID,
            &mfunc_id_payload(0x2000, 0x2001, "MyClass::do_thing"),
        );
        stream.extend(record(
            LF_STRING_ID,
            &string_id_payload(0, "C:\\src\\foo.cpp"),
        ));

        let items = walk_ipi(&stream).expect("walk succeeds");
        assert_eq!(items.len(), 2);

        assert_eq!(items[0].id, 0x1000);
        assert_eq!(items[0].kind, PdbIpiKind::MFuncId);
        assert_eq!(items[0].name.as_deref(), Some("MyClass::do_thing"));

        assert_eq!(items[1].id, 0x1001);
        assert_eq!(items[1].kind, PdbIpiKind::StringId);
        assert_eq!(items[1].name.as_deref(), Some("C:\\src\\foo.cpp"));
    }

    #[test]
    fn walk_ipi_handles_nameless_leaves() {
        // BUILDINFO + SUBSTR_LIST + UDT_SRC_LINE: walker should report
        // each with `name = None` and the correct kind discriminant.
        // Concrete payload bytes don't matter for nameless leaves — the
        // walker only inspects the length-prefixed framing.
        let buildinfo = {
            let mut p = Vec::new();
            p.extend_from_slice(&5u16.to_le_bytes()); // count
            for arg in [0x1100u32, 0x1101, 0x1102, 0x1103, 0x1104] {
                p.extend_from_slice(&arg.to_le_bytes());
            }
            p
        };
        let substr_list = {
            let mut p = Vec::new();
            p.extend_from_slice(&2u32.to_le_bytes()); // count
            p.extend_from_slice(&0x1200u32.to_le_bytes());
            p.extend_from_slice(&0x1201u32.to_le_bytes());
            p
        };
        let udt_src_line = {
            let mut p = Vec::new();
            p.extend_from_slice(&0x1500u32.to_le_bytes()); // type TI
            p.extend_from_slice(&0x1000u32.to_le_bytes()); // src (LF_STRING_ID id)
            p.extend_from_slice(&42u32.to_le_bytes()); // line
            p
        };

        let mut stream = record(LF_BUILDINFO, &buildinfo);
        stream.extend(record(LF_SUBSTR_LIST, &substr_list));
        stream.extend(record(LF_UDT_SRC_LINE, &udt_src_line));

        let items = walk_ipi(&stream).expect("walk succeeds");
        assert_eq!(items.len(), 3);
        assert_eq!(items[0].id, 0x1000);
        assert_eq!(items[0].kind, PdbIpiKind::BuildInfo);
        assert!(items[0].name.is_none());
        assert_eq!(items[1].id, 0x1001);
        assert_eq!(items[1].kind, PdbIpiKind::SubStrList);
        assert!(items[1].name.is_none());
        assert_eq!(items[2].id, 0x1002);
        assert_eq!(items[2].kind, PdbIpiKind::UdtSrcLine);
        assert!(items[2].name.is_none());
    }

    #[test]
    fn walk_ipi_skips_unknown_leaves_and_advances_ids() {
        // Mix three records: FUNC_ID (known) → bogus 0x9999 leaf (skipped
        // by walker, but still consumes an item-id slot) → STRING_ID
        // (known). The STRING_ID should land at id 0x1002 even though
        // only two items appear in the output, proving the walker
        // increments the id counter for every record it sees — not just
        // recognized ones — which matches how compilers actually
        // allocate IPI ids.
        let mut stream = record(LF_FUNC_ID, &func_id_payload(0, 0x1234, "alpha"));
        stream.extend(record(0x9999, &[0u8; 4])); // unknown leaf, 4 payload bytes
        stream.extend(record(LF_STRING_ID, &string_id_payload(0, "beta")));

        let items = walk_ipi(&stream).expect("walk succeeds");
        assert_eq!(items.len(), 2);
        assert_eq!(items[0].id, 0x1000);
        assert_eq!(items[0].kind, PdbIpiKind::FuncId);
        assert_eq!(items[0].name.as_deref(), Some("alpha"));
        assert_eq!(items[1].id, 0x1002, "id slot consumed by unknown leaf");
        assert_eq!(items[1].kind, PdbIpiKind::StringId);
        assert_eq!(items[1].name.as_deref(), Some("beta"));
    }

    /// Phase 1 — primitive TI lookup covers the common signed /
    /// unsigned / float widths and returns `None` for user TIs.
    #[test]
    fn primitive_ti_lookup_for_common_widths() {
        // Signed int4 (T_INT4 = 0x0074).
        assert!(matches!(
            primitive_ti_to_type(0x0074),
            Some(Type::Primitive(PrimitiveType::Int(4)))
        ));
        // Unsigned long long (T_UQUAD = 0x0023).
        assert!(matches!(
            primitive_ti_to_type(0x0023),
            Some(Type::Primitive(PrimitiveType::UnsignedInt(8)))
        ));
        // 32-bit float.
        assert!(matches!(
            primitive_ti_to_type(0x0040),
            Some(Type::Primitive(PrimitiveType::Float))
        ));
        // 64-bit float.
        assert!(matches!(
            primitive_ti_to_type(0x0041),
            Some(Type::Primitive(PrimitiveType::Double))
        ));
        // Bool.
        assert!(matches!(
            primitive_ti_to_type(0x0030),
            Some(Type::Primitive(PrimitiveType::Bool))
        ));
    }

    /// Pointer-to-primitive (0x04xx / 0x05xx / 0x06xx) recurses and
    /// wraps the pointee. T_64PINT4 (0x0674) → `int *`.
    #[test]
    fn primitive_ti_pointer_family_unwraps_pointee() {
        let t = primitive_ti_to_type(0x0674).expect("ptr-to-int4");
        let Type::Ptr(inner) = t else {
            panic!("expected Ptr");
        };
        assert!(matches!(*inner, Type::Primitive(PrimitiveType::Int(4))));
    }

    /// T_64PVOID (0x0603) — 64-bit pointer to void.
    #[test]
    fn primitive_ti_64pvoid_is_void_ptr() {
        let t = primitive_ti_to_type(0x0603).expect("64pvoid");
        assert!(t.is_pointer());
    }

    /// User TIs (≥ 0x1000) are not primitives.
    #[test]
    fn primitive_ti_returns_none_for_user_indices() {
        assert!(primitive_ti_to_type(0x1000).is_none());
        assert!(primitive_ti_to_type(0xDEAD).is_none());
    }

    // ----- Phase 2: walk_tpi_with_index ----------------------------------

    /// Build a minimal TPI record stream containing one `LF_STRUCTURE`
    /// with two primitive-typed fields. Mirrors the existing
    /// `walk_tpi_decodes_struct` builder so we exercise the index map
    /// on a known shape.
    fn build_struct_with_int4_and_uint4_fields() -> Vec<u8> {
        let mut stream = Vec::new();

        // LF_FIELDLIST (TI 0x1000): two LF_MEMBER entries.
        // Members: x at offset 0 with field_type=T_INT4 (0x0074),
        //          y at offset 4 with field_type=T_UINT4 (0x0075).
        let fl_kind = LF_FIELDLIST;
        let mut fl_payload: Vec<u8> = Vec::new();

        // member x
        fl_payload.extend_from_slice(&LF_MEMBER.to_le_bytes());
        fl_payload.extend_from_slice(&0u16.to_le_bytes()); // attrs
        fl_payload.extend_from_slice(&0x00000074u32.to_le_bytes()); // type
        // numeric leaf: offset 0 (raw u16 < 0x8000 is taken literally)
        fl_payload.extend_from_slice(&0u16.to_le_bytes());
        fl_payload.extend_from_slice(b"x\0");
        while !fl_payload.len().is_multiple_of(4) {
            fl_payload.push(0xF0); // pad
        }

        // member y
        fl_payload.extend_from_slice(&LF_MEMBER.to_le_bytes());
        fl_payload.extend_from_slice(&0u16.to_le_bytes());
        fl_payload.extend_from_slice(&0x00000075u32.to_le_bytes());
        fl_payload.extend_from_slice(&4u16.to_le_bytes()); // offset = 4
        fl_payload.extend_from_slice(b"y\0");
        while !fl_payload.len().is_multiple_of(4) {
            fl_payload.push(0xF0);
        }

        write_record(&mut stream, fl_kind, &fl_payload);

        // LF_STRUCTURE (TI 0x1001).
        let mut s_payload: Vec<u8> = Vec::new();
        s_payload.extend_from_slice(&2u16.to_le_bytes()); // count=2
        s_payload.extend_from_slice(&0u16.to_le_bytes()); // property
        s_payload.extend_from_slice(&0x1000u32.to_le_bytes()); // field_list ti
        s_payload.extend_from_slice(&0u32.to_le_bytes()); // derivation
        s_payload.extend_from_slice(&0u32.to_le_bytes()); // vshape
        // size = 8 numeric leaf
        s_payload.extend_from_slice(&8u16.to_le_bytes());
        s_payload.extend_from_slice(b"Point\0");
        while !s_payload.len().is_multiple_of(4) {
            s_payload.push(0xF0);
        }
        write_record(&mut stream, LF_STRUCTURE, &s_payload);

        stream
    }

    fn write_record(stream: &mut Vec<u8>, kind: u16, payload: &[u8]) {
        let len = (2 + payload.len()) as u16; // kind + payload
        stream.extend_from_slice(&len.to_le_bytes());
        stream.extend_from_slice(&kind.to_le_bytes());
        stream.extend_from_slice(payload);
    }

    #[test]
    fn walk_tpi_with_index_returns_named_types() {
        let stream = build_struct_with_int4_and_uint4_fields();
        let (types, index) = walk_tpi_with_index(&stream).expect("walk");
        // One LF_STRUCTURE survives the second-pass filter (FIELDLIST
        // is internal and doesn't emit a PdbType).
        assert_eq!(types.len(), 1);
        // The struct's TI is 0x1001 (FIELDLIST occupies 0x1000).
        let entry = index.get(&0x1001).expect("struct in index");
        assert!(matches!(entry, Type::Struct { .. }));
    }

    #[test]
    fn walk_tpi_with_index_resolves_primitive_field_types() {
        let stream = build_struct_with_int4_and_uint4_fields();
        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let Some(Type::Struct { fields, name }) = index.get(&0x1001) else {
            panic!("missing struct at TI 0x1001");
        };
        assert_eq!(name, "Point");
        assert_eq!(fields.len(), 2);
        assert!(matches!(
            &fields[0].ty,
            Type::Primitive(PrimitiveType::Int(4))
        ));
        assert!(matches!(
            &fields[1].ty,
            Type::Primitive(PrimitiveType::UnsignedInt(4))
        ));
    }

    /// The fixpoint loop terminates within MAX_FIXPOINT_ITERS for a
    /// well-formed stream. We assert by simple "no panic, all fields
    /// resolved" — the explicit iteration cap inside the function is
    /// the other half of the safety contract.
    #[test]
    fn walk_tpi_with_index_fixpoint_terminates() {
        let stream = build_struct_with_int4_and_uint4_fields();
        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let Some(Type::Struct { fields, .. }) = index.get(&0x1001) else {
            panic!("missing struct");
        };
        // No field should still be Unknown.
        for f in fields {
            assert!(
                !matches!(&f.ty, Type::Primitive(PrimitiveType::Unknown)),
                "field {} stayed Unknown after fixpoint",
                f.name
            );
        }
    }

    /// `walk_tpi` (legacy wrapper) still returns the same `Vec<PdbType>`
    /// shape — it just drops the index map.
    #[test]
    fn walk_tpi_legacy_wrapper_drops_index_map() {
        let stream = build_struct_with_int4_and_uint4_fields();
        let via_legacy = walk_tpi(&stream).expect("legacy walk");
        let (via_new, _) = walk_tpi_with_index(&stream).expect("new walk");
        assert_eq!(via_legacy, via_new);
    }

    // ----- Phase 3: complex record decoders ------------------------------

    /// `LF_POINTER` (TI 0x1000) → pointee T_INT4.
    #[test]
    fn decode_lf_pointer_returns_ptr_type() {
        let mut stream = Vec::new();
        let mut payload = Vec::new();
        // utype = T_INT4 (0x74), attr = arbitrary.
        payload.extend_from_slice(&0x00000074u32.to_le_bytes());
        payload.extend_from_slice(&0u32.to_le_bytes());
        write_record(&mut stream, LF_POINTER, &payload);

        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let Some(ty) = index.get(&0x1000) else {
            panic!("missing pointer at TI 0x1000; index={index:?}");
        };
        let Type::Ptr(inner) = ty else {
            panic!("expected Ptr, got {ty:?}");
        };
        assert!(matches!(**inner, Type::Primitive(PrimitiveType::Int(4))));
    }

    /// `LF_ARRAY` of `int[4]`.
    #[test]
    fn decode_lf_array_returns_array_type() {
        let mut stream = Vec::new();
        let mut payload = Vec::new();
        payload.extend_from_slice(&0x00000074u32.to_le_bytes()); // elem T_INT4
        payload.extend_from_slice(&0x00000022u32.to_le_bytes()); // idx T_ULONG (unused)
        // size numeric = 16 (literal u16 < 0x8000)
        payload.extend_from_slice(&16u16.to_le_bytes());
        // name (empty)
        payload.push(0);
        while payload.len() % 4 != 0 {
            payload.push(0xF0);
        }
        write_record(&mut stream, LF_ARRAY, &payload);

        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let Some(Type::Array { element, size }) = index.get(&0x1000) else {
            panic!("missing array");
        };
        assert!(matches!(**element, Type::Primitive(PrimitiveType::Int(4))));
        assert_eq!(*size, Some(16));
    }

    /// `LF_PROCEDURE` returning T_VOID with no args (empty arglist).
    #[test]
    fn decode_lf_procedure_returns_funcptr_type() {
        let mut stream = Vec::new();

        // LF_ARGLIST at TI 0x1000 with count=0.
        let mut arg_payload = Vec::new();
        arg_payload.extend_from_slice(&0u32.to_le_bytes());
        write_record(&mut stream, LF_ARGLIST, &arg_payload);

        // LF_PROCEDURE at TI 0x1001.
        let mut proc_payload = Vec::new();
        proc_payload.extend_from_slice(&0x00000003u32.to_le_bytes()); // return T_VOID
        proc_payload.push(0); // call_conv
        proc_payload.push(0); // funcattr
        proc_payload.extend_from_slice(&0u16.to_le_bytes()); // parm_count
        proc_payload.extend_from_slice(&0x00001000u32.to_le_bytes()); // arglist TI
        write_record(&mut stream, LF_PROCEDURE, &proc_payload);

        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let Some(Type::FuncPtr {
            params,
            return_type,
            variadic,
        }) = index.get(&0x1001)
        else {
            panic!("missing FuncPtr");
        };
        assert!(params.is_empty());
        assert!(matches!(
            **return_type,
            Type::Primitive(PrimitiveType::Unknown)
        ));
        assert!(!variadic);
    }

    /// `LF_BITFIELD` of width 3 starting at bit 5 over an `int` underlying.
    #[test]
    fn decode_lf_bitfield_returns_bitfield_type() {
        let mut stream = Vec::new();
        let mut payload = Vec::new();
        payload.extend_from_slice(&0x00000074u32.to_le_bytes()); // underlying T_INT4
        payload.push(3); // length
        payload.push(5); // position
        write_record(&mut stream, LF_BITFIELD, &payload);

        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let Some(Type::Bitfield {
            underlying,
            offset,
            width,
        }) = index.get(&0x1000)
        else {
            panic!("missing Bitfield");
        };
        assert_eq!(*offset, 5);
        assert_eq!(*width, 3);
        assert!(matches!(
            **underlying,
            Type::Primitive(PrimitiveType::Int(4))
        ));
    }

    /// `LF_MODIFIER` passes through to the underlying type.
    #[test]
    fn decode_lf_modifier_passes_through_underlying() {
        let mut stream = Vec::new();
        let mut payload = Vec::new();
        payload.extend_from_slice(&0x00000074u32.to_le_bytes()); // underlying T_INT4
        payload.extend_from_slice(&0u16.to_le_bytes()); // attr (const/volatile)
        write_record(&mut stream, LF_MODIFIER, &payload);

        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let ty = index.get(&0x1000).expect("modifier present");
        assert!(matches!(ty, Type::Primitive(PrimitiveType::Int(4))));
    }

    /// Chained: pointer to a user struct resolves through the fixpoint.
    /// Lay out: FIELDLIST at 0x1000, STRUCTURE at 0x1001, POINTER at 0x1002.
    #[test]
    fn pointer_to_user_struct_resolves_via_fixpoint() {
        let mut stream = build_struct_with_int4_and_uint4_fields();
        // Append LF_POINTER targeting TI 0x1001 (the struct).
        let mut payload = Vec::new();
        payload.extend_from_slice(&0x00001001u32.to_le_bytes());
        payload.extend_from_slice(&0u32.to_le_bytes());
        write_record(&mut stream, LF_POINTER, &payload);

        let (_, index) = walk_tpi_with_index(&stream).expect("walk");
        let Some(Type::Ptr(inner)) = index.get(&0x1002) else {
            panic!("missing pointer at TI 0x1002");
        };
        assert!(matches!(**inner, Type::Struct { .. }));
    }

    /// `pdb_type_to_ir_type` produces `Type::Struct` with one
    /// `StructFieldType` per `PdbField`, with field types defaulting to
    /// `PrimitiveType::Unknown`. The struct name and field offsets are
    /// preserved exactly.
    #[test]
    fn pdb_type_lowering_emits_struct_with_unknown_fields() {
        let pty = PdbType {
            name: "Point".into(),
            size: 8,
            kind: PdbTypeKind::Structure,
            fields: vec![
                PdbField {
                    name: "x".into(),
                    offset: 0,
                    field_type: 0x74,
                },
                PdbField {
                    name: "y".into(),
                    offset: 4,
                    field_type: 0x74,
                },
            ],
        };
        let ir_ty = pdb_type_to_ir_type(&pty).expect("non-empty name");
        match ir_ty {
            Type::Struct { name, fields } => {
                assert_eq!(name, "Point");
                assert_eq!(fields.len(), 2);
                assert_eq!(fields[0].name, "x");
                assert_eq!(fields[0].offset, 0);
                assert!(matches!(
                    &fields[0].ty,
                    Type::Primitive(PrimitiveType::Unknown)
                ));
                assert_eq!(fields[1].offset, 4);
            }
            other => panic!("expected Struct, got {other:?}"),
        }
    }

    /// Empty name → `None` (anonymous / forward-ref records are skipped).
    #[test]
    fn pdb_type_lowering_skips_unnamed_records() {
        let pty = PdbType {
            name: String::new(),
            size: 0,
            kind: PdbTypeKind::Structure,
            fields: Vec::new(),
        };
        assert!(pdb_type_to_ir_type(&pty).is_none());
    }

    /// `apply_field_type_map` replaces `Unknown` fields with the
    /// resolved entries from the map.
    #[test]
    fn apply_field_type_map_replaces_unknown_field_types() {
        let pty = PdbType {
            name: "Header".into(),
            size: 8,
            kind: PdbTypeKind::Structure,
            fields: vec![PdbField {
                name: "len".into(),
                offset: 0,
                field_type: 0x74,
            }],
        };
        let mut ir_ty = pdb_type_to_ir_type(&pty).expect("struct");
        let mut map: BTreeMap<(String, String), Type> = BTreeMap::new();
        map.insert(
            ("Header".into(), "len".into()),
            Type::Primitive(PrimitiveType::UnsignedInt(4)),
        );
        let hits = apply_field_type_map(&mut ir_ty, &map);
        assert_eq!(hits, 1);
        let Type::Struct { fields, .. } = ir_ty else {
            panic!("expected Struct");
        };
        assert!(matches!(
            fields[0].ty,
            Type::Primitive(PrimitiveType::UnsignedInt(4))
        ));
    }

    /// `lower_pdb_types` collects every named aggregate.
    #[test]
    fn lower_pdb_types_collects_named_aggregates() {
        let inputs = vec![
            PdbType {
                name: "A".into(),
                size: 4,
                kind: PdbTypeKind::Structure,
                fields: Vec::new(),
            },
            PdbType {
                name: String::new(), // anonymous → skipped
                size: 0,
                kind: PdbTypeKind::Structure,
                fields: Vec::new(),
            },
            PdbType {
                name: "B".into(),
                size: 4,
                kind: PdbTypeKind::Union,
                fields: Vec::new(),
            },
        ];
        let map = lower_pdb_types(&inputs);
        assert_eq!(map.len(), 2);
        assert!(matches!(map.get("A"), Some(Type::Struct { .. })));
        assert!(matches!(map.get("B"), Some(Type::Union { .. })));
    }
}
