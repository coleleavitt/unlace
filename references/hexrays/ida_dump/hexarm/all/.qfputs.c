// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB90
// Name:            .qfputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB90 jmp     cs:off_4E9DB0
//
// Resolved target: qfputs
// Target address:  0x4EC7F0
// GOT/IAT slot:    0x4E9DB0
// Slot symbol:     off_4E9DB0
// Target type:     <no type info>
// ============================================================

void .qfputs(/* see target signature */)
{
    // Tail-call to qfputs via GOT/IAT indirection
    return qfputs(/* forwarded args */);
}

