// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1D0
// Name:            .tag_remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1D0 jmp     cs:off_4B98D0
//
// Resolved target: tag_remove
// Target address:  0x4BC2D0
// GOT/IAT slot:    0x4B98D0
// Slot symbol:     off_4B98D0
// Target type:     <no type info>
// ============================================================

void .tag_remove(/* see target signature */)
{
    // Tail-call to tag_remove via GOT/IAT indirection
    return tag_remove(/* forwarded args */);
}

