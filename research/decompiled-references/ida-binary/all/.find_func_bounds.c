// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112DA0
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112DA0 jmp     cs:find_func_bounds_ptr
//
// Resolved target: find_func_bounds
// Target address:  0x8D4388
// GOT/IAT slot:    0x8A0370
// Slot symbol:     find_func_bounds_ptr
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

