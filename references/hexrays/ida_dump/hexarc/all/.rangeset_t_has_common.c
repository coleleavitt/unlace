// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4C0
// Name:            .rangeset_t_has_common
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4C0 jmp     cs:off_4B9A48
//
// Resolved target: rangeset_t_has_common
// Target address:  0x4BC448
// GOT/IAT slot:    0x4B9A48
// Slot symbol:     off_4B9A48
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common via GOT/IAT indirection
    return rangeset_t_has_common(/* forwarded args */);
}

