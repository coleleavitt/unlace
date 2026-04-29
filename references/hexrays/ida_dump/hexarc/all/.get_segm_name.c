// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB10
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB10 jmp     cs:off_4B9D70
//
// Resolved target: get_segm_name
// Target address:  0x4BC790
// GOT/IAT slot:    0x4B9D70
// Slot symbol:     off_4B9D70
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

