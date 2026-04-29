// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9240
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9240 jmp     cs:off_89108
//
// Resolved target: strlen
// Target address:  0x8C408
// GOT/IAT slot:    0x89108
// Slot symbol:     off_89108
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

