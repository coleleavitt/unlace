// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9770
// Name:            .del_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9770 jmp     cs:off_2C7A3A0
//
// Resolved target: del_idc_func
// Target address:  0x78E120
// GOT/IAT slot:    0x2C7A3A0
// Slot symbol:     off_2C7A3A0
// Target type:     __int64 __fastcall(char *s2)
// ============================================================

/* see target sig */ .del_idc_func(/* see target signature */)
{
    // Tail-call to del_idc_func via GOT/IAT indirection
    return del_idc_func(/* forwarded args */);
}

