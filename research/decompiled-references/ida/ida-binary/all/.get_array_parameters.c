// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118500
// Name:            .get_array_parameters
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118500 jmp     cs:get_array_parameters_ptr
//
// Resolved target: get_array_parameters
// Target address:  0x8D7B28
// GOT/IAT slot:    0x8A2F20
// Slot symbol:     get_array_parameters_ptr
// Target type:     <no type info>
// ============================================================

void .get_array_parameters(/* see target signature */)
{
    // Tail-call to get_array_parameters via GOT/IAT indirection
    return get_array_parameters(/* forwarded args */);
}

