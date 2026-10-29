// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119B30
// Name:            .set_array_parameters
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119B30 jmp     cs:set_array_parameters_ptr
//
// Resolved target: set_array_parameters
// Target address:  0x8D8908
// GOT/IAT slot:    0x8A3A38
// Slot symbol:     set_array_parameters_ptr
// Target type:     <no type info>
// ============================================================

void .set_array_parameters(/* see target signature */)
{
    // Tail-call to set_array_parameters via GOT/IAT indirection
    return set_array_parameters(/* forwarded args */);
}

