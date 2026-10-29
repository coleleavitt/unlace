// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D20
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D20 jmp     cs:off_2C7A678
//
// Resolved target: set_segm_end
// Target address:  0x686290
// GOT/IAT slot:    0x2C7A678
// Slot symbol:     off_2C7A678
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

