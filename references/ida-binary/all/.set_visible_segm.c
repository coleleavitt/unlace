// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118450
// Name:            .set_visible_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118450 jmp     cs:set_visible_segm_ptr
//
// Resolved target: set_visible_segm
// Target address:  0x8D7AA8
// GOT/IAT slot:    0x8A2EC8
// Slot symbol:     set_visible_segm_ptr
// Target type:     <no type info>
// ============================================================

void .set_visible_segm(/* see target signature */)
{
    // Tail-call to set_visible_segm via GOT/IAT indirection
    return set_visible_segm(/* forwarded args */);
}

