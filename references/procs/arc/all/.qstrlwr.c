// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82D0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82D0 jmp     cs:off_2A150
//
// Resolved target: qstrlwr
// Target address:  0x2BB60
// GOT/IAT slot:    0x2A150
// Slot symbol:     off_2A150
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

