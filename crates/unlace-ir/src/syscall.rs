//! System-call instructions in the IR.
//!
//! `svc`, `sc` and similar instructions enter the kernel with a calling
//! convention set by the operating system, not by the architecture's
//! function-call ABI. Lifters that know that convention lower the instruction
//! to one shape, shared by every architecture, so passes and the printer can
//! handle system calls without knowing each lifter's private CALLOTHER tags:
//!
//! ```text
//! ret = CALLOTHER(SYSCALL_TAG, convention, number, arg0, arg1, ...)
//! ```
//!
//! * `convention` is a constant [`SyscallConvention`] discriminant.
//! * `number` is the register that holds the system-call number.
//! * `arg0..` are the argument registers in order. A lifter emits every
//!   register the convention defines; [`Function`](crate::Function)-level
//!   cleanup drops the trailing ones the caller never set.
//! * The output is the register the kernel returns the result in.

use smallvec::SmallVec;

use crate::{IrInsn, IrOp, SpaceId, Varnode};

/// CALLOTHER tag of the system-call shape. The value spells `SYSCALL` in
/// ASCII so it stays clear of the small per-lifter tag ranges.
pub const SYSCALL_TAG: u64 = 0x5359_5343_414c_4c00;

/// Index of the [`SyscallConvention`] constant in a system call's inputs.
pub const CONVENTION_INPUT: usize = 1;
/// Index of the system-call number register in a system call's inputs.
pub const NUMBER_INPUT: usize = 2;
/// Index of the first argument register in a system call's inputs.
pub const FIRST_ARG_INPUT: usize = 3;

/// The operating-system convention a system-call instruction follows.
///
/// The names follow the helpers Hex-Rays prints for them.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
#[repr(u8)]
pub enum SyscallConvention {
    /// Linux with the number in a register (PowerPC `sc`).
    Linux = 0,
    /// Linux EABI-style `svc #0` with the number in a register (r7 or x8).
    LinuxEabi = 1,
    /// Darwin/XNU `svc #0x80` with the number in r12 or x16.
    Darwin = 2,
}

impl SyscallConvention {
    /// The convention whose discriminant is `value`.
    pub fn from_discriminant(value: u64) -> Option<Self> {
        match value {
            0 => Some(Self::Linux),
            1 => Some(Self::LinuxEabi),
            2 => Some(Self::Darwin),
            _ => None,
        }
    }

    /// The system-call instruction at `addr` that reads the call number from
    /// `number`, passes `args`, and returns its result in `ret`.
    pub fn insn(
        self,
        number: Varnode,
        args: impl IntoIterator<Item = Varnode>,
        ret: Varnode,
        addr: u64,
    ) -> IrInsn {
        let mut inputs: SmallVec<[Varnode; 3]> = SmallVec::new();
        inputs.push(Varnode::constant(SYSCALL_TAG, 8));
        inputs.push(Varnode::constant(self as u64, 1));
        inputs.push(number);
        inputs.extend(args);
        IrInsn::with_output(IrOp::Callother, ret, inputs, addr)
    }

    /// The convention a system call `insn` follows, or `None` when `insn`
    /// is not in the system-call shape.
    pub fn of(insn: &IrInsn) -> Option<Self> {
        if insn.op != IrOp::Callother || insn.inputs.len() <= NUMBER_INPUT {
            return None;
        }
        let tag = &insn.inputs[0];
        let convention = &insn.inputs[CONVENTION_INPUT];
        if tag.space != SpaceId::Const || tag.offset != SYSCALL_TAG {
            return None;
        }
        if convention.space != SpaceId::Const {
            return None;
        }
        Self::from_discriminant(convention.offset)
    }
}
