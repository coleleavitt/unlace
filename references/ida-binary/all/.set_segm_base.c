// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112220
// Name:            .set_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112220 jmp     cs:set_segm_base_ptr
//
// Resolved target: set_segm_base
// Target address:  0x8D3C08
// GOT/IAT slot:    0x89FDB0
// Slot symbol:     set_segm_base_ptr
// Target type:     <no type info>
// ============================================================

void .set_segm_base(/* see target signature */)
{
    // Tail-call to set_segm_base via GOT/IAT indirection
    return set_segm_base(/* forwarded args */);
}

