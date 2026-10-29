// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9030
// Name:            .vsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9030 jmp     cs:off_2C7A000
//
// Resolved target: vsnprintf
// Target address:  0x2D116E0
// GOT/IAT slot:    0x2C7A000
// Slot symbol:     off_2C7A000
// Target type:     int(char *s, size_t maxlen, const char *format, __gnuc_va_list arg)
// ============================================================

/* see target sig */ .vsnprintf(/* see target signature */)
{
    // Tail-call to vsnprintf via GOT/IAT indirection
    return vsnprintf(/* forwarded args */);
}

