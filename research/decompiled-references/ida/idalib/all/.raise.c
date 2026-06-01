// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC60
// Name:            .raise
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC60 jmp     cs:off_2C7BE18
//
// Resolved target: raise
// Target address:  0x2D11EC8
// GOT/IAT slot:    0x2C7BE18
// Slot symbol:     off_2C7BE18
// Target type:     int(int sig)
// ============================================================

/* see target sig */ .raise(/* see target signature */)
{
    // Tail-call to raise via GOT/IAT indirection
    return raise(/* forwarded args */);
}

