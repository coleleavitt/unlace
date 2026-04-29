// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D5A0
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D5A0 jmp     cs:off_B32B8
//
// Resolved target: find_func_bounds
// Target address:  0xB3A58
// GOT/IAT slot:    0xB32B8
// Slot symbol:     off_B32B8
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

