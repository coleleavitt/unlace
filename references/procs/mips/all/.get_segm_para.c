// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BF0
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BF0 jmp     cs:off_755E0
//
// Resolved target: get_segm_para
// Target address:  0x75E48
// GOT/IAT slot:    0x755E0
// Slot symbol:     off_755E0
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

