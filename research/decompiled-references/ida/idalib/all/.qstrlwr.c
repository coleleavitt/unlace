// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA2B0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA2B0 jmp     cs:off_2C7A940
//
// Resolved target: qstrlwr
// Target address:  0x8419A0
// GOT/IAT slot:    0x2C7A940
// Slot symbol:     off_2C7A940
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

