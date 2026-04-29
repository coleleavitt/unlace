// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFE0
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFE0 jmp     cs:off_4C0FD8
//
// Resolved target: get_flags_by_size
// Target address:  0x4C4000
// GOT/IAT slot:    0x4C0FD8
// Slot symbol:     off_4C0FD8
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

