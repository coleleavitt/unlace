// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD60
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD60 jmp     cs:off_4CDE98
//
// Resolved target: get_segm_para
// Target address:  0x4D08E8
// GOT/IAT slot:    0x4CDE98
// Slot symbol:     off_4CDE98
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

