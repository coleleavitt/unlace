// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_50A0
//
// Resolved target: __stack_chk_fail
// Target address:  0x5220
// GOT/IAT slot:    0x50A0
// Slot symbol:     off_50A0
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

