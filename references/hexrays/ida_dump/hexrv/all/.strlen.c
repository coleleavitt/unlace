// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A670
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A670 jmp     cs:off_4BF320
//
// Resolved target: strlen
// Target address:  0x4C27E8
// GOT/IAT slot:    0x4BF320
// Slot symbol:     off_4BF320
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

