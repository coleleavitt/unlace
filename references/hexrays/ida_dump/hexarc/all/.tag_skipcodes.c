// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A580
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A580 jmp     cs:off_4B9AA8
//
// Resolved target: tag_skipcodes
// Target address:  0x4BC4A8
// GOT/IAT slot:    0x4B9AA8
// Slot symbol:     off_4B9AA8
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

