// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A870
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A870 jmp     cs:off_4C0420
//
// Resolved target: qstrtok
// Target address:  0x4C33E8
// GOT/IAT slot:    0x4C0420
// Slot symbol:     off_4C0420
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

