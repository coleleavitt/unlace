// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1E0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1E0 jmp     cs:off_350D8
//
// Resolved target: strlen
// Target address:  0x35728
// GOT/IAT slot:    0x350D8
// Slot symbol:     off_350D8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

