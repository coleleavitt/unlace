// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A390
// Name:            .set_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A390 jmp     cs:off_4B99B0
//
// Resolved target: set_purged
// Target address:  0x4BC3B0
// GOT/IAT slot:    0x4B99B0
// Slot symbol:     off_4B99B0
// Target type:     <no type info>
// ============================================================

void .set_purged(/* see target signature */)
{
    // Tail-call to set_purged via GOT/IAT indirection
    return set_purged(/* forwarded args */);
}

