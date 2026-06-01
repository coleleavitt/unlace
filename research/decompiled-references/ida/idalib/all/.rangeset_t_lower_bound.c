// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7090
// Name:            .rangeset_t_lower_bound
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7090 jmp     cs:off_2C79030
//
// Resolved target: rangeset_t_lower_bound
// Target address:  0x8489D0
// GOT/IAT slot:    0x2C79030
// Slot symbol:     off_2C79030
// Target type:     <no type info>
// ============================================================

void .rangeset_t_lower_bound(/* see target signature */)
{
    // Tail-call to rangeset_t_lower_bound via GOT/IAT indirection
    return rangeset_t_lower_bound(/* forwarded args */);
}

