// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C110
// Name:            .tag_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C110 jmp     cs:off_4ED870
//
// Resolved target: tag_addr
// Target address:  0x4F1B88
// GOT/IAT slot:    0x4ED870
// Slot symbol:     off_4ED870
// Target type:     <no type info>
// ============================================================

void .tag_addr(/* see target signature */)
{
    // Tail-call to tag_addr via GOT/IAT indirection
    return tag_addr(/* forwarded args */);
}

