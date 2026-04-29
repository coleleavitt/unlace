// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64D0
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64D0 jmp     cs:off_2F250
//
// Resolved target: get_stock_tinfo
// Target address:  0x2F8C0
// GOT/IAT slot:    0x2F250
// Slot symbol:     off_2F250
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

