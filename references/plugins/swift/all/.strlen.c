// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4200
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4200 jmp     cs:off_280E8
//
// Resolved target: strlen
// Target address:  0x29A80
// GOT/IAT slot:    0x280E8
// Slot symbol:     off_280E8
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

