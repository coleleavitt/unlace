// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91E0
// Name:            .rangeset_t_next_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91E0 jmp     cs:off_890D8
//
// Resolved target: rangeset_t_next_range
// Target address:  0x8C3D8
// GOT/IAT slot:    0x890D8
// Slot symbol:     off_890D8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_next_range(/* see target signature */)
{
    // Tail-call to rangeset_t_next_range via GOT/IAT indirection
    return rangeset_t_next_range(/* forwarded args */);
}

