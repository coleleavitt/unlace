// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F80
// Name:            .fputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F80 jmp     cs:off_2C797A8
//
// Resolved target: fputs
// Target address:  0x2D114E0
// GOT/IAT slot:    0x2C797A8
// Slot symbol:     off_2C797A8
// Target type:     int(const char *s, FILE *stream)
// ============================================================

/* see target sig */ .fputs(/* see target signature */)
{
    // Tail-call to fputs via GOT/IAT indirection
    return fputs(/* forwarded args */);
}

