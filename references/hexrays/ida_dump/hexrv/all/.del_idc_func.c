// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A160
// Name:            .del_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A160 jmp     cs:off_4BF098
//
// Resolved target: del_idc_func
// Target address:  0x4C2560
// GOT/IAT slot:    0x4BF098
// Slot symbol:     off_4BF098
// Target type:     <no type info>
// ============================================================

void .del_idc_func(/* see target signature */)
{
    // Tail-call to del_idc_func via GOT/IAT indirection
    return del_idc_func(/* forwarded args */);
}

