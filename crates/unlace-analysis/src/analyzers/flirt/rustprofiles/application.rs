//! Name proposals require complete profile selection and exact agreement of both banks.

use std::collections::BTreeSet;

use super::{Bank, Report, Selection, select};
use crate::pass::FidMatch;

impl Report {
    /// Produce signature proposals; the normal commit still owns name arbitration.
    pub fn agreed_names(&self) -> Result<Vec<FidMatch>, String> {
        if self.candidates.iter().any(|candidate| {
            !candidate.missing_banks.is_empty()
                || candidate.banks.len() != 2
                || [Bank::Inline, Bank::NoInline].iter().any(|bank| {
                    !candidate.banks.iter().any(|source| {
                        source.source.bank == *bank && source.source.profile == candidate.profile
                    })
                })
        }) {
            return Err(
                "incomplete Rust signature comparison: every profile requires both banks".into(),
            );
        }
        let Selection::Unique(profile) = select(&self.candidates) else {
            return Err(format!(
                "Rust signature application requires a complete unique positive profile; found {:?}",
                self.selection
            ));
        };
        if self.selection != Selection::Unique(profile) {
            return Err("Rust signature selection disagrees with its candidate scores".into());
        }
        let candidate = self
            .candidates
            .iter()
            .find(|candidate| candidate.profile == profile)
            .ok_or("selected Rust signature profile is absent")?;
        if !candidate.missing_banks.is_empty() || candidate.banks.len() != 2 {
            return Err("selected Rust signature profile requires both banks".into());
        }
        let names = |bank| -> Result<BTreeSet<(u64, String)>, String> {
            let source = candidate
                .banks
                .iter()
                .find(|source| source.source.bank == bank)
                .ok_or("selected Rust signature profile requires both banks")?;
            Ok(source
                .matches
                .iter()
                .map(|matched| (matched.address, matched.symbol.clone()))
                .collect())
        };
        let inline = names(Bank::Inline)?;
        let no_inline = names(Bank::NoInline)?;
        let agreed: Vec<_> = inline
            .intersection(&no_inline)
            .map(|(addr, name)| FidMatch {
                addr: *addr,
                name: name.clone(),
                by_signature: true,
            })
            .collect();
        if agreed.is_empty() {
            return Err("selected Rust signature banks agree on no symbol/address pairs".into());
        }
        Ok(agreed)
    }
}

#[cfg(test)]
mod tests;
