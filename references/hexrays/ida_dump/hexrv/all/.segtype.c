// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C060
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C060 jmp     cs:off_4C0018
//
// Resolved target: segtype
// Target address:  0x4C3540
// GOT/IAT slot:    0x4C0018
// Slot symbol:     off_4C0018
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

