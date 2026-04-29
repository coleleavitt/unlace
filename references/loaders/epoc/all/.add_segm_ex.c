// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3370
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3370 jmp     cs:off_131A0
//
// Resolved target: add_segm_ex
// Target address:  0x13890
// GOT/IAT slot:    0x131A0
// Slot symbol:     off_131A0
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

