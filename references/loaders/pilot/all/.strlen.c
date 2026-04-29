// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_8030
//
// Resolved target: strlen
// Target address:  0x8210
// GOT/IAT slot:    0x8030
// Slot symbol:     off_8030
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

