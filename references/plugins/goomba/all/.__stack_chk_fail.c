// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4680
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4680 jmp     cs:off_4E328
//
// Resolved target: __stack_chk_fail
// Target address:  0x4F938
// GOT/IAT slot:    0x4E328
// Slot symbol:     off_4E328
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

