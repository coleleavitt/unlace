// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34C0
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34C0 jmp     cs:off_28248
//
// Resolved target: __stack_chk_fail
// Target address:  0x286F8
// GOT/IAT slot:    0x28248
// Slot symbol:     off_28248
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

