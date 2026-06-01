// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD110
// Name:            .qtimegm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD110 jmp     cs:off_2C7C070
//
// Resolved target: qtimegm
// Target address:  0x841390
// GOT/IAT slot:    0x2C7C070
// Slot symbol:     off_2C7C070
// Target type:     time_t(struct tm *tp)
// ============================================================

/* see target sig */ .qtimegm(/* see target signature */)
{
    // Tail-call to qtimegm via GOT/IAT indirection
    return qtimegm(/* forwarded args */);
}

