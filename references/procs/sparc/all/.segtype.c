// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7780
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7780 jmp     cs:off_193A8
//
// Resolved target: segtype
// Target address:  0x198F0
// GOT/IAT slot:    0x193A8
// Slot symbol:     off_193A8
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

