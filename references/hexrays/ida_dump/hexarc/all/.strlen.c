// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29670
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29670 jmp     cs:off_4B9320
//
// Resolved target: strlen
// Target address:  0x4BBCF0
// GOT/IAT slot:    0x4B9320
// Slot symbol:     off_4B9320
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

