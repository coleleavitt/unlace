// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C5E0
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C5E0 jmp     cs:off_4EDAD8
//
// Resolved target: add_segm_ex
// Target address:  0x4F1E00
// GOT/IAT slot:    0x4EDAD8
// Slot symbol:     off_4EDAD8
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

