// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB50
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB50 jmp     cs:off_2C7B590
//
// Resolved target: strchr
// Target address:  0x2D11C60
// GOT/IAT slot:    0x2C7B590
// Slot symbol:     off_2C7B590
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

