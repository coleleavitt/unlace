// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_A138
//
// Resolved target: get_segm_by_name
// Target address:  0xB410
// GOT/IAT slot:    0xA138
// Slot symbol:     off_A138
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

