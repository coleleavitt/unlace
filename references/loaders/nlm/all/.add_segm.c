// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_80F8
//
// Resolved target: add_segm
// Target address:  0x87D8
// GOT/IAT slot:    0x80F8
// Slot symbol:     off_80F8
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

