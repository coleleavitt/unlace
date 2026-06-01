// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB0B0
// Name:            .iconv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB0B0 jmp     cs:off_2C7B040
//
// Resolved target: iconv
// Target address:  0x2D11AE8
// GOT/IAT slot:    0x2C7B040
// Slot symbol:     off_2C7B040
// Target type:     size_t(iconv_t cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft)
// ============================================================

/* see target sig */ .iconv(/* see target signature */)
{
    // Tail-call to iconv via GOT/IAT indirection
    return iconv(/* forwarded args */);
}

