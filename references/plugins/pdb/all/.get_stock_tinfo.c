// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D590
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D590 jmp     cs:off_B32B0
//
// Resolved target: get_stock_tinfo
// Target address:  0xB3A50
// GOT/IAT slot:    0xB32B0
// Slot symbol:     off_B32B0
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

