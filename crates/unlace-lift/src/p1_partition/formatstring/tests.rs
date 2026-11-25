use super::*;

#[test]
fn parses_the_three_values_and_the_on_alias() {
    assert_eq!(
        parse_formatstring_mode("off").unwrap().0,
        FormatStringMode::Off
    );
    assert_eq!(
        parse_formatstring_mode("static").unwrap().0,
        FormatStringMode::Static
    );
    assert_eq!(
        parse_formatstring_mode("full").unwrap().0,
        FormatStringMode::Full
    );
    // The two-valued spelling keeps working and keeps meaning the loop.
    assert_eq!(
        parse_formatstring_mode("on").unwrap().0,
        FormatStringMode::Full
    );
    assert!(parse_formatstring_mode("").is_err());
    assert!(parse_formatstring_mode("loop").is_err());
}

#[test]
fn varargs_are_named_arguments_only_where_the_abi_says_so() {
    use ImageFamily::*;
    assert_eq!(
        vararg_abi("x86:LE:64:default:gcc", Some(Other)),
        VarargAbi::Named
    );
    assert_eq!(
        vararg_abi("x86:LE:64:default:windows", Some(Windows)),
        VarargAbi::Named
    );
    assert_eq!(vararg_abi("x86:LE:32:default:gcc", None), VarargAbi::Named);
    assert_eq!(
        vararg_abi("AARCH64:LE:64:v8A:default", Some(Other)),
        VarargAbi::Named
    );
    // Apple passes every vararg on the stack; the container or the Apple
    // SLEIGH variant says so, and an unknown container is not assumed Linux.
    assert_eq!(
        vararg_abi("AARCH64:LE:64:v8A:default", Some(Apple)),
        VarargAbi::Nothing
    );
    assert_eq!(
        vararg_abi("AARCH64:LE:64:AppleSilicon:default", None),
        VarargAbi::Nothing
    );
    assert_eq!(
        vararg_abi("AARCH64:LE:64:v8A:default", None),
        VarargAbi::Nothing
    );
    assert_eq!(
        vararg_abi("AARCH64:LE:64:v8A:windows", None),
        VarargAbi::Integer
    );
    assert_eq!(
        vararg_abi("AARCH64:LE:64:v8A:default", Some(Windows)),
        VarargAbi::Integer
    );
    assert_eq!(
        vararg_abi("ARM:LE:32:v8:default", Some(Other)),
        VarargAbi::Integer
    );
    assert_eq!(
        vararg_abi("RISCV:LE:64:RV64GC:gcc", Some(Other)),
        VarargAbi::Integer
    );
    assert_eq!(
        vararg_abi("MIPS:BE:32:default:default", Some(Other)),
        VarargAbi::Integer
    );
    assert_eq!(
        vararg_abi("AVR8:LE:16:atmega256:gcc", Some(Other)),
        VarargAbi::Nothing
    );
}

#[test]
fn the_integer_convention_admits_no_float_and_nothing_wider_than_a_pointer() {
    use crate::dtype::TypeFactory;
    let types = crate::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(4), 4, 4);
    types
        .set_core_type("char", 1, type_metatype::TYPE_INT, true)
        .expect("char core type");
    types.cache_core_types().expect("cache core types");
    let int4 = types.get_base(4, type_metatype::TYPE_INT).unwrap();
    let int8 = types.get_base(8, type_metatype::TYPE_INT).unwrap();
    let dbl = types.get_base(8, type_metatype::TYPE_FLOAT).unwrap();
    assert!(VarargAbi::Integer.admits(&int4, 4));
    assert!(!VarargAbi::Integer.admits(&int8, 4));
    assert!(!VarargAbi::Integer.admits(&dbl, 8));
    assert!(VarargAbi::Named.admits(&dbl, 8));
    assert!(!VarargAbi::Nothing.admits(&int4, 4));
}

#[test]
fn static_reaches_x86_and_full_every_target() {
    for id in ["x86:LE:64:default:gcc", "x86:LE:32:default:windows"] {
        assert!(FormatStringMode::Static.resolves_at_load(id), "{id}");
        assert!(FormatStringMode::Full.resolves_at_load(id), "{id}");
    }
    for id in [
        "AARCH64:LE:64:v8A:default",
        "ARM:LE:32:v8:default",
        "RISCV:LE:64:RV64GC:gcc",
    ] {
        assert!(!FormatStringMode::Static.resolves_at_load(id), "{id}");
        assert!(FormatStringMode::Full.resolves_at_load(id), "{id}");
        assert!(!FormatStringMode::Off.resolves_at_load(id), "{id}");
    }
    assert!(!FormatStringMode::Off.resolves_at_load("x86:LE:64:default:gcc"));
}

#[test]
fn the_tiers_compose() {
    assert!(!FormatStringMode::Off.enabled());
    assert!(!FormatStringMode::Off.statik());
    assert!(!FormatStringMode::Off.loop_pass());
    assert!(FormatStringMode::Static.enabled());
    assert!(FormatStringMode::Static.statik());
    assert!(!FormatStringMode::Static.loop_pass());
    assert!(FormatStringMode::Full.statik());
    assert!(FormatStringMode::Full.loop_pass());
    assert_eq!(FormatStringMode::Full.as_str(), "full");
}
