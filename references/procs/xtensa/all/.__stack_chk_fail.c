// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7290
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7290 jmp     cs:off_1D130
//
// Resolved target: __stack_chk_fail
// Target address:  0x1D460
// GOT/IAT slot:    0x1D130
// Slot symbol:     off_1D130
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

