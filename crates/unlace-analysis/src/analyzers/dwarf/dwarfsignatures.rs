//! Minimal debug information names functions without describing their signatures.

use std::collections::BTreeMap;

use super::DieSnap;

pub(super) fn has_signature_information(dies: &BTreeMap<usize, DieSnap>) -> bool {
    dies.values().any(|die| {
        die.type_ref.is_some()
            || matches!(
                die.tag,
                gimli::DW_TAG_formal_parameter | gimli::DW_TAG_unspecified_parameters
            )
    })
}

#[cfg(test)]
mod tests;
