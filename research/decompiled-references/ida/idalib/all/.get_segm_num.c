// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7720
// Name:            .get_segm_num
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7720 jmp     cs:off_2C79378
//
// Resolved target: get_segm_num
// Target address:  0x50E250
// GOT/IAT slot:    0x2C79378
// Slot symbol:     off_2C79378
// Target type:     <no type info>
// ============================================================

void .get_segm_num(/* see target signature */)
{
    // Tail-call to get_segm_num via GOT/IAT indirection
    return get_segm_num(/* forwarded args */);
}

