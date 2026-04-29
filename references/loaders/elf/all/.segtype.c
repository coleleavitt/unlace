// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A30
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A30 jmp     cs:off_89500
//
// Resolved target: segtype
// Target address:  0x8C830
// GOT/IAT slot:    0x89500
// Slot symbol:     off_89500
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

