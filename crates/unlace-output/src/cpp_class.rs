//! Populate C++ class annotations on a [`HirFunction`].
//!
//! Bridges [`crate::demangle`] (which classifies symbol names) to
//! [`unlace_struct::HirFunction`] (which carries the result through the
//! HIR rewrite pipeline) so that the C printer can emit
//! `ClassName::ClassName(args)` style markers for ctors/dtors instead of
//! the raw mangled name.

use unlace_struct::HirFunction;

use crate::demangle::{DemangleResult, demangle};

/// Detect whether `func` is a C++ constructor or destructor and stamp
/// `is_ctor`, `is_dtor`, and `class_name` on it accordingly.
///
/// This is a no-op for free C functions and for symbols that don't
/// demangle (e.g. plain `printf`). For Rust/Swift/Objective-C symbols
/// the demangler returns `is_ctor = is_dtor = false`, which means
/// non-C++ symbols also pass through untouched.
///
/// Returns `true` when at least one annotation field changed; this lets
/// callers cheaply detect "this function is now known to be a ctor/dtor"
/// without re-reading the result.
pub fn annotate_cpp_class_info(func: &mut HirFunction) -> bool {
    let Some(dr) = demangle(&func.name) else {
        return false;
    };
    annotate_from_demangle(func, &dr)
}

fn annotate_from_demangle(func: &mut HirFunction, dr: &DemangleResult) -> bool {
    let mut changed = false;

    if dr.is_ctor && !func.is_ctor {
        func.is_ctor = true;
        changed = true;
    }
    if dr.is_dtor && !func.is_dtor {
        func.is_dtor = true;
        changed = true;
    }

    // Only override class_name when the demangler produced one — leave any
    // existing user-supplied annotation alone.
    if let Some(cls) = dr.class_name.as_ref() {
        if func.class_name.as_deref() != Some(cls.as_str()) {
            func.class_name = Some(cls.clone());
            changed = true;
        }
    }

    changed
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use unlace_ir::ssa::PrimitiveType;
    use unlace_struct::HirFunction;

    use super::*;

    fn empty_hir(name: &str) -> HirFunction {
        HirFunction {
            name: name.to_string(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body: vec![],
            addr: 0,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            byref_locals: std::collections::BTreeSet::new(),
            stack_frame: None,
            cpp_lambda_captures: Vec::new(),
        }
    }

    #[test]
    fn detects_itanium_ctor_c1() {
        let mut f = empty_hir("_ZN4BaseC1Ev");
        let changed = annotate_cpp_class_info(&mut f);
        assert!(changed, "annotation should report a change");
        assert!(f.is_ctor);
        assert!(!f.is_dtor);
        assert_eq!(f.class_name.as_deref(), Some("Base"));
    }

    #[test]
    fn detects_itanium_ctor_c2() {
        let mut f = empty_hir("_ZN3FooC2Ei");
        annotate_cpp_class_info(&mut f);
        assert!(f.is_ctor);
        assert!(!f.is_dtor);
        assert_eq!(f.class_name.as_deref(), Some("Foo"));
    }

    #[test]
    fn detects_itanium_ctor_c3() {
        let mut f = empty_hir("_ZN3FooC3Ev");
        annotate_cpp_class_info(&mut f);
        assert!(f.is_ctor);
    }

    #[test]
    fn detects_itanium_dtor_d0() {
        let mut f = empty_hir("_ZN4BaseD0Ev");
        annotate_cpp_class_info(&mut f);
        assert!(!f.is_ctor);
        assert!(f.is_dtor);
        assert_eq!(f.class_name.as_deref(), Some("Base"));
    }

    #[test]
    fn detects_itanium_dtor_d1() {
        let mut f = empty_hir("_ZN4BaseD1Ev");
        annotate_cpp_class_info(&mut f);
        assert!(f.is_dtor);
    }

    #[test]
    fn detects_itanium_dtor_d2() {
        let mut f = empty_hir("_ZN4BaseD2Ev");
        annotate_cpp_class_info(&mut f);
        assert!(f.is_dtor);
    }

    #[test]
    fn detects_ctor_from_matching_name() {
        // `_ZN3Foo3FooEi` demangles to `Foo::Foo(int)` — the demangler
        // recognises this as a constructor via the
        // `short_name == class_name` heuristic even though there is no
        // C1/C2/C3 tag.
        let mut f = empty_hir("_ZN3Foo3FooEi");
        annotate_cpp_class_info(&mut f);
        assert!(f.is_ctor);
        assert_eq!(f.class_name.as_deref(), Some("Foo"));
    }

    #[test]
    fn no_annotation_for_normal_method() {
        let mut f = empty_hir("_ZN3foo3barEv");
        annotate_cpp_class_info(&mut f);
        assert!(!f.is_ctor);
        assert!(!f.is_dtor);
        // Normal member functions still pick up the class name.
        assert_eq!(f.class_name.as_deref(), Some("foo"));
    }

    #[test]
    fn no_annotation_for_unmangled_name() {
        let mut f = empty_hir("printf");
        let changed = annotate_cpp_class_info(&mut f);
        assert!(!changed);
        assert!(!f.is_ctor);
        assert!(!f.is_dtor);
        assert!(f.class_name.is_none());
    }

    #[test]
    fn no_annotation_for_free_function() {
        let mut f = empty_hir("_Z3addii");
        annotate_cpp_class_info(&mut f);
        assert!(!f.is_ctor);
        assert!(!f.is_dtor);
        assert!(f.class_name.is_none());
    }

    #[test]
    fn idempotent() {
        let mut f = empty_hir("_ZN4BaseC1Ev");
        let first = annotate_cpp_class_info(&mut f);
        let second = annotate_cpp_class_info(&mut f);
        assert!(first, "first call records a change");
        assert!(!second, "second call has nothing new to record");
        assert!(f.is_ctor);
    }
}
