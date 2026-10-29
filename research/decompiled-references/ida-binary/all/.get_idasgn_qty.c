// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117300
// Name:            .get_idasgn_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117300 jmp     cs:get_idasgn_qty_ptr
//
// Resolved target: get_idasgn_qty
// Target address:  0x8D6FD8
// GOT/IAT slot:    0x8A2620
// Slot symbol:     get_idasgn_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_idasgn_qty(/* see target signature */)
{
    // Tail-call to get_idasgn_qty via GOT/IAT indirection
    return get_idasgn_qty(/* forwarded args */);
}

