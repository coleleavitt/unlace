// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64E0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64E0 jmp     cs:off_2D258
//
// Resolved target: __stack_chk_fail
// Target address:  0x2D758
// GOT/IAT slot:    0x2D258
// Slot symbol:     off_2D258
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

