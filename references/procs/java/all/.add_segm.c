// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6550
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6550 jmp     cs:off_2D290
//
// Resolved target: add_segm
// Target address:  0x2D790
// GOT/IAT slot:    0x2D290
// Slot symbol:     off_2D290
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

