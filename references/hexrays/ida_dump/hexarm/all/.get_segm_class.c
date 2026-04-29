// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E490
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E490 jmp     cs:off_4E9A30
//
// Resolved target: get_segm_class
// Target address:  0x4EC450
// GOT/IAT slot:    0x4E9A30
// Slot symbol:     off_4E9A30
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

