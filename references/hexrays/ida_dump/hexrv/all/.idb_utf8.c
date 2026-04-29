// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5E0
// Name:            .idb_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5E0 jmp     cs:off_4BF2D8
//
// Resolved target: idb_utf8
// Target address:  0x4C27A0
// GOT/IAT slot:    0x4BF2D8
// Slot symbol:     off_4BF2D8
// Target type:     <no type info>
// ============================================================

void .idb_utf8(/* see target signature */)
{
    // Tail-call to idb_utf8 via GOT/IAT indirection
    return idb_utf8(/* forwarded args */);
}

