// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DEF0
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DEF0 jmp     cs:off_4E9760
//
// Resolved target: rangeset_t_add
// Target address:  0x4EC178
// GOT/IAT slot:    0x4E9760
// Slot symbol:     off_4E9760
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

