// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_5058
//
// Resolved target: __stack_chk_fail
// Target address:  0x5398
// GOT/IAT slot:    0x5058
// Slot symbol:     off_5058
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

