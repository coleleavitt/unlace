//! C++ exception cleanup / try-catch recognizer.
//!
//! Detects Itanium EH call patterns and produces HIR-friendly facts:
//! - `__cxa_begin_catch` → entry of a catch block
//! - `__cxa_end_catch` → exit of a catch block
//! - `_Unwind_Resume` → rethrow / cleanup propagation
//! - `__cxa_throw` → explicit throw expression
//! - `__cxa_allocate_exception` → throw setup
//! - `__cxa_rethrow` → rethrow

use std::collections::BTreeMap;

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum CxxEhAction {
    BeginCatch,
    EndCatch,
    UnwindResume,
    Throw,
    AllocateException,
    FreeException,
    Rethrow,
    GetExceptionPtr,
    CurrentExceptionType,
    BadCast,
    BadTypeid,
    DynamicCast,
    PureVirtual,
    DeletedVirtual,
    GuardAcquire,
    GuardRelease,
    GuardAbort,
    Personality,
    MsvcThrow,
    MsvcFrameHandler,
}

impl CxxEhAction {
    pub fn label(self) -> &'static str {
        match self {
            Self::BeginCatch => "begin_catch",
            Self::EndCatch => "end_catch",
            Self::UnwindResume => "unwind_resume",
            Self::Throw => "throw",
            Self::AllocateException => "allocate_exception",
            Self::FreeException => "free_exception",
            Self::Rethrow => "rethrow",
            Self::GetExceptionPtr => "get_exception_ptr",
            Self::CurrentExceptionType => "current_exception_type",
            Self::BadCast => "bad_cast",
            Self::BadTypeid => "bad_typeid",
            Self::DynamicCast => "dynamic_cast",
            Self::PureVirtual => "pure_virtual",
            Self::DeletedVirtual => "deleted_virtual",
            Self::GuardAcquire => "guard_acquire",
            Self::GuardRelease => "guard_release",
            Self::GuardAbort => "guard_abort",
            Self::Personality => "personality",
            Self::MsvcThrow => "msvc_throw",
            Self::MsvcFrameHandler => "msvc_frame_handler",
        }
    }
}

fn normalized_runtime_name(name: &str) -> &str {
    let mut s = name.rsplit('!').next().unwrap_or(name);
    s = s.strip_prefix("__imp_").unwrap_or(s);
    s = s.strip_prefix("__imp__").unwrap_or(s);
    if let Some((base, suffix)) = s.rsplit_once('@')
        && !base.is_empty()
        && suffix.chars().all(|c| c.is_ascii_digit())
    {
        s = base;
    }
    s
}

/// Classify a callee name as a C++ EH action.
pub fn classify_eh_call(name: &str) -> Option<CxxEhAction> {
    match normalized_runtime_name(name) {
        "__cxa_begin_catch" => Some(CxxEhAction::BeginCatch),
        "__cxa_end_catch" => Some(CxxEhAction::EndCatch),
        "_Unwind_Resume" | "__Unwind_Resume" => Some(CxxEhAction::UnwindResume),
        "__cxa_throw" => Some(CxxEhAction::Throw),
        "__cxa_allocate_exception" => Some(CxxEhAction::AllocateException),
        "__cxa_free_exception" => Some(CxxEhAction::FreeException),
        "__cxa_rethrow" => Some(CxxEhAction::Rethrow),
        "__cxa_get_exception_ptr" => Some(CxxEhAction::GetExceptionPtr),
        "__cxa_current_exception_type" => Some(CxxEhAction::CurrentExceptionType),
        "__cxa_bad_cast" => Some(CxxEhAction::BadCast),
        "__cxa_bad_typeid" => Some(CxxEhAction::BadTypeid),
        "__dynamic_cast" => Some(CxxEhAction::DynamicCast),
        "__cxa_pure_virtual" => Some(CxxEhAction::PureVirtual),
        "__cxa_deleted_virtual" => Some(CxxEhAction::DeletedVirtual),
        "__cxa_guard_acquire" => Some(CxxEhAction::GuardAcquire),
        "__cxa_guard_release" => Some(CxxEhAction::GuardRelease),
        "__cxa_guard_abort" => Some(CxxEhAction::GuardAbort),
        "__gxx_personality_v0" | "__gxx_personality_seh0" => Some(CxxEhAction::Personality),
        "_CxxThrowException" => Some(CxxEhAction::MsvcThrow),
        "__CxxFrameHandler3" | "__CxxFrameHandler4" => Some(CxxEhAction::MsvcFrameHandler),
        _ => None,
    }
}

/// Collect EH action sites in a function. Input is a map of call-site
/// address → callee name.
pub fn collect_eh_sites(calls: &BTreeMap<u64, String>) -> BTreeMap<u64, CxxEhAction> {
    let mut out = BTreeMap::new();
    for (&addr, name) in calls {
        if let Some(action) = classify_eh_call(name) {
            out.insert(addr, action);
        }
    }
    out
}

/// Whether a function appears to be a C++ EH cleanup / try-catch user
/// (presence of any EH action).
pub fn function_uses_eh(actions: &BTreeMap<u64, CxxEhAction>) -> bool {
    actions.values().any(|a| {
        matches!(
            a,
            CxxEhAction::BeginCatch | CxxEhAction::Throw | CxxEhAction::Rethrow
        )
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_cxx_eh_classify_begin_catch() {
        assert_eq!(
            classify_eh_call("__cxa_begin_catch"),
            Some(CxxEhAction::BeginCatch)
        );
    }

    #[test]
    fn test_cxx_eh_classify_throw() {
        assert_eq!(classify_eh_call("__cxa_throw"), Some(CxxEhAction::Throw));
    }

    #[test]
    fn test_cxx_eh_unwind_resume() {
        assert_eq!(
            classify_eh_call("_Unwind_Resume"),
            Some(CxxEhAction::UnwindResume)
        );
    }

    #[test]
    fn test_cxx_eh_not_eh() {
        assert_eq!(classify_eh_call("printf"), None);
        assert_eq!(classify_eh_call("main"), None);
    }

    #[test]
    fn test_cxx_eh_classifies_compiler_runtime_variants() {
        assert_eq!(
            classify_eh_call("__dynamic_cast"),
            Some(CxxEhAction::DynamicCast)
        );
        assert_eq!(
            classify_eh_call("__cxa_free_exception"),
            Some(CxxEhAction::FreeException)
        );
        assert_eq!(
            classify_eh_call("__cxa_current_exception_type"),
            Some(CxxEhAction::CurrentExceptionType)
        );
        assert_eq!(
            classify_eh_call("__gxx_personality_v0"),
            Some(CxxEhAction::Personality)
        );
        assert_eq!(
            classify_eh_call("__imp___CxxFrameHandler3"),
            Some(CxxEhAction::MsvcFrameHandler)
        );
        assert_eq!(
            classify_eh_call("vcruntime140.dll!_CxxThrowException@8"),
            Some(CxxEhAction::MsvcThrow)
        );
    }

    #[test]
    fn test_cxx_eh_collect_sites() {
        let mut calls = BTreeMap::new();
        calls.insert(0x1000u64, "__cxa_begin_catch".to_string());
        calls.insert(0x1010u64, "printf".to_string());
        calls.insert(0x1020u64, "__cxa_end_catch".to_string());
        let sites = collect_eh_sites(&calls);
        assert_eq!(sites.len(), 2);
        assert_eq!(sites[&0x1000], CxxEhAction::BeginCatch);
        assert_eq!(sites[&0x1020], CxxEhAction::EndCatch);
    }

    #[test]
    fn test_cxx_eh_function_uses_eh() {
        let mut sites = BTreeMap::new();
        sites.insert(0x1000u64, CxxEhAction::BeginCatch);
        assert!(function_uses_eh(&sites));

        let mut sites2 = BTreeMap::new();
        sites2.insert(0x1000u64, CxxEhAction::GuardAcquire);
        // Guard is not a try/catch indicator.
        assert!(!function_uses_eh(&sites2));
    }

    #[test]
    fn test_cxx_eh_labels() {
        assert_eq!(CxxEhAction::BeginCatch.label(), "begin_catch");
        assert_eq!(CxxEhAction::Throw.label(), "throw");
    }
}
