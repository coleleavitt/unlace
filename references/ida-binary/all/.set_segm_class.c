// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115E90
// Name:            .set_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115E90 jmp     cs:set_segm_class_ptr
//
// Resolved target: set_segm_class
// Target address:  0x8D62C8
// GOT/IAT slot:    0x8A1BE8
// Slot symbol:     set_segm_class_ptr
// Target type:     <no type info>
// ============================================================

void .set_segm_class(/* see target signature */)
{
    // Tail-call to set_segm_class via GOT/IAT indirection
    return set_segm_class(/* forwarded args */);
}

