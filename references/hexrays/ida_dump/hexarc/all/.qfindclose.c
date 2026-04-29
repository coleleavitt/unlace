// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A900
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A900 jmp     cs:off_4B9C68
//
// Resolved target: qfindclose
// Target address:  0x4BC680
// GOT/IAT slot:    0x4B9C68
// Slot symbol:     off_4B9C68
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}

