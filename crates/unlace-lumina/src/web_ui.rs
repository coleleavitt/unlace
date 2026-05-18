//! Web UI REST API types (t452).
//!
//! Defines the JSON request/response types for an axum-based web UI.
//! The web frontend can query functions, request decompilation, and
//! browse annotations through these endpoints.

use serde::{Deserialize, Serialize};

/// Request to decompile a function.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct DecompileRequest {
    pub binary_id: String,
    pub function_addr: u64,
    pub emit_ir: bool,
}

/// Response with decompiled output.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct DecompileResponse {
    pub function_name: String,
    pub c_source: String,
    pub ir_dump: Option<String>,
    pub block_count: usize,
    pub elapsed_ms: u64,
}

/// A function summary for the sidebar listing.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct FunctionSummary {
    pub addr: u64,
    pub name: String,
    pub size: u64,
    pub block_count: usize,
    pub has_xrefs: bool,
}

/// Request to list functions in a binary.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct ListFunctionsRequest {
    pub binary_id: String,
    pub filter: Option<String>,
    pub offset: usize,
    pub limit: usize,
}

/// Paginated function list response.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct ListFunctionsResponse {
    pub functions: Vec<FunctionSummary>,
    pub total_count: usize,
}

/// Binary upload/open request metadata.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct OpenBinaryRequest {
    pub path: String,
    pub arch_override: Option<String>,
}

/// Binary metadata response.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct BinaryMetadata {
    pub id: String,
    pub path: String,
    pub format: String,
    pub arch: String,
    pub entry_point: u64,
    pub section_count: usize,
    pub function_count: usize,
}

/// Apply a filter to function summaries.
pub fn filter_functions<'a>(
    functions: &'a [FunctionSummary],
    filter: &str,
) -> Vec<&'a FunctionSummary> {
    let filter_lower = filter.to_lowercase();
    functions
        .iter()
        .filter(|f| {
            f.name.to_lowercase().contains(&filter_lower)
                || format!("0x{:x}", f.addr).contains(&filter_lower)
        })
        .collect()
}

/// Paginate a slice.
pub fn paginate<T>(items: &[T], offset: usize, limit: usize) -> &[T] {
    let start = offset.min(items.len());
    let end = (start + limit).min(items.len());
    &items[start..end]
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn filter_by_name() {
        let funcs = vec![
            FunctionSummary {
                addr: 0x1000,
                name: "main".into(),
                size: 100,
                block_count: 5,
                has_xrefs: true,
            },
            FunctionSummary {
                addr: 0x2000,
                name: "crypto_init".into(),
                size: 200,
                block_count: 10,
                has_xrefs: false,
            },
            FunctionSummary {
                addr: 0x3000,
                name: "helper".into(),
                size: 50,
                block_count: 2,
                has_xrefs: true,
            },
        ];
        let filtered = filter_functions(&funcs, "crypto");
        assert_eq!(filtered.len(), 1);
        assert_eq!(filtered[0].name, "crypto_init");
    }

    #[test]
    fn filter_by_address() {
        let funcs = vec![FunctionSummary {
            addr: 0x401000,
            name: "foo".into(),
            size: 10,
            block_count: 1,
            has_xrefs: false,
        }];
        let filtered = filter_functions(&funcs, "401000");
        assert_eq!(filtered.len(), 1);
    }

    #[test]
    fn paginate_slice() {
        let items = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
        assert_eq!(paginate(&items, 0, 3), &[1, 2, 3]);
        assert_eq!(paginate(&items, 3, 3), &[4, 5, 6]);
        assert_eq!(paginate(&items, 8, 5), &[9, 10]);
    }

    #[test]
    fn decompile_request_serde() {
        let req = DecompileRequest {
            binary_id: "abc".into(),
            function_addr: 0x1000,
            emit_ir: true,
        };
        let json = serde_json::to_string(&req).unwrap();
        let parsed: DecompileRequest = serde_json::from_str(&json).unwrap();
        assert_eq!(req, parsed);
    }
}
