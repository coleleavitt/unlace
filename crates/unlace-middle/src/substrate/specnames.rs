//! (kuna) Spec user-op and prototype-model names that `Architecture` resolves for a pass while
//! it builds a function's context. Each pass module re-exports the names it owns under its own
//! name, so the architecture never names the pass.

/// `simdlane`: SLEIGH user-op names whose semantics are "permute the bytes of operand 1 by
/// the byte mask in operand 2" — the x86 `PSHUFB` family. The AVX spelling is
/// carried because the same three-input CALLOTHER shape is emitted for it.
pub const SIMDLANE_SHUFFLE_USEROPS: &[&[u8]] = &[b"pshufb", b"vpshufb"];

/// `x87truncate`: the x87 float-to-integer user ops.
pub const X87_TRUNCATE_USEROPS: [&[u8]; 3] = [
    b"x87_float_to_int16",
    b"x87_float_to_int32",
    b"x87_float_to_int64",
];

/// `roundingops`: the user-op names a spec gives the float-to-float roundings p-code lacks.
pub const ROUNDING_USEROPS: [&[u8]; 4] = [
    b"FLOAT_ROUNDEVEN",
    b"FLOAT_TRUNC",
    b"FLOAT_RINT",
    b"FLOAT_NEARBYINT",
];

/// `retsysreg`: the user ops that set processor state from their operands: interrupt
/// masks and priorities, mode and control bits, the banked stack pointers,
/// the CP15 control registers, PowerPC's `wrtee` and AArch64's `msr` to a
/// system register the language has no name for. A hint or a cache, TLB or
/// barrier op takes an address, which a returned word can be, so none of them
/// is here.
pub const RETSYSREG_STATE_USEROPS: &[&[u8]] = &[
    b"setBasePriority",
    b"enableIRQinterrupts",
    b"disableIRQinterrupts",
    b"enableFIQinterrupts",
    b"disableFIQinterrupts",
    b"enableDataAbortInterrupts",
    b"disableDataAbortInterrupts",
    b"writeCPSRControl",
    b"setThreadModePrivileged",
    b"setStackMode",
    b"setMainStackPointer",
    b"setProcessStackPointer",
    b"setMainStackPointerLimit",
    b"setProcStackPointerLimit",
    b"coproc_moveto_Control",
    b"coproc_moveto_Auxiliary_Control",
    b"coproc_moveto_Coprocessor_Access_Control",
    b"coproc_moveto_Domain_Access_Control",
    b"coproc_moveto_Translation_table_control",
    b"coproc_moveto_Context_ID",
    b"WriteExternalEnable",
    b"UnkSytemRegWrite",
];

/// `retsysreg`: the MIPS coprocessor writes, which set processor state only for
/// coprocessor 0 (`mtc0`) and the FPU's control words (`ctc1`); coprocessor 2
/// takes data.
pub const RETSYSREG_COP_USEROPS: &[&[u8]] = &[b"setCopReg", b"setCopRegH", b"setCopControlWord"];

/// `ptrauthtrap`: the SLEIGH user-op `brk` lowers to (`AARCH64base.sinc`, `:brk`).
pub const PTRAUTH_BREAKPOINT_USEROP: &[u8] = b"SoftwareBreakpoint";

/// `x64syscall`: the vendored x86 user-op the 64-bit `SYSCALL` constructor emits
/// (`ia.sinc:4838`).
pub const X64_SYSCALL_USEROP: &[u8] = b"syscall";

/// `x87intrinsic`: the one-operand model's name, as bound by the analysis tier.
pub const X87_UNARY_MODEL: &str = "__kuna_x87unary";

/// `swiftcall`: the names of the four models.
pub const SWIFTCALL: &str = "__swiftcall";
pub const SWIFTCALL_THROWS: &str = "__swiftcall_throws";
/// `swiftcall`: an `async` function: the task's context arrives in the `swiftasync`
/// register (x22 / r14) and the function resumes a continuation instead of
/// returning.
pub const SWIFTASYNCCALL: &str = "__swiftasynccall";
pub const SWIFTASYNCCALL_THROWS: &str = "__swiftasynccall_throws";

/// `swiftcall`: the models to derive: `(name, takes the error register, takes the
/// async context)`.
pub const SWIFT_MODELS: [(&str, bool, bool); 4] = [
    (SWIFTCALL, false, false),
    (SWIFTCALL_THROWS, true, false),
    (SWIFTASYNCCALL, false, true),
    (SWIFTASYNCCALL_THROWS, true, true),
];

/// `cortexmpriv`: The vendored ARM user-op this fixup targets (`ARM.sinc:165`).
pub const CORTEXMPRIV_USEROP: &[u8] = b"isCurrentModePrivileged";

/// `cortexmpriv`: The fixup's single output operand, named in [`CORTEXMPRIV_SNIPPET`].
pub const CORTEXMPRIV_OUTPUT: &[u8] = b"res";

/// `cortexmpriv`: The body: report privileged. The operand carries no declared size, so the
/// injector binds it to the real CALLOTHER output varnode (the `b:1` temporary
/// every guarded constructor writes).
pub const CORTEXMPRIV_SNIPPET: &[u8] = b"res = 1:1;\n";
