// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA7C0
// Name:            .qfindnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA7C0 jmp     cs:off_2C7ABC8
//
// Resolved target: qfindnext
// Target address:  0x83D5C0
// GOT/IAT slot:    0x2C7ABC8
// Slot symbol:     off_2C7ABC8
// Target type:     <no type info>
// ============================================================

void .qfindnext(/* see target signature */)
{
    // Tail-call to qfindnext via GOT/IAT indirection
    return qfindnext(/* forwarded args */);
}

