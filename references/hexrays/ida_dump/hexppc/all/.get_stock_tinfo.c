// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B070
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B070 jmp     cs:off_4DA820
//
// Resolved target: get_stock_tinfo
// Target address:  0x4DD220
// GOT/IAT slot:    0x4DA820
// Slot symbol:     off_4DA820
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

