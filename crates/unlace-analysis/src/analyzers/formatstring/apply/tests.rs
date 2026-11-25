use super::*;

// --- classify_variadic_call (Ghidra VARIADIC_SUBSTRINGS / scanf test) -----

#[test]
fn classify_printf_family_output() {
    // printf-family → Some(true) (output types).
    assert_eq!(classify_variadic_call("printf"), Some(true));
    assert_eq!(classify_variadic_call("fprintf"), Some(true));
    assert_eq!(classify_variadic_call("sprintf"), Some(true));
    assert_eq!(classify_variadic_call("snprintf"), Some(true));
    assert_eq!(classify_variadic_call("vprintf"), Some(true));
    assert_eq!(classify_variadic_call("__printf_chk"), Some(true));
}

#[test]
fn classify_scanf_family_input() {
    // scanf-family → Some(false) (input types).
    assert_eq!(classify_variadic_call("scanf"), Some(false));
    assert_eq!(classify_variadic_call("sscanf"), Some(false));
    assert_eq!(classify_variadic_call("fscanf"), Some(false));
    // A name containing "scanf" is input even if it also contains "printf"
    // (Ghidra isOutputType = !contains("scanf"); the scanf test wins).
    assert_eq!(classify_variadic_call("printf_scanf_weird"), Some(false));
}

#[test]
fn a_long_double_conversion_declines_the_site() {
    // `%Lf` has no honest width here, and the wrong width is the wrong ABI
    // class, which shifts every argument after it.
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types
        .set_core_type(
            "char",
            1,
            unlace_decomp::dtype::type_metatype::TYPE_INT,
            true,
        )
        .expect("char core type");
    types.cache_core_types().expect("cache core types");
    let fixed: Vec<Rc<Datatype>> = Vec::new();
    assert!(
        build_override_pieces(
            "printf",
            None,
            &fixed,
            &[Spec::Int, Spec::LongDouble],
            &types,
            8,
            VarargAbi::Named
        )
        .unwrap()
        .is_none()
    );
    // The same format without the `L` is typed.
    assert!(
        build_override_pieces(
            "printf",
            None,
            &fixed,
            &[Spec::Int, Spec::Double],
            &types,
            8,
            VarargAbi::Named
        )
        .unwrap()
        .is_some()
    );
}

#[test]
fn a_vararg_the_target_passes_unlike_a_named_argument_declines_the_site() {
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(4), 4, 4);
    types
        .set_core_type(
            "char",
            1,
            unlace_decomp::dtype::type_metatype::TYPE_INT,
            true,
        )
        .expect("char core type");
    types.cache_core_types().expect("cache core types");
    let fixed: Vec<Rc<Datatype>> = Vec::new();
    let build = |specs: &[Spec], abi| {
        build_override_pieces("printf", None, &fixed, specs, &types, 1, abi).unwrap()
    };
    // ARM32 hard-float / RISC-V: a `%f` travels in core registers, a named
    // double in `d0`/`fa0`.
    assert!(build(&[Spec::Int, Spec::CharPtr], VarargAbi::Integer).is_some());
    assert!(build(&[Spec::Int, Spec::Double], VarargAbi::Integer).is_none());
    // A double-width integer is not admitted where the pointer is narrower.
    assert!(build(&[Spec::LongLong], VarargAbi::Integer).is_none());
    // Apple AArch64: nothing is passed like a named argument.
    assert!(build(&[Spec::Int], VarargAbi::Nothing).is_none());
    assert!(build(&[Spec::Int, Spec::Double], VarargAbi::Named).is_some());
}

#[test]
fn classify_non_variadic_none() {
    assert_eq!(classify_variadic_call("puts"), None);
    assert_eq!(classify_variadic_call("memcpy"), None);
    assert_eq!(classify_variadic_call("main"), None);
    assert_eq!(classify_variadic_call(""), None);
}
