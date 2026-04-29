// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE0 jmp     cs:off_4BF558
//
// Resolved target: qstrlwr
// Target address:  0x4C2A38
// GOT/IAT slot:    0x4BF558
// Slot symbol:     off_4BF558
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

