// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F1F0
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F1F0 jmp     cs:off_4EA0E0
//
// Resolved target: del_segm
// Target address:  0x4ECB38
// GOT/IAT slot:    0x4EA0E0
// Slot symbol:     off_4EA0E0
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

