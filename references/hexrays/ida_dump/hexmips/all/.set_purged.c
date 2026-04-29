// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B390
// Name:            .set_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B390 jmp     cs:off_4CD9B0
//
// Resolved target: set_purged
// Target address:  0x4D03D0
// GOT/IAT slot:    0x4CD9B0
// Slot symbol:     off_4CD9B0
// Target type:     <no type info>
// ============================================================

void .set_purged(/* see target signature */)
{
    // Tail-call to set_purged via GOT/IAT indirection
    return set_purged(/* forwarded args */);
}

