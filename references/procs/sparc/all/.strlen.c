// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7140
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7140 jmp     cs:off_19088
//
// Resolved target: strlen
// Target address:  0x195B8
// GOT/IAT slot:    0x19088
// Slot symbol:     off_19088
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

