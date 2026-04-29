// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0C0
// Name:            .tag_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0C0 jmp     cs:off_4ED848
//
// Resolved target: tag_on
// Target address:  0x4F1B60
// GOT/IAT slot:    0x4ED848
// Slot symbol:     off_4ED848
// Target type:     <no type info>
// ============================================================

void .tag_on(/* see target signature */)
{
    // Tail-call to tag_on via GOT/IAT indirection
    return tag_on(/* forwarded args */);
}

