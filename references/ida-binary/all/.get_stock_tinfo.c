// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1112D0
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1112D0 jmp     cs:get_stock_tinfo_ptr
//
// Resolved target: get_stock_tinfo
// Target address:  0x8D3230
// GOT/IAT slot:    0x89F608
// Slot symbol:     get_stock_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

