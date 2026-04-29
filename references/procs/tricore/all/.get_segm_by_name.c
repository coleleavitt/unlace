// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6610
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6610 jmp     cs:off_242F0
//
// Resolved target: get_segm_by_name
// Target address:  0x260C8
// GOT/IAT slot:    0x242F0
// Slot symbol:     off_242F0
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

