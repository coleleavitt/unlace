// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC0D0
// Name:            .strnlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC0D0 jmp     cs:off_2C7B850
//
// Resolved target: strnlen
// Target address:  0x2D11D10
// GOT/IAT slot:    0x2C7B850
// Slot symbol:     off_2C7B850
// Target type:     size_t(const char *string, size_t maxlen)
// ============================================================

/* see target sig */ .strnlen(/* see target signature */)
{
    // Tail-call to strnlen via GOT/IAT indirection
    return strnlen(/* forwarded args */);
}

