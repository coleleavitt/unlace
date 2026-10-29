// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7220
// Name:            .tag_skipcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7220 jmp     cs:off_2C790F8
//
// Resolved target: tag_skipcode
// Target address:  0x3DF870
// GOT/IAT slot:    0x2C790F8
// Slot symbol:     off_2C790F8
// Target type:     <no type info>
// ============================================================

void .tag_skipcode(/* see target signature */)
{
    // Tail-call to tag_skipcode via GOT/IAT indirection
    return tag_skipcode(/* forwarded args */);
}

