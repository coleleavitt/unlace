// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1280
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1280 jmp     cs:off_5128
//
// Resolved target: set_segm_addressing
// Target address:  0x5310
// GOT/IAT slot:    0x5128
// Slot symbol:     off_5128
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

