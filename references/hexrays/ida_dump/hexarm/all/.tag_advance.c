// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EC80
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EC80 jmp     cs:off_4E9E28
//
// Resolved target: tag_advance
// Target address:  0x4EC868
// GOT/IAT slot:    0x4E9E28
// Slot symbol:     off_4E9E28
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

