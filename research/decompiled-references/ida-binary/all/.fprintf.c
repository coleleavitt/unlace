// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1173D0
// Name:            .fprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1173D0 jmp     cs:fprintf_ptr
//
// Resolved target: fprintf
// Target address:  0x8D7060
// GOT/IAT slot:    0x8A2688
// Slot symbol:     fprintf_ptr
// Target type:     int(FILE *stream, const char *format, ...)
// ============================================================

/* see target sig */ .fprintf(/* see target signature */)
{
    // Tail-call to fprintf via GOT/IAT indirection
    return fprintf(/* forwarded args */);
}

