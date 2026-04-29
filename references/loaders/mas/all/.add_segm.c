// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_4068
//
// Resolved target: add_segm
// Target address:  0x4588
// GOT/IAT slot:    0x4068
// Slot symbol:     off_4068
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

