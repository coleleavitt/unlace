// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_A160
//
// Resolved target: get_segm_name
// Target address:  0xB440
// GOT/IAT slot:    0xA160
// Slot symbol:     off_A160
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

