//! Word-addressed relocatable objects. The TI C2000 ELF ABI (`EM_TI_C2000`) counts symbol
//! values, symbol sizes and relocation offsets in 16-bit words, while its section sizes and file
//! bytes are in bytes. The relocatable layout keeps byte VMAs (the code space's address unit
//! times its word size), so it scales those word counts by the address unit before use.

const EM_TI_C2000: u16 = 141;

/// Bytes per addressable unit for an ELF `e_machine` (`None` for any other format).
pub(crate) fn address_unit_bytes(machine: Option<u16>) -> u64 {
    match machine {
        Some(EM_TI_C2000) => 2,
        _ => 1,
    }
}

#[cfg(test)]
mod tests;
