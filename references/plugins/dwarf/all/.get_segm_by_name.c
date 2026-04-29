// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9B0
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9B0 jmp     cs:off_CA4C0
//
// Resolved target: get_segm_by_name
// Target address:  0xD0E08
// GOT/IAT slot:    0xCA4C0
// Slot symbol:     off_CA4C0
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

