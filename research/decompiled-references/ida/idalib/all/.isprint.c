// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8AD0
// Name:            .isprint
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8AD0 jmp     cs:off_2C79D50
//
// Resolved target: isprint
// Target address:  0x2D11678
// GOT/IAT slot:    0x2C79D50
// Slot symbol:     off_2C79D50
// Target type:     int(int)
// ============================================================

/* see target sig */ .isprint(/* see target signature */)
{
    // Tail-call to isprint via GOT/IAT indirection
    return isprint(/* forwarded args */);
}

