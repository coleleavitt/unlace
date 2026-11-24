//! TOML stage tests for the datatest runner: [`parse`] reads one with its computed counts
//! resolved against the compiled settable catalog (`count = { settables = { change_kind =
//! "opt-in-tool" }, plus = 1 }`), so catalog totals never need hand-bumping. The format and
//! parser live in unlace-stagefile; `tests/stages/README.md` describes it.

use unlace_decomp::phases::{KunaSettable, kuna_num_settables, kuna_settable_by_index};
pub use unlace_stagefile::{PatternLine, StageMatch, StageTest, Table, escape_literal};

/// A string-valued catalog field by its `phases.toml` key.
fn settable_field(st: &KunaSettable, key: &str) -> Option<&'static str> {
    Some(match key {
        "option" => st.option,
        "values" => st.values,
        "default" => st.shipped,
        "subphase" => st.subphase,
        "issue" => st.issue,
        "source_decompiler" => st.source_decompiler,
        "inspiration" => st.inspiration,
        "change_kind" => st.change_kind,
        "tier" => st.tier,
        _ => return None,
    })
}

/// How many catalog rows match every `field = value` of `filter`.
pub fn count_settables(filter: &Table, ctx: &str) -> Result<i32, String> {
    let mut n = 0i32;
    for i in 0..kuna_num_settables() {
        let st = kuna_settable_by_index(i);
        let mut hit = true;
        for (key, want) in filter {
            let ok = if key == "destructive" {
                want.as_bool()
                    .ok_or_else(|| format!("{ctx}: `destructive` is not a boolean"))?
                    == st.destructive
            } else {
                let have = settable_field(st, key)
                    .ok_or_else(|| format!("{ctx}: no catalog field `{key}`"))?;
                have == want
                    .as_str()
                    .ok_or_else(|| format!("{ctx}: `{key}` is not a string"))?
            };
            hit &= ok;
        }
        n += i32::from(hit);
    }
    Ok(n)
}

/// Parse a TOML stage test, resolving computed counts against the compiled catalog.
pub fn parse(text: &str) -> Result<StageTest, String> {
    StageTest::parse_with(text, &count_settables)
}

#[cfg(test)]
mod tests;
