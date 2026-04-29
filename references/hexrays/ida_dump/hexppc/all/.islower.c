// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B640
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B640 jmp     cs:off_4DAB08
//
// Resolved target: islower
// Target address:  0x4DD510
// GOT/IAT slot:    0x4DAB08
// Slot symbol:     off_4DAB08
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

