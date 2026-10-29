// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A93B0
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A93B0 jmp     cs:off_2C7A1C0
//
// Resolved target: qfindclose
// Target address:  0x83D6A0
// GOT/IAT slot:    0x2C7A1C0
// Slot symbol:     off_2C7A1C0
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}

