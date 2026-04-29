// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9290
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9290 jmp     cs:off_26130
//
// Resolved target: __stack_chk_fail
// Target address:  0x26440
// GOT/IAT slot:    0x26130
// Slot symbol:     off_26130
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

