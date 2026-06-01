// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC680
// Name:            .set_array_parameters
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC680 jmp     cs:off_2C7BB28
//
// Resolved target: set_array_parameters
// Target address:  0x59F390
// GOT/IAT slot:    0x2C7BB28
// Slot symbol:     off_2C7BB28
// Target type:     <no type info>
// ============================================================

void .set_array_parameters(/* see target signature */)
{
    // Tail-call to set_array_parameters via GOT/IAT indirection
    return set_array_parameters(/* forwarded args */);
}

