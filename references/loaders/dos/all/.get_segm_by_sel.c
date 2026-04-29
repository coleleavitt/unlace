// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x24D0
// Name:            .get_segm_by_sel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x24D0 jmp     cs:off_B250
//
// Resolved target: get_segm_by_sel
// Target address:  0xB6F8
// GOT/IAT slot:    0xB250
// Slot symbol:     off_B250
// Target type:     <no type info>
// ============================================================

void .get_segm_by_sel(/* see target signature */)
{
    // Tail-call to get_segm_by_sel via GOT/IAT indirection
    return get_segm_by_sel(/* forwarded args */);
}

