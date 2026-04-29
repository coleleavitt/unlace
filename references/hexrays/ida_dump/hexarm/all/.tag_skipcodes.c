// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E5D0
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E5D0 jmp     cs:off_4E9AD0
//
// Resolved target: tag_skipcodes
// Target address:  0x4EC4F0
// GOT/IAT slot:    0x4E9AD0
// Slot symbol:     off_4E9AD0
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

