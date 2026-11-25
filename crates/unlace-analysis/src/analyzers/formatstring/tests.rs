use super::*;

// --- The portable unit gate (testcase tier 1, plan §s1-formatstring). ---

#[test]
fn basic_printf_specs() {
    assert_eq!(parse_output_types("%d %s"), vec![Spec::Int, Spec::CharPtr]);
    assert_eq!(parse_output_types("%lu"), vec![Spec::ULong]);
    assert_eq!(parse_output_types("%p"), vec![Spec::VoidPtr]);
    assert!(parse_output_types("%%").is_empty());
    // The brief's named alias agrees with parse_output_types.
    assert_eq!(
        parse_format_specifiers("%d %s"),
        vec![Spec::Int, Spec::CharPtr]
    );
}

#[test]
fn brief_examples() {
    // "%d %s" → [Int, CharPtr]
    assert_eq!(parse_output_types("%d %s"), vec![Spec::Int, Spec::CharPtr]);
    // "%5.2f" → [Double]
    assert_eq!(parse_output_types("%5.2f"), vec![Spec::Double]);
    // "%ld%%%p" → [Long, VoidPtr]  (the %% is a literal, no arg)
    assert_eq!(
        parse_output_types("%ld%%%p"),
        vec![Spec::Long, Spec::VoidPtr]
    );
    // "%*d" → [Int(width), Int]
    assert_eq!(parse_output_types("%*d"), vec![Spec::Int, Spec::Int]);
    // "%2$s %1$d" → positional, ordered by parameter index → [Int, CharPtr]
    assert_eq!(
        parse_output_types("%2$s %1$d"),
        vec![Spec::Int, Spec::CharPtr]
    );
}

#[test]
fn integer_conversion_table() {
    assert_eq!(parse_output_types("%i"), vec![Spec::Int]);
    assert_eq!(parse_output_types("%u"), vec![Spec::UInt]);
    assert_eq!(parse_output_types("%x"), vec![Spec::UInt]);
    assert_eq!(parse_output_types("%X"), vec![Spec::UInt]);
    assert_eq!(parse_output_types("%o"), vec![Spec::UInt]);
    assert_eq!(parse_output_types("%c"), vec![Spec::CharValue]);
    assert_eq!(parse_output_types("%n"), vec![Spec::IntPtr]);
}

#[test]
fn length_modifiers() {
    assert_eq!(parse_output_types("%ld"), vec![Spec::Long]);
    assert_eq!(parse_output_types("%lu"), vec![Spec::ULong]);
    assert_eq!(parse_output_types("%lld"), vec![Spec::LongLong]);
    assert_eq!(parse_output_types("%llu"), vec![Spec::ULongLong]);
    assert_eq!(parse_output_types("%qd"), vec![Spec::LongLong]);
    assert_eq!(parse_output_types("%hd"), vec![Spec::Short]);
    assert_eq!(parse_output_types("%hu"), vec![Spec::UShort]);
    assert_eq!(parse_output_types("%hhd"), vec![Spec::Char]);
    assert_eq!(parse_output_types("%hhu"), vec![Spec::UChar]);
    assert_eq!(parse_output_types("%jd"), vec![Spec::IntMaxT]);
    assert_eq!(parse_output_types("%ju"), vec![Spec::UIntMaxT]);
    assert_eq!(parse_output_types("%zd"), vec![Spec::SizeT]);
    assert_eq!(parse_output_types("%zu"), vec![Spec::SizeT]);
    assert_eq!(parse_output_types("%td"), vec![Spec::PtrDiffT]);
    assert_eq!(parse_output_types("%Lf"), vec![Spec::LongDouble]);
}

#[test]
fn wide_string_and_char() {
    // Ghidra's convertPairToDataType guard (`:622`) returns before the
    // length-modifier switch for s/c/S/C, so it types `%lc` as `char` and
    // `%ls` as `char *`. A wide character is an int-sized `wint_t` and a
    // wide string a `wchar_t *`, and `%C`/`%S` are their spellings.
    assert_eq!(parse_output_types("%ls"), vec![Spec::WideCharPtr]);
    assert_eq!(parse_output_types("%lc"), vec![Spec::WideCharValue]);
    assert_eq!(parse_output_types("%S"), vec![Spec::WideCharPtr]);
    assert_eq!(parse_output_types("%C"), vec![Spec::WideCharValue]);
    // scanf stores through a pointer either way.
    assert_eq!(parse_input_types("%lc"), vec![Spec::WideCharPtr]);
    assert_eq!(parse_input_types("%C"), vec![Spec::WideCharPtr]);
    assert_eq!(parse_input_types("%ls"), vec![Spec::WideCharPtr]);
    // The plain conversions are unchanged.
    assert_eq!(
        parse_output_types("%c %s"),
        vec![Spec::CharValue, Spec::CharPtr]
    );
}

#[test]
fn float_family_is_double() {
    for spec in ["%f", "%F", "%e", "%E", "%g", "%G", "%a", "%A"] {
        assert_eq!(parse_output_types(spec), vec![Spec::Double], "spec {spec}");
    }
}

#[test]
fn l_on_a_floating_conversion_is_still_a_double() {
    for spec in [
        "%lf", "%lF", "%le", "%lE", "%lg", "%lG", "%la", "%lA", "%10lf",
    ] {
        assert_eq!(parse_output_types(spec), vec![Spec::Double], "spec {spec}");
        assert_eq!(
            parse_input_types(spec),
            vec![Spec::DoublePtr],
            "spec {spec}"
        );
    }
    assert_eq!(parse_output_types("%16.4lf"), vec![Spec::Double]);
    assert_eq!(
        parse_output_types("value=%lf n=%d\n"),
        vec![Spec::Double, Spec::Int]
    );
    assert_eq!(
        parse_input_types("%d %ld %lf %7s"),
        vec![Spec::IntPtr, Spec::LongPtr, Spec::DoublePtr, Spec::CharPtr]
    );
    assert_eq!(parse_input_types("%f"), vec![Spec::VoidPtr]);
    assert_eq!(parse_output_types("%lp"), vec![Spec::VoidPtr]);
    assert_eq!(parse_input_types("%lp"), vec![Spec::VoidPtr]);
}

/// A factory with the given `long` and pointer widths (int is 4 bytes).
fn sized_factory(long_sz: int4, ptr_sz: int4) -> unlace_decomp::dtype::TypeFactoryImpl {
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.set_size_of_long(long_sz);
    types.setup_sizes(Some(ptr_sz), ptr_sz, 4);
    types
        .set_core_type("char", 1, type_metatype::TYPE_INT, true)
        .expect("char core type");
    types.cache_core_types().expect("cache core types");
    types
}

#[test]
fn size_t_and_ptrdiff_t_are_pointer_width_on_llp64() {
    let width = |types: &unlace_decomp::dtype::TypeFactoryImpl, fmt: &str| {
        let spec = parse_output_types(fmt)[0];
        spec_to_datatype(spec, types, 1).unwrap().get_size()
    };
    let pointee = |types: &unlace_decomp::dtype::TypeFactoryImpl, fmt: &str| {
        let spec = parse_input_types(fmt)[0];
        let ty = spec_to_datatype(spec, types, 1).unwrap();
        ty.get_ptr_to()
            .expect("a scanf conversion is a pointer")
            .get_size()
    };
    let llp64 = sized_factory(4, 8);
    for fmt in ["%zu", "%zd", "%zx", "%td", "%tu"] {
        assert_eq!(width(&llp64, fmt), 8, "LLP64 {fmt}");
        assert_eq!(pointee(&llp64, fmt), 8, "LLP64 scanf {fmt}");
    }
    assert_eq!(width(&llp64, "%ld"), 4, "LLP64 long");
    assert_eq!(width(&llp64, "%lu"), 4, "LLP64 unsigned long");
    assert_eq!(pointee(&llp64, "%ld"), 4, "LLP64 scanf long");
    let lp64 = sized_factory(8, 8);
    assert_eq!(width(&lp64, "%zu"), 8);
    assert_eq!(width(&lp64, "%ld"), 8);
    let ilp32 = sized_factory(4, 4);
    assert_eq!(width(&ilp32, "%zu"), 4);
    assert_eq!(width(&ilp32, "%td"), 4);
    assert_eq!(width(&ilp32, "%lld"), 8);
}

#[test]
fn n_with_length_modifier_widens_pointee() {
    assert_eq!(parse_output_types("%ln"), vec![Spec::LongPtr]);
    assert_eq!(parse_output_types("%lln"), vec![Spec::LongLongPtr]);
    assert_eq!(parse_output_types("%hn"), vec![Spec::ShortPtr]);
    assert_eq!(parse_output_types("%hhn"), vec![Spec::CharSignedPtr]);
}

#[test]
fn flags_width_precision() {
    // Flags + width + precision consume no extra args (only the value).
    assert_eq!(parse_output_types("%-+ #05.3d"), vec![Spec::Int]);
    assert_eq!(parse_output_types("%5.2f"), vec![Spec::Double]);
    // '*' for both width and precision: two ints then the value.
    assert_eq!(
        parse_output_types("%*.*f"),
        vec![Spec::Int, Spec::Int, Spec::Double]
    );
    // '*' precision only: int then value.
    assert_eq!(parse_output_types("%.*d"), vec![Spec::Int, Spec::Int]);
}

#[test]
fn multiple_specifiers_mixed() {
    assert_eq!(
        parse_output_types("name=%s age=%d weight=%5.2f ptr=%p"),
        vec![Spec::CharPtr, Spec::Int, Spec::Double, Spec::VoidPtr]
    );
}

#[test]
fn literal_percent_consumes_no_arg() {
    assert!(parse_output_types("%%").is_empty());
    assert!(parse_output_types("100%% done").is_empty());
    assert_eq!(parse_output_types("%d%%"), vec![Spec::Int]);
    assert_eq!(parse_output_types("%%%d"), vec![Spec::Int]);
}

#[test]
fn no_specifiers_is_empty() {
    // The fauxware negative case: printf("Go away!") → no varargs.
    assert!(parse_output_types("Go away!").is_empty());
    assert!(parse_output_types("plain text\n").is_empty());
    assert!(parse_output_types("").is_empty());
}

#[test]
fn positional_arguments() {
    // Reordered: index 1 is %d (int), index 2 is %s (char*).
    assert_eq!(
        parse_output_types("%2$s %1$d"),
        vec![Spec::Int, Spec::CharPtr]
    );
    // Same order positional.
    assert_eq!(
        parse_output_types("%1$d %2$s"),
        vec![Spec::Int, Spec::CharPtr]
    );
    // A gap (1 and 3, no 2) is unsupported → empty.
    assert!(parse_output_types("%1$d %3$s").is_empty());
}

#[test]
fn malformed_truncated_no_panic() {
    // Truncated specs / garbage must not panic and yield empty.
    for bad in [
        "%",    // dangling percent
        "%l",   // length modifier, no conversion
        "%ll",  // double length modifier, no conversion
        "%5",   // width, no conversion
        "%5.",  // precision dot, no conversion
        "%.",   // dot, nothing
        "%#",   // flag only
        "%z",   // length modifier only
        "%hZ",  // bad conversion after modifier
        "%*",   // width star, no conversion
        "%1$",  // positional, no conversion
        "%$d",  // positional with empty index
        "%0$d", // positional index zero
        "abc%", // text then dangling percent
    ] {
        let out = parse_output_types(bad);
        // Either empty (rejected) — must never panic.
        let _ = out;
    }
    // A few that specifically must be empty (clearly undefined).
    assert!(parse_output_types("%").is_empty());
    assert!(parse_output_types("%l").is_empty());
    assert!(parse_output_types("%hZ").is_empty());
    assert!(parse_output_types("%0$d").is_empty());
}

#[test]
fn unicode_in_literal_text_no_panic() {
    // Multi-byte chars in the literal portion must not break char indexing.
    assert_eq!(parse_output_types("café %d ☕"), vec![Spec::Int]);
    assert!(parse_output_types("naïve %%").is_empty());
}

// --- scanf (isOutputType = false): non-pointers get an extra pointer. ---

#[test]
fn scanf_wraps_non_pointers() {
    // scanf("%d") expects an int* (address to write into).
    assert_eq!(parse_input_types("%d"), vec![Spec::IntPtr]);
    // %s is already char* — not double-wrapped.
    assert_eq!(parse_input_types("%s"), vec![Spec::CharPtr]);
    // %f → double*, modeled as VoidPtr (no double-pointer Spec variant).
    assert_eq!(parse_input_types("%f"), vec![Spec::VoidPtr]);
    // %ld → long*.
    assert_eq!(parse_input_types("%ld"), vec![Spec::LongPtr]);
    // mixed
    assert_eq!(
        parse_input_types("%d %s"),
        vec![Spec::IntPtr, Spec::CharPtr]
    );
}

#[test]
fn scanf_star_suppresses_next_arg() {
    // %*d: assignment-suppressed, consumes no argument; trailing %d → int*.
    assert_eq!(parse_input_types("%*d %d"), vec![Spec::IntPtr]);
    // A lone suppressed conversion yields no argument.
    assert!(parse_input_types("%*d").is_empty());
}

#[test]
fn scanf_p_is_wrapped() {
    // convertToInputDataTypes wraps the void pointer too (line 597-599).
    assert_eq!(parse_input_types("%p"), vec![Spec::VoidPtr]);
}

// --- FmtArg-level intermediate, faithful to FormatArgument. ---

#[test]
fn every_c99_conversion_maps_to_one_argument() {
    // The full C99 conversion set, each with the type `printf` implies.
    for (conv, want) in [
        ('d', Spec::Int),
        ('i', Spec::Int),
        ('o', Spec::UInt),
        ('u', Spec::UInt),
        ('x', Spec::UInt),
        ('X', Spec::UInt),
        ('f', Spec::Double),
        ('F', Spec::Double),
        ('e', Spec::Double),
        ('E', Spec::Double),
        ('g', Spec::Double),
        ('G', Spec::Double),
        ('a', Spec::Double),
        ('A', Spec::Double),
        ('c', Spec::CharValue),
        ('s', Spec::CharPtr),
        ('p', Spec::VoidPtr),
        ('n', Spec::IntPtr),
        ('C', Spec::WideCharValue),
        ('S', Spec::WideCharPtr),
    ] {
        let got = parse_output_types(&format!("%{conv}"));
        assert_eq!(got, vec![want], "%{conv}");
    }
    // `%%` is the one conversion that consumes nothing.
    assert!(parse_output_types("%%").is_empty());
}

#[test]
fn every_length_modifier_widens_d_and_u() {
    for (modifier, signed, unsigned) in [
        ("hh", Spec::Char, Spec::UChar),
        ("h", Spec::Short, Spec::UShort),
        ("l", Spec::Long, Spec::ULong),
        ("ll", Spec::LongLong, Spec::ULongLong),
        ("q", Spec::LongLong, Spec::ULongLong),
        ("j", Spec::IntMaxT, Spec::UIntMaxT),
        ("z", Spec::SizeT, Spec::SizeT),
        ("t", Spec::PtrDiffT, Spec::SizeT),
    ] {
        assert_eq!(
            parse_output_types(&format!("%{modifier}d")),
            vec![signed],
            "%{modifier}d"
        );
        assert_eq!(
            parse_output_types(&format!("%{modifier}u")),
            vec![unsigned],
            "%{modifier}u"
        );
    }
    // `L` is the float-only modifier.
    assert_eq!(parse_output_types("%Lf"), vec![Spec::LongDouble]);
}

#[test]
fn star_width_and_precision_each_consume_an_int() {
    assert_eq!(parse_output_types("%*d"), vec![Spec::Int, Spec::Int]);
    assert_eq!(parse_output_types("%.*s"), vec![Spec::Int, Spec::CharPtr]);
    assert_eq!(
        parse_output_types("%*.*f"),
        vec![Spec::Int, Spec::Int, Spec::Double]
    );
    // In `scanf` a `*` is the ASSIGNMENT-SUPPRESSION flag, not an argument.
    assert!(parse_input_types("%*d").is_empty());
}

#[test]
fn fmtarg_intermediate_pairs() {
    let args = convert_to_format_argument_list("%ld %s", true).unwrap();
    assert_eq!(args.len(), 2);
    assert_eq!(args[0].length_modifier.as_deref(), Some("l"));
    assert_eq!(args[0].conversion_specifier, "d");
    assert_eq!(args[1].length_modifier, None);
    assert_eq!(args[1].conversion_specifier, "s");
}
