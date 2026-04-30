// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116220
// Name:            .get_segm_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116220 jmp     cs:get_segm_by_name_ptr
//
// Resolved target: get_segm_by_name
// Target address:  0x8D6528
// GOT/IAT slot:    0x8A1DB0
// Slot symbol:     get_segm_by_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_by_name(/* see target signature */)
{
    // Tail-call to get_segm_by_name via GOT/IAT indirection
    return get_segm_by_name(/* forwarded args */);
}

