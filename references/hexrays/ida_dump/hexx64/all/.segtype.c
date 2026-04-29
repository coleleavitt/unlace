// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1B0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1B0 jmp     cs:off_4EE0C0
//
// Resolved target: segtype
// Target address:  0x4F2410
// GOT/IAT slot:    0x4EE0C0
// Slot symbol:     off_4EE0C0
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

