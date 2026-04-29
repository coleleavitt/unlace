// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_4090
//
// Resolved target: add_segm_ex
// Target address:  0x41A8
// GOT/IAT slot:    0x4090
// Slot symbol:     off_4090
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

