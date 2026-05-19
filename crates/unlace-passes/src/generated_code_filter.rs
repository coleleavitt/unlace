//! Pipeline integration for the generated-code classifier.
//!
//! Provides a single entry point that maps `(addr, name)` records to either
//! "show this function" or "hide it as compiler/runtime glue". Designed to
//! be called by the CLI right after function discovery, before lifting.

use std::collections::BTreeMap;

use crate::generated_code::{FunctionTag, classify_by_name};

/// Decision for a single function: show, annotate, or hide.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum FunctionVisibility {
    /// Render normally in C output.
    Show,
    /// Render with a `/* runtime: <kind> */` annotation but still show.
    Annotate,
    /// Suppress from output (PLT stubs, import thunks, etc.).
    Hide,
}

/// Classify a batch of (addr, name) tuples and produce a visibility map.
///
/// User code defaults to [`FunctionVisibility::Show`]. Tagged runtime/CRT/EH
/// functions get [`FunctionVisibility::Annotate`] or [`Hide`] depending on
/// `FunctionTag::should_hide()`.
pub fn classify_pipeline(
    functions: &[(u64, &str)],
) -> BTreeMap<u64, FunctionVisibility> {
    let mut out = BTreeMap::new();
    for &(addr, name) in functions {
        let tags = classify_by_name(name);
        let vis = if tags.is_empty() {
            FunctionVisibility::Show
        } else if tags.iter().any(|t| t.should_hide()) {
            FunctionVisibility::Hide
        } else {
            FunctionVisibility::Annotate
        };
        out.insert(addr, vis);
    }
    out
}

/// Quick check: should a function with the given name be hidden from output?
pub fn should_hide_function(name: &str) -> bool {
    let tags = classify_by_name(name);
    tags.iter().any(|t| t.should_hide())
}

/// Get the annotation label for a function name, if any.
///
/// Returns the first tag's label (used for comment annotation in output).
pub fn annotation_for_function(name: &str) -> Option<&'static str> {
    let tags = classify_by_name(name);
    tags.first().map(|t| FunctionTag::label(*t))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_classify_pipeline_mixed() {
        let funcs = vec![
            (0x1000u64, "main"),                  // Show
            (0x2000u64, "_start"),                // Annotate (CrtStartup)
            (0x3000u64, "__stack_chk_fail"),      // Hide (StackProtector)
            (0x4000u64, "__imp_CreateFileW"),     // Hide (ImportThunk)
            (0x5000u64, "process_data"),          // Show
            (0x6000u64, "__cxa_throw"),           // Annotate (EhRuntime)
        ];
        let map = classify_pipeline(&funcs);
        assert_eq!(map[&0x1000], FunctionVisibility::Show);
        assert_eq!(map[&0x2000], FunctionVisibility::Annotate);
        assert_eq!(map[&0x3000], FunctionVisibility::Hide);
        assert_eq!(map[&0x4000], FunctionVisibility::Hide);
        assert_eq!(map[&0x5000], FunctionVisibility::Show);
        assert_eq!(map[&0x6000], FunctionVisibility::Annotate);
    }

    #[test]
    fn test_should_hide_function() {
        assert!(should_hide_function("__stack_chk_fail"));
        assert!(should_hide_function("__imp_CreateFileW"));
        assert!(!should_hide_function("main"));
        assert!(!should_hide_function("_start"));
    }

    #[test]
    fn test_annotation_for_function() {
        assert_eq!(annotation_for_function("_start"), Some("crt_startup"));
        assert_eq!(annotation_for_function("__cxa_throw"), Some("eh_runtime"));
        assert_eq!(annotation_for_function("__asan_init"), Some("sanitizer"));
        assert_eq!(annotation_for_function("main"), None);
    }
}
