// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABAB0
// Name:            .idb_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABAB0 jmp     cs:off_2C7B540
//
// Resolved target: idb_utf8
// Target address:  0x5ADA00
// GOT/IAT slot:    0x2C7B540
// Slot symbol:     off_2C7B540
// Target type:     <no type info>
// ============================================================

void .idb_utf8(/* see target signature */)
{
    // Tail-call to idb_utf8 via GOT/IAT indirection
    return idb_utf8(/* forwarded args */);
}

