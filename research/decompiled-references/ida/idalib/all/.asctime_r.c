// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB6B0
// Name:            .asctime_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB6B0 jmp     cs:off_2C7B340
//
// Resolved target: asctime_r
// Target address:  0x2D11BB0
// GOT/IAT slot:    0x2C7B340
// Slot symbol:     off_2C7B340
// Target type:     char *(const struct tm *tp, char *buf)
// ============================================================

/* see target sig */ .asctime_r(/* see target signature */)
{
    // Tail-call to asctime_r via GOT/IAT indirection
    return asctime_r(/* forwarded args */);
}

