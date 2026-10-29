// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A88E0
// Name:            .strpbrk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A88E0 jmp     cs:off_2C79C58
//
// Resolved target: strpbrk
// Target address:  0x2D11620
// GOT/IAT slot:    0x2C79C58
// Slot symbol:     off_2C79C58
// Target type:     char *(const char *s, const char *accept)
// ============================================================

/* see target sig */ .strpbrk(/* see target signature */)
{
    // Tail-call to strpbrk via GOT/IAT indirection
    return strpbrk(/* forwarded args */);
}

