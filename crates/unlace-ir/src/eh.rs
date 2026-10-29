//! C++ exception dispatch in the IR.
//!
//! A landing pad is entered by the unwinder, not by any branch, so a plain
//! CFG leaves the catch handler unreachable. Hex-Rays' `eh34` support makes
//! the handler reachable with a conditional jump on a helper call at the
//! start of the protected range (`jcnd __eh34_try(...)`); its structurer
//! then turns that `if` into `try { } catch { }`. Unlace uses the same
//! shape, shared by every architecture:
//!
//! ```text
//! flag      = CALLOTHER(EH_TAG, Try)        ; dispatch block, at the try start
//! CBRANCH landing, flag                     ; true: handler, false: try body
//!
//! exception = CALLOTHER(EH_TAG, Exception)  ; handler entry, before the pad
//! selector  = CALLOTHER(EH_TAG, Selector)   ; or a constant type filter
//! ```
//!
//! `exception` and `selector` are the registers the personality routine
//! hands to the landing pad (`__builtin_eh_return_data_regno(0/1)`).

use crate::{ArchId, IrInsn, IrOp, SpaceId, Varnode};

/// CALLOTHER tag of the exception-dispatch shape. The value spells `EHDISP`
/// in ASCII so it stays clear of the small per-lifter tag ranges.
pub const EH_TAG: u64 = 0x4548_4449_5350_0000;

/// Index of the [`EhHelper`] constant in an exception helper's inputs.
pub const HELPER_INPUT: usize = 1;

/// The value an exception helper produces.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
#[repr(u8)]
pub enum EhHelper {
    /// Non-zero when control enters the handler instead of the try body.
    Try = 0,
    /// The `_Unwind_Exception *` the unwinder passes to the landing pad.
    Exception = 1,
    /// The action-table type filter that selected the landing pad.
    Selector = 2,
}

impl EhHelper {
    /// The helper whose discriminant is `value`.
    pub fn from_discriminant(value: u64) -> Option<Self> {
        match value {
            0 => Some(Self::Try),
            1 => Some(Self::Exception),
            2 => Some(Self::Selector),
            _ => None,
        }
    }

    /// The instruction at `addr` that writes this helper's value to `out`.
    pub fn insn(self, out: Varnode, addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::Callother,
            out,
            smallvec::smallvec![
                Varnode::constant(EH_TAG, 8),
                Varnode::constant(self as u64, 1)
            ],
            addr,
        )
    }

    /// The helper `insn` computes, or `None` when `insn` is not an
    /// exception helper.
    pub fn of(insn: &IrInsn) -> Option<Self> {
        if insn.op != IrOp::Callother || insn.inputs.len() <= HELPER_INPUT {
            return None;
        }
        let tag = &insn.inputs[0];
        let helper = &insn.inputs[HELPER_INPUT];
        if tag.space != SpaceId::Const || tag.offset != EH_TAG || helper.space != SpaceId::Const {
            return None;
        }
        Self::from_discriminant(helper.offset)
    }

    /// The name the C printer gives this helper's value.
    pub fn c_name(self) -> &'static str {
        match self {
            Self::Try => "__eh_try",
            Self::Exception => "__eh_exception",
            Self::Selector => "__eh_selector",
        }
    }
}

/// The registers a landing pad receives the exception pointer and the type
/// selector in, for the Itanium C++ ABI on `arch`.
pub fn landing_pad_data_regs(arch: ArchId) -> Option<(Varnode, Varnode)> {
    match arch {
        // rax, rdx
        ArchId::X86_64 => Some((Varnode::reg(0, 8), Varnode::reg(16, 8))),
        // eax, edx
        ArchId::X86 => Some((Varnode::reg(0, 4), Varnode::reg(16, 4))),
        // x0, x1
        ArchId::AArch64 => Some((Varnode::reg(0, 8), Varnode::reg(8, 8))),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn helper_round_trips_through_insn() {
        for helper in [EhHelper::Try, EhHelper::Exception, EhHelper::Selector] {
            let insn = helper.insn(Varnode::unique(1, 1), 0x1000);
            assert_eq!(EhHelper::of(&insn), Some(helper));
        }
    }

    #[test]
    fn other_callother_is_not_a_helper() {
        let insn = IrInsn::with_output(
            IrOp::Callother,
            Varnode::unique(1, 8),
            smallvec::smallvec![Varnode::constant(0x100, 8), Varnode::constant(0, 1)],
            0x1000,
        );
        assert_eq!(EhHelper::of(&insn), None);
    }
}
