// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x81C0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x81C0 jmp     cs:off_2A0C8
//
// Resolved target: strlen
// Target address:  0x2BAD8
// GOT/IAT slot:    0x2A0C8
// Slot symbol:     off_2A0C8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

