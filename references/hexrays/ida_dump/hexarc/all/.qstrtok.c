// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29870
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29870 jmp     cs:off_4B9420
//
// Resolved target: qstrtok
// Target address:  0x4BBDF0
// GOT/IAT slot:    0x4B9420
// Slot symbol:     off_4B9420
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

