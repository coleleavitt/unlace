// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .add_segm_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_B150
//
// Resolved target: add_segm_ex
// Target address:  0xB3F8
// GOT/IAT slot:    0xB150
// Slot symbol:     off_B150
// Target type:     <no type info>
// ============================================================

void .add_segm_ex(/* see target signature */)
{
    // Tail-call to add_segm_ex via GOT/IAT indirection
    return add_segm_ex(/* forwarded args */);
}

