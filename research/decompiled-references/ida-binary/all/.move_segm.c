// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB10
// Name:            .move_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB10 jmp     cs:move_segm_ptr
//
// Resolved target: move_segm
// Target address:  0x8D9D10
// GOT/IAT slot:    0x8A4A28
// Slot symbol:     move_segm_ptr
// Target type:     <no type info>
// ============================================================

void .move_segm(/* see target signature */)
{
    // Tail-call to move_segm via GOT/IAT indirection
    return move_segm(/* forwarded args */);
}

