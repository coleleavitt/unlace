// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9ED0
// Name:            .range_t_print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9ED0 jmp     cs:off_2C7A750
//
// Resolved target: range_t_print
// Target address:  0x849430
// GOT/IAT slot:    0x2C7A750
// Slot symbol:     off_2C7A750
// Target type:     __int64 __fastcall(int, int, int, int, int, int, __int64, int, int, void *, __int64, int, __int64)
// ============================================================

/* see target sig */ .range_t_print(/* see target signature */)
{
    // Tail-call to range_t_print via GOT/IAT indirection
    return range_t_print(/* forwarded args */);
}

