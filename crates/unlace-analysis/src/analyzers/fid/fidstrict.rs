//! Evidence gate for optional strict FID renames.

use super::db::FidRecord;
use super::hash::FidHashQuad;

pub(super) fn supports_rename(records: &[FidRecord], query: &FidHashQuad) -> bool {
    records.iter().any(|record| {
        record.specific_hash == query.specific_hash && record.code_unit_size == query.code_unit_size
    })
}

#[cfg(test)]
mod tests;
