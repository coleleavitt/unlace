// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B2C0
// Name:            .get_selector_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B2C0 jmp     cs:get_selector_qty_ptr
//
// Resolved target: get_selector_qty
// Target address:  0x8D97D0
// GOT/IAT slot:    0x8A4600
// Slot symbol:     get_selector_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_selector_qty(/* see target signature */)
{
    // Tail-call to get_selector_qty via GOT/IAT indirection
    return get_selector_qty(/* forwarded args */);
}

