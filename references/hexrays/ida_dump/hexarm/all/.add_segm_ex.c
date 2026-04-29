// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E560
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E560 jmp     cs:off_4E9A98
//
// Resolved target: add_segm_ex
// Target address:  0x4EC4B8
// GOT/IAT slot:    0x4E9A98
// Slot symbol:     off_4E9A98
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

