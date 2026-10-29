// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD170
// Name:            .get_next_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD170 jmp     cs:off_2C7C0A0
//
// Resolved target: get_next_func
// Target address:  0x5CAB60
// GOT/IAT slot:    0x2C7C0A0
// Slot symbol:     off_2C7C0A0
// Target type:     <no type info>
// ============================================================

void .get_next_func(/* see target signature */)
{
    // Tail-call to get_next_func via GOT/IAT indirection
    return get_next_func(/* forwarded args */);
}

