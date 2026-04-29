// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .idb_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_8048
//
// Resolved target: idb_utf8
// Target address:  0x8208
// GOT/IAT slot:    0x8048
// Slot symbol:     off_8048
// Target type:     <no type info>
// ============================================================

void .idb_utf8(/* see target signature */)
{
    // Tail-call to idb_utf8 via GOT/IAT indirection
    return idb_utf8(/* forwarded args */);
}

