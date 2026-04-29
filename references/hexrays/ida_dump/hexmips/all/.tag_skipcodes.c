// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5A0
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5A0 jmp     cs:off_4CDAB8
//
// Resolved target: tag_skipcodes
// Target address:  0x4D04D8
// GOT/IAT slot:    0x4CDAB8
// Slot symbol:     off_4CDAB8
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

