// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_8020
//
// Resolved target: trim
// Target address:  0x8700
// GOT/IAT slot:    0x8020
// Slot symbol:     off_8020
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

