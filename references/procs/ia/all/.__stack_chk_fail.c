// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7260
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7260 jmp     cs:off_26118
//
// Resolved target: __stack_chk_fail
// Target address:  0x263D0
// GOT/IAT slot:    0x26118
// Slot symbol:     off_26118
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

