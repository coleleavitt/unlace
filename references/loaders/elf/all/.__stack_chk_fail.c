// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9650
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9650 jmp     cs:off_89310
//
// Resolved target: __stack_chk_fail
// Target address:  0x8C618
// GOT/IAT slot:    0x89310
// Slot symbol:     off_89310
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

