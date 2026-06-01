// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A71A0
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A71A0 jmp     cs:off_2C790B8
//
// Resolved target: get_stock_tinfo
// Target address:  0x542A50
// GOT/IAT slot:    0x2C790B8
// Slot symbol:     off_2C790B8
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

