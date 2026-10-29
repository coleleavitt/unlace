// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB4D0
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB4D0 jmp     cs:off_2C7B250
//
// Resolved target: del_segm
// Target address:  0x685E70
// GOT/IAT slot:    0x2C7B250
// Slot symbol:     off_2C7B250
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

