// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61C0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61C0 jmp     cs:off_2D0C8
//
// Resolved target: strlen
// Target address:  0x2D5C8
// GOT/IAT slot:    0x2D0C8
// Slot symbol:     off_2D0C8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

