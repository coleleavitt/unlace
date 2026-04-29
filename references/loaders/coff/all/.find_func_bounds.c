// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43E0
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43E0 jmp     cs:off_231D8
//
// Resolved target: find_func_bounds
// Target address:  0x235F8
// GOT/IAT slot:    0x231D8
// Slot symbol:     off_231D8
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

