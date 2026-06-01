// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114050
// Name:            .get_segm_by_sel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114050 jmp     cs:get_segm_by_sel_ptr
//
// Resolved target: get_segm_by_sel
// Target address:  0x8D4FA0
// GOT/IAT slot:    0x8A0CC8
// Slot symbol:     get_segm_by_sel_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_by_sel(/* see target signature */)
{
    // Tail-call to get_segm_by_sel via GOT/IAT indirection
    return get_segm_by_sel(/* forwarded args */);
}

