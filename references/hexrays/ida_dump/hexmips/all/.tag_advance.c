// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC50
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC50 jmp     cs:off_4CDE10
//
// Resolved target: tag_advance
// Target address:  0x4D0850
// GOT/IAT slot:    0x4CDE10
// Slot symbol:     off_4CDE10
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

