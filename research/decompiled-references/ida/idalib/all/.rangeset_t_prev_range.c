// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A87F0
// Name:            .rangeset_t_prev_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A87F0 jmp     cs:off_2C79BE0
//
// Resolved target: rangeset_t_prev_range
// Target address:  0x848C90
// GOT/IAT slot:    0x2C79BE0
// Slot symbol:     off_2C79BE0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_prev_range(/* see target signature */)
{
    // Tail-call to rangeset_t_prev_range via GOT/IAT indirection
    return rangeset_t_prev_range(/* forwarded args */);
}

