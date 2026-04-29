// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3400
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3400 jmp     cs:off_141E8
//
// Resolved target: __stack_chk_fail
// Target address:  0x147D8
// GOT/IAT slot:    0x141E8
// Slot symbol:     off_141E8
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

