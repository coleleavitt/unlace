// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADAF0
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADAF0 jmp     cs:off_2C7C560
//
// Resolved target: tag_skipcodes
// Target address:  0x3DF8F0
// GOT/IAT slot:    0x2C7C560
// Slot symbol:     off_2C7C560
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

