// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B6F0
// Name:            .get_mappings_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B6F0 jmp     cs:get_mappings_qty_ptr
//
// Resolved target: get_mappings_qty
// Target address:  0x8D9A90
// GOT/IAT slot:    0x8A4818
// Slot symbol:     get_mappings_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_mappings_qty(/* see target signature */)
{
    // Tail-call to get_mappings_qty via GOT/IAT indirection
    return get_mappings_qty(/* forwarded args */);
}

