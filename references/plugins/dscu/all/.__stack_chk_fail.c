// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42E0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42E0 jmp     cs:off_1F158
//
// Resolved target: __stack_chk_fail
// Target address:  0x1F408
// GOT/IAT slot:    0x1F158
// Slot symbol:     off_1F158
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

