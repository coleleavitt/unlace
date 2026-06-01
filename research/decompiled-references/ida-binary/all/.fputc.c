// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A3C0
// Name:            .fputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A3C0 jmp     cs:fputc_ptr
//
// Resolved target: fputc
// Target address:  0x8D8E78
// GOT/IAT slot:    0x8A3E80
// Slot symbol:     fputc_ptr
// Target type:     int(int c, FILE *stream)
// ============================================================

/* see target sig */ .fputc(/* see target signature */)
{
    // Tail-call to fputc via GOT/IAT indirection
    return fputc(/* forwarded args */);
}

