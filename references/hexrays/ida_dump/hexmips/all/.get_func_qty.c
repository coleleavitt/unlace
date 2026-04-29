// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9B0
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9B0 jmp     cs:off_4CDCC0
//
// Resolved target: get_func_qty
// Target address:  0x4D0700
// GOT/IAT slot:    0x4CDCC0
// Slot symbol:     off_4CDCC0
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

