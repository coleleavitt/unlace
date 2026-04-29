// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C760
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C760 jmp     cs:off_4EDB98
//
// Resolved target: qfindnext
// Target address:  0x4F1EC8
// GOT/IAT slot:    0x4EDB98
// Slot symbol:     off_4EDB98
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

