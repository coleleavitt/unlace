// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1040
// Name:            .set_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1040 jmp     cs:off_5008
//
// Resolved target: set_segm_start
// Target address:  0x51D8
// GOT/IAT slot:    0x5008
// Slot symbol:     off_5008
// Target type:     <no type info>
// ============================================================

void .set_segm_start(/* see target signature */)
{
    // Tail-call to set_segm_start via GOT/IAT indirection
    return set_segm_start(/* forwarded args */);
}

