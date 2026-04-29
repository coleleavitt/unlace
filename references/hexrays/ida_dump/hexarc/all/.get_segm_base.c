// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29110
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29110 jmp     cs:off_4B9070
//
// Resolved target: get_segm_base
// Target address:  0x4BBA40
// GOT/IAT slot:    0x4B9070
// Slot symbol:     off_4B9070
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

