// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130 jmp     cs:off_5080
//
// Resolved target: add_segm_ex
// Target address:  0x5198
// GOT/IAT slot:    0x5080
// Slot symbol:     off_5080
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

