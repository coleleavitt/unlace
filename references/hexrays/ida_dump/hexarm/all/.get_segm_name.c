// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB70
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB70 jmp     cs:off_4E9DA0
//
// Resolved target: get_segm_name
// Target address:  0x4EC7E0
// GOT/IAT slot:    0x4E9DA0
// Slot symbol:     off_4E9DA0
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

