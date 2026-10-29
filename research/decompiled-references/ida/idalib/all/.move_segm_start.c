// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA90
// Name:            .move_segm_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA90 jmp     cs:off_2C7BD30
//
// Resolved target: move_segm_start
// Target address:  0x687A70
// GOT/IAT slot:    0x2C7BD30
// Slot symbol:     off_2C7BD30
// Target type:     <no type info>
// ============================================================

void .move_segm_start(/* see target signature */)
{
    // Tail-call to move_segm_start via GOT/IAT indirection
    return move_segm_start(/* forwarded args */);
}

