// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_7080
//
// Resolved target: __stack_chk_fail
// Target address:  0x71B0
// GOT/IAT slot:    0x7080
// Slot symbol:     off_7080
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

