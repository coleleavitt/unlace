// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110 jmp     cs:off_4070
//
// Resolved target: add_segm_ex
// Target address:  0x4198
// GOT/IAT slot:    0x4070
// Slot symbol:     off_4070
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

