// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0D0
// Name:            .rangeset_t_contains
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0D0 jmp     cs:off_4ED850
//
// Resolved target: rangeset_t_contains
// Target address:  0x4F1B68
// GOT/IAT slot:    0x4ED850
// Slot symbol:     off_4ED850
// Target type:     <no type info>
// ============================================================

void .rangeset_t_contains(/* see target signature */)
{
    // Tail-call to rangeset_t_contains via GOT/IAT indirection
    return rangeset_t_contains(/* forwarded args */);
}

