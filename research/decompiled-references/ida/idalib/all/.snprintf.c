// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB60
// Name:            .snprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB60 jmp     cs:off_2C7B598
//
// Resolved target: snprintf
// Target address:  0x2D11C68
// GOT/IAT slot:    0x2C7B598
// Slot symbol:     off_2C7B598
// Target type:     int(char *s, size_t maxlen, const char *format, ...)
// ============================================================

/* see target sig */ .snprintf(/* see target signature */)
{
    // Tail-call to snprintf via GOT/IAT indirection
    return snprintf(/* forwarded args */);
}

