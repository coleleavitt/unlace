// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3150
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3150 jmp     cs:off_20090
//
// Resolved target: strlen
// Target address:  0x219A0
// GOT/IAT slot:    0x20090
// Slot symbol:     off_20090
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

