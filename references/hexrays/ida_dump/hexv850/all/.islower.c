// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B650
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B650 jmp     cs:off_4C0B10
//
// Resolved target: islower
// Target address:  0x4C3B10
// GOT/IAT slot:    0x4C0B10
// Slot symbol:     off_4C0B10
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

