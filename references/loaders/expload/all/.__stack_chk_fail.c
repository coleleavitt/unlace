// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_5078
//
// Resolved target: __stack_chk_fail
// Target address:  0x51B8
// GOT/IAT slot:    0x5078
// Slot symbol:     off_5078
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

