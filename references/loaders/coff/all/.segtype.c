// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4740
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4740 jmp     cs:off_23388
//
// Resolved target: segtype
// Target address:  0x237C8
// GOT/IAT slot:    0x23388
// Slot symbol:     off_23388
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

