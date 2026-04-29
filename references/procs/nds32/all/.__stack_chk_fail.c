// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84B0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84B0 jmp     cs:off_2A240
//
// Resolved target: __stack_chk_fail
// Target address:  0x2A7B0
// GOT/IAT slot:    0x2A240
// Slot symbol:     off_2A240
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

