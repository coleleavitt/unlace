// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A060
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A060 jmp     cs:off_4B9818
//
// Resolved target: get_stock_tinfo
// Target address:  0x4BC218
// GOT/IAT slot:    0x4B9818
// Slot symbol:     off_4B9818
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

