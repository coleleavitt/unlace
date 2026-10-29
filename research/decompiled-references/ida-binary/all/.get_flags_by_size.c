// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1111F0
// Name:            .get_flags_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1111F0 jmp     cs:get_flags_by_size_ptr
//
// Resolved target: get_flags_by_size
// Target address:  0x8D31A0
// GOT/IAT slot:    0x89F598
// Slot symbol:     get_flags_by_size_ptr
// Target type:     <no type info>
// ============================================================

void .get_flags_by_size(/* see target signature */)
{
    // Tail-call to get_flags_by_size via GOT/IAT indirection
    return get_flags_by_size(/* forwarded args */);
}

