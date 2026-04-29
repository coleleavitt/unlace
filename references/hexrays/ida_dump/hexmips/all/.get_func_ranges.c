// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A380
// Name:            .get_func_ranges
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A380 jmp     cs:off_4CD1A8
//
// Resolved target: get_func_ranges
// Target address:  0x4CFB98
// GOT/IAT slot:    0x4CD1A8
// Slot symbol:     off_4CD1A8
// Target type:     <no type info>
// ============================================================

void .get_func_ranges(/* see target signature */)
{
    // Tail-call to get_func_ranges via GOT/IAT indirection
    return get_func_ranges(/* forwarded args */);
}

