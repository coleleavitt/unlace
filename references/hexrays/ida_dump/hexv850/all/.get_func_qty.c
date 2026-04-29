// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9B0
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9B0 jmp     cs:off_4C0CC0
//
// Resolved target: get_func_qty
// Target address:  0x4C3CD8
// GOT/IAT slot:    0x4C0CC0
// Slot symbol:     off_4C0CC0
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

