// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5460
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5460 jmp     cs:off_15218
//
// Resolved target: __stack_chk_fail
// Target address:  0x162A8
// GOT/IAT slot:    0x15218
// Slot symbol:     off_15218
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

