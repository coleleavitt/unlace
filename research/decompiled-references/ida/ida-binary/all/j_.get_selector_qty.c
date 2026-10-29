// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37D8D0
// Name:            j_.get_selector_qty
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37D8D0 jmp     _get_selector_qty
//
// Resolved target: .get_selector_qty
// Target address:  0x11B2C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.get_selector_qty(/* see target signature */)
{
    // Tail-call to .get_selector_qty via direct jump indirection
    return .get_selector_qty(/* forwarded args */);
}

