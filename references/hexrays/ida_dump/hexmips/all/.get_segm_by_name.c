// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B830
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B830 jmp     cs:off_4CDC00
//
// Resolved target: get_segm_by_name
// Target address:  0x4D0630
// GOT/IAT slot:    0x4CDC00
// Slot symbol:     off_4CDC00
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

