// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE0 jmp     cs:off_4C0558
//
// Resolved target: qstrlwr
// Target address:  0x4C3538
// GOT/IAT slot:    0x4C0558
// Slot symbol:     off_4C0558
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

