// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A980
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A980 jmp     cs:off_4B9CA8
//
// Resolved target: get_func_qty
// Target address:  0x4BC6C8
// GOT/IAT slot:    0x4B9CA8
// Slot symbol:     off_4B9CA8
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

