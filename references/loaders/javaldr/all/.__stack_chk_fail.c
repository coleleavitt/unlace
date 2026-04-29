// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1070
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1070 jmp     cs:off_4020
//
// Resolved target: __stack_chk_fail
// Target address:  0x40B8
// GOT/IAT slot:    0x4020
// Slot symbol:     off_4020
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

