// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6490
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6490 jmp     cs:off_8D230
//
// Resolved target: __stack_chk_fail
// Target address:  0x8D7C8
// GOT/IAT slot:    0x8D230
// Slot symbol:     off_8D230
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

