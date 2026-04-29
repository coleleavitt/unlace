// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_A048
//
// Resolved target: strlen
// Target address:  0xA2F8
// GOT/IAT slot:    0xA048
// Slot symbol:     off_A048
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

