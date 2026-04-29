// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C410
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C410 jmp     cs:off_4ED9F0
//
// Resolved target: __stack_chk_fail
// Target address:  0x4F1D10
// GOT/IAT slot:    0x4ED9F0
// Slot symbol:     off_4ED9F0
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

