// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA680
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA680 jmp     cs:off_CA328
//
// Resolved target: find_func_bounds
// Target address:  0xD0C60
// GOT/IAT slot:    0xCA328
// Slot symbol:     off_CA328
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

