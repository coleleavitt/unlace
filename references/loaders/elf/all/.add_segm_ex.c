// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96D0
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96D0 jmp     cs:off_89350
//
// Resolved target: add_segm_ex
// Target address:  0x8C658
// GOT/IAT slot:    0x89350
// Slot symbol:     off_89350
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

