// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC20
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC20 jmp     cs:off_4B9DF8
//
// Resolved target: tag_advance
// Target address:  0x4BC818
// GOT/IAT slot:    0x4B9DF8
// Slot symbol:     off_4B9DF8
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

