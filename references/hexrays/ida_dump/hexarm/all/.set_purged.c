// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E3D0
// Name:            .set_purged
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E3D0 jmp     cs:off_4E99D0
//
// Resolved target: set_purged
// Target address:  0x4EC3F0
// GOT/IAT slot:    0x4E99D0
// Slot symbol:     off_4E99D0
// Target type:     <no type info>
// ============================================================

void .set_purged(/* see target signature */)
{
    // Tail-call to set_purged via GOT/IAT indirection
    return set_purged(/* forwarded args */);
}

