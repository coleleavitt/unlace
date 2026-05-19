//! ARM Thumb IT (If-Then) block recognizer.
//!
//! Thumb-2 IT instructions predicate up to 4 following instructions on a
//! condition. The mnemonic encoding is `IT[x[y[z]]]` where each letter is
//! T (then) or E (else). After IT, the next 1-4 insns are predicated.

/// Predicate condition (subset of standard ARM cond codes).
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum ItCond {
    Eq,
    Ne,
    Cs,
    Cc,
    Mi,
    Pl,
    Vs,
    Vc,
    Hi,
    Ls,
    Ge,
    Lt,
    Gt,
    Le,
    Al,
    Nv,
}

impl ItCond {
    /// Parse cond from the bottom 4 bits.
    pub fn from_bits(b: u8) -> Self {
        match b & 0xF {
            0x0 => Self::Eq,
            0x1 => Self::Ne,
            0x2 => Self::Cs,
            0x3 => Self::Cc,
            0x4 => Self::Mi,
            0x5 => Self::Pl,
            0x6 => Self::Vs,
            0x7 => Self::Vc,
            0x8 => Self::Hi,
            0x9 => Self::Ls,
            0xA => Self::Ge,
            0xB => Self::Lt,
            0xC => Self::Gt,
            0xD => Self::Le,
            0xE => Self::Al,
            _ => Self::Nv,
        }
    }

    /// Invert the condition (for Else slots in an IT block).
    pub fn invert(self) -> Self {
        match self {
            Self::Eq => Self::Ne,
            Self::Ne => Self::Eq,
            Self::Cs => Self::Cc,
            Self::Cc => Self::Cs,
            Self::Mi => Self::Pl,
            Self::Pl => Self::Mi,
            Self::Vs => Self::Vc,
            Self::Vc => Self::Vs,
            Self::Hi => Self::Ls,
            Self::Ls => Self::Hi,
            Self::Ge => Self::Lt,
            Self::Lt => Self::Ge,
            Self::Gt => Self::Le,
            Self::Le => Self::Gt,
            Self::Al => Self::Nv,
            Self::Nv => Self::Al,
        }
    }
}

/// Parsed IT block: condition + per-slot Then/Else flags.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ItBlock {
    pub base_cond: ItCond,
    /// True = Then slot, False = Else slot. Length 1..=4.
    pub slots: Vec<bool>,
}

impl ItBlock {
    /// Per-instruction predicate at slot `i`.
    pub fn cond_for_slot(&self, i: usize) -> Option<ItCond> {
        self.slots.get(i).map(|&is_then| {
            if is_then {
                self.base_cond
            } else {
                self.base_cond.invert()
            }
        })
    }
}

/// Decode an IT instruction's mask bits.
///
/// In Thumb-2 encoding, the IT instruction is `0xBF<cond><mask>` where:
/// - The high nibble of the second byte is the condition.
/// - The low nibble is the mask: bit 3 marks the first Else, bits 2..0
///   indicate up to 3 additional slots' Then/Else (with a 1 sentinel bit).
pub fn decode_it_instruction(cond_bits: u8, mask_bits: u8) -> Option<ItBlock> {
    if mask_bits == 0 {
        return None;
    }
    let base_cond = ItCond::from_bits(cond_bits);
    let cond_lsb = cond_bits & 1; // determines Then-direction sense

    let mut slots = vec![true]; // first slot is always Then
    // Walk from MSB of mask to LSB, stopping at the first "stop bit" (1)
    // from the right.
    let stop_bit = mask_bits.trailing_zeros();
    for bit_idx in (stop_bit + 1..=3).rev() {
        let bit = (mask_bits >> bit_idx) & 1;
        let is_then = bit == cond_lsb;
        slots.push(is_then);
    }

    Some(ItBlock { base_cond, slots })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_it_cond_invert() {
        assert_eq!(ItCond::Eq.invert(), ItCond::Ne);
        assert_eq!(ItCond::Lt.invert(), ItCond::Ge);
    }

    #[test]
    fn test_it_cond_from_bits() {
        assert_eq!(ItCond::from_bits(0), ItCond::Eq);
        assert_eq!(ItCond::from_bits(1), ItCond::Ne);
        assert_eq!(ItCond::from_bits(0xB), ItCond::Lt);
    }

    #[test]
    fn test_it_block_simple_single_slot() {
        // mask = 0b1000 (stop at bit 3) → single slot, Then.
        let b = decode_it_instruction(0, 0b1000).unwrap();
        assert_eq!(b.slots.len(), 1);
        assert_eq!(b.cond_for_slot(0), Some(ItCond::Eq));
    }

    #[test]
    fn test_it_block_two_slots_te() {
        // cond=Eq(0), mask=0b1100 → ITT pattern (Then, Then).
        let b = decode_it_instruction(0, 0b1100).unwrap();
        assert_eq!(b.slots.len(), 2);
    }

    #[test]
    fn test_it_block_invalid_zero_mask() {
        assert!(decode_it_instruction(0, 0).is_none());
    }
}
