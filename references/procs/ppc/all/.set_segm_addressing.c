// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F70
// Name:            .set_segm_addressing
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F70 jmp     cs:off_957A0
//
// Resolved target: set_segm_addressing
// Target address:  0x961F8
// GOT/IAT slot:    0x957A0
// Slot symbol:     off_957A0
// Target type:     <no type info>
// ============================================================

void .set_segm_addressing(/* see target signature */)
{
    // Tail-call to set_segm_addressing via GOT/IAT indirection
    return set_segm_addressing(/* forwarded args */);
}

