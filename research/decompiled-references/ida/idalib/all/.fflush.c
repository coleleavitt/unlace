// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8570
// Name:            .fflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8570 jmp     cs:off_2C79AA0
//
// Resolved target: fflush
// Target address:  0x2D115A8
// GOT/IAT slot:    0x2C79AA0
// Slot symbol:     off_2C79AA0
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fflush(/* see target signature */)
{
    // Tail-call to fflush via GOT/IAT indirection
    return fflush(/* forwarded args */);
}

