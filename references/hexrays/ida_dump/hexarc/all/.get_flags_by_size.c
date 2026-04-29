// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFB0
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFB0 jmp     cs:off_4B9FC0
//
// Resolved target: get_flags_by_size
// Target address:  0x4BC9F0
// GOT/IAT slot:    0x4B9FC0
// Slot symbol:     off_4B9FC0
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

