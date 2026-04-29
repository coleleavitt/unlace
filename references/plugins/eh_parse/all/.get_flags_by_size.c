// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A00
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A00 jmp     cs:off_2F4E8
//
// Resolved target: get_flags_by_size
// Target address:  0x2FB78
// GOT/IAT slot:    0x2F4E8
// Slot symbol:     off_2F4E8
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

