// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0 jmp     cs:off_50C0
//
// Resolved target: add_segm_ex
// Target address:  0x5308
// GOT/IAT slot:    0x50C0
// Slot symbol:     off_50C0
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

