// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD30
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD30 jmp     cs:off_4B9E80
//
// Resolved target: get_segm_para
// Target address:  0x4BC8B0
// GOT/IAT slot:    0x4B9E80
// Slot symbol:     off_4B9E80
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

