// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A030
// Name:            .tag_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A030 jmp     cs:off_4B9800
//
// Resolved target: tag_on
// Target address:  0x4BC200
// GOT/IAT slot:    0x4B9800
// Slot symbol:     off_4B9800
// Target type:     <no type info>
// ============================================================

void .tag_on(/* see target signature */)
{
    // Tail-call to tag_on via GOT/IAT indirection
    return tag_on(/* forwarded args */);
}

