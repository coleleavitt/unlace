// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFD0
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFD0 jmp     cs:off_4DAFD0
//
// Resolved target: get_flags_by_size
// Target address:  0x4DDA00
// GOT/IAT slot:    0x4DAFD0
// Slot symbol:     off_4DAFD0
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

