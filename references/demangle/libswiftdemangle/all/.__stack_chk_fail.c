// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4B0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4B0 jmp     cs:off_48258
//
// Resolved target: __stack_chk_fail
// Target address:  0x48530
// GOT/IAT slot:    0x48258
// Slot symbol:     off_48258
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

