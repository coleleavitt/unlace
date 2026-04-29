// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B350
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B350 jmp     cs:off_4C0990
//
// Resolved target: __stack_chk_fail
// Target address:  0x4C3988
// GOT/IAT slot:    0x4C0990
// Slot symbol:     off_4C0990
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

