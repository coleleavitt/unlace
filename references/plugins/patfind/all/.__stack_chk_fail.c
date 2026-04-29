// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_130D8
//
// Resolved target: __stack_chk_fail
// Target address:  0x13370
// GOT/IAT slot:    0x130D8
// Slot symbol:     off_130D8
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

