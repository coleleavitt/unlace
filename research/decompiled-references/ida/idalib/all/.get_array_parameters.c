// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB930
// Name:            .get_array_parameters
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB930 jmp     cs:off_2C7B480
//
// Resolved target: get_array_parameters
// Target address:  0x59F2E0
// GOT/IAT slot:    0x2C7B480
// Slot symbol:     off_2C7B480
// Target type:     <no type info>
// ============================================================

void .get_array_parameters(/* see target signature */)
{
    // Tail-call to get_array_parameters via GOT/IAT indirection
    return get_array_parameters(/* forwarded args */);
}

