// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC40
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC40 jmp     cs:off_4EDE08
//
// Resolved target: get_segm_name
// Target address:  0x4F2148
// GOT/IAT slot:    0x4EDE08
// Slot symbol:     off_4EDE08
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

