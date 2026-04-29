// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6760
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6760 jmp     cs:off_2F398
//
// Resolved target: get_segm_by_name
// Target address:  0x2FA10
// GOT/IAT slot:    0x2F398
// Slot symbol:     off_2F398
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

