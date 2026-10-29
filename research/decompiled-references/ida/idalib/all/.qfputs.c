// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8030
// Name:            .qfputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8030 jmp     cs:off_2C79800
//
// Resolved target: qfputs
// Target address:  0x83F950
// GOT/IAT slot:    0x2C79800
// Slot symbol:     off_2C79800
// Target type:     <no type info>
// ============================================================

void .qfputs(/* see target signature */)
{
    // Tail-call to qfputs via GOT/IAT indirection
    return qfputs(/* forwarded args */);
}

