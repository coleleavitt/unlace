// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61B0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61B0 jmp     cs:off_240C0
//
// Resolved target: strlen
// Target address:  0x25E90
// GOT/IAT slot:    0x240C0
// Slot symbol:     off_240C0
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

