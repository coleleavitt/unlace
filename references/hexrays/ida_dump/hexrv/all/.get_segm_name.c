// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB30
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB30 jmp     cs:off_4BFD80
//
// Resolved target: get_segm_name
// Target address:  0x4C3298
// GOT/IAT slot:    0x4BFD80
// Slot symbol:     off_4BFD80
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

