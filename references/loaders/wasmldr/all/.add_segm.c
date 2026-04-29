// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_150E0
//
// Resolved target: add_segm
// Target address:  0x152D0
// GOT/IAT slot:    0x150E0
// Slot symbol:     off_150E0
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

