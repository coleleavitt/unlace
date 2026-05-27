//! Generated-code classifier: tags compiler/runtime-generated functions.
//!
//! Identifies CRT startup, exception handling, sanitizer, TLS, and thunk
//! functions by symbol name patterns, prologue shapes, and instruction
//! counts. Tagged functions can be hidden or annotated in the C printer
//! to reduce noise in decompiled output.

use std::collections::BTreeMap;

/// Classification tag for a function — multiple tags are possible per function.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum FunctionTag {
    /// CRT/OS startup code: _start, mainCRTStartup, __libc_start_main, etc.
    CrtStartup,
    /// C++ exception runtime: __cxa_*, __gxx_*, _Unwind_*, __gcc_personality_*.
    EhRuntime,
    /// Sanitizer runtime: __asan_*, __msan_*, __ubsan_*, __tsan_*.
    Sanitizer,
    /// TLS helpers: __tls_init, __tls_get_addr, etc.
    TlsHelper,
    /// Stack protector: __stack_chk_fail, __stack_chk_guard.
    StackProtector,
    /// PLT/IAT stub — single indirect jump to GOT/IAT entry.
    PltStub,
    /// Import thunk: __imp_* prefix.
    ImportThunk,
    /// C++ vcall/vbase thunk: adjust-this + jump.
    VcallThunk,
    /// Global constructor/destructor registrations.
    GlobalCtorDtor,
    /// Generic wrapper thunk: <4 instructions with a tail call.
    WrapperThunk,
    /// Profile/instrumentation glue: __llvm_profile_*, __xray_*, mcount.
    Instrumentation,
}

impl FunctionTag {
    /// Short human-readable label for annotations/comments.
    pub fn label(self) -> &'static str {
        match self {
            Self::CrtStartup => "crt_startup",
            Self::EhRuntime => "eh_runtime",
            Self::Sanitizer => "sanitizer",
            Self::TlsHelper => "tls_helper",
            Self::StackProtector => "stack_protector",
            Self::PltStub => "plt_stub",
            Self::ImportThunk => "import_thunk",
            Self::VcallThunk => "vcall_thunk",
            Self::GlobalCtorDtor => "global_ctor_dtor",
            Self::WrapperThunk => "wrapper_thunk",
            Self::Instrumentation => "instrumentation",
        }
    }

    /// Whether the output printer should suppress (hide) functions with this tag.
    pub fn should_hide(self) -> bool {
        matches!(
            self,
            Self::PltStub
                | Self::ImportThunk
                | Self::WrapperThunk
                | Self::StackProtector
                | Self::Instrumentation
        )
    }
}

/// Classify a function by its symbol name.
///
/// Returns all matching tags (a function like `__asan_stack_chk_fail` could
/// match multiple patterns).
pub fn classify_by_name(name: &str) -> Vec<FunctionTag> {
    let mut tags = Vec::new();

    // CRT startup
    if matches!(
        name,
        "_start"
            | "__libc_start_main"
            | "__libc_csu_init"
            | "__libc_csu_fini"
            | "mainCRTStartup"
            | "__tmainCRTStartup"
            | "wmainCRTStartup"
            | "_mainCRTStartup"
            | "__security_init_cookie"
            | "__scrt_common_main"
            | "__scrt_common_main_seh"
    ) {
        tags.push(FunctionTag::CrtStartup);
    }

    // EH runtime
    if name.starts_with("__cxa_")
        || name.starts_with("__gxx_")
        || name.starts_with("_Unwind_")
        || name.starts_with("__gcc_personality")
        || name.starts_with("__clang_call_terminate")
        || name == "__cxa_pure_virtual"
    {
        tags.push(FunctionTag::EhRuntime);
    }

    // Sanitizer
    if name.starts_with("__asan_")
        || name.starts_with("__msan_")
        || name.starts_with("__ubsan_")
        || name.starts_with("__tsan_")
        || name.starts_with("__sanitizer_")
        || name.starts_with("__hwasan_")
    {
        tags.push(FunctionTag::Sanitizer);
    }

    // TLS
    if name.starts_with("__tls_")
        || name == "__tls_get_addr"
        || name.starts_with("_TLS_MODULE_BASE")
    {
        tags.push(FunctionTag::TlsHelper);
    }

    // Stack protector
    if name == "__stack_chk_fail"
        || name == "__stack_chk_guard"
        || name == "__stack_smash_handler"
        || name == "__fortify_fail"
    {
        tags.push(FunctionTag::StackProtector);
    }

    // Import thunk (Windows IAT)
    if name.starts_with("__imp_") || name.starts_with("_imp_") {
        tags.push(FunctionTag::ImportThunk);
    }

    // Global ctors/dtors
    if name.starts_with("_GLOBAL__sub_I_")
        || name.starts_with("_GLOBAL__sub_D_")
        || name == "__do_global_dtors_aux"
        || name == "frame_dummy"
        || name == "__do_global_ctors_aux"
        || name.starts_with("__cxx_global_var_init")
        || name == "atexit"
        || name == "__cxa_atexit"
    {
        tags.push(FunctionTag::GlobalCtorDtor);
    }

    // Instrumentation / profiling
    if name.starts_with("__llvm_profile_")
        || name.starts_with("__xray_")
        || name == "mcount"
        || name == "_mcount"
        || name == "__fentry__"
        || name.starts_with("__cyg_profile_")
    {
        tags.push(FunctionTag::Instrumentation);
    }

    tags
}

/// Classify a function as a PLT stub by checking if it consists of a single
/// indirect jump (or very few instructions dominated by an indirect jump).
///
/// `insn_count` is the total number of IR instructions in the function.
/// `has_indirect_jump` is true if the function contains a `Branchind`.
/// `has_no_frame` is true if there's no stack pointer adjustment.
pub fn classify_plt_stub(insn_count: usize, has_indirect_jump: bool, has_no_frame: bool) -> bool {
    insn_count <= 3 && has_indirect_jump && has_no_frame
}

/// Classify a function as a wrapper thunk: very small, ends in tail call.
///
/// `insn_count`: total instructions.
/// `ends_in_tail_call`: last non-return instruction is an unconditional jump
/// to another function.
pub fn classify_wrapper_thunk(insn_count: usize, ends_in_tail_call: bool) -> bool {
    insn_count <= 4 && ends_in_tail_call
}

/// Classify a batch of functions by name and return a map of entry address → tags.
pub fn classify_functions(functions: &[(u64, &str)]) -> BTreeMap<u64, Vec<FunctionTag>> {
    let mut result = BTreeMap::new();
    for &(addr, name) in functions {
        let tags = classify_by_name(name);
        if !tags.is_empty() {
            result.insert(addr, tags);
        }
    }
    result
}

/// Count how many functions would be hidden vs. shown given a classification map.
pub fn count_hidden_shown(tags_map: &BTreeMap<u64, Vec<FunctionTag>>) -> (usize, usize) {
    let mut hidden = 0;
    let mut shown = 0;
    for tags in tags_map.values() {
        if tags.iter().any(|t| t.should_hide()) {
            hidden += 1;
        } else {
            shown += 1;
        }
    }
    (hidden, shown)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_generated_code_stack_chk_fail() {
        let tags = classify_by_name("__stack_chk_fail");
        assert!(tags.contains(&FunctionTag::StackProtector));
        assert!(FunctionTag::StackProtector.should_hide());
    }

    #[test]
    fn test_generated_code_plt_stub_classification() {
        assert!(classify_plt_stub(2, true, true));
        assert!(!classify_plt_stub(10, true, true));
        assert!(!classify_plt_stub(2, false, true));
    }

    #[test]
    fn test_generated_code_crt_startup() {
        let tags = classify_by_name("_start");
        assert!(tags.contains(&FunctionTag::CrtStartup));
        assert!(!FunctionTag::CrtStartup.should_hide());

        let tags = classify_by_name("mainCRTStartup");
        assert!(tags.contains(&FunctionTag::CrtStartup));
    }

    #[test]
    fn test_generated_code_eh_runtime() {
        let tags = classify_by_name("__cxa_throw");
        assert!(tags.contains(&FunctionTag::EhRuntime));

        let tags = classify_by_name("_Unwind_Resume");
        assert!(tags.contains(&FunctionTag::EhRuntime));
    }

    #[test]
    fn test_generated_code_sanitizer() {
        let tags = classify_by_name("__asan_report_load8");
        assert!(tags.contains(&FunctionTag::Sanitizer));
    }

    #[test]
    fn test_generated_code_import_thunk() {
        let tags = classify_by_name("__imp_CreateFileW");
        assert!(tags.contains(&FunctionTag::ImportThunk));
        assert!(FunctionTag::ImportThunk.should_hide());
    }

    #[test]
    fn test_generated_code_wrapper_thunk() {
        assert!(classify_wrapper_thunk(3, true));
        assert!(!classify_wrapper_thunk(10, true));
        assert!(!classify_wrapper_thunk(3, false));
        assert!(FunctionTag::WrapperThunk.should_hide());
    }

    #[test]
    fn test_generated_code_global_ctor() {
        let tags = classify_by_name("_GLOBAL__sub_I_main.cpp");
        assert!(tags.contains(&FunctionTag::GlobalCtorDtor));
    }

    #[test]
    fn test_generated_code_instrumentation() {
        let tags = classify_by_name("__llvm_profile_write_file");
        assert!(tags.contains(&FunctionTag::Instrumentation));
        assert!(FunctionTag::Instrumentation.should_hide());
    }

    #[test]
    fn test_generated_code_batch_classify() {
        let funcs = vec![
            (0x1000u64, "__stack_chk_fail"),
            (0x2000u64, "main"),
            (0x3000u64, "__imp_ExitProcess"),
            (0x4000u64, "_start"),
        ];
        let map = classify_functions(&funcs);
        assert!(map.contains_key(&0x1000));
        assert!(!map.contains_key(&0x2000)); // "main" not a generated function
        assert!(map.contains_key(&0x3000));
        assert!(map.contains_key(&0x4000));
    }

    #[test]
    fn test_generated_code_count_hidden_shown() {
        let funcs = vec![
            (0x1000u64, "__stack_chk_fail"),
            (0x3000u64, "__imp_ExitProcess"),
            (0x4000u64, "_start"),
        ];
        let map = classify_functions(&funcs);
        let (hidden, shown) = count_hidden_shown(&map);
        // __stack_chk_fail: StackProtector → should_hide
        // __imp_ExitProcess: ImportThunk → should_hide
        // _start: CrtStartup → NOT should_hide
        assert_eq!(hidden, 2);
        assert_eq!(shown, 1);
    }

    #[test]
    fn test_generated_code_no_false_positive_on_user_funcs() {
        let tags = classify_by_name("process_data");
        assert!(tags.is_empty());

        let tags = classify_by_name("my_stack_handler");
        assert!(tags.is_empty());
    }
}
