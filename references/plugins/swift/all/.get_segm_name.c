// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46A0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46A0 jmp     cs:off_28338
//
// Resolved target: get_segm_name
// Target address:  0x29CE0
// GOT/IAT slot:    0x28338
// Slot symbol:     off_28338
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

