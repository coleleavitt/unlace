// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C90
// Name:            .update_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C90 jmp     cs:update_segm_ptr
//
// Resolved target: update_segm
// Target address:  0x8D57D0
// GOT/IAT slot:    0x8A12E8
// Slot symbol:     update_segm_ptr
// Target type:     <no type info>
// ============================================================

void .update_segm(/* see target signature */)
{
    // Tail-call to update_segm via GOT/IAT indirection
    return update_segm(/* forwarded args */);
}

