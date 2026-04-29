// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_80D8
//
// Resolved target: __stack_chk_fail
// Target address:  0x82A8
// GOT/IAT slot:    0x80D8
// Slot symbol:     off_80D8
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

