//! JSON records of `unlace functions --json` and `unlace decompile --json`, the
//! machine-readable output scripts and benchmark harnesses (DecBench) consume.

use serde::Serialize;

use crate::pipeline::FunctionEntry;

/// One discovered function.
#[derive(Debug, Serialize)]
pub struct FunctionRecord<'a> {
    pub name: &'a str,
    pub address: u64,
    /// `None` when discovery found only the start address.
    pub size: Option<u64>,
}

impl<'a> From<&'a FunctionEntry> for FunctionRecord<'a> {
    fn from(entry: &'a FunctionEntry) -> Self {
        Self {
            name: &entry.name,
            address: entry.addr,
            size: (entry.size != 0).then_some(entry.size),
        }
    }
}

/// One function's decompiler output.
#[derive(Debug, Serialize)]
pub struct DecompiledRecord<'a> {
    #[serde(flatten)]
    pub function: FunctionRecord<'a>,
    /// `false` when the pipeline failed; `code` then holds the error comment.
    pub ok: bool,
    pub line_count: usize,
    pub code: String,
}

impl<'a> DecompiledRecord<'a> {
    pub fn new(entry: &'a FunctionEntry, ok: bool, code: String) -> Self {
        Self {
            function: entry.into(),
            ok,
            line_count: code.lines().count(),
            code,
        }
    }
}

/// `records` as a pretty-printed JSON array.
pub fn to_json<T: Serialize>(records: &[T]) -> String {
    let mut text = serde_json::to_string_pretty(records).expect("records serialize to JSON");
    text.push('\n');
    text
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn unknown_size_serializes_as_null() {
        let entry = FunctionEntry {
            name: "main".to_string(),
            addr: 0x1140,
            size: 0,
        };
        let record = DecompiledRecord::new(&entry, true, "int main()\n{\n}\n".to_string());
        let value = serde_json::to_value(&record).unwrap();
        assert_eq!(
            value,
            serde_json::json!({
                "name": "main",
                "address": 0x1140,
                "size": null,
                "ok": true,
                "line_count": 3,
                "code": "int main()\n{\n}\n",
            })
        );
    }
}
