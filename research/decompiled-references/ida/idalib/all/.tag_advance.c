// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A94D0
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A94D0 jmp     cs:off_2C7A250
//
// Resolved target: tag_advance
// Target address:  0x3DF950
// GOT/IAT slot:    0x2C7A250
// Slot symbol:     off_2C7A250
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

