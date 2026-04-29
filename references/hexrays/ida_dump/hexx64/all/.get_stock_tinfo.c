// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0F0
// Name:            .get_stock_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0F0 jmp     cs:off_4ED860
//
// Resolved target: get_stock_tinfo
// Target address:  0x4F1B78
// GOT/IAT slot:    0x4ED860
// Slot symbol:     off_4ED860
// Target type:     <no type info>
// ============================================================

void .get_stock_tinfo(/* see target signature */)
{
    // Tail-call to get_stock_tinfo via GOT/IAT indirection
    return get_stock_tinfo(/* forwarded args */);
}

