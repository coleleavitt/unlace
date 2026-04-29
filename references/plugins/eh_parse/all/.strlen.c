// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61F0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61F0 jmp     cs:off_2F0E0
//
// Resolved target: strlen
// Target address:  0x2F750
// GOT/IAT slot:    0x2F0E0
// Slot symbol:     off_2F0E0
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

