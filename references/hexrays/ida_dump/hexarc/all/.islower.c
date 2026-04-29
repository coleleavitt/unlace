// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A620
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A620 jmp     cs:off_4B9AF8
//
// Resolved target: islower
// Target address:  0x4BC500
// GOT/IAT slot:    0x4B9AF8
// Slot symbol:     off_4B9AF8
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

