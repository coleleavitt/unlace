// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D80
// Name:            .sigaltstack
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D80 jmp     cs:off_2C79EA8
//
// Resolved target: sigaltstack
// Target address:  0x2D116C8
// GOT/IAT slot:    0x2C79EA8
// Slot symbol:     off_2C79EA8
// Target type:     int(const struct sigaltstack *ss, struct sigaltstack *oss)
// ============================================================

/* see target sig */ .sigaltstack(/* see target signature */)
{
    // Tail-call to sigaltstack via GOT/IAT indirection
    return sigaltstack(/* forwarded args */);
}

