// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95F0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95F0 jmp     cs:off_2E2E0
//
// Resolved target: __stack_chk_fail
// Target address:  0x2E950
// GOT/IAT slot:    0x2E2E0
// Slot symbol:     off_2E2E0
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

