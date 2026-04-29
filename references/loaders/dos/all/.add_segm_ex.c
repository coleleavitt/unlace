// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2400
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2400 jmp     cs:off_B1E8
//
// Resolved target: add_segm_ex
// Target address:  0xB680
// GOT/IAT slot:    0xB1E8
// Slot symbol:     off_B1E8
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

