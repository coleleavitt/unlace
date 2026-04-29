// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A040
// Name:            .rangeset_t_contains
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A040 jmp     cs:off_4B9808
//
// Resolved target: rangeset_t_contains
// Target address:  0x4BC208
// GOT/IAT slot:    0x4B9808
// Slot symbol:     off_4B9808
// Target type:     <no type info>
// ============================================================

void .rangeset_t_contains(/* see target signature */)
{
    // Tail-call to rangeset_t_contains via GOT/IAT indirection
    return rangeset_t_contains(/* forwarded args */);
}

