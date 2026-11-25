use super::*;

fn sets() -> (Vec<String>, Vec<String>) {
    parse_list(ELF_NORETURN_LIST)
}

#[test]
fn public_header_no_return_names_are_listed() {
    let (exact, wildcard) = sets();
    for name in [
        "_Exit",
        "thrd_exit",
        "__pthread_unwind_next",
        "__cxa_rethrow",
        "__cxa_pure_virtual",
        "_ZSt10unexpectedv",
        "_ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE",
        "_ZSt27__throw_bad_optional_accessv",
        "_ZNSt3__120__throw_length_errorB6v15006EPKc",
    ] {
        assert!(name_matches(name, &exact, &wildcard), "{name}");
    }
    assert!(!name_matches("__assert", &exact, &wildcard));
    let (exact, wildcard) = parse_list(PE_MAC_NORETURN_LIST);
    for name in [
        "_objc_exception_throw",
        "_dispatch_main",
        "___cxa_rethrow",
        "__ZNSt3__121__throw_runtime_errorEPKc",
    ] {
        assert!(name_matches(name, &exact, &wildcard), "{name}");
    }
    let (exact, wildcard) = parse_list(crate::sourcelang::golang_noreturn_list());
    for name in ["os.Exit", "runtime.panicBounds", "runtime.block"] {
        assert!(name_matches(name, &exact, &wildcard), "{name}");
    }
}

/// The #28 additions, one name per source family, in the spelling each
/// symbol table carries.
#[test]
fn documented_no_return_additions_are_listed() {
    let (exact, wildcard) = sets();
    for name in [
        "__cxa_call_terminate",
        "_ZN10__cxxabiv112__unexpectedEPFvvE",
        "_Unwind_SjLj_Resume",
        "_ZSt20__throw_bad_weak_ptrv",
        "_ZSt20__throw_bad_any_castv",
        "_ZSt21__glibcxx_assert_failPKciS0_S0_",
        "__assert_func",
        "__android_log_assert",
        "__stack_smash_handler",
        "xexit",
        "xmalloc_failed",
        "Py_FatalError",
        "_Py_FatalErrorFunc",
        "Py_Exit",
        "__ubsan_handle_builtin_unreachable",
        "make_task_dead",
        "kthread_exit",
        "__module_put_and_kthread_exit",
        "start_kernel",
    ] {
        assert!(name_matches(name, &exact, &wildcard), "{name}");
    }
    for name in [
        "do_exit",
        "rest_init",
        "_Unwind_Resume_or_Rethrow",
        "__GI_abort",
    ] {
        assert!(!name_matches(name, &exact, &wildcard), "{name}");
    }
    let (exact, wildcard) = parse_list(PE_MAC_NORETURN_LIST);
    for name in [
        "__Unwind_Resume",
        "__Unwind_SjLj_Resume",
        "___cxa_call_unexpected",
        "___cxa_call_terminate",
        "___stack_chk_fail",
        "_abort_with_reason",
        "_abort_with_payload",
        "_Py_FatalError",
    ] {
        assert!(name_matches(name, &exact, &wildcard), "{name}");
    }
    let (exact, wildcard) = parse_list(crate::sourcelang::golang_noreturn_list());
    for name in [
        "runtime.goexit",
        "runtime.morestackc",
        "runtime.dieFromException",
    ] {
        assert!(name_matches(name, &exact, &wildcard), "{name}");
    }
    assert!(!name_matches("runtime.morestack", &exact, &wildcard));
    let (exact, wildcard) = parse_list(crate::sourcelang::rust_noreturn_list());
    for name in ["__rust_alloc_error_handler", "__rdl_alloc_error_handler"] {
        assert!(name_matches(name, &exact, &wildcard), "{name}");
    }
    assert!(
        rust_path("_ZN4core9panicking19assert_failed_inner17h0123456789abcdefE")
            .is_some_and(|p| path_matches(&p, &exact, &wildcard))
    );
}

#[test]
fn rust_paths_match_either_mangling_and_drop_generic_arguments() {
    let (exact, wildcard) = parse_list(crate::sourcelang::rust_noreturn_list());
    let hit = |raw: &str| rust_path(raw).is_some_and(|p| path_matches(&p, &exact, &wildcard));
    assert!(hit(
        "_RNvNtNtCsgxBkk5gSRhY_4core9panicking11panic_const24panic_const_add_overflow"
    ));
    assert!(hit("_ZN4core6option13unwrap_failed17ha2239fe7bcf32a06E"));
    assert!(hit(
        "_RINvNtCsgxBkk5gSRhY_4core9panicking13assert_failedllECs9k3SxhrAWiO_3std"
    ));
    assert_eq!(
        rust_path("_RINvNtCsgxBkk5gSRhY_4core9panicking13assert_failedllECs9k3SxhrAWiO_3std")
            .as_deref(),
        Some("core::panicking::assert_failed")
    );
    assert!(!hit(
        "_RNvYINtNvNtCs9k3SxhrAWiO_3std9panicking11begin_panic7PayloadReENtNtCsgxBkk5gSRhY_4core5panic12PanicPayload6as_strB9_"
    ));
    assert!(!hit("_ZN3std9panicking12default_hook17h24e207139139d40aE"));
}

#[test]
fn fortran_fatal_diagnostics_exclude_recoverable_errors() {
    for list in [ELF_NORETURN_LIST, PE_MAC_NORETURN_LIST] {
        let (exact, wildcard) = parse_list(list);
        for name in [
            "_gfortran_runtime_error",
            "_gfortran_runtime_error_at",
            "_gfortran_os_error",
            "_gfortran_os_error_at",
        ] {
            assert!(name_matches(name, &exact, &wildcard), "{name}");
        }
        for name in [
            "_gfortran_runtime_warning_at",
            "_gfortran_generate_error",
            "_gfortran_runtime_error_custom",
        ] {
            assert!(!name_matches(name, &exact, &wildcard), "{name}");
        }
    }
}

#[test]
fn list_parses_to_exact_names_and_cxx_throw_wildcards() {
    let (exact, wildcard) = sets();
    // Upstream's ELF list ships no wildcards; the only ones are unlace's
    // mangled `std::` / `std::__1::` function-name prefixes, which an
    // Itanium encoding keeps from reaching any other symbol.
    assert!(
        wildcard
            .iter()
            .all(|w| w.starts_with("ZSt") || w.starts_with("ZNSt3__1")),
        "the only ELF-list wildcards are mangled std:: prefixes: {wildcard:?}"
    );
    for want in [
        "exit",
        "abort",
        "stack_chk_fail",
        "assert_fail",
        "pthread_exit",
    ] {
        assert!(exact.iter().any(|e| e == want), "missing {want}");
    }
    // leading underscores are stripped at parse time
    assert!(!exact.iter().any(|e| e.starts_with('_')));
}

/// (unlace DIV-21) The genuinely-unconditional no-return libc/BSD names added beyond
/// upstream's ELF list — the `err`/`errx` family + `quick_exit`/`__assert_perror_fail`/
/// `__chk_fail`/`__libc_fatal`. Each ALWAYS exits, so a `die()`/`fatal()` wrapper ending
/// in one is no-return; without them its callers overrun into the next function (the
/// same class as the `error()` boundary overrun). `warn`/`warnx` RETURN and must stay OUT.
#[test]
fn div21_unconditional_noreturn_family_present_warn_absent() {
    let (exact, wildcard) = sets();
    for want in [
        "err",
        "errx",
        "verr",
        "verrx",
        "errc",
        "verrc",
        "quick_exit",
    ] {
        assert!(
            name_matches(want, &exact, &wildcard),
            "DIV-21: {want} must be no-return"
        );
    }
    // underscore-stripped glibc internals
    assert!(name_matches("__assert_perror_fail", &exact, &wildcard));
    assert!(name_matches("__chk_fail", &exact, &wildcard));
    assert!(name_matches("__libc_fatal", &exact, &wildcard));
    // the warn family RETURNS — a false positive here would drop live caller code.
    for nope in ["warn", "warnx", "vwarn", "vwarnx"] {
        assert!(
            !name_matches(nope, &exact, &wildcard),
            "{nope} RETURNS; must NOT be no-return"
        );
    }
}

/// (unlace DIV-78, GH-273) The libstdc++ `std::__throw_*` family, in both the
/// spellings the two matchers see: the mangled `.dynsym` form the analysis-tier
/// scan matches pre-demangle, and the demangled `std::__throw_x` form the
/// flow-time matcher sees. Every one is `__attribute__((__noreturn__))`
/// upstream; upstream Ghidra's list omits the whole family, so C++ binaries
/// emitted the dead code after the call.
#[test]
fn div78_cxx_throw_family_present_both_spellings() {
    let (exact, wildcard) = sets();
    // Mangled, exactly as they appear in a `.dynsym` of a clang/g++ binary
    // (the wildcard also absorbs a signature change, e.g. the `PKci`
    // `__throw_ios_failure` overload GCC 7 added).
    for want in [
        "_ZSt20__throw_length_errorPKc",
        "_ZSt20__throw_out_of_rangePKc",
        "_ZSt24__throw_out_of_range_fmtPKcz",
        "_ZSt17__throw_bad_allocv",
        "_ZSt19__throw_logic_errorPKc",
        "_ZSt16__throw_bad_castv",
        "_ZSt24__throw_invalid_argumentPKc",
        "_ZSt25__throw_bad_function_callv",
        "_ZSt28__throw_bad_array_new_lengthv",
        "_ZSt20__throw_system_errori",
        "_ZSt19__throw_ios_failurePKc",
        "_ZSt19__throw_ios_failurePKci",
        "_ZSt19__throw_regex_errorNSt15regex_constants10error_typeE",
    ] {
        assert!(
            name_matches(want, &exact, &wildcard),
            "DIV-78: {want} must be no-return"
        );
    }
    // Demangled: `std` is the sole allowed non-global namespace, and the
    // leading-`_` strip reduces the base to the listed name.
    for want in [
        "std::__throw_length_error",
        "std::__throw_out_of_range",
        "std::__throw_bad_alloc",
        "std::__throw_logic_error",
        "std::__throw_runtime_error",
        "std::__throw_overflow_error",
        "std::__throw_underflow_error",
        "std::__throw_domain_error",
        "std::__throw_range_error",
        "std::__throw_bad_typeid",
        "std::__throw_bad_exception",
        "std::__throw_future_error",
        "__throw_length_error",
    ] {
        assert!(
            name_matches(want, &exact, &wildcard),
            "DIV-78: {want} must be no-return"
        );
    }
    // The namespace guard still applies: a same-named method on a user class
    // is NOT the libstdc++ helper and must never be truncated.
    assert!(!name_matches(
        "Buf::__throw_length_error",
        &exact,
        &wildcard
    ));
    // The mangled wildcards are anchored on the Itanium `ZSt<len>` encoding of
    // `std::__throw_*`, so no other std symbol can be swept up.
    for nope in [
        "_ZSt4cerr",
        "_ZSt20__throw_length_error_notreally",
        "_ZNSt6thread6_StateD1Ev",
        "_ZSt9terminatev_extra",
    ] {
        let hit = name_matches(nope, &exact, &wildcard);
        // `_ZSt20__throw_length_error_notreally` legitimately shares the
        // wildcard prefix (it can only be a std::__throw_length_error
        // overload); the rest must miss.
        if nope == "_ZSt20__throw_length_error_notreally" {
            assert!(hit);
        } else {
            assert!(!hit, "{nope} must not be flagged");
        }
    }
    // A user function whose name merely contains `throw` is untouched.
    for nope in ["throw_it", "rethrow", "throwing_helper", "do_throw"] {
        assert!(
            !name_matches(nope, &exact, &wildcard),
            "{nope} must not be flagged"
        );
    }
}

#[test]
fn strips_all_leading_underscores() {
    let (exact, wildcard) = sets();
    assert!(name_matches("exit", &exact, &wildcard));
    assert!(name_matches("abort", &exact, &wildcard));
    assert!(name_matches("pthread_exit", &exact, &wildcard));
    // single and double leading underscores both strip to a listed name
    assert!(name_matches("_exit", &exact, &wildcard));
    assert!(name_matches("__stack_chk_fail", &exact, &wildcard)); // -> stack_chk_fail
    assert!(name_matches("__assert_fail", &exact, &wildcard)); // -> assert_fail
}

#[test]
fn pe_mac_list_flags_windows_and_shared_noreturns() {
    // PR-10: the PE/Mac list flags the shared C no-returns (exit/abort/
    // quick_exit) AND the Windows-CRT specifics (__fastfail/_invoke_watson),
    // and the leading-underscore strip applies (`_exit` -> `exit`).
    let (exact, wildcard) = parse_list(PE_MAC_NORETURN_LIST);
    for want in ["exit", "abort", "quick_exit"] {
        assert!(
            name_matches(want, &exact, &wildcard),
            "PE/Mac list must flag {want}"
        );
    }
    // The Windows-CRT fast-fail / Watson names (leading `__`/`_` stripped).
    assert!(
        name_matches("__fastfail", &exact, &wildcard),
        "must flag __fastfail"
    );
    assert!(
        name_matches("_invoke_watson", &exact, &wildcard),
        "must flag _invoke_watson"
    );
    assert!(
        name_matches("_exit", &exact, &wildcard),
        "_exit must strip to exit"
    );
    // An ordinary function is never flagged.
    assert!(
        !name_matches("printf", &exact, &wildcard),
        "printf must not be flagged"
    );
    assert!(
        !name_matches("main", &exact, &wildcard),
        "main must not be flagged"
    );
}

#[test]
fn nameladder_reaches_decorated_spellings() {
    let (exact, wildcard) = sets();
    for n in ["j_exit", "__imp_abort", "exit_0", "_abort@0"] {
        assert!(
            !name_matches(n, &exact, &wildcard),
            "{n} is not listed as spelled"
        );
        assert!(
            name_matches_ladder(n, &exact, &wildcard, true),
            "{n} under the ladder"
        );
        assert!(
            !name_matches_ladder(n, &exact, &wildcard, false),
            "{n} without the ladder"
        );
    }
}

#[test]
fn renamed_msvc_crt_routines_are_listed() {
    for name in [
        "__CxxThrowException@8",
        "___report_gsfailure",
        "___report_rangecheckfailure",
        "___report_securityfailure",
        "__invoke_watson",
        "_unexpected",
        "?_Xlen@_String_base@std@@SAXXZ",
        "?_Xran@_String_base@std@@SAXXZ",
        "?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z",
        "?_inconsistency@@YAXXZ",
        "?__scrt_throw_std_bad_array_new_length@@YAXXZ",
        "?AtlThrowImpl@ATL@@YGXJ@Z",
        "?ThrowMemoryException@?$CSimpleStringT@_W$0A@@ATL@@KAXXZ",
        "?AfxThrowInternetException@@YGXKK@Z",
        "?Fail@CDataExchange@@QAEXXZ",
    ] {
        assert!(listed_noreturn(name), "{name}");
    }
    assert!(!listed_noreturn("?_Tidy@_String_base@std@@QAEXXZ"));
}

#[test]
fn does_not_flag_unlisted_names() {
    let (exact, wildcard) = sets();
    for n in ["puts", "read", "main", "authenticate", "printf", "strcmp"] {
        assert!(
            !name_matches(n, &exact, &wildcard),
            "{n} must not be flagged"
        );
    }
}

#[test]
fn namespace_guard_blocks_class_methods_but_allows_std() {
    let (exact, wildcard) = sets();
    // A C++ class method `Menu::_exit` must NOT be flagged (the guard).
    assert!(!name_matches("Menu::_exit", &exact, &wildcard));
    // `std`-namespaced names are the sole allowed non-global namespace.
    assert!(name_matches("ZSt9terminatev", &exact, &wildcard));
    assert!(name_matches("std::ZSt9terminatev", &exact, &wildcard));
}

#[test]
fn run_over_fauxware_flags_exit_only() {
    // Drive the full scan over the vendored fauxware bytes: it must surface
    // `exit` (a dynamic import named by elf_plt) and nothing spurious. The
    // base ELF pass (Gcc — no per-compiler list) is what fauxware (a C
    // binary) gets.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let out = scan_noreturn(&file, &bytes, Compiler::Gcc, false);
    let exit = out
        .noreturn
        .iter()
        .find(|f| f.name == "exit")
        .expect("exit must be flagged");
    // The emitted address is the PLT-stub install address (a real code
    // address, never the UND `.dynsym` 0), so the commit resolves it by
    // address as well as by name.
    assert_ne!(
        exit.addr, 0,
        "exit fact must carry the PLT-stub install address"
    );
    assert!(
        !out.noreturn.iter().any(|f| f.name == "puts"),
        "puts must not be flagged"
    );
    assert!(
        !out.noreturn.iter().any(|f| f.name == "read"),
        "read must not be flagged"
    );
}

/// The cross-pass boundary fix: a C++ binary whose `.dynsym` carries the mangled
/// no-return import `_ZSt9terminatev` (demangled `std::terminate`) and
/// `__cxa_throw`. Both are UND in `.dynsym` (address 0); their real
/// FunctionSymbols are installed at the PLT stub addresses (by `elf_plt`,
/// then demangled). The scan must therefore emit each fact with the **stub
/// install address** (non-zero) under its raw (pre-demangle) name, so the
/// commit's address path resolves the renamed `std::terminate` funcsym. A
/// name-only commit (`query_global_function("_ZSt9terminatev")`) would miss it.
#[test]
fn cpp_mangled_noreturn_emits_plt_stub_address() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/cpp_noreturn_x86_64"
    );
    let bytes = std::fs::read(path).expect("read cpp_noreturn fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse cpp_noreturn");
    let out = scan_noreturn(&file, &bytes, Compiler::Gcc, false);

    // The mangled std::terminate import is flagged under its RAW name (the
    // funcsym is later demangled to `std::terminate`; the scan matches the
    // raw `.dynstr` form against the vendored list entry `ZSt9terminatev`).
    let term = out
        .noreturn
        .iter()
        .find(|f| f.name == "_ZSt9terminatev")
        .expect("_ZSt9terminatev must be flagged no-return");
    // PINNED: the `_ZSt9terminatev@plt` stub is at 0x401070 in this fixture
    // (objdump -d -j .plt). Emitting this address (not the UND 0) is the fix.
    assert_eq!(
        term.addr, 0x401070,
        "must carry the terminate PLT-stub address"
    );

    // __cxa_throw (raw `__cxa_throw` -> `cxa_throw` in the list) likewise.
    let throw = out
        .noreturn
        .iter()
        .find(|f| f.name == "__cxa_throw")
        .expect("__cxa_throw must be flagged no-return");
    assert_eq!(
        throw.addr, 0x4010a0,
        "must carry the __cxa_throw PLT-stub address"
    );

    // No spurious flags (e.g. main / fail / the C++ method must not be hit).
    for spurious in ["main", "_Z4failv", "_ZN3app5Guard8throw_itEi"] {
        assert!(
            !out.noreturn.iter().any(|f| f.name == spurious),
            "{spurious} must not be flagged"
        );
    }
}

/// (unlace DIV-78, GH-273) The libstdc++ throw family on a real clang-built ELF:
/// `_ZSt20__throw_length_errorPKc` / `_ZSt20__throw_out_of_rangePKc` are UND
/// `.dynsym` imports (address 0), so — like `_ZSt9terminatev` — the fact must
/// be emitted at the PLT-stub install address under the raw mangled name. The
/// end-to-end consequence (the dead code after the call disappearing) is
/// covered by `unlace-console/tests/verify_cxx_throw_noreturn.rs`.
#[test]
fn cxx_throw_family_emits_plt_stub_address() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/cxxthrow_noreturn_x86_64"
    );
    let bytes = std::fs::read(path).expect("read cxxthrow fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse cxxthrow fixture");
    let out = scan_noreturn(&file, &bytes, Compiler::Clang, false);

    // PINNED: the `@plt` stubs at 0x401030 / 0x401040 (objdump -d -j .plt.sec).
    for (name, stub) in [
        ("_ZSt20__throw_length_errorPKc", 0x401030u64),
        ("_ZSt20__throw_out_of_rangePKc", 0x401040u64),
    ] {
        let fact = out
            .noreturn
            .iter()
            .find(|f| f.name == name)
            .unwrap_or_else(|| panic!("{name} must be flagged no-return"));
        assert_eq!(fact.addr, stub, "{name} must carry its PLT-stub address");
    }
    // The fixture's own functions are never flagged.
    for spurious in ["append_bound", "at_bound", "main"] {
        assert!(
            !out.noreturn.iter().any(|f| f.name == spurious),
            "{spurious} must not be flagged"
        );
    }
}

/// The Rust wildcard list must match a Rust panic symbol ONLY when the pass
/// is in Rust mode (compiler detected as `rustc`) — never for a C ELF. This
/// is the gated-list contract the sourcelang task delivers.
#[test]
fn rust_list_gated_on_rust_detection() {
    let panic = "ZN4core9panicking5panic17h0123456789abcdefE";

    // Base ELF list: its only wildcards are the C++ `_ZSt*__throw_*` prefixes,
    // so the Rust panic symbol is NOT flagged.
    let (e_elf, w_elf) = parse_list(ELF_NORETURN_LIST);
    assert!(
        !name_matches(panic, &e_elf, &w_elf),
        "C ELF must not flag a Rust panic"
    );

    // ELF + Rust list: the `ZN4core9panicking5panic17h*` wildcard matches it.
    let (r_exact, r_wildcard) = parse_list(crate::sourcelang::rust_noreturn_list());
    let mut e_rust = e_elf.clone();
    let mut w_rust = w_elf.clone();
    e_rust.extend(r_exact);
    w_rust.extend(r_wildcard);
    assert!(
        name_matches(panic, &e_rust, &w_rust),
        "Rust ELF must flag a Rust panic"
    );
    // a couple more Rust no-return forms
    assert!(name_matches(
        "ZN5alloc5alloc18handle_alloc_error17hcafebabecafebabeE",
        &e_rust,
        &w_rust
    ));
    assert!(name_matches("rust_begin_unwind", &e_rust, &w_rust));
    // the leading-underscore strip still applies to the Rust forms
    assert!(name_matches(
        "_ZN4core9panicking5panic17h0123456789abcdefE",
        &e_rust,
        &w_rust
    ));

    // an ordinary Rust function (no panic/abort) is never flagged
    assert!(!name_matches(
        "ZN5nostd1m12rusty_helper17h76f46bb3af543e7bE",
        &e_rust,
        &w_rust
    ));
}

#[test]
fn rust_process_exit_keeps_its_address_and_refuses_returning_names() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/../../tests/fixtures/rust-process-exit/linux-amd64"
    );
    let bytes = std::fs::read(path).expect("read authored Rust process exit fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse authored Rust ELF");
    assert_eq!(
        crate::sourcelang::detect_compiler(&file, &bytes),
        Compiler::Rustc
    );
    let exit = file
        .symbols()
        .find(|symbol| {
            symbol
                .name()
                .is_ok_and(|name| name.starts_with("_ZN3std7process4exit17h"))
        })
        .expect("fixture has the standard process exit function");
    let rust = scan_noreturn(&file, &bytes, Compiler::Rustc, false);
    assert!(
        rust.noreturn
            .iter()
            .any(|fact| { fact.addr == exit.address() && fact.name == exit.name().unwrap() })
    );
    for name in [
        "exit_choice",
        "returning_names",
        "_ZN3std7process11exit_status17h0123456789abcdefE",
    ] {
        assert!(!rust.noreturn.iter().any(|fact| fact.name == name));
    }
    assert!(
        !rust
            .noreturn
            .iter()
            .any(|fact| fact.name.contains("lookalike"))
    );
    for compiler in [
        Compiler::Gcc,
        Compiler::Clang,
        Compiler::Go,
        Compiler::Unknown,
    ] {
        let other = scan_noreturn(&file, &bytes, compiler, false);
        assert!(
            !other
                .noreturn
                .iter()
                .any(|fact| fact.addr == exit.address())
        );
    }
}

/// The Golang no-return list must match a `runtime.*` panic/throw/exit symbol
/// ONLY when the pass is in Go mode (compiler detected as Go) — never for a C
/// ELF and never under the Rust arm. The Go gating contract, mirroring
/// `rust_list_gated_on_rust_detection`.
#[test]
fn golang_list_gated_on_go_detection() {
    // A representative spread of Go runtime no-return names (the dotted form
    // Go's `.symtab`/`.gopclntab` uses — no `::`, so the namespace guard does
    // not fire; the whole string is matched against the exact set).
    let go_names = [
        "runtime.gopanic",
        "runtime.goPanicIndex",
        "runtime.throw",
        "runtime.fatalthrow",
        "runtime.goexit.abi0",
        "runtime.abort.abi0",
        "runtime.sigpanic",
        "runtime.panicmem",
    ];

    // Base ELF list (a C ELF): none of the Go runtime names are flagged.
    let (e_elf, w_elf) = parse_list(ELF_NORETURN_LIST);
    for n in go_names {
        assert!(!name_matches(n, &e_elf, &w_elf), "C ELF must not flag {n}");
    }

    // ELF + Rust list (a Rust ELF): still none of the Go runtime names match
    // (the Go list is selected only under the Go arm — the gating is
    // per-compiler, not "all extra lists at once").
    let (r_exact, r_wildcard) = parse_list(crate::sourcelang::rust_noreturn_list());
    let mut e_rust = e_elf.clone();
    let mut w_rust = w_elf.clone();
    e_rust.extend(r_exact);
    w_rust.extend(r_wildcard);
    for n in go_names {
        assert!(
            !name_matches(n, &e_rust, &w_rust),
            "Rust ELF must not flag {n}"
        );
    }

    // ELF + Golang list (a Go ELF): every runtime no-return name is flagged.
    let (g_exact, g_wildcard) = parse_list(crate::sourcelang::golang_noreturn_list());
    let mut e_go = e_elf.clone();
    let mut w_go = w_elf.clone();
    e_go.extend(g_exact);
    w_go.extend(g_wildcard);
    for n in go_names {
        assert!(name_matches(n, &e_go, &w_go), "Go ELF must flag {n}");
    }
    // the leading-underscore strip still applies (a `_`-prefixed dotted name
    // is rare in Go, but the parser/matcher are uniform).
    assert!(name_matches("_runtime.gopanic", &e_go, &w_go));

    // an ordinary Go user function (not in the runtime list) is never flagged,
    // even in Go mode (no over-acceptance from the dotted-name shape).
    assert!(!name_matches("main.main", &e_go, &w_go));
    assert!(!name_matches("runtime.printlock", &e_go, &w_go));
    // the base ELF entries still apply under the Go arm (exit/abort/…).
    assert!(name_matches("exit", &e_go, &w_go));
}

/// The per-compiler selector wires the right list into `scan_noreturn`: the
/// `compiler` field on `NoReturnKnownPass` picks Rust vs Go vs base. This pins
/// the constructor contract (`for_compiler`/`golang`/`rust`/`elf`).
#[test]
fn compiler_field_selects_extra_list() {
    use crate::sourcelang::Compiler;
    assert_eq!(NoReturnKnownPass::elf().compiler, Compiler::Unknown);
    assert_eq!(NoReturnKnownPass::rust().compiler, Compiler::Rustc);
    assert_eq!(NoReturnKnownPass::golang().compiler, Compiler::Go);
    assert_eq!(
        NoReturnKnownPass::for_compiler(Compiler::Go).compiler,
        Compiler::Go
    );
    // default is the base ELF pass (no per-compiler list).
    assert_eq!(NoReturnKnownPass::default().compiler, Compiler::Unknown);
}

// --- real-Go end-to-end (hermetic via runtime `go build`, skips if absent) ---
//
// Go ELF binaries are unavoidably large (~1.1 MB un-stripped — they embed the
// whole runtime), too large to vendor comfortably; a *stripped* Go binary
// (~750 KB) keeps `.go.buildinfo` (so detection fires) but drops `.symtab`
// entirely (so there is no `runtime.gopanic` FUNC symbol for the matcher to
// flag). So instead of vendoring a fixture, this test BUILDS a tiny real Go
// program at runtime (guarded on `go` being on PATH — skips cleanly otherwise),
// proving both halves on a genuine Go binary: detection (`Compiler::Go`) AND
// matching (`runtime.gopanic` flagged under the Go arm, NOT under the C arm).
// The list-parse/matching logic itself is pinned hermetically by
// `golang_list_gated_on_go_detection` (no fixture, always runs).

/// `true` if a runnable `go` toolchain is on PATH (so the runtime build can
/// proceed; otherwise the e2e test is skipped, like the ARM-link follow-up).
fn go_available() -> bool {
    std::process::Command::new("go")
        .arg("version")
        .stdout(std::process::Stdio::null())
        .stderr(std::process::Stdio::null())
        .status()
        .map(|s| s.success())
        .unwrap_or(false)
}

#[test]
fn real_go_binary_detected_and_flags_runtime_gopanic() {
    if !go_available() {
        eprintln!("skipping real-Go e2e: `go` not on PATH");
        return;
    }
    use crate::sourcelang::detect_compiler;

    // Build a tiny, self-contained Go program in an isolated temp dir, with a
    // private GOCACHE/GOPATH so the build is hermetic and never touches the
    // user's environment. Un-stripped (the default) so `runtime.*` FUNC
    // symbols survive in `.symtab` for the matcher.
    let dir = std::env::temp_dir().join(format!("unlace_go_noreturn_{}", std::process::id()));
    let _ = std::fs::remove_dir_all(&dir);
    std::fs::create_dir_all(&dir).expect("mkdir temp go dir");
    std::fs::write(
        dir.join("main.go"),
        "package main\nfunc main() { println(\"hi\") }\n",
    )
    .expect("write main.go");
    let out_bin = dir.join("go_hello");

    let status = std::process::Command::new("go")
        .args(["build", "-o"])
        .arg(&out_bin)
        .arg("main.go")
        .current_dir(&dir)
        .env("GOOS", "linux")
        .env("GOARCH", "amd64")
        .env("GOCACHE", dir.join(".gocache"))
        .env("GOPATH", dir.join(".gopath"))
        .env("CGO_ENABLED", "0")
        .status();

    // A build failure (e.g. a sandboxed `go` that can't write its cache) is a
    // skip, not a test failure — the hermetic matching contract is covered
    // elsewhere. Only proceed when we actually produced a binary.
    let built = matches!(&status, Ok(s) if s.success()) && out_bin.exists();
    if !built {
        eprintln!("skipping real-Go e2e: `go build` did not produce a binary ({status:?})");
        let _ = std::fs::remove_dir_all(&dir);
        return;
    }

    let bytes = std::fs::read(&out_bin).expect("read built go binary");
    let file = object::File::parse(bytes.as_slice()).expect("parse go binary");

    // (1) Detection: a real Go ELF must detect as `Compiler::Go`
    // (`.go.buildinfo` / `.note.go.buildid`).
    assert_eq!(
        detect_compiler(&file, &bytes),
        Compiler::Go,
        "go binary must detect as Go"
    );

    // (2) Matching under the Go arm: `runtime.gopanic` (a defined FUNC in
    // `.symtab`) is flagged no-return, carrying its real code address.
    let go_out = scan_noreturn(&file, &bytes, Compiler::Go, false);
    let gopanic = go_out
        .noreturn
        .iter()
        .find(|f| f.name == "runtime.gopanic")
        .expect("runtime.gopanic must be flagged no-return under the Go arm");
    assert_ne!(
        gopanic.addr, 0,
        "runtime.gopanic fact must carry its code address"
    );
    // a few more headline runtime no-return names are present too.
    for n in ["runtime.throw", "runtime.goexit.abi0"] {
        assert!(
            go_out.noreturn.iter().any(|f| f.name == n),
            "{n} must be flagged under the Go arm"
        );
    }
    // an ordinary Go user function is NOT flagged (no over-acceptance).
    assert!(
        !go_out.noreturn.iter().any(|f| f.name == "main.main"),
        "main.main must not be flagged"
    );

    // (3) The C arm (Gcc — no per-compiler list) does NOT flag the Go runtime
    // names: the widening is gated on Go detection. (The base ELF list could
    // in principle still match a name like `exit`, but `runtime.gopanic` is
    // Go-only, so this isolates the gating.)
    let c_out = scan_noreturn(&file, &bytes, Compiler::Gcc, false);
    assert!(
        !c_out.noreturn.iter().any(|f| f.name == "runtime.gopanic"),
        "runtime.gopanic must NOT be flagged under the C arm (Go list is gated)"
    );

    let _ = std::fs::remove_dir_all(&dir);
}
