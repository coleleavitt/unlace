// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1188E0
// Name:            .snprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1188E0 jmp     cs:snprintf_ptr
//
// Resolved target: snprintf
// Target address:  0x8D7D70
// GOT/IAT slot:    0x8A3110
// Slot symbol:     snprintf_ptr
// Target type:     int(char *s, size_t maxlen, const char *format, ...)
// ============================================================

/* see target sig */ .snprintf(/* see target signature */)
{
    // Tail-call to snprintf via GOT/IAT indirection
    return snprintf(/* forwarded args */);
}

