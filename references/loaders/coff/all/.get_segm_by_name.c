// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45D0
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45D0 jmp     cs:off_232D0
//
// Resolved target: get_segm_by_name
// Target address:  0x236F8
// GOT/IAT slot:    0x232D0
// Slot symbol:     off_232D0
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

