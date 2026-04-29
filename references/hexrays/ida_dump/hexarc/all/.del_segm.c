// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B190
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B190 jmp     cs:off_4BA0B0
//
// Resolved target: del_segm
// Target address:  0x4BCAE8
// GOT/IAT slot:    0x4BA0B0
// Slot symbol:     off_4BA0B0
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

