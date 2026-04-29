// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E9E0
// Name:            .get_func_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E9E0 jmp     cs:off_4E9CD8
//
// Resolved target: get_func_qty
// Target address:  0x4EC718
// GOT/IAT slot:    0x4E9CD8
// Slot symbol:     off_4E9CD8
// Target type:     <no type info>
// ============================================================

void .get_func_qty(/* see target signature */)
{
    // Tail-call to get_func_qty via GOT/IAT indirection
    return get_func_qty(/* forwarded args */);
}

