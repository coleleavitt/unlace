// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C290
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C290 jmp     cs:off_4ED930
//
// Resolved target: tag_remove
// Target address:  0x4F1C50
// GOT/IAT slot:    0x4ED930
// Slot symbol:     off_4ED930
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

