// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29500
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29500 jmp     cs:off_4B9268
//
// Resolved target: strchr
// Target address:  0x4BBC38
// GOT/IAT slot:    0x4B9268
// Slot symbol:     off_4B9268
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

