// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CD50
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CD50 jmp     cs:off_4EDE90
//
// Resolved target: tag_advance
// Target address:  0x4F21D0
// GOT/IAT slot:    0x4EDE90
// Slot symbol:     off_4EDE90
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

