// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAAA0
// Name:            .get_segm_by_sel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAAA0 jmp     cs:off_CA538
//
// Resolved target: get_segm_by_sel
// Target address:  0xD0E88
// GOT/IAT slot:    0xCA538
// Slot symbol:     off_CA538
// Target type:     <no type info>
// ============================================================

void .get_segm_by_sel(/* see target signature */)
{
    // Tail-call to get_segm_by_sel via GOT/IAT indirection
    return get_segm_by_sel(/* forwarded args */);
}

