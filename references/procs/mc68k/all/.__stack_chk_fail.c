// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6480
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6480 jmp     cs:off_1D228
//
// Resolved target: __stack_chk_fail
// Target address:  0x1D718
// GOT/IAT slot:    0x1D228
// Slot symbol:     off_1D228
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

