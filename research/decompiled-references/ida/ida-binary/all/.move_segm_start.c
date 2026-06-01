// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A230
// Name:            .move_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A230 jmp     cs:move_segm_start_ptr
//
// Resolved target: move_segm_start
// Target address:  0x8D8D60
// GOT/IAT slot:    0x8A3DB8
// Slot symbol:     move_segm_start_ptr
// Target type:     <no type info>
// ============================================================

void .move_segm_start(/* see target signature */)
{
    // Tail-call to move_segm_start via GOT/IAT indirection
    return move_segm_start(/* forwarded args */);
}

