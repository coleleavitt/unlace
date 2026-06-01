// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3C0
// Name:            .fputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3C0 jmp     cs:off_481E0
//
// Resolved target: fputs
// Target address:  0x484E8
// GOT/IAT slot:    0x481E0
// Slot symbol:     off_481E0
// Target type:     int(const char *s, FILE *stream)
// ============================================================

/* see target sig */ .fputs(/* see target signature */)
{
    // Tail-call to fputs via GOT/IAT indirection
    return fputs(/* forwarded args */);
}

