// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA840
// Name:            .gai_strerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA840 jmp     cs:off_2C7AC08
//
// Resolved target: gai_strerror
// Target address:  0x2D119B0
// GOT/IAT slot:    0x2C7AC08
// Slot symbol:     off_2C7AC08
// Target type:     const char *(int ecode)
// ============================================================

/* see target sig */ .gai_strerror(/* see target signature */)
{
    // Tail-call to gai_strerror via GOT/IAT indirection
    return gai_strerror(/* forwarded args */);
}

