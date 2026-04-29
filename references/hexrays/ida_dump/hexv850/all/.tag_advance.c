// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC50
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC50 jmp     cs:off_4C0E10
//
// Resolved target: tag_advance
// Target address:  0x4C3E28
// GOT/IAT slot:    0x4C0E10
// Slot symbol:     off_4C0E10
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

