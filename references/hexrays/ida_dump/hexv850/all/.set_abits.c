// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A070
// Name:            .set_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A070 jmp     cs:off_4C0020
//
// Resolved target: set_abits
// Target address:  0x4C2FE8
// GOT/IAT slot:    0x4C0020
// Slot symbol:     off_4C0020
// Target type:     <no type info>
// ============================================================

void .set_abits(/* see target signature */)
{
    // Tail-call to set_abits via GOT/IAT indirection
    return set_abits(/* forwarded args */);
}

