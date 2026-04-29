// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4150
// Name:            .idb_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4150 jmp     cs:off_23090
//
// Resolved target: idb_utf8
// Target address:  0x234B0
// GOT/IAT slot:    0x23090
// Slot symbol:     off_23090
// Target type:     <no type info>
// ============================================================

void .idb_utf8(/* see target signature */)
{
    // Tail-call to idb_utf8 via GOT/IAT indirection
    return idb_utf8(/* forwarded args */);
}

