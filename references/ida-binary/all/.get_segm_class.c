// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1113D0
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1113D0 jmp     cs:get_segm_class_ptr
//
// Resolved target: get_segm_class
// Target address:  0x8D32E0
// GOT/IAT slot:    0x89F688
// Slot symbol:     get_segm_class_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

