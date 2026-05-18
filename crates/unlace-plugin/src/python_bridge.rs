//! Python PyO3 binding interface (t441).
//!
//! Defines the FFI surface for a future PyO3 Python extension module.
//! This module provides the Rust-side types and trait implementations
//! that map to Python classes, enabling `import unlace` in Python scripts.
//!
//! Note: actual PyO3 compilation requires the `pyo3` feature flag and
//! a Python interpreter. This module defines the interface contract.

/// Python-visible function metadata.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PyFunction {
    pub name: String,
    pub address: u64,
    pub size: u64,
    pub block_count: usize,
}

/// Python-visible decompilation result.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PyDecompileResult {
    pub function_name: String,
    pub c_source: String,
    pub ir_dump: Option<String>,
}

/// Python-visible binary info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PyBinaryInfo {
    pub path: String,
    pub format: String,
    pub arch: String,
    pub entry_point: u64,
    pub function_count: usize,
}

/// Interface that the Python module will expose.
///
/// These methods map 1:1 to Python methods on the `unlace.Binary` class.
pub trait PyBinaryApi {
    fn open(path: &str) -> Result<Self, String>
    where
        Self: Sized;
    fn info(&self) -> PyBinaryInfo;
    fn functions(&self) -> Vec<PyFunction>;
    fn decompile(&self, addr: u64) -> Result<PyDecompileResult, String>;
    fn decompile_by_name(&self, name: &str) -> Result<PyDecompileResult, String>;
}

/// Validate that a function address is reasonable for decompilation.
pub fn validate_decompile_target(addr: u64, known_functions: &[u64]) -> bool {
    known_functions.contains(&addr)
}

/// Format a decompilation result as a Python-friendly string.
pub fn format_for_python(result: &PyDecompileResult) -> String {
    let mut out = format!("// Function: {}\n", result.function_name);
    out.push_str(&result.c_source);
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn validate_known_target() {
        let funcs = vec![0x1000, 0x2000, 0x3000];
        assert!(validate_decompile_target(0x2000, &funcs));
        assert!(!validate_decompile_target(0x9999, &funcs));
    }

    #[test]
    fn format_result() {
        let r = PyDecompileResult {
            function_name: "main".into(),
            c_source: "int main() { return 0; }\n".into(),
            ir_dump: None,
        };
        let s = format_for_python(&r);
        assert!(s.contains("// Function: main"));
        assert!(s.contains("int main()"));
    }

    #[test]
    fn py_function_struct() {
        let f = PyFunction {
            name: "test".into(),
            address: 0x1000,
            size: 64,
            block_count: 3,
        };
        assert_eq!(f.name, "test");
        assert_eq!(f.block_count, 3);
    }

    #[test]
    fn py_binary_info() {
        let info = PyBinaryInfo {
            path: "/tmp/test".into(),
            format: "ELF".into(),
            arch: "x86_64".into(),
            entry_point: 0x401000,
            function_count: 42,
        };
        assert_eq!(info.function_count, 42);
    }
}
