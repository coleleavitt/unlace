// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD470
// Name:            .tmpfile64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD470 jmp     cs:off_2C7C220
//
// Resolved target: tmpfile64
// Target address:  0x2D11FC8
// GOT/IAT slot:    0x2C7C220
// Slot symbol:     off_2C7C220
// Target type:     FILE *(void)
// ============================================================

/* see target sig */ .tmpfile64(/* see target signature */)
{
    // Tail-call to tmpfile64 via GOT/IAT indirection
    return tmpfile64(/* forwarded args */);
}

