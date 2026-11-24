//! (unlace, original `pdb_types.rs` `ipi_type_hash`, `unify_pdb_type_sets`, `hash_type`)
//! Structural shape hash for PDB UDTs, and the first-wins canonical name per shape.
//!
//! TPI indexes and unique names are module-local, so two DLL PDBs that declare the same
//! structure can name it differently. The shape hash serializes a lowered [`Datatype`]
//! instead: the struct's own name is left out, field names, offsets, bitfield bit
//! positions and nested field shapes are kept, and recursion is depth-bounded. Equal
//! hashes mean the same layout.
//!
//! This module is the pure half of the cross-module unification. Nothing calls it yet
//! (a single [`super::pdbtypes`] load reads one PDB), so it changes no output.

use std::collections::BTreeMap;

use unlace_decomp::dtype::{Datatype, DatatypeKind};

/// Recursion bound for nested field shapes, as the original `hash_type` depth.
const MAX_DEPTH: u8 = 32;

/// FNV-1a over bytes, the same stable hash the original used, so a shape hash does not
/// depend on the process hasher seed.
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

/// The structural hash of a lowered type. A struct's own name is not part of it.
pub fn shape_hash(ty: &Datatype) -> u64 {
    let mut h = StableHasher::new();
    hash_datatype(ty, &mut h, MAX_DEPTH);
    h.finish()
}

fn hash_datatype(ty: &Datatype, h: &mut StableHasher, depth: u8) {
    if depth == 0 {
        h.u8(0xfe);
        return;
    }
    match &ty.kind {
        DatatypeKind::Struct { field, bitfield } => {
            h.u8(0x04);
            h.u64(field.len() as u64);
            for f in field {
                h.str(&f.name);
                h.u32(f.offset as u32);
                hash_datatype(&f.field_type, h, depth - 1);
            }
            h.u64(bitfield.len() as u64);
            for b in bitfield {
                h.str(&b.name);
                h.u32(b.byte_offset as u32);
                h.u32(b.least_sig_bit as u32);
                h.u32(b.num_bits as u32);
                hash_datatype(&b.field_type, h, depth - 1);
            }
        }
        DatatypeKind::Union { field } => {
            h.u8(0x0b);
            h.u64(field.len() as u64);
            for f in field {
                h.str(&f.name);
                h.u32(f.offset as u32);
                hash_datatype(&f.field_type, h, depth - 1);
            }
        }
        DatatypeKind::Pointer { .. } => {
            h.u8(0x02);
            match ty.get_depend(0) {
                Some(target) => hash_datatype(&target, h, depth - 1),
                None => h.u8(0xfd),
            }
        }
        DatatypeKind::Array { arrayof, arraysize } => {
            h.u8(0x03);
            h.u32(*arraysize as u32);
            hash_datatype(arrayof, h, depth - 1);
        }
        DatatypeKind::Enum { namemap } => {
            h.u8(0x0d);
            h.u64(namemap.len() as u64);
            for (value, name) in namemap {
                h.u64(*value);
                h.str(name);
            }
        }
        _ => {
            h.u8(0x01);
            h.str(&format!("{:?}", ty.get_metatype()));
            h.u32(ty.get_size() as u32);
            h.str(ty.get_name());
        }
    }
}

/// One struct whose shape matched an earlier struct under a different name.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeAlias {
    /// Index of the module (in the order given) that declared the alias.
    pub module_index: usize,
    /// The name the module used.
    pub original_name: String,
    /// The first name seen for this shape.
    pub canonical_name: String,
    /// The shape hash both names share.
    pub hash: u64,
}

/// Canonical struct name per shape hash. The first occurrence wins.
#[derive(Debug, Default, Clone, PartialEq, Eq)]
pub struct ShapeCanon {
    by_hash: BTreeMap<u64, String>,
}

impl ShapeCanon {
    /// The canonical name for `ty`'s shape, registering `ty`'s name if the shape is new.
    pub fn canonical_name(&mut self, ty: &Datatype) -> String {
        self.by_hash
            .entry(shape_hash(ty))
            .or_insert_with(|| ty.get_name().to_string())
            .clone()
    }
}

/// Unify the struct sets of several modules in order: each struct whose name differs from
/// the canonical name of its shape becomes an alias. Each entry is `(module_index, struct)`.
pub fn unify_struct_shapes<'a>(
    structs: impl IntoIterator<Item = (usize, &'a Datatype)>,
) -> Vec<ShapeAlias> {
    let mut canon = ShapeCanon::default();
    let mut aliases = Vec::new();
    for (module_index, ty) in structs {
        let hash = shape_hash(ty);
        let canonical_name = canon.canonical_name(ty);
        if canonical_name != ty.get_name() {
            aliases.push(ShapeAlias {
                module_index,
                original_name: ty.get_name().to_string(),
                canonical_name,
                hash,
            });
        }
    }
    aliases
}
