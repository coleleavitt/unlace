// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA080
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA080 jmp     cs:off_2C7A828
//
// Resolved target: set_segm_addressing
// Target address:  0x6855B0
// GOT/IAT slot:    0x2C7A828
// Slot symbol:     off_2C7A828
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

