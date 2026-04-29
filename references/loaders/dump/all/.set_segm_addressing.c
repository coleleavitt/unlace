// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_50B0
//
// Resolved target: set_segm_addressing
// Target address:  0x5400
// GOT/IAT slot:    0x50B0
// Slot symbol:     off_50B0
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

