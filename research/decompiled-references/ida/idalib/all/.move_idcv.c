// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA110
// Name:            .move_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA110 jmp     cs:off_2C7A870
//
// Resolved target: move_idcv
// Target address:  0x796DB0
// GOT/IAT slot:    0x2C7A870
// Slot symbol:     off_2C7A870
// Target type:     <no type info>
// ============================================================

void .move_idcv(/* see target signature */)
{
    // Tail-call to move_idcv via GOT/IAT indirection
    return move_idcv(/* forwarded args */);
}

