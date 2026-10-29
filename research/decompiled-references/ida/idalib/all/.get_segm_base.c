// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB4B0
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB4B0 jmp     cs:off_2C7B240
//
// Resolved target: get_segm_base
// Target address:  0x510730
// GOT/IAT slot:    0x2C7B240
// Slot symbol:     off_2C7B240
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

