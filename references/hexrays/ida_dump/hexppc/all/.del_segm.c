// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1B0
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1B0 jmp     cs:off_4DB0C0
//
// Resolved target: del_segm
// Target address:  0x4DDAF8
// GOT/IAT slot:    0x4DB0C0
// Slot symbol:     off_4DB0C0
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

