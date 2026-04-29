// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D880
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D880 jmp     cs:off_4E9428
//
// Resolved target: qstrtok
// Target address:  0x4EBE18
// GOT/IAT slot:    0x4E9428
// Slot symbol:     off_4E9428
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

