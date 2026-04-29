// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19840
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19840 jmp     cs:off_75408
//
// Resolved target: __stack_chk_fail
// Target address:  0x75C58
// GOT/IAT slot:    0x75408
// Slot symbol:     off_75408
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

