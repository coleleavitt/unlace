// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E50
// Name:            .rangeset_t_upper_bound
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E50 jmp     cs:off_2C79F10
//
// Resolved target: rangeset_t_upper_bound
// Target address:  0x848A20
// GOT/IAT slot:    0x2C79F10
// Slot symbol:     off_2C79F10
// Target type:     <no type info>
// ============================================================

void .rangeset_t_upper_bound(/* see target signature */)
{
    // Tail-call to rangeset_t_upper_bound via GOT/IAT indirection
    return rangeset_t_upper_bound(/* forwarded args */);
}

