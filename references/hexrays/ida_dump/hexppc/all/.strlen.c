// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A670
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A670 jmp     cs:off_4DA320
//
// Resolved target: strlen
// Target address:  0x4DCCF0
// GOT/IAT slot:    0x4DA320
// Slot symbol:     off_4DA320
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

