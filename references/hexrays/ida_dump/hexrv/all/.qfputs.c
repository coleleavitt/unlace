// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB50
// Name:            .qfputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB50 jmp     cs:off_4BFD90
//
// Resolved target: qfputs
// Target address:  0x4C32A8
// GOT/IAT slot:    0x4BFD90
// Slot symbol:     off_4BFD90
// Target type:     <no type info>
// ============================================================

void .qfputs(/* see target signature */)
{
    // Tail-call to qfputs via GOT/IAT indirection
    return qfputs(/* forwarded args */);
}

