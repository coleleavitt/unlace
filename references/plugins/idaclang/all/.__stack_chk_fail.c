// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3310
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3310 jmp     cs:off_29170
//
// Resolved target: __stack_chk_fail
// Target address:  0x29520
// GOT/IAT slot:    0x29170
// Slot symbol:     off_29170
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

