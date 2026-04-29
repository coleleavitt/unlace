// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_50B0
//
// Resolved target: __stack_chk_fail
// Target address:  0x52F8
// GOT/IAT slot:    0x50B0
// Slot symbol:     off_50B0
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

