// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115C80
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115C80 jmp     cs:set_segm_addressing_ptr
//
// Resolved target: set_segm_addressing
// Target address:  0x8D6198
// GOT/IAT slot:    0x8A1AE0
// Slot symbol:     set_segm_addressing_ptr
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

