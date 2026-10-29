// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116990
// Name:            .move_segm_strerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116990 jmp     cs:move_segm_strerror_ptr
//
// Resolved target: move_segm_strerror
// Target address:  0x8D69F0
// GOT/IAT slot:    0x8A2168
// Slot symbol:     move_segm_strerror_ptr
// Target type:     <no type info>
// ============================================================

void .move_segm_strerror(/* see target signature */)
{
    // Tail-call to move_segm_strerror via GOT/IAT indirection
    return move_segm_strerror(/* forwarded args */);
}

