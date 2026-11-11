//! Canonical fallback names for unnamed stack slots.
//!
//! Producers (lvar collection, the C printer) and consumers that need to know
//! whether a name denotes a stack buffer must agree on one spelling. Keep the
//! `buf_` / `v_` convention here and nowhere else.

const BUFFER_PREFIX: &str = "buf_";
const SCALAR_PREFIX: &str = "v_";

/// Slots larger than this many bytes are treated as buffers, not scalars.
pub const MAX_SCALAR_SLOT_SIZE: u64 = 8;

/// Fallback name for an unnamed stack slot at `offset`.
#[must_use]
pub fn fallback_slot_name(offset: i64, is_buffer: bool) -> String {
    let prefix = if is_buffer {
        BUFFER_PREFIX
    } else {
        SCALAR_PREFIX
    };
    format!("{prefix}{}", offset.unsigned_abs())
}

/// Fallback name chosen by slot size alone.
#[must_use]
pub fn fallback_slot_name_for_size(offset: i64, size: u64) -> String {
    fallback_slot_name(offset, size > MAX_SCALAR_SLOT_SIZE)
}

/// True when `name` is a fallback buffer name produced by [`fallback_slot_name`].
#[must_use]
pub fn is_fallback_buffer_name(name: &str) -> bool {
    name.starts_with(BUFFER_PREFIX)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn names_round_trip() {
        assert_eq!(fallback_slot_name(-32, true), "buf_32");
        assert_eq!(fallback_slot_name(-8, false), "v_8");
        assert_eq!(fallback_slot_name_for_size(-16, 9), "buf_16");
        assert_eq!(fallback_slot_name_for_size(-16, 8), "v_16");
        assert!(is_fallback_buffer_name("buf_32"));
        assert!(!is_fallback_buffer_name("v_8"));
    }
}
