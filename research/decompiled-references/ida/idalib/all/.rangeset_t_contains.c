// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD30
// Name:            .rangeset_t_contains
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD30 jmp     cs:off_2C7AE80
//
// Resolved target: rangeset_t_contains
// Target address:  0x8475A0
// GOT/IAT slot:    0x2C7AE80
// Slot symbol:     off_2C7AE80
// Target type:     <no type info>
// ============================================================

void .rangeset_t_contains(/* see target signature */)
{
    // Tail-call to rangeset_t_contains via GOT/IAT indirection
    return rangeset_t_contains(/* forwarded args */);
}

