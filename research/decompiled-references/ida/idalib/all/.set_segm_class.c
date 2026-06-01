// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA1E0
// Name:            .set_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA1E0 jmp     cs:off_2C7A8D8
//
// Resolved target: set_segm_class
// Target address:  0x6851B0
// GOT/IAT slot:    0x2C7A8D8
// Slot symbol:     off_2C7A8D8
// Target type:     <no type info>
// ============================================================

void .set_segm_class(/* see target signature */)
{
    // Tail-call to set_segm_class via GOT/IAT indirection
    return set_segm_class(/* forwarded args */);
}

