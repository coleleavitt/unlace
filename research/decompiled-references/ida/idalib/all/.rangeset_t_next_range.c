// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD7C0
// Name:            .rangeset_t_next_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD7C0 jmp     cs:off_2C7C3C8
//
// Resolved target: rangeset_t_next_range
// Target address:  0x848C10
// GOT/IAT slot:    0x2C7C3C8
// Slot symbol:     off_2C7C3C8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_next_range(/* see target signature */)
{
    // Tail-call to rangeset_t_next_range via GOT/IAT indirection
    return rangeset_t_next_range(/* forwarded args */);
}

