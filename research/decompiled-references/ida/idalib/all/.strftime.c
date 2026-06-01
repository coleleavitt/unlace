// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD00
// Name:            .strftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD00 jmp     cs:off_2C7BE68
//
// Resolved target: strftime
// Target address:  0x2D11EE0
// GOT/IAT slot:    0x2C7BE68
// Slot symbol:     off_2C7BE68
// Target type:     size_t(char *s, size_t maxsize, const char *format, const struct tm *tp)
// ============================================================

/* see target sig */ .strftime(/* see target signature */)
{
    // Tail-call to strftime via GOT/IAT indirection
    return strftime(/* forwarded args */);
}

