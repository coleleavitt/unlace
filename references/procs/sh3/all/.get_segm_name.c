// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55A0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x55A0 jmp     cs:off_152B8
//
// Resolved target: get_segm_name
// Target address:  0x16358
// GOT/IAT slot:    0x152B8
// Slot symbol:     off_152B8
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

