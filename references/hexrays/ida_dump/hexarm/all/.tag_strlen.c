// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB50
// Name:            .tag_strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB50 jmp     cs:off_4E9590
//
// Resolved target: tag_strlen
// Target address:  0x4EBFA0
// GOT/IAT slot:    0x4E9590
// Slot symbol:     off_4E9590
// Target type:     <no type info>
// ============================================================

void .tag_strlen(/* see target signature */)
{
    // Tail-call to tag_strlen via GOT/IAT indirection
    return tag_strlen(/* forwarded args */);
}

