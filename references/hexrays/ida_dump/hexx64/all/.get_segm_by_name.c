// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C900
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C900 jmp     cs:off_4EDC68
//
// Resolved target: get_segm_by_name
// Target address:  0x4F1FA0
// GOT/IAT slot:    0x4EDC68
// Slot symbol:     off_4EDC68
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

