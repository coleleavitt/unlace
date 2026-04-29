// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8D0
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8D0 jmp     cs:off_CA450
//
// Resolved target: islower
// Target address:  0xD0D90
// GOT/IAT slot:    0xCA450
// Slot symbol:     off_CA450
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

