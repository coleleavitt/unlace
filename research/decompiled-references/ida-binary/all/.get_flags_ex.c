// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E80
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E80 jmp     cs:get_flags_ex_ptr
//
// Resolved target: get_flags_ex
// Target address:  0x8D4E90
// GOT/IAT slot:    0x8A0BE0
// Slot symbol:     get_flags_ex_ptr
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

