// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A77F0
// Name:            .rangeset_t_has_common
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A77F0 jmp     cs:off_2C793E0
//
// Resolved target: rangeset_t_has_common
// Target address:  0x8474A0
// GOT/IAT slot:    0x2C793E0
// Slot symbol:     off_2C793E0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common via GOT/IAT indirection
    return rangeset_t_has_common(/* forwarded args */);
}

