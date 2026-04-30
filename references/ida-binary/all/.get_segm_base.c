// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117EA0
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117EA0 jmp     cs:get_segm_base_ptr
//
// Resolved target: get_segm_base
// Target address:  0x8D7748
// GOT/IAT slot:    0x8A2BF0
// Slot symbol:     get_segm_base_ptr
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

