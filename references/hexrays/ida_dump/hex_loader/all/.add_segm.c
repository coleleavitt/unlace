// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_50B8
//
// Resolved target: add_segm
// Target address:  0x5288
// GOT/IAT slot:    0x50B8
// Slot symbol:     off_50B8
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

