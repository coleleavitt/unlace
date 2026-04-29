// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED90
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED90 jmp     cs:off_4E9EB0
//
// Resolved target: get_segm_para
// Target address:  0x4EC900
// GOT/IAT slot:    0x4E9EB0
// Slot symbol:     off_4E9EB0
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

