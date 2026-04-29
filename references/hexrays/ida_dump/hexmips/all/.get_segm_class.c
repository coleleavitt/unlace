// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B450
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B450 jmp     cs:off_4CDA10
//
// Resolved target: get_segm_class
// Target address:  0x4D0430
// GOT/IAT slot:    0x4CDA10
// Slot symbol:     off_4CDA10
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

