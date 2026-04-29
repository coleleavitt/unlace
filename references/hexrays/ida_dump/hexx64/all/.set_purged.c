// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C460
// Name:            .set_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C460 jmp     cs:off_4EDA18
//
// Resolved target: set_purged
// Target address:  0x4F1D38
// GOT/IAT slot:    0x4EDA18
// Slot symbol:     off_4EDA18
// Target type:     <no type info>
// ============================================================

void .set_purged(/* see target signature */)
{
    // Tail-call to set_purged via GOT/IAT indirection
    return set_purged(/* forwarded args */);
}

