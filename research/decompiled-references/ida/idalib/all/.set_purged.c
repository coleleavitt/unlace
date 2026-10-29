// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A92D0
// Name:            .set_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A92D0 jmp     cs:off_2C7A150
//
// Resolved target: set_purged
// Target address:  0x5B7EB0
// GOT/IAT slot:    0x2C7A150
// Slot symbol:     off_2C7A150
// Target type:     <no type info>
// ============================================================

void .set_purged(/* see target signature */)
{
    // Tail-call to set_purged via GOT/IAT indirection
    return set_purged(/* forwarded args */);
}

