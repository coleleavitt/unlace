// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B590
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B590 jmp     cs:off_4DAAB0
//
// Resolved target: tag_skipcodes
// Target address:  0x4DD4B0
// GOT/IAT slot:    0x4DAAB0
// Slot symbol:     off_4DAAB0
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

