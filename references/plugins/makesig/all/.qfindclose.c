// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3490
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3490 jmp     cs:off_20230
//
// Resolved target: qfindclose
// Target address:  0x21B58
// GOT/IAT slot:    0x20230
// Slot symbol:     off_20230
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}

