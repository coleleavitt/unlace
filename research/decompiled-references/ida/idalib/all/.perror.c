// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB330
// Name:            .perror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB330 jmp     cs:off_2C7B180
//
// Resolved target: perror
// Target address:  0x2D11B40
// GOT/IAT slot:    0x2C7B180
// Slot symbol:     off_2C7B180
// Target type:     void(const char *s)
// ============================================================

/* see target sig */ .perror(/* see target signature */)
{
    // Tail-call to perror via GOT/IAT indirection
    return perror(/* forwarded args */);
}

