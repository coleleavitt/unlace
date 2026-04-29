// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB90
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB90 jmp     cs:off_4C05B0
//
// Resolved target: log2floor
// Target address:  0x4C3598
// GOT/IAT slot:    0x4C05B0
// Slot symbol:     off_4C05B0
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}

