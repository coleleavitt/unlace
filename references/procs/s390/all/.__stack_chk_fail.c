// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10210
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10210 jmp     cs:off_2E0F0
//
// Resolved target: __stack_chk_fail
// Target address:  0x36D68
// GOT/IAT slot:    0x2E0F0
// Slot symbol:     off_2E0F0
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

