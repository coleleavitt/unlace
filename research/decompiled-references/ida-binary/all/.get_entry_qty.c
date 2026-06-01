// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119510
// Name:            .get_entry_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119510 jmp     cs:get_entry_qty_ptr
//
// Resolved target: get_entry_qty
// Target address:  0x8D8508
// GOT/IAT slot:    0x8A3728
// Slot symbol:     get_entry_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_entry_qty(/* see target signature */)
{
    // Tail-call to get_entry_qty via GOT/IAT indirection
    return get_entry_qty(/* forwarded args */);
}

