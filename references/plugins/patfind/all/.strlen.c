// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_13068
//
// Resolved target: strlen
// Target address:  0x13300
// GOT/IAT slot:    0x13068
// Slot symbol:     off_13068
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

