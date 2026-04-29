// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6870
// Name:            .del_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6870 jmp     cs:off_24420
//
// Resolved target: del_segm
// Target address:  0x26218
// GOT/IAT slot:    0x24420
// Slot symbol:     off_24420
// Target type:     <no type info>
// ============================================================

void .del_segm(/* see target signature */)
{
    // Tail-call to del_segm via GOT/IAT indirection
    return del_segm(/* forwarded args */);
}

