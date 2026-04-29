// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196B0
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196B0 jmp     cs:off_75340
//
// Resolved target: find_func_bounds
// Target address:  0x75B90
// GOT/IAT slot:    0x75340
// Slot symbol:     off_75340
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

