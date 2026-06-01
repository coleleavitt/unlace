// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111400
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111400 jmp     cs:get_func_qty_ptr
//
// Resolved target: get_func_qty
// Target address:  0x8D3310
// GOT/IAT slot:    0x89F6A0
// Slot symbol:     get_func_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

