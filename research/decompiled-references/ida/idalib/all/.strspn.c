// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC80
// Name:            .strspn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC80 jmp     cs:off_2C7B628
//
// Resolved target: strspn
// Target address:  0x2D11CA0
// GOT/IAT slot:    0x2C7B628
// Slot symbol:     off_2C7B628
// Target type:     size_t(const char *s, const char *accept)
// ============================================================

/* see target sig */ .strspn(/* see target signature */)
{
    // Tail-call to strspn via GOT/IAT indirection
    return strspn(/* forwarded args */);
}

