// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA660
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA660 jmp     cs:off_35318
//
// Resolved target: __stack_chk_fail
// Target address:  0x35968
// GOT/IAT slot:    0x35318
// Slot symbol:     off_35318
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

