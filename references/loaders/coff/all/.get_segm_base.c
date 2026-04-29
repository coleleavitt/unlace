// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4040
// Name:            .get_segm_base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4040 jmp     cs:off_23008
//
// Resolved target: get_segm_base
// Target address:  0x23428
// GOT/IAT slot:    0x23008
// Slot symbol:     off_23008
// Target type:     <no type info>
// ============================================================

void .get_segm_base(/* see target signature */)
{
    // Tail-call to get_segm_base via GOT/IAT indirection
    return get_segm_base(/* forwarded args */);
}

