// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B450
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B450 jmp     cs:off_4C0A10
//
// Resolved target: get_segm_class
// Target address:  0x4C3A08
// GOT/IAT slot:    0x4C0A10
// Slot symbol:     off_4C0A10
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

