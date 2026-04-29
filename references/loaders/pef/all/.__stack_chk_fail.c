// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_80F8
//
// Resolved target: __stack_chk_fail
// Target address:  0x82E8
// GOT/IAT slot:    0x80F8
// Slot symbol:     off_80F8
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

