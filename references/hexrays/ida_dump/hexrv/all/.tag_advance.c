// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC40
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC40 jmp     cs:off_4BFE08
//
// Resolved target: tag_advance
// Target address:  0x4C3320
// GOT/IAT slot:    0x4BFE08
// Slot symbol:     off_4BFE08
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

