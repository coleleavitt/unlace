// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A70A0
// Name:            .tag_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A70A0 jmp     cs:off_2C79038
//
// Resolved target: tag_addr
// Target address:  0x3E0000
// GOT/IAT slot:    0x2C79038
// Slot symbol:     off_2C79038
// Target type:     <no type info>
// ============================================================

void .tag_addr(/* see target signature */)
{
    // Tail-call to tag_addr via GOT/IAT indirection
    return tag_addr(/* forwarded args */);
}

