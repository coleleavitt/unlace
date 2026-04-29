// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_5030
//
// Resolved target: strlen
// Target address:  0x5188
// GOT/IAT slot:    0x5030
// Slot symbol:     off_5030
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

