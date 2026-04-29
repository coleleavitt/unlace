// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D120
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D120 jmp     cs:off_4EE078
//
// Resolved target: get_flags_by_size
// Target address:  0x4F23C8
// GOT/IAT slot:    0x4EE078
// Slot symbol:     off_4EE078
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

