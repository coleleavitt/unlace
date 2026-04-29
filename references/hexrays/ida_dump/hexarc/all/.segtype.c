// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B040
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B040 jmp     cs:off_4BA008
//
// Resolved target: segtype
// Target address:  0x4BCA38
// GOT/IAT slot:    0x4BA008
// Slot symbol:     off_4BA008
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

