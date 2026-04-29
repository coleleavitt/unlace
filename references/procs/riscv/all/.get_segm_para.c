// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA900
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA900 jmp     cs:off_35468
//
// Resolved target: get_segm_para
// Target address:  0x35AD0
// GOT/IAT slot:    0x35468
// Slot symbol:     off_35468
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

