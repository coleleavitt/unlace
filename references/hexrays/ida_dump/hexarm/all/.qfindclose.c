// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E960
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E960 jmp     cs:off_4E9C98
//
// Resolved target: qfindclose
// Target address:  0x4EC6D0
// GOT/IAT slot:    0x4E9C98
// Slot symbol:     off_4E9C98
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}

