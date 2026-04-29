// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B390
// Name:            .get_func_ranges
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B390 jmp     cs:off_4ED1B0
//
// Resolved target: get_func_ranges
// Target address:  0x4F14A8
// GOT/IAT slot:    0x4ED1B0
// Slot symbol:     off_4ED1B0
// Target type:     <no type info>
// ============================================================

void .get_func_ranges(/* see target signature */)
{
    // Tail-call to get_func_ranges via GOT/IAT indirection
    return get_func_ranges(/* forwarded args */);
}

