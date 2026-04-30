// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111390
// Name:            .tag_skipcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111390 jmp     cs:tag_skipcode_ptr
//
// Resolved target: tag_skipcode
// Target address:  0x8D32B0
// GOT/IAT slot:    0x89F668
// Slot symbol:     tag_skipcode_ptr
// Target type:     <no type info>
// ============================================================

void .tag_skipcode(/* see target signature */)
{
    // Tail-call to tag_skipcode via GOT/IAT indirection
    return tag_skipcode(/* forwarded args */);
}

