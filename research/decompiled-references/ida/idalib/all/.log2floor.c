// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD3B0
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD3B0 jmp     cs:off_2C7C1C0
//
// Resolved target: log2floor
// Target address:  0x8268D0
// GOT/IAT slot:    0x2C7C1C0
// Slot symbol:     off_2C7C1C0
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}

