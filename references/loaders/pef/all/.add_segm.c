// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .add_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_8118
//
// Resolved target: add_segm
// Target address:  0x8308
// GOT/IAT slot:    0x8118
// Slot symbol:     off_8118
// Target type:     <no type info>
// ============================================================

void .add_segm(/* see target signature */)
{
    // Tail-call to add_segm via GOT/IAT indirection
    return add_segm(/* forwarded args */);
}

