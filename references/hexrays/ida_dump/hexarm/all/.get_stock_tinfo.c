// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E090
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E090 jmp     cs:off_4E9830
//
// Resolved target: get_stock_tinfo
// Target address:  0x4EC250
// GOT/IAT slot:    0x4E9830
// Slot symbol:     off_4E9830
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

