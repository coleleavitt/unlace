// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E390
// Name:            .__stack_chk_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E390 jmp     cs:off_4E99B0
//
// Resolved target: __stack_chk_fail
// Target address:  0x4EC3D0
// GOT/IAT slot:    0x4E99B0
// Slot symbol:     off_4E99B0
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

