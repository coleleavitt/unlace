// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44F0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44F0 jmp     cs:off_28260
//
// Resolved target: __stack_chk_fail
// Target address:  0x29BF8
// GOT/IAT slot:    0x28260
// Slot symbol:     off_28260
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

