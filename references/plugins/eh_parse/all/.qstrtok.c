// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6260
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6260 jmp     cs:off_2F118
//
// Resolved target: qstrtok
// Target address:  0x2F788
// GOT/IAT slot:    0x2F118
// Slot symbol:     off_2F118
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

