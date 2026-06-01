// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116EA0
// Name:            .get_func_ranges
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116EA0 jmp     cs:get_func_ranges_ptr
//
// Resolved target: get_func_ranges
// Target address:  0x8D6CF0
// GOT/IAT slot:    0x8A23F0
// Slot symbol:     get_func_ranges_ptr
// Target type:     <no type info>
// ============================================================

void .get_func_ranges(/* see target signature */)
{
    // Tail-call to get_func_ranges via GOT/IAT indirection
    return get_func_ranges(/* forwarded args */);
}

