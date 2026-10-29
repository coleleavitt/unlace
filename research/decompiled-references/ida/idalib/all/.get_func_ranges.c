// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB10
// Name:            .get_func_ranges
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB10 jmp     cs:off_2C7AD70
//
// Resolved target: get_func_ranges
// Target address:  0x5C95B0
// GOT/IAT slot:    0x2C7AD70
// Slot symbol:     off_2C7AD70
// Target type:     <no type info>
// ============================================================

void .get_func_ranges(/* see target signature */)
{
    // Tail-call to get_func_ranges via GOT/IAT indirection
    return get_func_ranges(/* forwarded args */);
}

