// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3350
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3350 jmp     cs:off_13190
//
// Resolved target: find_func_bounds
// Target address:  0x13510
// GOT/IAT slot:    0x13190
// Slot symbol:     off_13190
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

