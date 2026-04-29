// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_8140
//
// Resolved target: __stack_chk_fail
// Target address:  0x83A0
// GOT/IAT slot:    0x8140
// Slot symbol:     off_8140
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

