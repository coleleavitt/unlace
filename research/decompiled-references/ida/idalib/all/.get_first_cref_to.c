// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC750
// Name:            .get_first_cref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC750 jmp     cs:off_2C7BB90
//
// Resolved target: get_first_cref_to
// Target address:  0x3E3310
// GOT/IAT slot:    0x2C7BB90
// Slot symbol:     off_2C7BB90
// Target type:     <no type info>
// ============================================================

void .get_first_cref_to(/* see target signature */)
{
    // Tail-call to get_first_cref_to via GOT/IAT indirection
    return get_first_cref_to(/* forwarded args */);
}

