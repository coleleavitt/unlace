// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4D0
// Name:            .rangeset_t_has_common
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4D0 jmp     cs:off_4C0A50
//
// Resolved target: rangeset_t_has_common
// Target address:  0x4C3A48
// GOT/IAT slot:    0x4C0A50
// Slot symbol:     off_4C0A50
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common via GOT/IAT indirection
    return rangeset_t_has_common(/* forwarded args */);
}

