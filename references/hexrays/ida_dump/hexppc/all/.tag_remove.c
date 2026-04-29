// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1E0
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1E0 jmp     cs:off_4DA8D8
//
// Resolved target: tag_remove
// Target address:  0x4DD2D8
// GOT/IAT slot:    0x4DA8D8
// Slot symbol:     off_4DA8D8
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

