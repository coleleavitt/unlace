// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3A0
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3A0 jmp     cs:off_4C01B8
//
// Resolved target: trim
// Target address:  0x4C3180
// GOT/IAT slot:    0x4C01B8
// Slot symbol:     off_4C01B8
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

