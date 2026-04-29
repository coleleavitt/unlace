// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E680
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E680 jmp     cs:off_4E9B28
//
// Resolved target: islower
// Target address:  0x4EC550
// GOT/IAT slot:    0x4E9B28
// Slot symbol:     off_4E9B28
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

