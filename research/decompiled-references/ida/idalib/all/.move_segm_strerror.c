// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA860
// Name:            .move_segm_strerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA860 jmp     cs:off_2C7AC18
//
// Resolved target: move_segm_strerror
// Target address:  0x66FCE0
// GOT/IAT slot:    0x2C7AC18
// Slot symbol:     off_2C7AC18
// Target type:     <no type info>
// ============================================================

void .move_segm_strerror(/* see target signature */)
{
    // Tail-call to move_segm_strerror via GOT/IAT indirection
    return move_segm_strerror(/* forwarded args */);
}

