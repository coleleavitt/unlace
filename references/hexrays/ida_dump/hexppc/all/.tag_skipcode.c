// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B460
// Name:            .tag_skipcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B460 jmp     cs:off_4DAA18
//
// Resolved target: tag_skipcode
// Target address:  0x4DD418
// GOT/IAT slot:    0x4DAA18
// Slot symbol:     off_4DAA18
// Target type:     <no type info>
// ============================================================

void .tag_skipcode(/* see target signature */)
{
    // Tail-call to tag_skipcode via GOT/IAT indirection
    return tag_skipcode(/* forwarded args */);
}

