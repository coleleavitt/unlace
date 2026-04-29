// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D330
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D330 jmp     cs:off_4EE180
//
// Resolved target: del_segm
// Target address:  0x4F24D8
// GOT/IAT slot:    0x4EE180
// Slot symbol:     off_4EE180
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

