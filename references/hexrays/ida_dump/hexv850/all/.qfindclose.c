// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B930
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B930 jmp     cs:off_4C0C80
//
// Resolved target: qfindclose
// Target address:  0x4C3C90
// GOT/IAT slot:    0x4C0C80
// Slot symbol:     off_4C0C80
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}

