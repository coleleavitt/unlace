//! CodeView TPI/IPI → unlace `Type` conversion.
//!
//! Walks the type information stream of a Microsoft PDB and lowers
//! `LF_STRUCTURE`, `LF_UNION`, `LF_ENUM`, `LF_POINTER`, `LF_PROCEDURE`,
//! `LF_ARRAY` records into the unlace `Type` model. Forward references are
//! resolved via a fixpoint pass.

use std::collections::{BTreeMap, BTreeSet};
use std::collections::BTreeMap;
use std::collections::BTreeMap;
use std::hash::{Hash, Hasher};
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
    ///
    /// When multiple DLLs contribute the same concrete layout, entries with
    /// distinct names but identical IPI-like layout hashes are canonicalized to
    /// a single shared `Type` instance so downstream consumers see one nominal
    /// definition instead of near-duplicate declarations.
    pub structs: BTreeMap<String, Type>,
    /// Canonicalized aggregate layout hash → shared struct/class/union type.
    ///
    /// The hash is derived from the fully lowered aggregate shape (field names,
    /// offsets, nested field types) and serves as a stable cross-DLL identity
    /// even when CodeView type indices differ between PDBs.
    pub struct_hashes: BTreeMap<u64, Type>,
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
            let canonical_ty = canonicalize_aggregate_type(&ty, &mut out.struct_hashes);
            match out.by_index.get(&idx) {
                Some(prev) if prev == &canonical_ty => {}
                _ => {
                    out.by_index.insert(idx, canonical_ty);
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
                    let hash = aggregate_layout_hash(t);
                    out.struct_hashes.entry(hash).or_insert_with(|| t.clone());
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


/// Resolve cross-DLL forward declarations by pulling full struct definitions
/// from whichever module has them.
pub fn resolve_cross_dll_forward_decls(modules: &mut [PdbTypes]) -> usize {
    let mut full_defs: BTreeMap<String, Type> = BTreeMap::new();
    for module in modules.iter() {
        for (name, ty) in &module.structs {
            if let Type::Struct { fields, .. } = ty {
                if !fields.is_empty() && !full_defs.contains_key(name) {
                    full_defs.insert(name.clone(), ty.clone());
                }
            }
        }
    }

    let mut resolved_count = 0usize;
    for module in modules.iter_mut() {
        let names: Vec<String> = module.structs.keys().cloned().collect();
        for name in names {
            let is_fwd = module
                .structs
                .get(&name)
                .map(|ty| matches!(ty, Type::Struct { fields, .. } if fields.is_empty()))
                .unwrap_or(false);
            if is_fwd {
                if let Some(full) = full_defs.get(&name) {
                    module.structs.insert(name, full.clone());
                    resolved_count += 1;
                }
            }
        }
    }
    resolved_count
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
        Type::Primitive(_) | Type::Interface { .. } | Type::TypeParam { .. } => {}
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
        Type::Primitive(_) | Type::Interface { .. } => {}
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
    }
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
            let fs = fields
                .iter()
                .map(|f| StructFieldType {
                    name: f.name.clone(),
                    ty: resolve(f.field_type, table, out),
                    offset: 0,
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

fn canonicalize_aggregate_type(ty: &Type, hashes: &mut BTreeMap<u64, Type>) -> Type {
    if !matches!(ty, Type::Struct { .. }) {
        return ty.clone();
    }
    let hash = aggregate_layout_hash(ty);
    if let Some(existing) = hashes.get(&hash) {
        existing.clone()
    } else {
        hashes.insert(hash, ty.clone());
        ty.clone()
    }
}

fn aggregate_layout_hash(ty: &Type) -> u64 {
    let mut hasher = std::collections::hash_map::DefaultHasher::new();
    hash_type_layout(ty, &mut hasher);
    hasher.finish()
}

fn hash_type_layout<H: Hasher>(ty: &Type, state: &mut H) {
    match ty {
        Type::Primitive(p) => {
            0u8.hash(state);
            p.hash(state);
        }
        Type::Ptr(inner) => {
            1u8.hash(state);
            hash_type_layout(inner, state);
        }
        Type::Array { element, size } => {
            2u8.hash(state);
            size.hash(state);
            hash_type_layout(element, state);
        }
        Type::Struct { fields, .. } => {
            3u8.hash(state);
            for field in fields {
                field.name.hash(state);
                field.offset.hash(state);
                hash_type_layout(&field.ty, state);
            }
        }
        Type::FuncPtr {
            params,
            return_type,
            variadic,
        } => {
            4u8.hash(state);
            variadic.hash(state);
            params.len().hash(state);
            for param in params {
                hash_type_layout(param, state);
            }
            hash_type_layout(return_type, state);
        }
        Type::Bitfield {
            underlying,
            offset,
            width,
        } => {
            5u8.hash(state);
            offset.hash(state);
            width.hash(state);
            hash_type_layout(underlying, state);
        }
        Type::Interface { name, methods } => {
            6u8.hash(state);
            name.hash(state);
            for method in methods {
                method.name.hash(state);
                method.signature.hash(state);
            }
        }
        Type::Slice { elem } => {
            7u8.hash(state);
            hash_type_layout(elem, state);
        }
        Type::Map { key, value } => {
            8u8.hash(state);
            hash_type_layout(key, state);
            hash_type_layout(value, state);
        }
    }
}

/// Merge one PDB type table into another, canonicalizing aggregate layouts
/// across DLL boundaries via their lowered layout hash.
pub fn merge_pdb_types(into: &mut PdbTypes, incoming: &PdbTypes) {
    for ty in incoming.by_index.values() {
        let canonical = canonicalize_aggregate_type(ty, &mut into.struct_hashes);
        if let Type::Struct { name, .. } = ty {
            into.structs.entry(name.clone()).or_insert(canonical);
        }
    }

    for (idx, ty) in &incoming.by_index {
        let canonical = canonicalize_aggregate_type(ty, &mut into.struct_hashes);
        into.by_index.entry(*idx).or_insert(canonical);
    }

    for (name, ty) in &incoming.structs {
        let canonical = canonicalize_aggregate_type(ty, &mut into.struct_hashes);
        into.structs.entry(name.clone()).or_insert(canonical);
    }

    for (name, variants) in &incoming.enums {
        into.enums.entry(name.clone()).or_insert_with(|| variants.clone());
    }

    for (idx, sig) in &incoming.procedures {
        into.procedures.entry(*idx).or_insert_with(|| sig.clone());
    }
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

    #[test]
    fn cross_dll_forward_decl_resolution() {
        use unlace_ir::types::{StructFieldType, Type};
        let mut mod_a = PdbTypes::default();
        mod_a.structs.insert(
            "Foo".into(),
            Type::Struct {
                name: "Foo".into(),
                fields: vec![],
            },
        );
        let mut mod_b = PdbTypes::default();
        mod_b.structs.insert(
            "Foo".into(),
            Type::Struct {
                name: "Foo".into(),
                fields: vec![StructFieldType {
                    name: "x".into(),
                    offset: 0,
                    ty: Type::Primitive(PrimitiveType::Int(4)),
                }],
            },
        );
        let mut modules = vec![mod_a, mod_b];
        let count = resolve_cross_dll_forward_decls(&mut modules);
        assert_eq!(count, 1);
        match &modules[0].structs["Foo"] {
            Type::Struct { fields, .. } => assert_eq!(fields.len(), 1),
            _ => panic!("expected struct"),
    #[test]
    fn canonicalizes_same_layout_with_different_names() {
        let point = Type::Struct {
            name: "foo!Point".into(),
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
        let vec2 = Type::Struct {
            name: "bar!Vec2".into(),
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

        let mut hashes = BTreeMap::new();
        let canonical_point = canonicalize_aggregate_type(&point, &mut hashes);
        let canonical_vec2 = canonicalize_aggregate_type(&vec2, &mut hashes);

        assert_eq!(hashes.len(), 1);
        assert_eq!(canonical_point, canonical_vec2);
        match canonical_vec2 {
            Type::Struct { name, .. } => assert_eq!(name, "foo!Point"),
            other => panic!("expected canonical struct, got {other:?}"),
        }
    }

    #[test]
    fn merge_pdb_types_dedupes_cross_dll_layouts_by_hash() {
        let shared_layout = vec![
            StructFieldType {
                name: "len".into(),
                ty: Type::uint(4),
                offset: 0,
            },
            StructFieldType {
                name: "cap".into(),
                ty: Type::uint(4),
                offset: 4,
            },
        ];
        let first = Type::Struct {
            name: "kernel32!BUFFER".into(),
            fields: shared_layout.clone(),
        };
        let second = Type::Struct {
            name: "user32!SCRATCH_BUFFER".into(),
            fields: shared_layout,
        };

        let mut left = PdbTypes::default();
        left.by_index.insert(0x1000, first.clone());
        left.structs.insert("BUFFER".into(), first.clone());
        left.struct_hashes.insert(aggregate_layout_hash(&first), first.clone());

        let mut right = PdbTypes::default();
        right.by_index.insert(0x2000, second.clone());
        right.structs.insert("SCRATCH_BUFFER".into(), second.clone());
        right.struct_hashes.insert(aggregate_layout_hash(&second), second.clone());

        merge_pdb_types(&mut left, &right);

        assert_eq!(left.struct_hashes.len(), 1, "same layout should share one hash bucket");
        assert_eq!(left.by_index[&0x1000], left.by_index[&0x2000]);
        assert_eq!(left.structs["BUFFER"], left.structs["SCRATCH_BUFFER"]);
        match &left.structs["SCRATCH_BUFFER"] {
            Type::Struct { name, .. } => assert_eq!(name, "kernel32!BUFFER"),
            other => panic!("expected canonical struct, got {other:?}"),
        }
        stream.extend(record(LF_STRING_ID, &string_id_payload(0, "C:\\src\\foo.cpp")));

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
}
