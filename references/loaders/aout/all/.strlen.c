// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_6038
//
// Resolved target: strlen
// Target address:  0x61C0
// GOT/IAT slot:    0x6038
// Slot symbol:     off_6038
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

