// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111AF0
// Name:            .get_segm_num
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111AF0 jmp     cs:get_segm_num_ptr
//
// Resolved target: get_segm_num
// Target address:  0x8D3790
// GOT/IAT slot:    0x89FA18
// Slot symbol:     get_segm_num_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_num(/* see target signature */)
{
    // Tail-call to get_segm_num via GOT/IAT indirection
    return get_segm_num(/* forwarded args */);
}

