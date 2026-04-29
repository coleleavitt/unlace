// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A450
// Name:            .get_segm_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A450 jmp     cs:off_4B9A10
//
// Resolved target: get_segm_class
// Target address:  0x4BC410
// GOT/IAT slot:    0x4B9A10
// Slot symbol:     off_4B9A10
// Target type:     <no type info>
// ============================================================

void .get_segm_class(/* see target signature */)
{
    // Tail-call to get_segm_class via GOT/IAT indirection
    return get_segm_class(/* forwarded args */);
}

