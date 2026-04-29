// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4180
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4180 jmp     cs:off_230A8
//
// Resolved target: strlen
// Target address:  0x234C8
// GOT/IAT slot:    0x230A8
// Slot symbol:     off_230A8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

