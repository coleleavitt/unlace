// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_B158
//
// Resolved target: add_segm_ex
// Target address:  0xB3F0
// GOT/IAT slot:    0xB158
// Slot symbol:     off_B158
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

