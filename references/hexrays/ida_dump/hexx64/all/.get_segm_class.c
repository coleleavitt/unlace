// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C520
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C520 jmp     cs:off_4EDA78
//
// Resolved target: get_segm_class
// Target address:  0x4F1D98
// GOT/IAT slot:    0x4EDA78
// Slot symbol:     off_4EDA78
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

