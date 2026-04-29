// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5A0
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5A0 jmp     cs:off_4C0AB8
//
// Resolved target: tag_skipcodes
// Target address:  0x4C3AB0
// GOT/IAT slot:    0x4C0AB8
// Slot symbol:     off_4C0AB8
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

