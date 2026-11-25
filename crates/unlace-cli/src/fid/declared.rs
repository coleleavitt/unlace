//! `unlace fid build --assert`: prototypes for objects that do not describe
//! their own functions.
//!
//! The value is an `--assert` directive or `@FILE` of them, in the syntax
//! `unlace decompile --assert` reads. Only `prototype <name> <declaration>` and
//! `typedef <declaration>` mean something to a database: a stated prototype
//! goes to every record of that name, over one read from the object's debug
//! information, and carries every stated typedef.

use std::collections::BTreeMap;

use unlace_analysis::fid::db::FidRecord;
use unlace_console::assertions::Body;

#[derive(Default)]
pub(super) struct Declared {
    prototypes: BTreeMap<String, String>,
    typedefs: Vec<String>,
}

impl Declared {
    pub(super) fn add(&mut self, value: &str) -> Result<(), String> {
        for directive in crate::assertdecl::parse_flag(value)? {
            match directive.body {
                Body::Prototype { func, decl } => {
                    self.prototypes
                        .insert(func, one_line(decl.trim_end_matches(';')));
                }
                Body::Typedef { decl } => {
                    self.typedefs
                        .push(format!("{};", one_line(decl.trim_end_matches(';'))));
                }
                _ => {
                    return Err(format!(
                        "--assert {value:?}: a database takes only prototype and typedef directives"
                    ));
                }
            }
        }
        Ok(())
    }

    /// Give each record a stated prototype; the names stated that no record has.
    pub(super) fn fill(&self, records: &mut [FidRecord]) -> Vec<&str> {
        for record in records.iter_mut() {
            if let Some(prototype) = self.prototypes.get(&record.name) {
                record.prototype = Some(prototype.clone());
                record.typedefs = self.typedefs.as_slice().into();
            }
        }
        self.prototypes
            .keys()
            .filter(|name| !records.iter().any(|r| &r.name == *name))
            .map(String::as_str)
            .collect()
    }
}

fn one_line(text: &str) -> String {
    text.split_whitespace().collect::<Vec<_>>().join(" ")
}

#[cfg(test)]
mod tests;
