/// The two group kinds a Rust demangling carries, and the reason they cannot
/// be handled the same way: a generic list is dropped, but a trait or impl
/// qualifier has to KEEP one of its two paths, or the result begins with `::`
/// and the symbol table rejects the empty scope.
#[test]
fn normalize_rust_name_resolves_generics_and_qualifiers() {
    for (input, want) in [
        (
            "core::ptr::drop_in_place<Vec<u8>>",
            "core::ptr::drop_in_place",
        ),
        (
            "<aes::autodetect::Aes256 as crypto_common::KeyInit>::new",
            "aes::autodetect::Aes256::new",
        ),
        ("<impl core::fmt::Debug for u8>::fmt", "u8::fmt"),
        ("alloc::vec::Vec<T,A>::resize", "alloc::vec::Vec::resize"),
        (
            "core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>",
            "core::ptr::drop_in_place",
        ),
        (
            "<cbc::decrypt::Decryptor<C> as crypto_common::InnerIvInit>::inner_iv_init",
            "cbc::decrypt::Decryptor::inner_iv_init",
        ),
        ("plain::name", "plain::name"),
        (
            "<serde_json::de::Deserializer<serde_json::read::IoRead<R>>>::parse_integer",
            "serde_json::de::Deserializer::parse_integer",
        ),
        ("<alloc::vec::Vec<T, A>>::push", "alloc::vec::Vec::push"),
        ("<[T]>::sort_unstable", "sort_unstable"),
        (
            "<<alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>::remaining",
            "alloc::io::buffered::bufwriter::BufWriter::flush_buf::BufGuard::remaining",
        ),
        // A name that resolves to nothing in the middle must not leave an
        // empty component behind.
        ("a::<T>::b", "a::b"),
    ] {
        assert_eq!(super::normalize_rust_name(input), want, "input={input}");
    }
}

use super::*;

#[test]
fn rtti_class_name_msvc_typeinfo() {
    // The RTTI0 `.?A<kind><name>@@` type-info forms recover their bare class
    // name (the Ghidra RttiUtil recipe), kind-agnostic (V class / U struct).
    assert_eq!(
        demangle_rtti_class_name(".?AVShape@@").as_deref(),
        Some("Shape")
    );
    assert_eq!(
        demangle_rtti_class_name(".?AUBox@@").as_deref(),
        Some("Box")
    );
    // A namespaced class keeps its `::` qualification (the scope splitter nests it).
    assert_eq!(
        demangle_rtti_class_name(".?AVInner@ns@@").as_deref(),
        Some("ns::Inner")
    );
    // A templated class is reduced to the bare name (the name-only contract).
    assert_eq!(
        demangle_rtti_class_name(".?AV?$Vec@H@@").as_deref(),
        Some("Vec")
    );
    // The leading `.` is optional (some readers strip it before calling).
    assert_eq!(
        demangle_rtti_class_name("?AVShape@@").as_deref(),
        Some("Shape")
    );
    // Non-type-info strings are rejected (no panic, no junk name).
    assert_eq!(demangle_rtti_class_name("Shape"), None);
    assert_eq!(demangle_rtti_class_name(".?AB"), None);
    assert_eq!(demangle_rtti_class_name(""), None);
}

/// The Itanium `_ZTS…` type-name component recovers its class VERBATIM — template
/// arguments retained, so two instantiations stay two classes.
#[test]
fn typeinfo_name_itanium() {
    assert_eq!(demangle_typeinfo_name("5Shape").as_deref(), Some("Shape"));
    assert_eq!(
        demangle_typeinfo_name("N7leveldb3EnvE").as_deref(),
        Some("leveldb::Env")
    );
    assert_eq!(
        demangle_typeinfo_name("3VecIiE").as_deref(),
        Some("Vec<int>")
    );
    assert_eq!(
        demangle_typeinfo_name("3VecIdE").as_deref(),
        Some("Vec<double>")
    );
    // ABI §2.9.1: a leading `*` marks a TU-local type; it is not part of the name.
    assert_eq!(
        demangle_typeinfo_name("*N12_GLOBAL__N_16HiddenE").as_deref(),
        Some("(anonymous namespace)::Hidden")
    );
    // Non-type-name strings are rejected (no panic, no junk name).
    assert_eq!(demangle_typeinfo_name(""), None);
    assert_eq!(demangle_typeinfo_name("*"), None);
    assert_eq!(demangle_typeinfo_name("not a mangled name"), None);
}

#[test]
fn name_only_nested_itanium() {
    // `_ZN3foo3barEv` -> `foo::bar` (void f()). Name-only, nested namespace.
    assert_eq!(demangle_name("_ZN3foo3barEv"), Some("foo::bar".to_string()));
}

#[test]
fn raw_keeps_full_signature() {
    // The literal roadmap form: full c++filt-like signature is retained.
    assert_eq!(demangle_raw("_Z3fooi"), Some("foo(int)".to_string()));
    // ...while the name-only form drops it.
    assert_eq!(demangle_name("_Z3fooi"), Some("foo".to_string()));
}

#[test]
fn plain_c_names_not_demangled() {
    // Not mangled → None (the skip() known-pattern gate).
    assert_eq!(demangle_name("puts"), None);
    assert_eq!(demangle_name("main"), None);
    assert_eq!(demangle_raw("printf"), None);
}

#[test]
fn versioned_symbol_skipped() {
    // An '@' (versioned symbol) is skipped before any demangle attempt.
    assert_eq!(demangle_name("_Z3fooi@GLIBC_2.2.5"), None);
    assert_eq!(demangle_raw("_Z3fooi@@GLIBC_2.2.5"), None);
}

#[test]
fn triple_underscore_skipped() {
    // `___foo` → None (`GnuDemangler.skip`: "the demangler will try anyway").
    assert_eq!(demangle_name("___foo"), None);
    assert_eq!(demangle_name("___ZN3foo3barEv"), None);
}

#[test]
fn rust_v0_symbol_demangles() {
    // Rust v0 (`_R..`) is owned by rustc_demangle, falls through from Itanium.
    let raw = "_RNvCs15kBYyAo9fc_7mycrate7example";
    let n = demangle_name(raw);
    assert!(n.is_some(), "rust v0 must demangle: {n:?}");
    let n = n.unwrap();
    assert_eq!(n, "mycrate::example");
    // legacy rust `_ZN..` mangling, hash dropped by `{:#}`.
    let legacy = "_ZN3std2io5stdio6_print17h0123456789abcdefE";
    assert_eq!(
        demangle_name(legacy),
        Some("std::io::stdio::_print".to_string())
    );
}

#[test]
fn templated_symbol_reduces_to_clean_name() {
    // `std::vector<int, std::allocator<int> >::push_back(int const&)`.
    // The name-only reduction MUST leave no unmatched `<` / `(` and no
    // signature/template `::` leakage that would corrupt the scope splitter.
    let raw = "_ZNSt6vectorIiSaIiEE9push_backERKi";
    let n = demangle_name(raw).expect("templated symbol demangles");
    assert_eq!(n, "std::vector::push_back");
    assert!(!n.contains('<'), "no template-arg leakage: {n}");
    assert!(!n.contains('>'), "no template-arg leakage: {n}");
    assert!(!n.contains('('), "no signature leakage: {n}");
    assert!(!n.contains(')'), "no signature leakage: {n}");
}

/// An anonymous namespace survives the name-only reduction as an
/// identifier component. Before this, `strip_bracket_groups` deleted the
/// whole `(anonymous namespace)` group and left an EMPTY `::` component,
/// which `Database::find_create_scope_from_symbol_name` rejects with
/// `Non-global scope has empty name` — aborting the load of the entire
/// binary, for every command.
#[test]
fn anonymous_namespace_is_named_not_deleted() {
    // Nested under a real namespace (leveldb, and the MinGW libstdc++ shim
    // that took out a whole malware DLL).
    assert_eq!(
        demangle_name("_ZN7leveldb12_GLOBAL__N_117HandleDumpCommandEiPPc"),
        Some("leveldb::anonymous_namespace::HandleDumpCommand".to_string())
    );
    assert_eq!(
        demangle_name(
            "_ZNKSt13__facet_shims12_GLOBAL__N_112collate_shimIcE10do_compareEPKcS4_S4_S4_"
        ),
        Some("std::__facet_shims::anonymous_namespace::collate_shim::do_compare".to_string())
    );
    // At the top level the group was the FIRST component, so the reduction
    // used to yield a leading `::`.
    assert_eq!(
        demangle_name("_ZN12_GLOBAL__N_122get_locale_cache_mutexEv"),
        Some("anonymous_namespace::get_locale_cache_mutex".to_string())
    );
    // A function-local static inside one (`_ZZ..E..`).
    assert_eq!(
        demangle_name("_ZZN12_GLOBAL__N_122get_locale_cache_mutexEvE18locale_cache_mutex"),
        Some("anonymous_namespace::get_locale_cache_mutex::locale_cache_mutex".to_string())
    );
    // No component is empty and no bracket text leaks, for any of them.
    for raw in [
        "_ZN7leveldb12_GLOBAL__N_117HandleDumpCommandEiPPc",
        "_ZN12_GLOBAL__N_14PoolIiE5allocEi",
        "_ZN12_GLOBAL__N_1L16get_locale_mutexEv",
    ] {
        let n = demangle_name(raw).expect("demangles");
        assert!(!n.split("::").any(|c| c.is_empty()), "empty component: {n}");
        assert!(!n.contains('('), "bracket leakage: {n}");
        assert!(!n.contains(')'), "bracket leakage: {n}");
    }
    // The full c++filt form is NOT rewritten — it is asked for verbatim.
    assert_eq!(
        demangle_raw("_ZN7leveldb12_GLOBAL__N_117HandleDumpCommandEiPPc"),
        Some("leveldb::(anonymous namespace)::HandleDumpCommand(int, char**)".to_string())
    );
}

/// The three symbols `g++` really emits for the checked-in
/// `anon_namespace_x86_64` fixture — a top-level anonymous namespace, one
/// nested inside a named namespace, and a class defined inside that one.
#[test]
fn anonymous_namespace_fixture_symbols() {
    assert_eq!(
        demangle_name("_ZN12_GLOBAL__N_110top_helperEi"),
        Some("anonymous_namespace::top_helper".to_string())
    );
    assert_eq!(
        demangle_name("_ZN5outer12_GLOBAL__N_113nested_helperEi"),
        Some("outer::anonymous_namespace::nested_helper".to_string())
    );
    assert_eq!(
        demangle_name("_ZN5outer12_GLOBAL__N_16Widget4emitEi"),
        Some("outer::anonymous_namespace::Widget::emit".to_string())
    );
}

/// Two translation units that each define `helper` in an anonymous namespace
/// demangle to the SAME name, and that is intended, not a defect to fix: the
/// Itanium mangling itself is identical for both (`_ZN12_GLOBAL__N_16helperEv`
/// either way), so no demangler can separate them. The name-only contract
/// already collides this way on templates (`Vec<int>` and `Vec<double>` both
/// reduce to `Vec`), and the addresses stay distinct, which is what every
/// resolver keys on.
#[test]
fn anonymous_namespace_collides_across_units_by_design() {
    // The collision is upstream of any demangler: `helper` in an anonymous
    // namespace mangles to this one string in EVERY translation unit, so the
    // one name below is what all of them reduce to.
    assert_eq!(
        demangle_name("_ZN12_GLOBAL__N_16helperEv"),
        Some("anonymous_namespace::helper".to_string())
    );
    // What must NOT collide is two anonymous namespaces with different
    // parents -- the rewrite names the component, it does not flatten the
    // path, so these stay two distinct scopes.
    assert_ne!(
        demangle_name("_ZN12_GLOBAL__N_16helperEv"),
        demangle_name("_ZN5outer12_GLOBAL__N_16helperEv")
    );
    assert_eq!(
        demangle_name("_ZN5outer12_GLOBAL__N_16helperEv"),
        Some("outer::anonymous_namespace::helper".to_string())
    );
    // A name that already spells the identifier round-trips unchanged, so a
    // second pass over a rewritten name is a no-op.
    assert_eq!(
        name_anonymous_namespaces("anonymous_namespace::f"),
        "anonymous_namespace::f"
    );
    assert_eq!(
        name_anonymous_namespaces("(anonymous namespace)::f"),
        "anonymous_namespace::f"
    );
}

/// MSVC spells the same construct with backticks, which no bracket-group
/// strip touches: it survived, but as a scope name carrying a space and two
/// backticks. It collapses to the same identifier the Itanium form does, so
/// one binary's anonymous namespace is spelled like another's.
#[test]
fn msvc_anonymous_namespace_is_the_same_identifier() {
    assert_eq!(
        demangle_name("?foo@Bar@?A0x12345678@@QEAAXXZ"),
        Some("anonymous_namespace::Bar::foo".to_string())
    );
}

#[test]
fn legacy_rust_hash_is_stripped() {
    // `::h<16 hex>` (the legacy rustc disambiguator) is dropped...
    assert_eq!(
        strip_legacy_rust_hash("std::io::stdio::_print::h0123456789abcdef"),
        "std::io::stdio::_print"
    );
    // ...but a normal trailing scope is kept (not a 17-char `h<hex>`).
    assert_eq!(strip_legacy_rust_hash("foo::bar"), "foo::bar");
    assert_eq!(strip_legacy_rust_hash("foo::helper"), "foo::helper");
}

#[test]
fn legacy_uppercase_hash_shaped_components_survive_demangling() {
    for (raw, name) in [
        ("_ZN4demo17hABCDEF0123456789E", "demo::hABCDEF0123456789"),
        ("_ZN5mixed17hAbCdE0123456789fE", "mixed::hAbCdE0123456789f"),
        (
            "_ZN6member17hABCDEF012345678917h0123456789abcdefE",
            "member::hABCDEF0123456789",
        ),
        (
            "_ZN4llvm17hABCDEF0123456789E.llvm.9D1C9369",
            "llvm::hABCDEF0123456789",
        ),
        ("_ZN5lower6actual17h0123456789abcdefE", "lower::actual"),
    ] {
        assert_eq!(demangle_raw(raw).as_deref(), Some(name), "{raw}");
        assert_eq!(demangle_name(raw).as_deref(), Some(name), "{raw}");
    }
    for raw in [
        "_ZN4demo17hABCDEF0123456789E",
        "_ZN5mixed17hAbCdE0123456789fE",
        "_ZN4llvm17hABCDEF0123456789E.llvm.9D1C9369",
    ] {
        assert!(!crate::sourcelang::is_rust_mangled(raw), "{raw}");
    }
    assert!(crate::sourcelang::is_rust_mangled(
        "_ZN6member17hABCDEF012345678917h0123456789abcdefE"
    ));
    assert_eq!(
        demangle_name("_ZN8cpp_demo17hABCDEF0123456789Ev").as_deref(),
        Some("cpp_demo::hABCDEF0123456789")
    );
    for (raw, full) in [
        (
            "_ZN42_$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$3fmt17h517074eb1cb2b995E",
            "<&T as core::fmt::Debug>::fmt",
        ),
        (
            "_ZN4core3ptr42drop_in_place$LT$alloc..string..String$GT$17h5d180b0b0e91564fE",
            "core::ptr::drop_in_place<alloc::string::String>",
        ),
        ("_RINvNtC3std3mem8align_ofjE", "std::mem::align_of::<usize>"),
    ] {
        assert_eq!(demangle_raw(raw).as_deref(), Some(full), "{raw}");
    }
}

// ---- MSVC C++ arm (multi-format loader PR-9) ----------------------------
//
// These are the merge gate: `cl.exe` is unavailable on Linux, so the MSVC
// path is proven entirely by these hermetic asserts on known mangled strings
// (the raw forms come straight from `clang -target x86_64-pc-windows-msvc`'s
// COFF symtab — `?foo@Bar@@QEAAXXZ` etc.).

#[test]
fn msvc_member_function_name_only() {
    // `?foo@Bar@@QEAAXXZ` = `public: void __cdecl Bar::foo(void)`.
    // The headline before -> after: raw mangled -> `Bar::foo` (name-only).
    assert_eq!(
        demangle_name("?foo@Bar@@QEAAXXZ"),
        Some("Bar::foo".to_string())
    );
}

#[test]
fn msvc_raw_keeps_full_form() {
    // `demangle_raw` retains the full MSVC form (the c++filt-like analog).
    assert_eq!(
        demangle_raw("?foo@Bar@@QEAAXXZ"),
        Some("public: void __cdecl Bar::foo(void)".to_string())
    );
}

#[test]
fn msvc_free_function() {
    // `?freefunc@@YAXH@Z` = `void __cdecl freefunc(int)` — a non-namespaced
    // free function reduces to the bare name (no junk `::` scope).
    assert_eq!(
        demangle_name("?freefunc@@YAXH@Z"),
        Some("freefunc".to_string())
    );
    assert_eq!(
        demangle_raw("?freefunc@@YAXH@Z"),
        Some("void __cdecl freefunc(int)".to_string())
    );
}

#[test]
fn msvc_namespaced_function() {
    // `?g@ns@@YAHHH@Z` = `int __cdecl ns::g(int, int)`. The MSVC `@`-encoded
    // namespace nests as a single `::` scope; the params (which carry the
    // structural `@`s) are dropped by NAME_ONLY.
    assert_eq!(demangle_name("?g@ns@@YAHHH@Z"), Some("ns::g".to_string()));
}

#[test]
fn msvc_deeply_nested_and_constructor() {
    // Deep nesting `?baz@A@B@C@@QEAAHHH@Z` = `C::B::A::baz(int, int)` — every
    // `@`-segment becomes a `::` scope; no signature leakage.
    let n = demangle_name("?baz@A@B@C@@QEAAHHH@Z").expect("nested MSVC demangles");
    assert_eq!(n, "C::B::A::baz");
    assert!(!n.contains('('), "no signature leakage: {n}");
    assert!(
        !n.contains('@'),
        "no raw `@` leakage into the scope name: {n}"
    );
    // A constructor `??0Bar@@QEAA@XZ` = `Bar::Bar(void)`.
    assert_eq!(
        demangle_name("??0Bar@@QEAA@XZ"),
        Some("Bar::Bar".to_string())
    );
}

#[test]
fn msvc_compiler_generated_members_are_identifiers() {
    assert_eq!(
        demangle_name("??_GBox@app@@UEAAPEAXI@Z"),
        Some("app::Box::scalar_deleting_destructor".to_string())
    );
    assert_eq!(
        demangle_name("??_EQDialogPrivate@@UEAAPEAXI@Z"),
        Some("QDialogPrivate::vector_deleting_destructor".to_string())
    );
    assert_eq!(
        demangle_name(
            "?<lambda_invoker_cdecl>@<lambda_1>@?4??getDefaultCtr@?$QMetaTypeForType@VQString@@@QtPrivate@@SAP6AXPEBVQMetaTypeInterface@4@PEAX@ZXZ@SA@01@Z"
        ),
        Some(
            "QtPrivate::QMetaTypeForType::getDefaultCtr::lambda_1::lambda_invoker_cdecl"
                .to_string()
        )
    );
    assert_eq!(
        demangle_name("??BQColor@@QEBA?AVQVariant@@XZ"),
        Some("QColor::operator QVariant".to_string())
    );
}

/// Symbols msvc-demangler rejects (all from qBittorrent 5.2.4's PDB) still
/// reduce to their qualified name through the `undname` fallback, spelled
/// as msvc-demangler spells the same members.
#[test]
fn msvc_constructs_msvc_demangler_rejects() {
    for (raw, name) in [
        // a deduced `auto` return type
        (
            "??$_Max_vectorized@$$CBH@std@@YA?A_PQEBH0@Z",
            "std::_Max_vectorized",
        ),
        // operator<=>
        (
            "??__M@YA?AUstrong_ordering@std@@AEBVQString@@0@Z",
            "operator<=>",
        ),
        // the address of a variable as a template argument
        (
            "??$staticMetaObject@$1?staticMetaObject@QFile@@2UQMetaObject@@B@QMetaObject@@SAPEBU0@XZ",
            "QMetaObject::staticMetaObject",
        ),
        // a noexcept function type
        (
            "??$lower_bound@PEBUWindowsData@QtTimeZoneCldr@@VQByteArray@@P6A_NU12@VQByteArrayView@@@_E@std@@YAPEBUWindowsData@QtTimeZoneCldr@@PEBU12@QEBU12@AEBVQByteArray@@P6A_NU12@VQByteArrayView@@@_E@Z",
            "std::lower_bound",
        ),
        // a function-pointer template argument's back-references
        (
            "?detachAndGrow@?$QArrayDataPointer@P6AXXZ@@QEAAXW4GrowthPosition@QArrayData@@_JPEAPEBQ6AXXZPEAU1@@Z",
            "QArrayDataPointer::detachAndGrow",
        ),
        // vtordisp thunks, on a member and on a deleting destructor
        (
            "?error@QDtlsBasePrivate@@$4PPPPPPPM@A@EBA?AW4QDtlsError@@XZ",
            "QDtlsBasePrivate::error_vtordisp_4_0",
        ),
        (
            "??_EQDtlsBasePrivate@@$4PPPPPPPM@A@EAAPEAXI@Z",
            "QDtlsBasePrivate::vector_deleting_destructor_vtordisp_4_0",
        ),
    ] {
        assert!(msvc_demangler::demangle(raw, msvc_demangler::DemangleFlags::NAME_ONLY).is_err());
        assert_eq!(demangle_name(raw).as_deref(), Some(name), "{raw}");
    }
}

#[test]
fn msvc_data_symbol() {
    // `?x@@3HA` = `int x` — a global variable (not a function). NAME_ONLY
    // yields the bare name; the raw form keeps the type.
    assert_eq!(demangle_name("?x@@3HA"), Some("x".to_string()));
    assert_eq!(demangle_raw("?x@@3HA"), Some("int x".to_string()));
}

#[test]
fn msvc_question_mark_not_routed_to_itanium() {
    // Regression guard: a leading `?` is recognized by `skip()` as MSVC (NOT
    // treated as a versioned `@` symbol, even though MSVC names embed `@`),
    // and the Itanium/Rust crates never see it. A non-MSVC `?`-garbage string
    // still yields None (msvc-demangler rejects it), never a panic.
    assert!(!skip("?foo@Bar@@QEAAXXZ"), "MSVC name must not be skipped");
    assert_eq!(demangle_name("?not a real mangled name"), None);
    assert_eq!(demangle_raw("?"), None);
}

#[test]
fn thunks_are_named_for_their_target() {
    assert_eq!(
        demangle_name(
            "_ZThn16_NSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev"
        ),
        Some("std::__1::basic_stringstream::~basic_stringstream".to_string())
    );
    assert_eq!(
        demangle_name("_ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED0Ev"),
        Some("std::__1::basic_istream::~basic_istream".to_string())
    );
    assert_eq!(
        demangle_name("_ZThn8_N3foo3Bar3getEv"),
        Some("foo::Bar::get".to_string())
    );
    assert_eq!(
        demangle_name("_ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev"),
        Some("std::__1::basic_istream::~basic_istream".to_string())
    );
}

#[test]
fn strip_bracket_groups_handles_nested_and_unbalanced() {
    assert_eq!(strip_bracket_groups("foo<int>::bar(int)"), "foo::bar");
    assert_eq!(strip_bracket_groups("a::b<c::d<e> >::f"), "a::b::f");
    // tolerate an unbalanced trailing bracket (defensive)
    assert_eq!(strip_bracket_groups("foo::bar<"), "foo::bar");
}

/// An operator's own brackets are part of its name and survive; the
/// parameter list that follows them does not. Without the exemption every
/// bracket-spelled overload of a class collapsed onto the same
/// `Class::operator`.
#[test]
fn strip_bracket_groups_keeps_operator_spellings() {
    for (input, want) in [
        ("MapClass::operator[](Cell &)", "MapClass::operator[]"),
        (
            "Random2Class::operator()(int, int)",
            "Random2Class::operator()",
        ),
        ("Foo::operator<<(int)", "Foo::operator<<"),
        ("Foo::operator<(Foo const&)", "Foo::operator<"),
        ("Foo::operator>=(Foo const&)", "Foo::operator>="),
        ("Foo::operator->()", "Foo::operator->"),
        ("Foo::operator->*(int)", "Foo::operator->*"),
        ("operator new[](unsigned int)", "operator new[]"),
        ("operator delete[](void *)", "operator delete[]"),
        // A `<` that opens a template argument list is NOT the operator,
        // even directly after the keyword.
        ("Foo::operator<int>", "Foo::operator"),
        // An identifier merely ending in "operator" keeps the old behavior.
        ("Foo::my_operator<int>(int)", "Foo::my_operator"),
        // Non-bracket operators were never affected.
        ("Foo::operator==(Foo const&)", "Foo::operator=="),
    ] {
        assert_eq!(strip_bracket_groups(input), want, "input {input:?}");
    }
}

/// End-to-end through both manglings: the same overload set, mangled by
/// MSVC and by the Itanium ABI, reduces to distinct operator names.
#[test]
fn demangle_name_keeps_operator_spellings() {
    for (raw, want) in [
        // MSVC (`cl.exe`)
        (
            "??AMapClass@@QBEAAVCellClass@@ABVCell@@@Z",
            "MapClass::operator[]",
        ),
        ("??RRandom2Class@@QAEHHH@Z", "Random2Class::operator()"),
        ("??6Foo@@QAEAAV0@H@Z", "Foo::operator<<"),
        ("??MFoo@@QBE_NABV0@@Z", "Foo::operator<"),
        ("??_U@YAPAXI@Z", "operator new[]"),
        ("??_V@YAXPAX@Z", "operator delete[]"),
        // Itanium (gcc/clang)
        ("_ZN3FooixEi", "Foo::operator[]"),
        ("_ZN3FooclEv", "Foo::operator()"),
        ("_ZN3FoolsEi", "Foo::operator<<"),
        // A plain method is untouched by the exemption.
        ("_ZN3Foo5plainEi", "Foo::plain"),
    ] {
        assert_eq!(demangle_name(raw).as_deref(), Some(want), "raw {raw:?}");
    }
}
