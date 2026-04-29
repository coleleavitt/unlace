// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x163E0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x163E0 jmp     cs:off_4F1D8
//
// Resolved target: strlen
// Target address:  0x500F8
// GOT/IAT slot:    0x4F1D8
// Slot symbol:     off_4F1D8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

