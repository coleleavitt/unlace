// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A81A0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A81A0 jmp     cs:off_2C798B8
//
// Resolved target: strlen
// Target address:  0x2D11530
// GOT/IAT slot:    0x2C798B8
// Slot symbol:     off_2C798B8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

