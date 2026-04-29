// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB60
// Name:            .qfputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB60 jmp     cs:off_4C0D98
//
// Resolved target: qfputs
// Target address:  0x4C3DB0
// GOT/IAT slot:    0x4C0D98
// Slot symbol:     off_4C0D98
// Target type:     <no type info>
// ============================================================

void .qfputs(/* see target signature */)
{
    // Tail-call to qfputs via GOT/IAT indirection
    return qfputs(/* forwarded args */);
}

