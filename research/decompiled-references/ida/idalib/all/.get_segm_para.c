// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7AC0
// Name:            .get_segm_para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7AC0 jmp     cs:off_2C79548
//
// Resolved target: get_segm_para
// Target address:  0x510710
// GOT/IAT slot:    0x2C79548
// Slot symbol:     off_2C79548
// Target type:     <no type info>
// ============================================================

void .get_segm_para(/* see target signature */)
{
    // Tail-call to get_segm_para via GOT/IAT indirection
    return get_segm_para(/* forwarded args */);
}

