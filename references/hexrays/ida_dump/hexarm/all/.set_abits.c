// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D070
// Name:            .set_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D070 jmp     cs:off_4E9020
//
// Resolved target: set_abits
// Target address:  0x4EBA10
// GOT/IAT slot:    0x4E9020
// Slot symbol:     off_4E9020
// Target type:     <no type info>
// ============================================================

void .set_abits(/* see target signature */)
{
    // Tail-call to set_abits via GOT/IAT indirection
    return set_abits(/* forwarded args */);
}

