// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6570
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6570 jmp     cs:off_1D2A0
//
// Resolved target: get_segm_name
// Target address:  0x1D7A0
// GOT/IAT slot:    0x1D2A0
// Slot symbol:     off_1D2A0
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

