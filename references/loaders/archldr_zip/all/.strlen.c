// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_8058
//
// Resolved target: strlen
// Target address:  0x8218
// GOT/IAT slot:    0x8058
// Slot symbol:     off_8058
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

