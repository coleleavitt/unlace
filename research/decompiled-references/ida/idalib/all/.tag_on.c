// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A76E0
// Name:            .tag_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A76E0 jmp     cs:off_2C79358
//
// Resolved target: tag_on
// Target address:  0x3DFDD0
// GOT/IAT slot:    0x2C79358
// Slot symbol:     off_2C79358
// Target type:     <no type info>
// ============================================================

void .tag_on(/* see target signature */)
{
    // Tail-call to tag_on via GOT/IAT indirection
    return tag_on(/* forwarded args */);
}

