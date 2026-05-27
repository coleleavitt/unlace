//! ABI register clobber classification.
//!
//! This is intentionally metadata-only. Existing call recovery can keep using
//! its conservative barriers, while diagnostics and later call passes can ask
//! whether a register is fully clobbered, partly defined by a small return
//! value, or preserved by the ABI.

use unlace_ir::ssa::CallingConvention;
use unlace_ir::{SpaceId, Varnode};

pub const RAX: u64 = 0;
pub const RCX: u64 = 8;
pub const RDX: u64 = 16;
pub const RBX: u64 = 24;
pub const RSP: u64 = 32;
pub const RBP: u64 = 40;
pub const RSI: u64 = 48;
pub const RDI: u64 = 56;
pub const R8: u64 = 64;
pub const R9: u64 = 72;
pub const R10: u64 = 80;
pub const R11: u64 = 88;
pub const R12: u64 = 96;
pub const R13: u64 = 104;
pub const R14: u64 = 112;
pub const R15: u64 = 120;

pub const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
pub const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
pub const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum UpperLaneEffect {
    Preserved,
    Zeroed,
    Unknown,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum CallClobber {
    Preserved,
    Full,
    Partial {
        written_low_bytes: u8,
        upper: UpperLaneEffect,
    },
    Unknown,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct CallClobberModel {
    pub cc: CallingConvention,
    pub return_size: Option<u8>,
}

impl CallClobberModel {
    pub const fn new(cc: CallingConvention) -> Self {
        Self {
            cc,
            return_size: None,
        }
    }

    pub const fn with_return_size(mut self, bytes: u8) -> Self {
        self.return_size = Some(bytes);
        self
    }

    pub fn classify(self, reg: Varnode) -> CallClobber {
        classify_call_clobber(self.cc, reg, self.return_size)
    }
}

pub fn argument_registers(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        _ => &[],
    }
}

pub fn classify_call_clobber(
    cc: CallingConvention,
    reg: Varnode,
    return_size: Option<u8>,
) -> CallClobber {
    if reg.space != SpaceId::Register {
        return CallClobber::Unknown;
    }
    match cc {
        CallingConvention::SystemV | CallingConvention::MicrosoftX64 => {
            classify_x86_64_call_clobber(reg, return_size)
        }
        CallingConvention::AArch64 => classify_aarch64_call_clobber(reg),
        _ => CallClobber::Unknown,
    }
}

fn classify_x86_64_call_clobber(reg: Varnode, return_size: Option<u8>) -> CallClobber {
    let base = canonical_x86_gpr(reg.offset);
    if base == RAX {
        return match return_size.filter(|&size| size > 0 && size < reg.size) {
            Some(4) => CallClobber::Partial {
                written_low_bytes: 4,
                upper: UpperLaneEffect::Zeroed,
            },
            Some(size) => CallClobber::Partial {
                written_low_bytes: size,
                upper: UpperLaneEffect::Unknown,
            },
            None => CallClobber::Full,
        };
    }
    if matches!(base, RCX | RDX | RSI | RDI | R8 | R9 | R10 | R11) {
        CallClobber::Full
    } else if matches!(base, RBX | RSP | RBP | R12 | R13 | R14 | R15) {
        CallClobber::Preserved
    } else {
        CallClobber::Unknown
    }
}

fn classify_aarch64_call_clobber(reg: Varnode) -> CallClobber {
    let idx = reg.offset / 8;
    if idx <= 17 {
        CallClobber::Full
    } else if (19..=28).contains(&idx) || idx == 29 || idx == 31 {
        CallClobber::Preserved
    } else {
        CallClobber::Unknown
    }
}

fn canonical_x86_gpr(offset: u64) -> u64 {
    if offset < 0x100 { offset & !7 } else { offset }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sysv_distinguishes_full_partial_and_preserved_clobbers() {
        let model = CallClobberModel::new(CallingConvention::SystemV);
        assert_eq!(model.classify(Varnode::reg(RDI, 8)), CallClobber::Full);
        assert_eq!(model.classify(Varnode::reg(RBX, 8)), CallClobber::Preserved);

        let ret8 = model.with_return_size(1);
        assert_eq!(
            ret8.classify(Varnode::reg(RAX, 8)),
            CallClobber::Partial {
                written_low_bytes: 1,
                upper: UpperLaneEffect::Unknown,
            }
        );

        let ret32 = model.with_return_size(4);
        assert_eq!(
            ret32.classify(Varnode::reg(RAX, 8)),
            CallClobber::Partial {
                written_low_bytes: 4,
                upper: UpperLaneEffect::Zeroed,
            }
        );
    }

    #[test]
    fn argument_registers_follow_calling_convention() {
        assert_eq!(
            argument_registers(CallingConvention::SystemV),
            SYSV_ARG_REGS
        );
        assert_eq!(
            argument_registers(CallingConvention::MicrosoftX64),
            MSX64_ARG_REGS
        );
        assert!(argument_registers(CallingConvention::Unknown).is_empty());
    }
}
