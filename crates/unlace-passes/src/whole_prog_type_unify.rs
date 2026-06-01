//! Whole-program type unification across multiple [`SsaFunction`]s.
//!
//! Stack-frame composite recovery (see
//! [`crate::stack_vars::StackVarRecoveryPass`]) produces a
//! `Type::Struct` per function, named locally (`anon_<offset>`,
//! `frame_local_struct_<id>`, etc.). Two functions that touch the same
//! ABI struct independently will each invent their own name even though
//! the *layout* is identical, which prevents the C printer from emitting
//! one shared `struct __anon_<hash>` declaration.
//!
//! This pass groups all inferred structs across a program by their
//! structural fingerprint — the field offsets, sizes, and primitive
//! shapes — and assigns one canonical name per equivalence class. Every
//! occurrence (`SsaFunction::inferred_structs` *and*
//! `SsaFunction::composite_var_types`) is rewritten to point at the
//! canonical name so downstream printing / serialization sees a single
//! declaration shared across call sites.
//!
//! ## Algorithm
//!
//! 1. For every struct value in every function's `inferred_structs`,
//!    compute a 64-bit hash over the *structural* fingerprint:
//!    `(field_offset, field_size_bytes, field_primitive_ty)` for every
//!    field, in offset-sorted order. The struct *name* is deliberately
//!    excluded so two layouts named differently still collide.
//! 2. The canonical name for hash `h` is `__anon_<hex8>` — the first
//!    8 hex digits of `h`. Hash → name is a `BTreeMap` so the chosen
//!    name is deterministic across runs.
//! 3. `rename_to_canonical` walks every `Type::Struct { name, .. }`
//!    reachable through `inferred_structs` and `composite_var_types` and
//!    replaces `name` with the canonical entry. Layouts that weren't
//!    seen during unification are left untouched.
//!
//! Self-recursive structs are unsupported in unlace's `Type` (no fixed
//! point), so the recursion in `rewrite_struct_names` terminates on the
//! finite type tree.

use std::collections::BTreeMap;
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::types::{StructFieldType, Type};

/// Whole-program canonicalisation table: structural-hash → canonical
/// struct name shared by every function that inferred a struct with
/// that exact layout.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct ProgramTypeUnifier {
    /// `BTreeMap` (deterministic iteration order) keyed by the 64-bit
    /// structural hash; value is the canonical name (`__anon_<hex>`).
    pub canonical: BTreeMap<u64, String>,
}

impl ProgramTypeUnifier {
    /// Empty unifier — useful as a no-op when whole-program info isn't
    /// available (single-function decompilation).
    pub fn new() -> Self {
        Self::default()
    }

    /// Look up the canonical name for a given layout hash, if any.
    pub fn canonical_name(&self, hash: u64) -> Option<&str> {
        self.canonical.get(&hash).map(String::as_str)
    }

    /// Number of distinct struct *layouts* discovered across the
    /// program — equivalently, the number of canonical names that
    /// will be emitted.
    pub fn distinct_layouts(&self) -> usize {
        self.canonical.len()
    }

    /// Rewrite every `Type::Struct` reachable through `func`'s
    /// `inferred_structs` and `composite_var_types` so that any layout
    /// whose hash is in `self.canonical` carries the canonical name.
    /// Layouts not present in the table are left untouched.
    pub fn rename_to_canonical(&self, func: &mut SsaFunction) {
        for ty in func.inferred_structs.values_mut() {
            self.rewrite_struct_names(ty);
        }
        for ty in func.composite_var_types.values_mut() {
            self.rewrite_struct_names(ty);
        }
    }

    /// Recursively rewrite `Type::Struct` names inside `ty` (and any
    /// nested types it owns) using `self.canonical`.
    fn rewrite_struct_names(&self, ty: &mut Type) {
        match ty {
            Type::Struct { name, fields } => {
                let h = struct_layout_hash(name, fields);
                if let Some(canon) = self.canonical.get(&h) {
                    *name = canon.clone();
                }
                for f in fields.iter_mut() {
                    self.rewrite_struct_names(&mut f.ty);
                }
            }
            Type::Ptr(inner) => self.rewrite_struct_names(inner),
            Type::Array { element, .. } => self.rewrite_struct_names(element),
            Type::FuncPtr {
                params,
                return_type,
                ..
            } => {
                for p in params.iter_mut() {
                    self.rewrite_struct_names(p);
                }
                self.rewrite_struct_names(return_type);
            }
            Type::Bitfield { underlying, .. } => self.rewrite_struct_names(underlying),
            Type::Slice { elem } => self.rewrite_struct_names(elem),
            Type::Map { key, value } => {
                self.rewrite_struct_names(key);
                self.rewrite_struct_names(value);
            }
            Type::Primitive(_)
            | Type::Named(_)
            | Type::Interface { .. }
            | Type::TypeParam { .. }
            | Type::Union { .. } => {}
        }
    }
}

/// Build a [`ProgramTypeUnifier`] from a slice of references to
/// [`SsaFunction`]s.
///
/// Iterates every struct in every function's `inferred_structs`, hashes
/// its layout (field offset/size/type tuple, *not* the source name),
/// and assigns a single canonical `__anon_<hex8>` name per equivalence
/// class.
///
/// Pass the result to [`ProgramTypeUnifier::rename_to_canonical`] for
/// each function (mutable) to commit the rename.
pub fn unify_structs_across_program(funcs: &[&SsaFunction]) -> ProgramTypeUnifier {
    let mut canonical: BTreeMap<u64, String> = BTreeMap::new();

    for func in funcs {
        for ty in func.inferred_structs.values() {
            collect_struct_hashes(ty, &mut canonical);
        }
        for ty in func.composite_var_types.values() {
            collect_struct_hashes(ty, &mut canonical);
        }
    }

    ProgramTypeUnifier { canonical }
}

/// Walk `ty`, record `struct_layout_hash → __anon_<hex8>` for every
/// embedded `Type::Struct`. Deterministic because `BTreeMap::insert`
/// keeps the first-seen value (we use `entry().or_insert`).
fn collect_struct_hashes(ty: &Type, out: &mut BTreeMap<u64, String>) {
    match ty {
        Type::Struct { name, fields } => {
            let h = struct_layout_hash(name, fields);
            out.entry(h)
                .or_insert_with(|| format!("__anon_{:08x}", h & 0xFFFF_FFFF));
            for f in fields {
                collect_struct_hashes(&f.ty, out);
            }
        }
        Type::Ptr(inner) => collect_struct_hashes(inner, out),
        Type::Array { element, .. } => collect_struct_hashes(element, out),
        Type::FuncPtr {
            params,
            return_type,
            ..
        } => {
            for p in params {
                collect_struct_hashes(p, out);
            }
            collect_struct_hashes(return_type, out);
        }
        Type::Bitfield { underlying, .. } => collect_struct_hashes(underlying, out),
        Type::Slice { elem } => collect_struct_hashes(elem, out),
        Type::Map { key, value } => {
            collect_struct_hashes(key, out);
            collect_struct_hashes(value, out);
        }
        Type::Primitive(_)
        | Type::Named(_)
        | Type::Interface { .. }
        | Type::TypeParam { .. }
        | Type::Union { .. } => {}
    }
}

/// 64-bit hash of a struct's *layout* — its (offset, size, primitive
/// shape) field tuple in offset-sorted order. The source name is
/// excluded so two layouts named differently still collide. Nested
/// struct fields hash by their own layout (recursively), making the
/// fingerprint name-independent end-to-end.
fn struct_layout_hash(_name: &str, fields: &[StructFieldType]) -> u64 {
    let mut hasher = DefaultHasher::new();
    // Tag the discriminant so an empty struct isn't hash-equal to an
    // empty primitive list, etc.
    "struct".hash(&mut hasher);
    fields.len().hash(&mut hasher);

    let mut sorted: Vec<&StructFieldType> = fields.iter().collect();
    sorted.sort_by_key(|f| (f.offset, f.name.clone()));
    for f in sorted {
        f.offset.hash(&mut hasher);
        // Field name is irrelevant to *layout* equivalence — two
        // structs whose recovered field names differ but whose
        // offsets / shapes line up represent the same ABI struct.
        // Hash only the shape.
        hash_type_shape(&f.ty, &mut hasher);
    }
    hasher.finish()
}

/// Recursively fold the *shape* (everything except struct names) of
/// `ty` into `hasher`. Used by [`struct_layout_hash`] so that nested
/// struct fields contribute their layout rather than their source name.
fn hash_type_shape(ty: &Type, hasher: &mut DefaultHasher) {
    match ty {
        Type::Primitive(p) => {
            "prim".hash(hasher);
            p.hash(hasher);
        }
        Type::Named(name) => {
            "named".hash(hasher);
            name.hash(hasher);
        }
        Type::Ptr(inner) => {
            "ptr".hash(hasher);
            hash_type_shape(inner, hasher);
        }
        Type::Array { element, size } => {
            "arr".hash(hasher);
            size.hash(hasher);
            hash_type_shape(element, hasher);
        }
        Type::Struct { name, fields } => {
            "struct".hash(hasher);
            // Recurse via the layout hash so nested structs are
            // canonicalised the same way the outer ones are.
            let nested = struct_layout_hash(name, fields);
            nested.hash(hasher);
        }
        Type::FuncPtr {
            params,
            return_type,
            variadic,
        } => {
            "fp".hash(hasher);
            variadic.hash(hasher);
            params.len().hash(hasher);
            for p in params {
                hash_type_shape(p, hasher);
            }
            hash_type_shape(return_type, hasher);
        }
        Type::Bitfield {
            underlying,
            offset,
            width,
        } => {
            "bf".hash(hasher);
            offset.hash(hasher);
            width.hash(hasher);
            hash_type_shape(underlying, hasher);
        }
        Type::Interface { name, methods } => {
            // Interfaces are a Go-recovery construct that doesn't
            // participate in C-struct layout unification; hash by
            // identity (name + method names) to keep them disjoint.
            "iface".hash(hasher);
            name.hash(hasher);
            for m in methods {
                m.name.hash(hasher);
            }
        }
        Type::Slice { elem } => {
            "slice".hash(hasher);
            hash_type_shape(elem, hasher);
        }
        Type::Map { key, value } => {
            "map".hash(hasher);
            hash_type_shape(key, hasher);
            hash_type_shape(value, hasher);
        }
        Type::TypeParam { .. } => {
            "typeparam".hash(hasher);
        }
        Type::Union { fields, .. } => {
            "union".hash(hasher);
            fields.len().hash(hasher);
            for f in fields {
                f.name.hash(hasher);
                hash_type_shape(&f.ty, hasher);
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::types::{StructFieldType, Type};
    use unlace_ir::{BasicBlock, BlockId, Function};

    /// Build a minimal empty `SsaFunction` we can directly populate
    /// with `inferred_structs` / `composite_var_types` for the test.
    fn empty_ssa(name: &str) -> SsaFunction {
        let mut func = Function::new(name, BlockId(0), 0x1000);
        func.insert_block(BasicBlock::new(BlockId(0)));
        build_ssa(func)
    }

    /// Helper: build a 2-field struct {int32 a@0, int32 b@4} with a
    /// caller-chosen source name.
    fn point_struct(name: &str) -> Type {
        Type::Struct {
            name: name.to_string(),
            fields: vec![
                StructFieldType {
                    name: "a".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "b".into(),
                    ty: Type::int(4),
                    offset: 4,
                },
            ],
        }
    }

    #[test]
    fn identical_layouts_collapse_to_one_canonical_name() {
        let mut f1 = empty_ssa("f1");
        let mut f2 = empty_ssa("f2");
        f1.inferred_structs.insert(-16, point_struct("anon_a"));
        f2.inferred_structs.insert(-32, point_struct("anon_b"));

        let unifier = unify_structs_across_program(&[&f1, &f2]);
        assert_eq!(
            unifier.distinct_layouts(),
            1,
            "two structurally identical layouts must collapse to one canonical name"
        );

        unifier.rename_to_canonical(&mut f1);
        unifier.rename_to_canonical(&mut f2);

        let n1 = match f1.inferred_structs.get(&-16).unwrap() {
            Type::Struct { name, .. } => name.clone(),
            _ => unreachable!(),
        };
        let n2 = match f2.inferred_structs.get(&-32).unwrap() {
            Type::Struct { name, .. } => name.clone(),
            _ => unreachable!(),
        };
        assert_eq!(n1, n2, "both functions must now share the canonical name");
        assert!(
            n1.starts_with("__anon_"),
            "canonical name must use the __anon_ prefix, got {n1}"
        );
    }

    #[test]
    fn distinct_layouts_get_distinct_canonical_names() {
        let mut f1 = empty_ssa("f1");
        let mut f2 = empty_ssa("f2");

        // Same field count but field b sits at offset 8 (not 4).
        let widened = Type::Struct {
            name: "widened".into(),
            fields: vec![
                StructFieldType {
                    name: "a".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "b".into(),
                    ty: Type::int(4),
                    offset: 8,
                },
            ],
        };

        f1.inferred_structs.insert(-16, point_struct("p"));
        f2.inferred_structs.insert(-16, widened);

        let unifier = unify_structs_across_program(&[&f1, &f2]);
        assert_eq!(
            unifier.distinct_layouts(),
            2,
            "differing offsets must yield two equivalence classes"
        );

        unifier.rename_to_canonical(&mut f1);
        unifier.rename_to_canonical(&mut f2);

        let n1 = match f1.inferred_structs.get(&-16).unwrap() {
            Type::Struct { name, .. } => name.clone(),
            _ => unreachable!(),
        };
        let n2 = match f2.inferred_structs.get(&-16).unwrap() {
            Type::Struct { name, .. } => name.clone(),
            _ => unreachable!(),
        };
        assert_ne!(
            n1, n2,
            "non-isomorphic layouts must receive different canonical names"
        );
    }

    #[test]
    fn rename_rewrites_composite_var_types_and_pointer_targets() {
        let mut f1 = empty_ssa("f1");

        // A `*Point` in composite_var_types references the same layout
        // through a pointer.
        let sv = unlace_ir::ssa::SsaVarnode {
            base: unlace_ir::Varnode::reg(0, 8),
            version: 0,
        };
        f1.inferred_structs
            .insert(-16, point_struct("locally_named"));
        f1.composite_var_types
            .insert(sv, Type::Ptr(Box::new(point_struct("also_local"))));

        let unifier = unify_structs_across_program(&[&f1]);
        assert_eq!(
            unifier.distinct_layouts(),
            1,
            "inferred_structs + composite_var_types reference the same layout — one class"
        );

        unifier.rename_to_canonical(&mut f1);

        let inferred_name = match f1.inferred_structs.get(&-16).unwrap() {
            Type::Struct { name, .. } => name.clone(),
            _ => unreachable!(),
        };
        let pointer_target_name = match f1.composite_var_types.get(&sv).unwrap() {
            Type::Ptr(inner) => match inner.as_ref() {
                Type::Struct { name, .. } => name.clone(),
                _ => unreachable!(),
            },
            _ => unreachable!(),
        };
        assert_eq!(
            inferred_name, pointer_target_name,
            "the rename must reach into Ptr<Struct> inside composite_var_types"
        );
        assert!(inferred_name.starts_with("__anon_"));
    }

    #[test]
    fn empty_program_yields_empty_unifier_and_is_a_noop() {
        // No functions, no structs.
        let unifier = unify_structs_across_program(&[]);
        assert_eq!(unifier.distinct_layouts(), 0);
        assert!(unifier.canonical.is_empty());

        // A function with no structs is also a no-op.
        let mut f = empty_ssa("f");
        let before = f.inferred_structs.clone();
        let before_comp = f.composite_var_types.clone();

        let unifier2 = unify_structs_across_program(&[&f]);
        assert_eq!(unifier2.distinct_layouts(), 0);

        unifier2.rename_to_canonical(&mut f);
        assert_eq!(f.inferred_structs, before);
        assert_eq!(f.composite_var_types, before_comp);
    }
}
