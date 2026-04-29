// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C660
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C660 jmp     cs:off_4EDB18
//
// Resolved target: tag_skipcodes
// Target address:  0x4F1E40
// GOT/IAT slot:    0x4EDB18
// Slot symbol:     off_4EDB18
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

