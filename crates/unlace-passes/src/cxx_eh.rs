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
    Rethrow,
    PureVirtual,
    GuardAcquire,
    GuardRelease,
}

impl CxxEhAction {
    pub fn label(self) -> &'static str {
        match self {
            Self::BeginCatch => "begin_catch",
            Self::EndCatch => "end_catch",
            Self::UnwindResume => "unwind_resume",
            Self::Throw => "throw",
            Self::AllocateException => "allocate_exception",
            Self::Rethrow => "rethrow",
            Self::PureVirtual => "pure_virtual",
            Self::GuardAcquire => "guard_acquire",
            Self::GuardRelease => "guard_release",
        }
    }
}

/// Classify a callee name as a C++ EH action.
pub fn classify_eh_call(name: &str) -> Option<CxxEhAction> {
    match name {
        "__cxa_begin_catch" => Some(CxxEhAction::BeginCatch),
        "__cxa_end_catch" => Some(CxxEhAction::EndCatch),
        "_Unwind_Resume" | "__Unwind_Resume" => Some(CxxEhAction::UnwindResume),
        "__cxa_throw" => Some(CxxEhAction::Throw),
        "__cxa_allocate_exception" => Some(CxxEhAction::AllocateException),
        "__cxa_rethrow" => Some(CxxEhAction::Rethrow),
        "__cxa_pure_virtual" => Some(CxxEhAction::PureVirtual),
        "__cxa_guard_acquire" => Some(CxxEhAction::GuardAcquire),
        "__cxa_guard_release" => Some(CxxEhAction::GuardRelease),
        _ => None,
    }
}

/// Collect EH action sites in a function. Input is a map of call-site
/// address → callee name.
pub fn collect_eh_sites(
    calls: &BTreeMap<u64, String>,
) -> BTreeMap<u64, CxxEhAction> {
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
    actions
        .values()
        .any(|a| matches!(a, CxxEhAction::BeginCatch | CxxEhAction::Throw | CxxEhAction::Rethrow))
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
