// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA340
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA340 jmp     cs:off_CA188
//
// Resolved target: qstrtok
// Target address:  0xD0AB8
// GOT/IAT slot:    0xCA188
// Slot symbol:     off_CA188
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

