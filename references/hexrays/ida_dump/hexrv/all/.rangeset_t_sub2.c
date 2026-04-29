// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C190
// Name:            .rangeset_t_sub2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C190 jmp     cs:off_4C00B0
//
// Resolved target: rangeset_t_sub2
// Target address:  0x4C35E0
// GOT/IAT slot:    0x4C00B0
// Slot symbol:     off_4C00B0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub2(/* see target signature */)
{
    // Tail-call to rangeset_t_sub2 via GOT/IAT indirection
    return rangeset_t_sub2(/* forwarded args */);
}

