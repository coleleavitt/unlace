// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D20
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D20 jmp     cs:off_75678
//
// Resolved target: segtype
// Target address:  0x75EE0
// GOT/IAT slot:    0x75678
// Slot symbol:     off_75678
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

