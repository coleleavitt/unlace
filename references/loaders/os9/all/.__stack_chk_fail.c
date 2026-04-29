// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130 jmp     cs:off_4080
//
// Resolved target: __stack_chk_fail
// Target address:  0x4198
// GOT/IAT slot:    0x4080
// Slot symbol:     off_4080
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

