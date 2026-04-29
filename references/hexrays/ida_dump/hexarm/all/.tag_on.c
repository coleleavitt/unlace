// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E060
// Name:            .tag_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E060 jmp     cs:off_4E9818
//
// Resolved target: tag_on
// Target address:  0x4EC238
// GOT/IAT slot:    0x4E9818
// Slot symbol:     off_4E9818
// Target type:     <no type info>
// ============================================================

void .tag_on(/* see target signature */)
{
    // Tail-call to tag_on via GOT/IAT indirection
    return tag_on(/* forwarded args */);
}

