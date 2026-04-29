// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_70E0
//
// Resolved target: __stack_chk_fail
// Target address:  0x7298
// GOT/IAT slot:    0x70E0
// Slot symbol:     off_70E0
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

