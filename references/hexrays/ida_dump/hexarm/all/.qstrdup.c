// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D530
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D530 jmp     cs:off_4E9280
//
// Resolved target: qstrdup
// Target address:  0x4EBC70
// GOT/IAT slot:    0x4E9280
// Slot symbol:     off_4E9280
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

