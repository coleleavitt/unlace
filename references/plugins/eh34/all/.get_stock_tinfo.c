// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63D0
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63D0 jmp     cs:off_8D1D0
//
// Resolved target: get_stock_tinfo
// Target address:  0x8D768
// GOT/IAT slot:    0x8D1D0
// Slot symbol:     off_8D1D0
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

