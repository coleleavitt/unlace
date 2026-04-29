// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23E0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23E0 jmp     cs:off_B1D8
//
// Resolved target: __stack_chk_fail
// Target address:  0xB670
// GOT/IAT slot:    0xB1D8
// Slot symbol:     off_B1D8
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

