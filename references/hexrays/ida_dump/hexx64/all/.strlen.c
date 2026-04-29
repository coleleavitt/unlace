// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B690
// Name:            .strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B690 jmp     cs:off_4ED330
//
// Resolved target: strlen
// Target address:  0x4F1628
// GOT/IAT slot:    0x4ED330
// Slot symbol:     off_4ED330
// Target type:     size_t(const char *s)
// ============================================================

/* see target sig */ .strlen(/* see target signature */)
{
    // Tail-call to strlen via GOT/IAT indirection
    return strlen(/* forwarded args */);
}

