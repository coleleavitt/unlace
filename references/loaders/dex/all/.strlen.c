// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31D0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31D0 jmp     cs:off_280D0
//
// Resolved target: strlen
// Target address:  0x28580
// GOT/IAT slot:    0x280D0
// Slot symbol:     off_280D0
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

