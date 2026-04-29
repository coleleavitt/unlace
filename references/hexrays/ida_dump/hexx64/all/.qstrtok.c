// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8A0
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8A0 jmp     cs:off_4ED438
//
// Resolved target: qstrtok
// Target address:  0x4F1730
// GOT/IAT slot:    0x4ED438
// Slot symbol:     off_4ED438
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

