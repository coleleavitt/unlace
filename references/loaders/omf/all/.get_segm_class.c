// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3410
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3410 jmp     cs:off_141F0
//
// Resolved target: get_segm_class
// Target address:  0x147E0
// GOT/IAT slot:    0x141F0
// Slot symbol:     off_141F0
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

