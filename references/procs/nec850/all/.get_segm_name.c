// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97C0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97C0 jmp     cs:off_2E3C8
//
// Resolved target: get_segm_name
// Target address:  0x2EA48
// GOT/IAT slot:    0x2E3C8
// Slot symbol:     off_2E3C8
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

