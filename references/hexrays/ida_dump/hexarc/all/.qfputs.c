// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB30
// Name:            .qfputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB30 jmp     cs:off_4B9D80
//
// Resolved target: qfputs
// Target address:  0x4BC7A0
// GOT/IAT slot:    0x4B9D80
// Slot symbol:     off_4B9D80
// Target type:     <no type info>
// ============================================================

void .qfputs(/* see target signature */)
{
    // Tail-call to qfputs via GOT/IAT indirection
    return qfputs(/* forwarded args */);
}

