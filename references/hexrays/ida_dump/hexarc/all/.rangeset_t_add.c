// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29ED0
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29ED0 jmp     cs:off_4B9750
//
// Resolved target: rangeset_t_add
// Target address:  0x4BC148
// GOT/IAT slot:    0x4B9750
// Slot symbol:     off_4B9750
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

