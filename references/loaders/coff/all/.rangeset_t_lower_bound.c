// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4030
// Name:            .rangeset_t_lower_bound
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4030 jmp     cs:off_23000
//
// Resolved target: rangeset_t_lower_bound
// Target address:  0x23420
// GOT/IAT slot:    0x23000
// Slot symbol:     off_23000
// Target type:     <no type info>
// ============================================================

void .rangeset_t_lower_bound(/* see target signature */)
{
    // Tail-call to rangeset_t_lower_bound via GOT/IAT indirection
    return rangeset_t_lower_bound(/* forwarded args */);
}

