// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A00
// Name:            .move_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A00 jmp     cs:off_954E8
//
// Resolved target: move_segm
// Target address:  0x95F20
// GOT/IAT slot:    0x954E8
// Slot symbol:     off_954E8
// Target type:     <no type info>
// ============================================================

void .move_segm(/* see target signature */)
{
    // Tail-call to move_segm via GOT/IAT indirection
    return move_segm(/* forwarded args */);
}

