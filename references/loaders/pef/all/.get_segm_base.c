// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2030
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2030 jmp     cs:off_8000
//
// Resolved target: get_segm_base
// Target address:  0x81F0
// GOT/IAT slot:    0x8000
// Slot symbol:     off_8000
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

