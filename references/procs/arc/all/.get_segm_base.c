// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8050
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8050 jmp     cs:off_2A010
//
// Resolved target: get_segm_base
// Target address:  0x2BA20
// GOT/IAT slot:    0x2A010
// Slot symbol:     off_2A010
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

