// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA60
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA60 jmp     cs:off_2C7BD18
//
// Resolved target: tolower
// Target address:  0x2D11E70
// GOT/IAT slot:    0x2C7BD18
// Slot symbol:     off_2C7BD18
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

