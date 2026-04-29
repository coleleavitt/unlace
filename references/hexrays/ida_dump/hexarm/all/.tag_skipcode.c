// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E4A0
// Name:            .tag_skipcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E4A0 jmp     cs:off_4E9A38
//
// Resolved target: tag_skipcode
// Target address:  0x4EC458
// GOT/IAT slot:    0x4E9A38
// Slot symbol:     off_4E9A38
// Target type:     <no type info>
// ============================================================

void .tag_skipcode(/* see target signature */)
{
    // Tail-call to tag_skipcode via GOT/IAT indirection
    return tag_skipcode(/* forwarded args */);
}

