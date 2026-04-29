// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C530
// Name:            .tag_skipcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C530 jmp     cs:off_4EDA80
//
// Resolved target: tag_skipcode
// Target address:  0x4F1DA0
// GOT/IAT slot:    0x4EDA80
// Slot symbol:     off_4EDA80
// Target type:     <no type info>
// ============================================================

void .tag_skipcode(/* see target signature */)
{
    // Tail-call to tag_skipcode via GOT/IAT indirection
    return tag_skipcode(/* forwarded args */);
}

