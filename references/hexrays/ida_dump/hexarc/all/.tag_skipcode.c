// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A460
// Name:            .tag_skipcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A460 jmp     cs:off_4B9A18
//
// Resolved target: tag_skipcode
// Target address:  0x4BC418
// GOT/IAT slot:    0x4B9A18
// Slot symbol:     off_4B9A18
// Target type:     <no type info>
// ============================================================

void .tag_skipcode(/* see target signature */)
{
    // Tail-call to tag_skipcode via GOT/IAT indirection
    return tag_skipcode(/* forwarded args */);
}

