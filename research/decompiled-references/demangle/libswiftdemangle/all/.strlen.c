// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2D0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2D0 jmp     cs:off_48168
//
// Resolved target: strlen
// Target address:  0x484A8
// GOT/IAT slot:    0x48168
// Slot symbol:     off_48168
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

