// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB980
// Name:            .iconv_open
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB980 jmp     cs:off_2C7B4A8
//
// Resolved target: iconv_open
// Target address:  0x2D11C20
// GOT/IAT slot:    0x2C7B4A8
// Slot symbol:     off_2C7B4A8
// Target type:     iconv_t(const char *tocode, const char *fromcode)
// ============================================================

/* see target sig */ .iconv_open(/* see target signature */)
{
    // Tail-call to iconv_open via GOT/IAT indirection
    return iconv_open(/* forwarded args */);
}

