// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .feof
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_13150
//
// Resolved target: feof
// Target address:  0x133F0
// GOT/IAT slot:    0x13150
// Slot symbol:     off_13150
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .feof(/* see target signature */)
{
    // Tail-call to feof via GOT/IAT indirection
    return feof(/* forwarded args */);
}

