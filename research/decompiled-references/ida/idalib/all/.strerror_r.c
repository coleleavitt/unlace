// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADBE0
// Name:            .strerror_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADBE0 jmp     cs:off_2C7C5D8
//
// Resolved target: strerror_r
// Target address:  0x2D120D0
// GOT/IAT slot:    0x2C7C5D8
// Slot symbol:     off_2C7C5D8
// Target type:     char *(int errnum, char *buf, size_t buflen)
// ============================================================

/* see target sig */ .strerror_r(/* see target signature */)
{
    // Tail-call to strerror_r via GOT/IAT indirection
    return strerror_r(/* forwarded args */);
}

