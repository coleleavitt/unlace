// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC60
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC60 jmp     cs:off_4BFE18
//
// Resolved target: qstrncat
// Target address:  0x4C3338
// GOT/IAT slot:    0x4BFE18
// Slot symbol:     off_4BFE18
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

