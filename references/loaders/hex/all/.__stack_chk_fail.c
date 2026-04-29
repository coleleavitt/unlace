// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_50A8
//
// Resolved target: __stack_chk_fail
// Target address:  0x5278
// GOT/IAT slot:    0x50A8
// Slot symbol:     off_50A8
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

