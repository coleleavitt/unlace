// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BBE0
// Name:            .tag_skipcodes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BBE0 jmp     cs:tag_skipcodes_ptr
//
// Resolved target: tag_skipcodes
// Target address:  0x8D9DA0
// GOT/IAT slot:    0x8A4A90
// Slot symbol:     tag_skipcodes_ptr
// Target type:     <no type info>
// ============================================================

void .tag_skipcodes(/* see target signature */)
{
    // Tail-call to tag_skipcodes via GOT/IAT indirection
    return tag_skipcodes(/* forwarded args */);
}

