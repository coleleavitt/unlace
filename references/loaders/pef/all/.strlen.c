// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_8048
//
// Resolved target: strlen
// Target address:  0x8238
// GOT/IAT slot:    0x8048
// Slot symbol:     off_8048
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

