// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B90
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B90 jmp     cs:off_4B95B0
//
// Resolved target: log2floor
// Target address:  0x4BBFA0
// GOT/IAT slot:    0x4B95B0
// Slot symbol:     off_4B95B0
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}

