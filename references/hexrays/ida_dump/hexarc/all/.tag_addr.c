// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A080
// Name:            .tag_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A080 jmp     cs:off_4B9828
//
// Resolved target: tag_addr
// Target address:  0x4BC228
// GOT/IAT slot:    0x4B9828
// Slot symbol:     off_4B9828
// Target type:     <no type info>
// ============================================================

void .tag_addr(/* see target signature */)
{
    // Tail-call to tag_addr via GOT/IAT indirection
    return tag_addr(/* forwarded args */);
}

