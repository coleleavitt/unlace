// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7200
// Name:            .strdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7200 jmp     cs:off_2C790E8
//
// Resolved target: strdup
// Target address:  0x2D11370
// GOT/IAT slot:    0x2C790E8
// Slot symbol:     off_2C790E8
// Target type:     char *(const char *s)
// ============================================================

/* see target sig */ .strdup(/* see target signature */)
{
    // Tail-call to strdup via GOT/IAT indirection
    return strdup(/* forwarded args */);
}

