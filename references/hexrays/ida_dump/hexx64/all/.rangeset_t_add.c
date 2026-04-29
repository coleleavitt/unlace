// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF40
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF40 jmp     cs:off_4ED788
//
// Resolved target: rangeset_t_add
// Target address:  0x4F1A98
// GOT/IAT slot:    0x4ED788
// Slot symbol:     off_4ED788
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

