// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9990
// Name:            .iconv_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9990 jmp     cs:off_2C7A4B0
//
// Resolved target: iconv_close
// Target address:  0x2D11818
// GOT/IAT slot:    0x2C7A4B0
// Slot symbol:     off_2C7A4B0
// Target type:     int(iconv_t cd)
// ============================================================

/* see target sig */ .iconv_close(/* see target signature */)
{
    // Tail-call to iconv_close via GOT/IAT indirection
    return iconv_close(/* forwarded args */);
}

