// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB00
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB00 jmp     cs:off_4E9568
//
// Resolved target: qstrlwr
// Target address:  0x4EBF70
// GOT/IAT slot:    0x4E9568
// Slot symbol:     off_4E9568
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

