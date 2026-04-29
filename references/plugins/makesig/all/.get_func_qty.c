// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34B0
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34B0 jmp     cs:off_20240
//
// Resolved target: get_func_qty
// Target address:  0x21B70
// GOT/IAT slot:    0x20240
// Slot symbol:     off_20240
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

