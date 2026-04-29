// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120 jmp     cs:off_5078
//
// Resolved target: set_segm_end
// Target address:  0x5248
// GOT/IAT slot:    0x5078
// Slot symbol:     off_5078
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

