// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D680
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D680 jmp     cs:off_4E9328
//
// Resolved target: strlen
// Target address:  0x4EBD18
// GOT/IAT slot:    0x4E9328
// Slot symbol:     off_4E9328
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

