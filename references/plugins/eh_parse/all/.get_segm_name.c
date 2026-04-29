// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6810
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6810 jmp     cs:off_2F3F0
//
// Resolved target: get_segm_name
// Target address:  0x2FA70
// GOT/IAT slot:    0x2F3F0
// Slot symbol:     off_2F3F0
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

