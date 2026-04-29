// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC60
// Name:            .qfputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC60 jmp     cs:off_4EDE18
//
// Resolved target: qfputs
// Target address:  0x4F2158
// GOT/IAT slot:    0x4EDE18
// Slot symbol:     off_4EDE18
// Target type:     <no type info>
// ============================================================

void .qfputs(/* see target signature */)
{
    // Tail-call to qfputs via GOT/IAT indirection
    return qfputs(/* forwarded args */);
}

