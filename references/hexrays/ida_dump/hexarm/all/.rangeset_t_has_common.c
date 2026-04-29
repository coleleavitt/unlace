// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E510
// Name:            .rangeset_t_has_common
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E510 jmp     cs:off_4E9A70
//
// Resolved target: rangeset_t_has_common
// Target address:  0x4EC490
// GOT/IAT slot:    0x4E9A70
// Slot symbol:     off_4E9A70
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common via GOT/IAT indirection
    return rangeset_t_has_common(/* forwarded args */);
}

