// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CAA0
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CAA0 jmp     cs:off_4EDD38
//
// Resolved target: get_func_qty
// Target address:  0x4F2078
// GOT/IAT slot:    0x4EDD38
// Slot symbol:     off_4EDD38
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

