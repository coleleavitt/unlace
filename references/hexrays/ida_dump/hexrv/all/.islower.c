// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B640
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B640 jmp     cs:off_4BFB08
//
// Resolved target: islower
// Target address:  0x4C3008
// GOT/IAT slot:    0x4BFB08
// Slot symbol:     off_4BFB08
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

