// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112360
// Name:            .get_sreg_ranges_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112360 jmp     cs:get_sreg_ranges_qty_ptr
//
// Resolved target: get_sreg_ranges_qty
// Target address:  0x8D3CF0
// GOT/IAT slot:    0x89FE50
// Slot symbol:     get_sreg_ranges_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_sreg_ranges_qty(/* see target signature */)
{
    // Tail-call to get_sreg_ranges_qty via GOT/IAT indirection
    return get_sreg_ranges_qty(/* forwarded args */);
}

