// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10D0
// Name:            .strlen
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x10D0 endbr64
//   0x10D4 bnd jmp cs:off_6028
//
// Resolved target: strlen
// Target address:  0x6070
// GOT/IAT slot:    0x6028
// Slot symbol:     off_6028
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

