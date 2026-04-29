// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6520
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6520 jmp     cs:off_24278
//
// Resolved target: __stack_chk_fail
// Target address:  0x26048
// GOT/IAT slot:    0x24278
// Slot symbol:     off_24278
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

