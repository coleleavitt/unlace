// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114600
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114600 jmp     cs:get_segm_name_ptr
//
// Resolved target: get_segm_name
// Target address:  0x8D5340
// GOT/IAT slot:    0x8A0FA0
// Slot symbol:     get_segm_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

