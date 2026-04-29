// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D7D0
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D7D0 jmp     cs:off_4E93D0
//
// Resolved target: set_segm_end
// Target address:  0x4EBDC0
// GOT/IAT slot:    0x4E93D0
// Slot symbol:     off_4E93D0
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

