// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A72D0
// Name:            .feof
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A72D0 jmp     cs:off_2C79150
//
// Resolved target: feof
// Target address:  0x2D11380
// GOT/IAT slot:    0x2C79150
// Slot symbol:     off_2C79150
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .feof(/* see target signature */)
{
    // Tail-call to feof via GOT/IAT indirection
    return feof(/* forwarded args */);
}

