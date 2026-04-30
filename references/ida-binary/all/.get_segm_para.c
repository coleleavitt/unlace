// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112040
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112040 jmp     cs:get_segm_para_ptr
//
// Resolved target: get_segm_para
// Target address:  0x8D3AF0
// GOT/IAT slot:    0x89FCC0
// Slot symbol:     get_segm_para_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

