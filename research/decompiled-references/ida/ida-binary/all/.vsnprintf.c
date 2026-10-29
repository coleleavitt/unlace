// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114080
// Name:            .vsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114080 jmp     cs:vsnprintf_ptr
//
// Resolved target: vsnprintf
// Target address:  0x8D4FC0
// GOT/IAT slot:    0x8A0CE0
// Slot symbol:     vsnprintf_ptr
// Target type:     int(char *s, size_t maxlen, const char *format, __gnuc_va_list arg)
// ============================================================

/* see target sig */ .vsnprintf(/* see target signature */)
{
    // Tail-call to vsnprintf via GOT/IAT indirection
    return vsnprintf(/* forwarded args */);
}

