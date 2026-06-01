// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112730
// Name:            .get_name_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112730 jmp     cs:get_name_value_ptr
//
// Resolved target: get_name_value
// Target address:  0x8D3F80
// GOT/IAT slot:    0x8A0038
// Slot symbol:     get_name_value_ptr
// Target type:     <no type info>
// ============================================================

void .get_name_value(/* see target signature */)
{
    // Tail-call to get_name_value via GOT/IAT indirection
    return get_name_value(/* forwarded args */);
}

