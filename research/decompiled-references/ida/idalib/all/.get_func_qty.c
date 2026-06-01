// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7250
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7250 jmp     cs:off_2C79110
//
// Resolved target: get_func_qty
// Target address:  0x5CAD50
// GOT/IAT slot:    0x2C79110
// Slot symbol:     off_2C79110
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

